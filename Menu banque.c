#include <stdio.h>

    int main() {
        int choix;
        float solde = 1000, montant;

        printf("1- Consulter solde\n");
        printf("2- Deposer\n");
        printf("3- Retirer\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            // Completer ici
            case 1:
            printf("solde %.2f",solde);
                break;
            case 2:
            printf("solde %.2f",solde+montant);
                break;
            case 3:
            if(montant > solde){
                printf("solde insuffisant");
            }
            else{
                printf("solde %.2f",solde-montant);
            }
                break;
            default:
            printf("choix invalide");
                break;
        }

        return 0;
    }