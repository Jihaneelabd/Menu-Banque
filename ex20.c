#include <stdio.h>

int main() {
    int score, bonus, total;

    printf("Score : ");
    scanf("%d", &score);

    // Calcul du bonus avec ternaire imbriqué
   bonus = (score>=1000)?500:(score>=700)?200:(score>=400)?100:0;

    // Calcul du score total
    total = score + bonus;

    printf("Score final : %d", total);

    return 0;
}
