#include <stdio.h>
#define PHI 3.14

int main() {
    double r, t, volume, luas, keliling;

    if (scanf("%lf", &r) == 1) {
        if (scanf("%lf", &t) != 1) {

        }
    }

    volume = PHI * r * r * t;
    luas = 2 * PHI * r * (r + t);
    keliling = 2 * PHI * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}