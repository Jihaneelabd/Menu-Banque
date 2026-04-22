#include <stdio.h>

    int main() {
        char touche;

        printf("Entrez une touche (Z Q S D) : ");
        scanf(" %c", &touche);

        switch (touche) {
            // Completer ici
            case 'Z':
                printf("Haut");
                break;
            case 'Q':
                printf("Gauche");
                break;
            case 'S':
                printf("Bas");
                break;
            case 'D':
                printf("Droite");
                break;
            default:
                printf("Touche invalide");
                break;
        }

        return 0;
    }