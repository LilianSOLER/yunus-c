#include <stdio.h>
#include <stdlib.h>

int calculMois(int mois, int annee){
    if(mois > 12 || mois < 1){
        printf("Le mois %d n'existe pas\n", mois) ;
        return -1 ;
    }

    if(mois == 2){
        // return annee % 4 == 0 ? 29 : 28 ; // ternary operator (condition ? valeur si vrai : valeur si faux)
        if(annee % 4 == 0)
            return 29 ;
        return 28 ;
    }

    if(mois < 8 && mois % 2 == 1 || mois >= 8 && mois % 2 == 0){
        printf("Il y a 31 jours dans le mois %d\n", mois) ;
        return 31 ;
    }

    if(mois < 8 && mois % 2 == 0 || mois >= 8 && mois % 2 == 1){
        printf("Il y a 30 jours dans le mois %d\n", mois) ;
        return 30 ;
    }
}

int calculMoisTernaire(int mois, int annee){
    return mois > 12 || mois < 1 ? -1 : mois == 2 ? annee % 4 == 0 ? 29 : 28 : mois < 8 && mois % 2 == 1 || mois >= 8 && mois % 2 == 0 ? 31 : 30 ;
}

void calculLendemain(int *jour, int *mois, int *annee){
    int jour_val = *jour, mois_val = *mois, annee_val = *annee ;
    int nb_jour_mois = calculMois(mois_val, annee_val) ;

    if(nb_jour_mois == -1){
        return ;
    }

    if(jour_val > nb_jour_mois || jour_val < 1){
        printf("Le jour %d n'existe pas dans le mois %d\n", jour_val, mois_val) ;
        return ;
    }

    if(jour_val == nb_jour_mois){
        *jour = 1 ;
        if(mois_val == 12){
            *mois = 1 ;
            *annee++ ;
        } else {
            *mois++ ;
        }
    } else {
        *jour++ ;
    }
}

int calcul_jour_entre_date(int jour_depart, int mois_depart, int annee_depart, int jour_arrivee, int mois_arrivee, int annee_arrivee){
    int jour_actuel = jour_depart, mois_actuel = mois_depart, annee_actuel = annee_depart ;

    printf("2") ;
    int nb_jour = 0 ;
    while(jour_actuel != jour_arrivee || mois_actuel != mois_arrivee || annee_actuel != annee_arrivee){
        nb_jour++;
        calculLendemain(&jour_actuel, &mois_actuel, &annee_actuel) ;
        printf("nb_jour : %d", nb_jour) ;

    }
        printf("4") ;
    return nb_jour;
}

void calculPrix(){
    // Recuperer la date de depart et la date d'arrivee et le prix de la nuitée
    int jour_depart = 0, mois_depart = 0, annee_depart = 0, jour_arrivee = 0, mois_arrivee = 0, annee_arrivee = 0, prix_nuitee = 0 ;
    printf("saisir date d'arrivee (jj/mm/aaaa) : \n") ;
    scanf("%d/%d/%d", &jour_arrivee, &mois_arrivee, &annee_arrivee) ;
    printf("Saisir date de sortie (jj/mm/aaaa) : \n") ;
    scanf("%d/%d/%d", &jour_depart, &mois_depart, &annee_depart) ;
    printf("Saisir prix de la nuitée (en €) : \n");
    scanf("%d", &prix_nuitee) ;


printf("1") ;


    // Calculer le nombre de jour entre les deux dates
    int nb_jour = calcul_jour_entre_date(jour_depart, mois_depart, annee_depart, jour_arrivee, mois_arrivee, annee_arrivee) ;

    // Calculer le prix total
    int prix_total = nb_jour * prix_nuitee ;

    // Afficher le prix total
    printf("Le prix total pour un séjour entre le %d/%d/%d et le %d/%d/%d (soit %d jours) est de %d euros\n", jour_depart, mois_depart, annee_depart, jour_arrivee, mois_arrivee, annee_arrivee, nb_jour, prix_total) ;
}

int main(){
    int continuer = 1 ;
    while(continuer == 1){
        calculPrix() ;
        printf("Voulez-vous continuer ? (1 pour oui, 0 pour non) : ") ;
        scanf("%d", &continuer) ;
    }
}
