#include <stdio.h>

    int main() {
        int note;

        printf("Entrez la note (0-100) : ");
        scanf("%d", &note);

        switch (note / 10) { 
            // Si tu utilises switch(note), tu devras écrire 100 cases pour 0 → 100
            // Completer ici
            case 10:
                printf("A");
                break;
            case 9:
                printf("A");
                break;
            case 8:
                printf("B");
                break;
            case 7:
                printf("C");
                break;
            case 6:
                printf("D");
                break;
            default:
                printf("F");
                break;    
        }

        return 0;
    }