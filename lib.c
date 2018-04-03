#include<stdio.h>
#include<string.h>
#include "lib.h"

int validaentradas(const char *argv[], int base1, int argc){
    int numero,total;
	if(argc!=4){
		printf("A quantidade de argumentos digitados estao incorretos\n");
		exit(1);
    }
	else{
		total = strlen(argv[1])-1;
		//printf("verificando total %d\n\n\n", total);

		for(int i=0;i<=total;i++){
			//printf("essa merda ");
			//printf("i de elementos %d\n", i);
			if((argv[1][i]>='A' && argv[1][i]<='Z') || (argv[1][i]>='a' && argv[1][i]<='z')){
				if(argv[1][i]>='A' && argv[1][i]<='Z'){
					numero = argv[1][i]-'0'-7;
					
				}else if (argv[1][i]>='a' && argv[1][i]<='z'){
					numero = argv[1][i]-'0'-39;
				}
				else{
					numero = argv[1][i]-'0';
				}
				//printf("entrada correspondente %d\n", entrada[i]);
				if (numero>=base1){
					printf("O número digitado nao corresponde a base informada\n");
					exit(1);
				}
				//printf("DDDDDDDDDDDDDDDDDDDD\n");
				
			}
		}
	}
	return 0;
}

void converttobase(const char *argv[], char *entrada[], int base1, int base2, int total){
	int i, cont=0, numero,  numerotemp=0, verif0=0, verif1=1;
	for(i=total-1;i>=0;i--){
		if(argv[1][i]>='A' && argv[1][i]<='Z'){
			numero = argv[1][i]-'0'-7;
		}else if (argv[1][i]>='a' && argv[1][i]<='z'){
			numero = argv[1][i]-'0'-39;
        }
		else{
            numero = argv[1][i]-'0';
		}
		
		verif0=numero*verif1+verif0;
        verif1=verif1*base1;
	
}
	while(verif0>0){
		//printf("N %d\n",verif0);
		numerotemp = verif0%base2;
		//printf("NT %d\n", numerotemp);
		numero = '0'+numerotemp;
		//printf("numero B %d\n", numero);
		if(numero > '9'){
			if(numero < '\37'){
				numero+=7;
			}else{
				numero+=39;
			}
		}
		//printf("cont %d\n", cont);
		entrada[cont] = numero;
			cont++;
			//printf("NT2 %d\n",numerotemp);
			verif0=verif0/base2;
			//printf("N2 %d\n",verif0);

	}
	printf("Numero na base %d", base2);
	printf(": ");
	for(i=cont-1;i>=0;i--)
    {
    printf("%c", entrada[i]);
    }
 	printf("\n");
}
