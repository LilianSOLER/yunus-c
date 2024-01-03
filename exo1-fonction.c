void calculMois(){
    printf("Saisir un mois : ") ;
    int mois = 0 ; // TODO: demander à l'utilisateur de saisir un mois
    scanf("%d", &mois) ;

    if(mois > 12 || mois < 1){
        printf("Le mois %d n'existe pas\n", mois) ;
        return ;
    }

    if(mois == 2){
        printf("Il y a 29 jours les années bissextiles et 28 jours les autres années\n") ;
        return ;
    }

    if(mois < 8 && mois % 2 == 1 || mois >= 8 && mois % 2 == 0){
        printf("Il y a 31 jours dans le mois %d\n", mois) ;
        return ;
    }

    if(mois < 8 && mois % 2 == 0 || mois >= 8 && mois % 2 == 1){
        printf("Il y a 30 jours dans le mois %d\n", mois) ;
        return ;
    }
}

void CalculAnnee() {
if (int annee<1600 || annee>2018 ){
    printf("Date non valide") ;
}


void CalculJour(){

    
}
}