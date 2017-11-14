#ifndef listvillage_H
#define listvillage_H

#include "boolean.h"
#include "point.h"

#define Nil NULL

typedef POINT infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
	infotype info;
	address next;
} ElmtList;
  typedef struct {
	address First;
} List;
