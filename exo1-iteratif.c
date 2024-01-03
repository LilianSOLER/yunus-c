#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <locale.h>

void tableDeMultiplication(){
    int nombre;
    printf("Quel table voulez-vous revisez ?") ;
    scanf("%d", &nombre) ;

    int max;
    printf("Jusqu'à quel valeur ? ") ;
    scanf("%d", &max);

    printf("Revision de la table %d jusqu'à %d\n", nombre, max) ;

    for(int i = 1; i <= max; i++){
        printf("%d fois %d : %d\n", i, nombre, i*nombre);
    }

    printf("fin de la revision\n") ;
}

int main()
{
    setlocale (LC_ALL,"");
    while(1){
        tableDeMultiplication();
    }
}
