#include "boolean.h"
#include "pcolor.h"
#include "jam.h"
#include "point.h"
#include "matriks.h"
#include "mesinkar.h"
#include "mesinkata.c"
#include "queue.h"
#include "stackt.h"
#include "listlinier.h"
#include <stdio.h>
#include <stdlib.h>

#define NEWLINE printf("\n" );

void printMap(int N, int M){

}

int main(){

  printf("SELAMAT DATANG DI BATTLE OF OLYMPIA!\n");
  printf("Silahkan Pilih menu :\n" );
  printf("1. Start Game\n" );
  printf("2. Load Game\n" );
  printf("3. Exit\n" );

  int pilihanMenu;
  int lebarPeta;
  int panjangPeta;

  printf("Masukan pilihan : " );scanf("%d", &pilihanMenu);

  switch (pilihanMenu) {
    case 1:
      lebarPeta = 0;
      panjangPeta = 0;

      do {
        /* code */
        NEWLINE;
        NEWLINE;
        printf("Masukan Jumlah Ukuran Peta\n" );
        printf("(Peta Minimal berukuran 8x8)\n" );
        printf("Masukan Ukuran Peta : " );scanf("%d %d",&lebarPeta,&panjangPeta );
      } while(lebarPeta<8 || panjangPeta<8);

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
