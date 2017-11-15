#ifndef PLAYER_H
#define PLAYER_H

#include "listlinier.h"
#include "boolean.h"

typedef struct{
  int id;
  int gold;
  List listUnit;
  int income;
  int upkeep;
  int warna;
}PLAYER;

#define ID(P) (P).id
#define Gold(P) (P).gold
#define ListUnit(P) (P).listUnit
#define Income(P) (P).income
#define UpKeep(P) (P).upkeep
#define Warna(P) (P).warna

void CreatePlayer(PLAYER *P, int id, int gold, List listUnit, int income, int upkeep, int warna);

#endif
