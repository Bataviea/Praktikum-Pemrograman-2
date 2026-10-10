#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, alas, tinggi, keliling, luas;

    scanf("%lf %lf", &A, &B);

    C = B; 
    tinggi = A;
    alas = sqrt((C * C) - (tinggi * tinggi));
    keliling = alas + tinggi + C;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}