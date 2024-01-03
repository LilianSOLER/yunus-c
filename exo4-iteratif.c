#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <locale.h>


void devinette (){
    int n = rand() % 100 + 1; // n au hasard entre 1 et 100
    
    int valeur ;
    int nombredeTentative = 0 ;
    for(int i = 0 ; i < 7 ; i++){
    
        printf("Saisissez un nombre (entre 1 et 100) : ");
        scanf("%d", &valeur);
        
        if (valeur < 0 || valeur > 100){
            printf ("la valeur ne correpond pas\n") ;
            return ; 
        }

        if(valeur == n){
            printf("c est gagné\n") ;
            return ;
        }

        if(valeur < n){
            printf("c est plus\n") ;
        } else {
            printf("c est moins\n") ;
        }

        nombredeTentative++ ;
    }
    printf("c est perdu \n") ;
    return ;
}

void devinette2(){
    int n = rand() % 100 + 1; // n au hasard entre 1 et 100

    printf("On va jouer au devinette, je pense à un nombre entre 1 et 100\n") ;
    printf("Vous avez 7 tentatives pour trouver le nombre\n") ;

    int valeur, valeurIsCorrect = 0 ;
    int nombredeTentative = 0 ;

    while(nombredeTentative < 7){
        while (valeurIsCorrect == 0){
            printf("Saisissez un nombre (entre 1 et 100) : ");
            scanf("%d", &valeur);
            if (valeur < 0 || valeur > 100){
                printf ("la valeur ne correpond pas\n") ;
            } else {
                valeurIsCorrect = 1 ;
            }
        }
        valeurIsCorrect = 0 ;
        
        if(valeur == n){
            printf("c est gagné\n") ;
            return ;
        }

        if(valeur < n){
            printf("c est plus\n") ;
        } else {
            printf("c est moins \n") ;
        }

        nombredeTentative++ ;
    }

    printf("c est perdu ") ;
    return ;
}


int main (){
    int continuer = 1 ;
    while (continuer)
    {
        devinette2() ;
        printf("Voulez vous continuer ? (0 : non, 1 : oui) : ") ;
        scanf("%d", &continuer) ;
    }
    
}
