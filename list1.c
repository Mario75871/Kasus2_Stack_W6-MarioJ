#include "list1.h"


// Inisialisasi List Kosong
void CreateList(List *L) {
    First(*L) = Nil;
}

// Cek apakah list kosong
boolean ListEmpty(List L) {
    return (First(L) == Nil);
}

// Alokasi Node Baru
address Alokasi(infotype X) {
    address P = (address)malloc(sizeof(ElmtList));
    if (P != Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

// Dealokasi Node
void DeAlokasi(address P) {
    free(P);
}

// Insert Elemen di Awal (Push)
void InsertFirst(List *L, address P) {
    Next(P) = First(*L);
    First(*L) = P;
}

// Insert Elemen di Akhir (Digunakan untuk Cetak Output)
void InsertLast(List *L, address P) {
    address Last;
    if (First(*L) == Nil) {
        First(*L) = P;
    } else {
        Last = First(*L);
        while (Next(Last) != Nil) {
            Last = Next(Last);
        }
        Next(Last) = P;
    }
}

// Delete Elemen Pertama (Pop)
void DelFirst(List *L, address *P) {
    *P = First(*L);
    First(*L) = Next(First(*L));
}

// Cetak List (Output Konversi)
void PrintInfo(List L) {
    address P = First(L);
    if (P == Nil) {
        printf("List Kosong\n");
    } else {
        while (P != Nil) {
            printf("%d", Info(P));
            P = Next(P);
        }
        printf("\n");
    }
}

