/* File : listlinier.h */
/* contoh ADT list berkait dengan representasi fisik pointer  */
/* Representasi address dengan pointer */
/* infotype adalah integer */

#ifndef LISTLINIER_H
#define LISTLINIER_H

#include "boolean.h"
#include "unit.h"
#include "point.h"
#include <stdlib.h>

#define Nil NULL

typedef UNIT infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist {
	infotype info;
	address next;
} ElmtList;
typedef struct {
	address First;
} List;

/* Definisi list : */
/* List kosong : First(L) = Nil */
/* Setiap elemen dengan address P dapat diacu Info(P), Next(P) */
/* Elemen terakhir list : jika addressnya Last, maka Next(Last)=Nil */
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) ((L).First)

void CreateList(List *L);

address Alokasi (infotype X);

void InsVFirst(List *L, infotype X);

void PrintList(List L);

#endif
