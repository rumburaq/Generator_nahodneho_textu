#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#define VELIKOST 200

int main()
{
    char pole[VELIKOST];
    int x = 0; // used for index in an array
    int y = 1; // -||-
    int lower; 
    int upper; 
    int count;
    int Ncislo; //random num
    char z;
    char c;
    char PRz; //pervious letter
    int ps; //num of word in the text
    int i;
    int j;
    
    
    srand(time(0)); //begin time (used for generating random num)
    printf("Enter the string:\n");
    scanf("%[^\n]s", pole);
    
    
    for (j = 0; pole[j] != '\0';j++){ //zjisti ps
        
        if (pole[j] == ' ' && pole[j+1] != ' ')
            ps++;    
    }

    printf("poct slov: %d\n", ps + 1);
    
    //gen Ncislo
    lower = 2, upper = ps, count = 1; //count vzdy na 1! 
    Ncislo = randoms(lower, upper, count); //generating random num
    
    printf("nahodne cislo: %d\n", Ncislo);
    
    ps = 0;
    for (j = 0; pole[j] != '\0';j++){
        
        if (pole[j] == ' ' && pole[j+1] != ' '){
            ps++;
        }
        if(ps == (Ncislo - 1)){
            //z = pole[j];
            j++;
            //printf("TOHLE SLOVO ");
            while(z != ' '){
            z = pole[j];
            ++j;
            putchar(z);
            }
        }
                
    }
    
    printf("Pocet slov: %d", ps + 1);
    /*
    lower = 2, upper = ps, count = 1; //count vzdy na 1! 
    Ncislo = randoms(lower, upper, count); //generating random num
    
    for(x = 0; x < VELIKOST;){ //zpocit pocet slov
        PRz = pole[x];
        z = pole[y];
        x++;
        y++;
        if(z == ' ' && PRz != ' '){ // mozna prohodit poradi podminek
            ++ps;
        }
        if(ps = (Ncislo - 1)){ //kdyz je pocet slov o 1 mensi ne Ncislo
            c = pole[x];
            putchar(c); //napis ho 
        }
    }
    */
}

int randoms(int lower, int upper,  
                             int count) 
{ 
    int i;
    int num;
    for (i = 0; i < count; i++) { 
         num = (rand() % 
           (upper - lower + 1)) + lower; 
        
    } 
    return num; 
} 
  

