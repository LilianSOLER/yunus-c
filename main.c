#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau){
    int somme=0 ;
    for (int i = 0; i < tailleTableau; i++) {
        somme += tableau[i] ;

    }
    return somme ;
}

double moyenneTableau(int tableau[], int tailleTableau){
    return sommeTableau(tableau, tailleTableau)/tailleTableau ;
}

void double_each_value(int tab[], int taille){
    for(int i = 0; i < taille; i++){
        tab[i] *= 2 ;
    }
}

void display_table(int tab[], int taille){
    printf("{");
    for(int i = 0; i < taille; i++){
        if(i == taille-1)
            printf(" %d ", tab[i]) ;
        else
            printf(" %d ,", tab[i]) ;
    }
    printf(" }");
    printf("\n") ;
}

int min_tableau(int tab[], int taille){
    int min = tab[0]; 
    for(int i=1; i<taille; i++){
        if(tab[i] < min)
            min = tab[i] ;
    }
    return min;
}

int max_tableau(int tab[], int taille){
    int max = tab[0];
    for(int i = 1; i < taille; i++){
        if(tab[i] > max)
            max = tab[i] ;
    }
    return max;
}

int *concatener_tableaux(int tab1[], int taille1, int tab2[], int taille2){
    int taille = taille1+taille2 ;
    int *tab = malloc((taille)*sizeof(int));
    for(int i = 0; i < taille1; i++){
        tab[i] = tab1[i] ;
    }
    display_table(tab, taille);
    for(int i = 0; i < taille2; i++){
        tab[taille1+i] = tab2[i] ;
    }
    display_table(tab, taille);
    return &tab;
}

int conversion_monetaire(int montant, char[] devise_src, char[] devise_dest){
    char[] devises[4] = {"euro", "dollar", "livre", "yen"};
    int taux[4] = {1, 1.18, 0.86, 129.29};
    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}

void display_first_n_square(int n){ // 1 4 9 16 25 36 49 64 81 100
  
}

void display_first_n_square_even(int n){ // 4 16 36 64 100
  
}

int display_divisors(int n){ // 1 3 4 12 - 12 - return number of divisors
  
}

int is_prime(int n){ // 1 si premier, 0 sinon
    return 0;
}

void display_n_star(int n){ // *****
  
}

void display_rectangle(int width, int height){ 
                                               // *****
                                               // *****
                                               // *****
                                               // *****
                                               // *****
  
}

void display_square(int side){
    
}

void display_triangle(int height){ // *
                                   // **
                                   // ***
                                   // ****
                                                                                                                                                                                                         // *****
  
}

void convert_binary_to_decimal(int binary){ // 1101 -> 13
  
}

void convert_decimal_to_binary(int decimal){ // 13 -> 1101
  
}

void convert_binary_to_hexadecimal(int binary){ // 1101 -> D
  
}

void convert_hexadecimal_to_binary(int hexadecimal){ // D -> 1101
  
}







int main(){
    /*
    int Tableau[5] = {1,4,5,9}; 
    int somme = sommeTableau(Tableau, 5);
    printf("La somme du tableau est : %d\n", somme) ; // 19
    printf("La moyenne du tableau est : %f\n", moyenneTableau(Tableau, 5)) ; // 3.8

    display_table(Tableau, 5); // { 1 ,4 ,5 ,9 ,0 }
    double_each_value(Tableau, 5); 
    display_table(Tableau, 5); // { 2 ,8 ,10 ,18 ,0 }

    int min = min_tableau(Tableau, 5);
    printf("Le minimum du tableau est : %d\n", min) ; // 0

    int max = max_tableau(Tableau, 5);
    printf("Le maximum du tableau est : %d\n", max) ; // 18
    */

    /*
    int tableau2[3] = {1,6,5};
    int tableau3[4] = {4,3,2,7};
    int *tab = concatener_tableaux(tableau2, 3, tableau3, 4);
    */

    int montant = 10 ;
    char devise_src[5] = "euro" ; // 5 car "euro" + '\0'
    char devise_dest[5] = "dollar" ;
    printf("Le montant %d %s vaut %d %s\n", montant, devise_src, conversion_monetaire(montant, devise_src, devise_dest), devise_dest) ; // "Le montant 10 euro vaut 11.8 dollar

    int montant2 = 10 ;
    char devise_src2[5] = "dollar" ;
    char devise_dest2[5] = "euro" ;
    printf("Le montant %d %s vaut %d %s\n", montant2, devise_src2, conversion_monetaire(montant2, devise_src2, devise_dest2), devise_dest2) ; // "Le montant 10 dollar vaut 8.47 euro
    
    display_first_n_square(10) ; // 1 4 9 16 25 36 49 64 81 100
    display_first_n_square_even(5) ; // 4 16 36 64 100
    display_divisors(12) ; // 1 3 4 12 - 12
    for(int i = 1; i < 20; i++){
        if(is_prime(i))
            printf("%d est premier\n", i) ;
    }

    display_n_star(5) ; // *****
    display_rectangle(5, 15) ; 
    display_square(5) ; 

    convert_binary_to_decimal(1101) ; // 13
    convert_decimal_to_binary(13) ; // 1101
    convert_binary_to_hexadecimal(1101) ; // D
    convert_hexadecimal_to_binary(D) ; // 1101

    return 0;
}
