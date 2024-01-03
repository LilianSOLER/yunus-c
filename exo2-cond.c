#include <stdio.h>
#include <stdlib.h>

void espDeVie () {
    int res = 85 ;
    
    int isSmoker = -1 ; // 0 : false, 1 : true
    printf("Etes vous fumeur ? (0 : non, 1 : oui) : ") ;
    scanf("%d", &isSmoker) ;


    int bloodPressure = -1 ;
    printf("Quel est votre pression sanguine (en mm) ? : ") ;
    scanf("%d", &bloodPressure) ;

    int isBluetEater = -1 ; // 0 : false, 1 : true
    printf("Mangez vous plus de 2 kilos de bleuets par an ? (0 : non, 1 : oui) : ") ;
    scanf("%d", &isBluetEater) ;

    if(isSmoker == -1 || bloodPressure == -1 || isBluetEater == -1){
        printf("Erreur de saisie\n") ;
        return ;
    }

    if(isSmoker != 0 && isSmoker != 1){
        printf("Erreur de saisie pour le fumeur\n") ;
        return ;
    }

    if(isBluetEater != 0 && isBluetEater != 1){
        printf("Erreur de saisie pour le mangeur de bleuets\n") ;
        return ;
    }

    if(bloodPressure < 0 || bloodPressure > 1000){
        printf("Erreur de saisie pour la pression sanguine\n") ;
        return ;
    }

    if (isSmoker == 1) {
        res -= 10 ;
    }

    if (bloodPressure >= 140){
        int surplus = bloodPressure - 120 ;
        int nbTwenties = surplus / 20 ;
        res -= 2 * nbTwenties ;
    }

    if (isBluetEater == 1) {
        res += 2 ;
    }

    printf("Vous avez %d ans d'espérance de vie\n", res) ;
}



int main() {
    espDeVie() ;
    return 0 ;
}


