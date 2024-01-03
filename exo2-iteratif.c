#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int factorisation(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i ;
    }
    return res;
}

int factorisation_rec(int n){
    if(n == 0 || n == 1)
        return 1 ;

    return n * factorisation_rec(n-1) ;
}


int main()
{
    setlocale (LC_ALL,"");

    int *tab = malloc(20*sizeof(int));
    for(int i = 0; i < 10; i++){ // remplissage du début du tableau par 0 à 9
        *(tab+i) = i ;
    }
    
    for(int i = 1; i < 11; i++){ // remplissage de la fin du tableau par 2^1 à 2^10
        tab[10+i] = pow(i, 2) ;
    }

    for(int i = 0; i < 20; i++){
        printf("!%d vaut %d\n", tab[i], factorisation(tab[i])) ;
    }
}
