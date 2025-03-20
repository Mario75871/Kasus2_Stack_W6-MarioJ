#include "konversi.h"
#include "tampilan.h"


// Konversi Desimal ke Biner menggunakan Linked List sebagai Stack
void konversiDesimalKeBiner(int desimal) {
    List stack;
    CreateList(&stack);

    if (desimal == 0) {
        tampilkanHasilKonversi(0);
        return;
    }

    while (desimal > 0) {
        address P = Alokasi(desimal % 2);
        if (P != Nil) {
            InsertFirst(&stack, P);
        }
        desimal /= 2;
    }

    printf("Hasil Konversi: ");
    PrintInfo(stack);
}

