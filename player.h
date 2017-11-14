#ifndef PLAYER_H
#define PLAYER_H

#include "boolean.h"
#include "listlinier.h"

typedef struct{
  int gold;
  List unit;

} PLAYER;

void CreatePlayer(PLAYER *P);

#endif
