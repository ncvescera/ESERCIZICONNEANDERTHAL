#include <stdio.h>
#include <stdlib.h>

int potenza(int base, int esponente){
  
  
      
}

int divisioneINTERA(int a, int b){
    
    int risultato;
    
    risultato = a/b;
    
    return risultato;
    
}


float divisioneDECIMALE(float a, float b){
    
    float risultato;
    
    risultato = a/b;
    
    return risultato;
    
}


int molti(int a, int b){
  int risultato;

risultato = a*b;

return risultato;
        
}

int somma(int a, int b){
    int risultato;
 
risultato = a+b;
   
return risultato;

}

float sott(int a, int b){
    int ris;
 
ris = a-b;
   
return ris;
    
}
  
    int main() {
    int a,b;
    int ris, S, base, risultatopotenza , esponente,  i, r, sottrazione, moltiplicazione, risultatoparteintera, diviINT;
    float  risultatopartedecimale, diviDEC, dd;
  
    printf ("inserisci in primo valore a: \n");
    scanf ("%d", &a);
    
    printf ("unserisci il secondo valore b: \n");
    scanf ("%d", &b);
    
        printf ("premere 1 per fare la somma \n");
        printf ("premere 2 per fare la sottrazione \n");
        printf ("premere 3 per fare la moltiplicazione \n");
        printf ("premere 4 per elevazione a potenza \n");
        printf ("premere 5 per fare la divisione \n");
        scanf ("%d", &S);
    
    switch(S){
       
        case 1:
            r = somma(a,b);
            printf("il risultato della somma e' : %d ", r);
            break;
            
        case 2:
            sottrazione = sott(a,b);
            printf("il risultato della sottrazione e' : %d ", sottrazione);
                    break;
       
        
            break;
        case 3:
            moltiplicazione = molti(a,b);
            printf("il risultato della moltiplicazione e' : %d ", moltiplicazione);
            break;
            
        case 5:
            diviINT = divisioneINTERA(a,b);
            diviDEC = divisioneDECIMALE(a,b);
            dd=diviINT-diviDEC;
            dd*=-1;
            printf("il risultato della divisione parte intera: %d parte decimale: %5.4f ", diviINT, dd);
            break;
           
            break;
            
         case 4:
           
            risultatopotenza = potenza(base,esponente); 
            printf("%d^%d=%d\n", a, b, risultatopotenza);
            break;
            
        
        default:
            printf("non riconosciuto\n");
        
        
    }
    system("pause");
    return (EXIT_SUCCESS);
}
