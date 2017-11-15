#include "boolean.h"
#include "unit.h"
#include "listlinier.h"
#include "player.h"
#include <stdio.h>
#include <stdlib.h>

int pilihanMenu;
int lebarPeta;
int panjangPeta;

PLAYER pemainSatu;
PLAYER pemainDua;

#define NEWLINE printf("\n" );

int main(){
  UNIT unitKing;
  UNIT unitArcher;
  UNIT unitSword;
  CreateUnit(&unitKing,'K');
  CreateUnit(&unitArcher,'A');
  CreateUnit(&unitSword,'S');

  List listUnitSatu;
  List listUnitDua;

  CreateList(&listUnitSatu);
  CreateList(&listUnitDua);
  InsVFirst(&listUnitSatu, unitKing);
  InsVFirst(&listUnitDua, unitKing);

  //PrintList(listUnit);

  //printUnit(unitKing);
  //printUnit(unitArcher);
  //printUnit(unitSword);
  printf("SELAMAT DATANG DI BATTLE OF OLYMPIA!\n");
  printf("Silahkan Pilih menu :\n" );
  printf("1. Start Game\n" );
  printf("2. Load Game\n" );
  printf("3. Exit\n" );
  printf("Masukan pilihan : " );scanf("%d", &pilihanMenu);

  switch (pilihanMenu) {
    case 1:
      do {
        /* code */
        NEWLINE;
        NEWLINE;
        printf("Masukan Jumlah Ukuran Peta\n" );
        printf("(Peta Minimal berukuran 8x8)\n" );
        printf("Masukan Ukuran Peta : " );scanf("%d %d",&lebarPeta,&panjangPeta );
      } while(lebarPeta<8 || panjangPeta<8);

      NEWLINE;
      CreatePlayer(&pemainSatu,1,100,listUnitSatu,10,5,0);
      CreatePlayer(&pemainDua,2,100,listUnitDua,10,5,0);

      printf("GAME BEGIN!\n");
      break;
    case 2:
      break;
    case 3:
      NEWLINE;
      printf("Terimakasih telah memakai program kami\n" );
      break;
    default:
      printf("Menu Tidak Ditemukan\n" );
      break;
  }



  return 0;
}
