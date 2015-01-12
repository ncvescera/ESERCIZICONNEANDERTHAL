#include <stdio.h>
#include <stdlib.h>

int potenza(int a, int b){
  int r,i;
  //poniamo r (risultato) = 1 perchè se fosse 0 e andremo a moltiplicarlo per a il risultato sarebbe sempre 0
  r=1;
  //usiamo un for per moltiplicare la base al nostro risultato fin quando il contatore diventa maggiore dell'esponente
  for(i=0;i<b;i++){
    r*=a;
  }
  return r;
      
}

int divisioneINTERA(int a, int b){

    int risultato;
    
    risultato = a/b;
    
    return risultato;
    
}


float divisioneDECIMALE(float a, float b){
    //il risultato deve essere in float altrimenti non restituirà il valore giusto
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
    int  S, rpot , i, r, sottrazione, moltiplicazione, risultatoparteintera, diviINT;
    float  risultatopartedecimale, diviDEC, dd;
  
    printf ("Inserisci in primo valore a: \n");
    scanf ("%d", &a);
    
    printf ("Inserisci il secondo valore b: \n");
    scanf ("%d", &b);
    //puts è come printf soltanto che non ci si possono stampare valori di variabili ed è meno pesante come istruzione
        puts ("Premere 1 per fare la somma \n");
        puts ("Premere 2 per fare la sottrazione \n");
        puts ("Premere 3 per fare la moltiplicazione \n");
        puts ("Premere 4 per elevazione a potenza \n");
        puts ("Premere 5 per fare la divisione \n");
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
       
        
           
        case 3:
            moltiplicazione = molti(a,b);
            printf("il risultato della moltiplicazione e' : %d ", moltiplicazione);
            break;
        case 4:
           
            rpot = potenza(a,b); 
            printf("%d^%d=%d\n",a,b,rpot);
            break;
        
        case 5:
             //ho aggiunto queste istruzioni per poter dividere la parte decimale da quella intera
            diviINT = divisioneINTERA(a,b);
            diviDEC = divisioneDECIMALE(a,b);
            dd=diviINT-diviDEC;
            //ho moltiplicato dd, il nostro risultato, per -1 dato che veniva negativo
            dd*=-1;
            printf("il risultato della divisione parte intera: %d parte decimale: %5.4f ", diviINT, dd);
            //scrovere %5.4f vuol dire che dopo la virgola mette 4 0 
            //ad esempio se abbiamo il numero 6,78900000 lui scriverà 6,7890
            
            break;
            
        
            
        
        default:
            printf("non riconosciuto\n");
        break;
        
    }
    
    return (EXIT_SUCCESS);
}
