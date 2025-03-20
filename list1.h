#ifndef LIST1_H
#define LIST1_H

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"  // Pastikan boolean.h di-include sebelum digunakan

#define Nil NULL
#define Info(P) (P)->info
#define Next(P) (P)->next
#define First(L) ((L).First)

typedef int infotype;  // Tipe data yang digunakan dalam list

// Struktur Node untuk Linked List
typedef struct tElmtList *address;
typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

// Struktur List
typedef struct {
    address First;
} List;

/********** FUNGSI & PROSEDUR LIST **********/

/* Konstruktor */
void CreateList(List *L);

/* Predikat untuk memeriksa keadaan list */
boolean ListEmpty(List L);

/* Manajemen Memori */
address Alokasi(infotype X);
void DeAlokasi(address P);

/* Pencarian Elemen */
address Search(List L, infotype X);
boolean FSearch(List L, address P);
address SearchPrec(List L, infotype X);

/* Penambahan Elemen */
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);

/* Penghapusan Elemen */
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);

/* Operasi Berdasarkan Alamat */
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);
void DelFirst(List *L, address *P);
void DelP(List *L, infotype X);
void DelLast(List *L, address *P);

/* Operasi Pada Seluruh Elemen */
void PrintInfo(List L);
int NbElmt(List L);

/* Proses Terhadap List */
void DelAll(List *L);

#endif

