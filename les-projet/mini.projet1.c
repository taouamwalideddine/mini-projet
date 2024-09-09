#include <stdio.h>
#include <string.h>

char T1[100][100], T2[100][100];
float T3[100];
int T4[100];
int totaldelivre = 0;


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

        totaldelivre++;
    }



    void affichlivre(){
        if (totaldelivre == 0) {
        printf("Aucun livre en stock.\n");
    } else {
        printf("\nListe des livres disponibles :\n");
        for (int i = 0; i < totaldelivre; i++) {
            printf("Titre: %s\nAuteur: %s\nPrix: %.2f\nQuantite: %d\n\n",
                   T1[i], T2[i], T3[i], T4[i]);
        }
    }
    }



    void recherch(){
        char titreRecherche[100];
        printf("Entrez le titre du livre a rechercher: ");
        fgets(titreRecherche, sizeof(titreRecherche), stdin);
        titreRecherche[strcspn(titreRecherche, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreRecherche) == 0) {
                printf("Livre trouve!\nTitre: %s\nAuteur: %s\nPrix: %.2f\nQuantite: %d\n",
                   T1[i], T2[i], T3[i], T4[i]);
            return;
        }
    }
    printf("Livre non trouve.\n");
    }



    void miseajourdelivre(){
        char titreMiseAJour[100];
        printf("Entrez le titre du livre a mettre a jour: ");
        fgets(titreMiseAJour, sizeof(titreMiseAJour), stdin);
        titreMiseAJour[strcspn(titreMiseAJour, "\n")] = '\0';

        for (int i = 0; i < totaldelivre; i++) {
            if (strcmp(T1[i], titreMiseAJour) == 0) {
                printf("Entrez la nouvelle quantite: ");
                scanf("%d", &T4[i]);
                getchar();
                printf("Quantite mise a jour avec succes.\n");
                return;
        }
    }
    printf("Livre non trouve.\n");
    }



    void supplivre() {
    char titreSuppression[100];
    printf("Entrez le titre du livre a supprimer: ");
    fgets(titreSuppression, sizeof(titreSuppression), stdin);
    titreSuppression[strcspn(titreSuppression, "\n")] = '\0';

    for (int i = 0; i < totaldelivre; i++) {
        if (strcmp(T1[i], titreSuppression) == 0) {
            for (int j = i; j < totaldelivre - 1; j++) {
                strcpy(T1[j], T1[j + 1]);
                strcpy(T2[j], T2[j + 1]);
                T3[j] = T3[j + 1];
                T4[j] = T4[j + 1];
            }
            totaldelivre--;
            printf("Livre supprime avec succes.\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

    void Affichernombretotal(){
        printf("Nombre total de livres: %d\n", totaldelivre);
    }


int main() {
    int choice;

    while (1) {
        printf("\nSysteme de Gestion de Stock de Librairie\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
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
                affichlivre();
                break;
            case 3:
                recherch();
                break;
            case 4:
                miseajourdelivre();
                break;
            case 5:
                supplivre();
                break;
            case 6:
                Affichernombretotal();
                break;
            case 7:
                return 0;
            default:
                printf("Choix invalide veuillez reessayer.\n");
        }
    }

    return 0;
}