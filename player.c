#include "listlinier.h"
#include "player.h"
#include "boolean.h"

void CreatePlayer(PLAYER *P, int id, int gold, List listUnit, int income, int upkeep, int warna){
  ID(*P) = id;
  Gold(*P) = gold;
  ListUnit(*P) = listUnit;
  Income(*P) = income;
  UpKeep(*P) = upkeep;
  Warna(*P) = warna;
}
