
#ifndef UNIT_H
#define UNIT_H

#include "boolean.h"
#include "point.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char unit_type;
    //K = King
    //A = Archer
    //S = Swordsman
	int health;
	int attack;
  int max_move_point;
  int move_point;
  int attack_type; //0 untuk meele, 1 untuk ranged
  POINT coordinate;
  int price;
} UNIT;

#define MaxHealth 100
#define MEELE 0
#define RANGED 1

#define UnitType(U) (U).unit_type
#define Health(U) (U).health
#define Attack(U) (U).attack
#define MaxMovePoint(U) (U).max_move_point
#define MovePoint(U) (U).move_point
#define AttackType(U) (U).attack_type
#define AbsisUnit(U) Absis((U).coordinate)
#define OrdinatUnit(U) Ordinat((U).coordinate)
#define Price(U) (U).price

void CreateUnit(UNIT *U,char type);

void setCoordinateUnit(UNIT *U,int absis, int ordinat);

void printUnit(UNIT U);

#endif
