#include<stdio.h>
#include<string.h>
#include "lib.h"

int main(int argc, const char *argv[]){
    char *entrada[36];// tempentrada;
    int base1,base2, total;
    total = strlen(argv[1]);
    entrada[36] = malloc(total* sizeof(char*));
    
    /*for(i=0;i<=total-1;i++){
        if(argv[1][i]>='A' && argv[1][i]<='Z'){
			tempentrada = argv[1][i]-'0'-7;
			entrada[i] = tempentrada;
		}else if (argv[1][i]>='a' && argv[1][i]<='z'){
			tempentrada = argv[1][i]-'0'-39;
            entrada[i] = tempentrada;
		}
		else{
            tempentrada = argv[1][i]-'0';
			entrada[i] = tempentrada;
		}
	}*/
    
    base1=atoi(argv[2]);
    base2=atoi(argv[3]);
    
    validaentradas(argv, base1, argc) ;

    converttobase(argv, entrada, base1, base2, total);

    return 0;
}