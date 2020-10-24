#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
//#define VELIKOST 500

int randoms(int lower, int upper, int count);

int main()
{
    char pole[200];
    int x = 0; // used for index in an array //nebude potreba
    int y = 1; // -||- //nebude potreba
    int lower; 
    int upper; 
    int count;
    int Ncislo; //random num
    char z; 
    char c; //nebude potreba
    char PRz; //pervious letter  //nebude potreba
    int ps; //num of word in the text
    int i; //nebude potreba
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
        
        if (pole[j] == ' ' && pole[j+1] != ' '){ //zjisti ps
            ps++;
        }
        if(ps == (Ncislo - 1)){
            j++; //preskoci 1. mezeru
            while(z != ' '){  //dokud se znak nerovna mezera
            z = pole[j];
            ++j;
            putchar(z); //vypis ten znak na kterim jses
            }
            ps++;
        }
                
    }
    printf("\nPocet slov: %d", ps + 1);
}

int randoms(int lower, int upper, int count) 
{ 
    int i;
    int num;
    for (i = 0; i < count; i++) { 
         num = (rand() % 
           (upper - lower + 1)) + lower; 
        
    } 
    return num; 
}

//serazeno chronologicky jak jsem testoval
//vstup na 121 znaku = 19 slov (1. čl. 1. pargraf ústavy čr)
//pole = [2O0] - funguje jak ma
//pole = [220] - funguje ale 1. pocet je o 1 vetsi nez ten pravy a ten druhy (2. je spravne)
//pole = [230] -      -||-
//
//pole = [240] - pocet slov je -236604573 (nekdy je to kladné č.) takze Ncislo nema spravnou horni hranici
//takze se nevypise to spravny slovo ale u 2. for cyklu se slova spocitaji spravne ↓
//   //spocita spatne slova
//   //nastavy moc vysoko Ncislo
     //spravne pocita slova ale nevypise 58365156. slovo protoze tolik slov tam neni 
//
//pole = [235] -   -||- = nefunguje
//pole = [231], [232] - stjně jako [220] a [230]
//pole = [233] - nefunguje stejně jako [240] a [235]
//kdyz jsem vstup prodlouzil na 23 slov = 141 znaků tak porad [233] nefunguje
