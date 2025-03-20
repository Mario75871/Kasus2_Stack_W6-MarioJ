#include "konversi.h"
#include "tampilan.h"
#include <stdio.h>

int main() {
    int angka;

    tampilkanMenu();
    scanf("%d", &angka);

    konversiDesimalKeBiner(angka);

    return 0;
}

