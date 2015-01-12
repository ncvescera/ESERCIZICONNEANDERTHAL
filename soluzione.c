#include <stdio.h>
#include <stdlib.h>
void somma(t,p){
		int r;
		r=t+p;
		printf("Il risultato è: %d",r);
		printf("\n");
	}
void sott(t,p){
		int r;
		r=t-p;
		printf("Il risultato è: %d",r);
		printf("\n");
	}
void molt(t,p){
		int r;
		r=t*p;
		printf("Il risutato è: %d",r);
		printf("\n");
	}
void dive(t,p){
		float r;
		int rr;
		r=(float)t/p;
		rr=t%p;
		if(rr)
			printf("Il risultato è: %f",r);
		else
			printf("Il risultato è: %5.2f",r);
		
		printf("\n");
	}
void pot(t,p){
		int r,i;
		r=1;
		for(i=0;i<p;i++){
			r*=t;
			}
		printf("Il risultato è: %d",r);
		printf("\n");
	}
void bin(t,p){
	int N;
	printf("Scegli la grandezza del tuo numero: ");
	scanf("%d",&N);
	
	int array[N];
	int array2[N];
	int i;
	for(i=0;i<N;i++){
		array[i]=t%2;
		t=t/2;
		}
	for(i=0;i<N;i++){
		array2[i]=p%2;
		p=p/2;
		}
	printf("Il primo numero è:\n");
	for(i=N-1;i>=0;i--){
			printf("%d",array[i]);
		}
	printf("\n");
	printf("Il secondo numero è:\n");
	for(i=N-1;i>=0;i--){
			printf("%d",array2[i]);
		}
	printf("\n");
}
void ex(t,p){
		const int N=4;
		int i;
		int array[N];
                int cc[N];
		for(i=0;i<N;i++){
				array[i]=t%16;
				t=t/16;
			}
                for(i=0;i<N;i++){
                    cc[i]=p%16;
                    p=p/16;
                }
		printf("Il risultato è:\n");
		for(i=N-1;i>=0;i--){
			switch(array[i]){
			case 10:
				printf("A");
			break;
			case 11:
				printf("B");
			break;
			case 12:
				printf("C");
			break;
			case 13:
				printf("D");
			break;
			case 14:
				printf("E");
			break;
			case 15:
				printf("F");
			break;
			default: 
				printf("%d",array[i]);
			break;
		}
                        
		}
                printf("\n");
                printf("Il secondo risultato è:\n");
                for(i=N-1;i>=0;i--){
			switch(cc[i]){
			case 10:
				printf("A");
			break;
			case 11:
				printf("B");
			break;
			case 12:
				printf("C");
			break;
			case 13:
				printf("D");
			break;
			case 14:
				printf("E");
			break;
			case 15:
				printf("F");
			break;
			default: 
				printf("%d",cc[i]);
			break;
		}
		
		}
		printf("\n");
	}
void ier(t,p){
		int r;
		float rr;
		r=t/p;
		printf("La parte intera è: %d\n",r);
		rr=(float)t/p;
		rr=rr-r;
		printf("La parte decimale è: %f\n",rr);
	}
int main(){
		int a,b,c;
		
		printf("Inserisci il primo numero: ");
		scanf("%d",&a);
		
		printf("Inserisci il secondo numero: ");
		scanf("%d",&b);
		
		printf("========MENU========\n");
		printf("0 STOP\n");
		printf("1 SOMMA\n");
		printf("2 SOTTRAZIONE\n");
		printf("3 MOLTIPLICAZIONE\n");
		printf("4 DIVISIONE\n");
		printf("5 POTENZA\n");
		printf("6 BINARIO\n");
		printf("7 ESADECIMALE\n");
		printf("8 DIVISIONE INTERO & RESTO\n");
                printf("9 CAMBIA ENTRAMBI I NUMERI\n");
                printf("10 CAMBIA IL PRIMO NUMERO\n");
                printf("11 CAMBIA IL SECONOD NUMERO\n");
		printf("====================\n");
		
		do{
		printf("Comando: ");
		scanf("%d",&c);
		
		switch(c){
				case 0:
					printf("EXIT\n");
				break;
				case 1:
					somma(a,b);
				break;
				case 2:
					sott(a,b);
				break;
				case 3:
					molt(a,b);
				break;
				case 4:
					dive(a,b);
				break;
				case 5:
					pot(a,b);
				break;
				case 6:
					bin(a,b);
				break;
				case 7:
					ex(a,b);
				break;
				case 8:
					ier(a,b);
				break;
                                case 9:
                                    printf("Modifica il primo numero: ");
                                    scanf("%d",&a);
                                    printf("Modifica il seconod numero: ");
                                    scanf("%d",&b);
                                break;
                                case 10:
                                    printf("Modifica il primo numero: ");
                                    scanf("%d",&a);
                                break;
                                case 11:
                                    printf("Modifica il seconod numero: ");
                                    scanf("%d",&b);
                                break;
				default:
					printf("COMANDO ERRATO!\n");}
			
			}
			while(c!=0);
			return 0;
	}
