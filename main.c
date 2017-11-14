#include "boolean.h"
#include "pcolor.h"
#include "matriks.h"
#include <stdio.h>
#include <stdlib.h>

#define NEWLINE printf("\n" );


int i,j;
time_t t;
MATRIKS M1,M2;
char command[10];
int pilihanMenu;
int lebarPeta;
int panjangPeta;

void initialize(){
  srand((unsigned) time(&t));
  for (i=GetFirstIdxBrs(M1); i<=GetLastIdxBrs(M1); i++)
  {
    for (j=GetFirstIdxKol(M1); j<=GetLastIdxKol(M1); j++)
    {
      if ((j == GetLastIdxKol(M1)-1 && i == GetFirstIdxBrs(M1)) || (j == GetLastIdxKol(M1) && i == GetFirstIdxBrs(M1) + 1) ||
        (j == GetLastIdxKol(M1)-2 && i == GetFirstIdxBrs(M1)+1) || (j ==GetLastIdxKol(M1)-1 && i==GetFirstIdxBrs(M1)+2) ||
        (j == GetFirstIdxKol(M1) + 1 && i == GetLastIdxBrs(M1)) || (i == GetLastIdxBrs(M1)-1 && j == GetFirstIdxKol(M1) + 2)||
        (j == GetFirstIdxKol(M1) && i == GetLastIdxBrs(M1)-1) || (j==GetFirstIdxKol(M1) +1 && i == GetLastIdxBrs(M1) - 2)){
        Elmt(M1,i,j)='C';
      }else if ((j == GetFirstIdxKol(M1) +1 && i == GetLastIdxBrs(M1)-1) || (j== GetLastIdxKol(M1)-1 && i == GetFirstIdxBrs(M1)+1)){
        Elmt(M1,i,j)='T';
        Elmt(M2,i,j)='K';
      }else{
        Elmt(M1,i,j)=Kosong;
        Elmt(M2,i,j)=Kosong;
      }
    }
  }
     i = rand() % lebarPeta+1;
     j = rand() % panjangPeta+1;
    int y = 1;
    while(y<=3){
      if(!((j == GetLastIdxKol(M1)-1 && i == GetFirstIdxBrs(M1)) || (j == GetLastIdxKol(M1) && i == GetFirstIdxBrs(M1) + 1) ||
        (j == GetLastIdxKol(M1)-2 && i == GetFirstIdxBrs(M1)+1) || (j ==GetLastIdxKol(M1)-1 && i==GetFirstIdxBrs(M1)+2) ||
        (j == GetFirstIdxKol(M1) + 1 && i == GetLastIdxBrs(M1)) || (i == GetLastIdxBrs(M1)-1 && j == GetFirstIdxKol(M1) + 2)||
        (j == GetFirstIdxKol(M1) && i == GetLastIdxBrs(M1)-1) || (j==GetFirstIdxKol(M1) +1 && i == GetLastIdxBrs(M1) - 2)||
        (i==0 || j ==0)||(j == GetFirstIdxKol(M1) +1 && i == GetLastIdxBrs(M1)-1) || (j== GetLastIdxKol(M1)-1 && i == GetFirstIdxBrs(M1)+1))){
         Elmt(M1,i,j) = 'V';
         y++;
         }
         i = rand() % lebarPeta+1;
         j = rand() % panjangPeta+1;
    }
}

int main(){

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
    	MakeMATRIKS(lebarPeta,panjangPeta,&M1);
    	MakeMATRIKS(lebarPeta,panjangPeta,&M2);
    	initialize();
    	TulisMap(M1,M2);

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
