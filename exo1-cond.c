#include <stdio.h>
#include <stdlib.h>

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

    if(mois < 8){
        if(mois % 2 == 1){
            printf("Il y a 31 jours dans le mois %d\n", mois) ;
            return ;
        }

        printf("Il y a 30 jours dans le mois %d\n", mois) ;
        return ;
    } 

    if(mois % 2 == 0){
        printf("Il y a 31 jours dans le mois %d\n", mois) ;
        return ;
    }

    printf("Il y a 30 jours dans le mois %d\n", mois) ;
    return ;                          
}

void calculMois2(){
    printf("Saisir un mois : ") ;
    int mois = 0 ; // TODO: demander à l'utilisateur de saisir un mois
    scanf("%d", &mois) ;

    if(mois > 12 || mois < 1){
        printf("Le mois %d n'existe pas\n", mois) ;
        return ;
    }

    if(mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12){
        printf("Il y a 31 jours dans le mois %d\n", mois) ;
        return ;
    }

    if(mois == 2){
        printf("Il y a 29 jours les années bissextiles et 28 jours les autres années\n") ;
        return ;
    }

    if(mois == 4 || mois == 6 || mois == 9 || mois == 11){
        printf("Il y a 30 jours dans le mois %d\n", mois) ;
        return ;
    }
}

void calculMois3(){
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

int main(){
    while(1){
        calculMois() ;
        printf("\n") ;
    }

}