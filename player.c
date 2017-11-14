#include "boolean.h"
#include "player.h"
#include "unit.h"
#include "listlinier.h"


void CreatePlayer(PLAYER *P){
  *P.gold = 100;
  CreateEmpty(P.unit);
  UNIT u;
  UNIT y;
  UNIT z;
  CreateUnit(&u,'K');
  InsVFirst(P.unit, u);
  CreateUnit(&y,'A');
  InsVFirst(P.unit, y);
  CreateUnit(&z,'S');
  InsVFirst(P.unit, z);
}
