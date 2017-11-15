#include "boolean.h"
#include "point.h"
#include "unit.h"
#include <stdio.h>
#include <stdlib.h>

void CreateUnit(UNIT *U,char type){
  UnitType(*U) = type;
  Health(*U) = MaxHealth;

  switch (UnitType(*U)) {
    case 'K':
      Attack(*U) = 30;
      MaxMovePoint(*U) = 1;
      MovePoint(*U) = 1;
      AttackType(*U) = MEELE;
      Price(*U) = 0;
      break;
    case 'A':
      Attack(*U) = 10;
      MaxMovePoint(*U) = 2;
      MovePoint(*U) = 2;
      AttackType(*U) = RANGED;
      Price(*U) = 20;
      break;
    case 'S':
      Attack(*U) = 20;
      MaxMovePoint(*U) = 3;
      MovePoint(*U) = 3;
      AttackType(*U) = MEELE;
      Price(*U) = 30;
      break;
    default:
      break;
  }

  setCoordinateUnit(U,0,0);

}

void setCoordinateUnit(UNIT *U, int absis, int ordinat){
  AbsisUnit(*U) = absis;
  OrdinatUnit(*U) = ordinat;
}

void printUnit(UNIT U){
  printf("%c\n", UnitType(U));
  printf("%d\n", Health(U));
  printf("%d\n", Attack(U) );
  printf("%d\n", MaxMovePoint(U));
  printf("%d\n", MovePoint(U));
  printf("%d\n", AttackType(U));
  printf("%d\n", Attack(U));
  printf("%d\n", AbsisUnit(U));
  printf("%d\n", OrdinatUnit(U));
  printf("%d\n", Price(U));
}
