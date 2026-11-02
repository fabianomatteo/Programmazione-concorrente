#include <stdio.h>
#include <unistd.h>
int main(void) {
    int base=7, altezza=8, risultato;
	printf("base = %d\n",base);
	printf("altezza = %d\n",altezza);
    int pid = fork();
    if (pid==0){
        risultato=(base+altezza)*2;
        printf("perimetro = %d\n",risultato);
    }
    else if (pid>0) {
        risultato=base*altezza;
        printf("area = %d\n",risultato);
    }
    else
        printf("Errore nella creazione del processo figlio");
    return 0;
}
