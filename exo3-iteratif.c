#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

void nombre_pairs(){
    int min, max;

    printf("Saisissez un nombre : ");
    scanf("%d", &min);

    printf("Saisissez un autre nombre : ");
    scanf("%d", &max);

    if(min > max){
        int tmp = min;
        min = max;
        max = tmp;
    }

    if(min % 2 == 1)
        min++ ; // min devient le prochain nombre pair

    for(int i = min; i <= max; i += 2){
        printf("%d\n", i) ; // affiche les nombres pairs entre min et max
    }

    printf("fin\n") ;

}


int main()
{
    setlocale (LC_ALL,"");

    while (17)
    {
        nombre_pairs();
    }
    
}
