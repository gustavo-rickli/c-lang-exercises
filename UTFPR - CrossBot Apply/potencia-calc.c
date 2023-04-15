#include <stdio.h>

int pot(int base, int exp) {

    int res = 1;

    for (int i = 0; i < exp; i++) {
        res = res * pot;
    }

    return res;
}

int main() {

    int base, exp;

    scanf("%d %d", &base, &exp);
    printf("\n-> %d\n", pot(base, exp));

    return 0;
}