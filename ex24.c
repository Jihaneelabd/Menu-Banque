#include <stdio.h>

    int main() {
        int choix;

        printf("1-Pizza (30DH)\n");
        printf("2-Burger (25DH)\n");
        printf("3-Tacos (20DH)\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            // Completer ici
            case 1:
                printf("Pizza (20dh)");
                break;
           case 2:
                printf("Burger (25dh)");
                break;
           case 3:
                printf("Tacos (20dh)");
                break;     
           default:
                printf("Choix invalide");
                break;     

        }

        return 0;
    }