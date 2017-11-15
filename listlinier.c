#include "listlinier.h"
#include "boolean.h"
#include "unit.h"
#include "point.h"
#include <stdlib.h>

void CreateList(List *L){
	First(*L) = NULL;
}

void InsVFirst(List *L, infotype X){
	address p = Alokasi(X);
	if (p != Nil) {
		Next(p) = First(*L);
		First(*L) = p;
	}
}

address Alokasi (infotype X) {
address p = (address) malloc(sizeof(ElmtList));
if (p != Nil) {
	Info(p) = X;
	Next(p) = Nil;
}
return p;
}

void PrintList(List L){
	address P = First(L);

	while (P != NULL){
		UNIT U = Info(P);
		printUnit(U);
		P =Next(P);
	}
}
