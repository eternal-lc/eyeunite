#ifndef EU_EYEUNITE_H
#define EU_EYEUNITE_H

#include <netdb.h>

#define EU_TOKENSTRLEN 7
#define EU_PORTSTRLEN 7
#define EU_PACKETLEN 70
#define EU_ADDRSTRLEN INET_ADDRSTRLEN
#define EU_HOSTURLLEN (3+1+2+EU_ADDRSTRLEN+1+EU_PORTSTRLEN)
#define MAX_DELAY 5

#define FILELOC "log.txt"
#define APP_ENGINE "http://eyeunite.appspot.com"

struct peer_info
{
  char pid[EU_TOKENSTRLEN];
  char addr[EU_ADDRSTRLEN];
  char port[EU_PORTSTRLEN];
  int peerbw;
};

struct data_pack
{
  uint64_t seqnum;
  char data[EU_PACKETLEN - sizeof (uint64_t)];
};

#endif
