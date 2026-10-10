#include <stdio.h>

int main() {
    char nama[50], nim[30], kelas[30], ttl[50], alamat[100], hobi[50], no_hp[30];

    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                   : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel         : ");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir  : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                 : ");
    fgets(hobi, sizeof(hobi), stdin);
    printf("No. HP                : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\n--- Output ---\n");
    printf("Nama                  : %s", nama);
    printf("NIM                   : %s", nim);
    printf("Kelas Paralel         : %s", kelas);
    printf("Tempat/Tanggal Lahir  : %s", ttl);
    printf("Alamat                : %s", alamat);
    printf("Hobby                 : %s", hobi);
    printf("No. HP                : %s", no_hp);

    return 0;
}