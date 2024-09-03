#include <stdio.h>
    int T1[] = {}, T2[]= {}, T3[]= {}, T4[]= {};
    void ajouterlivre(){
        printf("Entre le titre du livre: ");
        scanf("%[^\n]", &T1);
        while(getchar() != '\n');
        printf("Auteur de livre: ");
        scanf("%[^\n]", &T2);
        while(getchar() != '\n');
        printf("le prix de livre: ");
        scanf("%f", &T3);
        printf("la quntite de livre: ");
        scanf("%d", &T4);
    }

    void affichlivre(){

    }

    void recherch(){

    }

    void affichlivre(){

    }

    void affichlivre(){

    }

    void affichlivre(){

    }


int main() {
    int choice;

    while (1) {
        printf("\nSysteme de Gestion de Stock de Librairie\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre à jour la quantite d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("7. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                ajouterlivre();
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                return 0;
            default:
                printf("Choix invalide veuillez reessayer.\n");
        }
    }

    return 0;
}
