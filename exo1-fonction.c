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

void calculLendemain(){
    printf("Saisir une date (jj/mm/aaaa) : ") ;
    int jour = 0 ; // TODO: demander à l'utilisateur de saisir un jour
    int mois = 0 ; // TODO: demander à l'utilisateur de saisir un mois
    int annee = 0 ; // TODO: demander à l'utilisateur de saisir une année
    scanf("%d/%d/%d", &jour, &mois, &annee) ;

    int nb_jour_mois = calculMois(mois, annee) ;

    if(nb_jour_mois == -1){
        return ;
    }

    if(jour > nb_jour_mois || jour < 1){
        printf("Le jour %d n'existe pas dans le mois %d\n", jour, mois) ;
        return ;
    }

    if(jour == nb_jour_mois){
        jour = 1 ;
        if(mois == 12){
            mois = 1 ;
            annee++ ;
        } else {
            mois++ ;
        }
    } else {
        jour++ ;
    }

    printf("Le lendemain est le %d/%d/%d\n", jour, mois, annee) ;    
}

int main(){
    int continuer = 1 ;
    while(continuer == 1){
        calculLendemain() ;
        printf("Voulez-vous continuer ? (1 pour oui, 0 pour non) : ") ;
        scanf("%d", &continuer) ;
    }
}