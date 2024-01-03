
#include <stdio.h>
#include <stdlib.h>


void ex1(float distanceParcouru, int temps, double distanceRestant){
    double vitesseMoyenne = 0 ;
    double tempsRestant = 0 ;


    // TODO: convertir le temps en heure
    double tempsHours = ((double) temps) / ((double) 60) ; // temps en heure
    printf("temps en heure :%lf \n" , tempsHours) ;

    // TODO  : calculer la vitesse moyenne
    vitesseMoyenne = distanceParcouru / tempsHours ; // vitesse moyenne en km/h

    // TODO : calculer le temps restant
    tempsRestant = distanceRestant / vitesseMoyenne ;  // temps restant en heure

    // TODO : convertir le temps restant en minute
    double tempsRestantMin = tempsRestant * 60 ; // temps restant en minute



    // TODO : afficher les résultats
    printf("Disatnce parcourue (en km) : %f\n", distanceParcouru);
    printf("Temps mis (en min) : %d\n", temps);
    printf("Vous avez parcouru %f km en %d min\n", distanceParcouru, temps);
    printf("Vous avez roule a une vitesse moyenne de %f km/h\n", vitesseMoyenne);
    printf("En roulant à cette vitesse, pour faire les %f km restants, il vous faudra %f min\n", distanceRestant, tempsRestantMin);
}


int main(){
    ex1(184.8, 95, 157) ;
    printf("\n") ;
    ex1(210, 60, 90) ;
}

