#include <stdio.h>
#include <string.h>

typedef struct{
    char statut[50] ;
    char contenu [100];
} Tache;

Tache newtache;

void creer_tache(char tache[]){
    strcpy(newtache.contenu, tache);
    strcpy(newtache.statut, "en cours");

}

Tache tacheinfo(){
        return newtache;
}


void finir_tache(){
    strcpy(newtache.statut, "done");
}



int main() {
    Tache liste [] = {};

    char reponse;
    printf("Bienvenu dans votre TO DO list, que voulez vous faire ?");
    printf("+ (creer une nouvelle tache, c consulter vos taches, t consulter vos taches terminees, e consuleter vos taches en cours, f finir une tache.");
    scanf("%c", &reponse);
    if (reponse == '+'){
        char contenu[100];
        printf("veuillez entrer le contenu de votre tache\n");
        fgets(contenu, 100, stdin);
        creer_tache(contenu);
        Tache tache =tacheinfo();
        for (int i = 0; i < strlen(liste); ++i) {
            liste[i] = tache;
        }
    }
    else if (reponse == 'c'){
        for (int i = 0; i < strlen(liste); ++i) {
            printf("%s", liste[i].contenu);
        }
    }

    else if (reponse == 't'){
        for (int i = 0; i < strlen(liste); ++i) {
            if (liste[i].statut == "done"){
                printf("%s", liste[i].contenu);
            }
        }
    }

    else if (reponse == 'e'){
        for (int i = 0; i < strlen(liste); ++i) {
            if (liste[i].statut == "en cours"){
                printf("%s", liste[i].contenu);
            }
        }
    }

    else if (reponse == 'f'){
        int i;
        printf("donnez l'indice de la tache à finir");
        scanf("%d", i);
        finir_tache();

    }
    else {
        printf("entrez uen commande valise");
        scanf("%c", reponse);
    }


    return 0;
}