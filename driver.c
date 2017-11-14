#include "matriks.h"
#include <stdio.h>
#include <stdlib.h>

int i,j;
time_t t;
MATRIKS M1,M2;
char command[10];
int NefBrs,NefKol;

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
		 i = rand() % NefBrs+1;
		 j = rand() % NefKol+1;
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
				 i = rand() % NefBrs+1;
				 j = rand() % NefKol+1;
		}
}

swap(char *x, char *y){
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
	
int main(){
	printf("Masukkan ukuran peta : "); scanf("%d %d",&NefBrs,&NefKol);
	MakeMATRIKS(NefBrs,NefKol,&M1);
	MakeMATRIKS(NefBrs,NefKol,&M2);
	initialize();	
	TulisMap(M1,M2);
	
}