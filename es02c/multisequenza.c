#include <stdio.h>
#include <unistd.h>

int main(void){
char comando;
do{
	printf("Inserisci un comando tra v,r,g,q\n");
        scanf(" %c", &comando);
        printf("\n\n");

        int val;
        if(comando=='q'){
                return 0;
        }
        else if(comando=='v'){
                val =1;
        }
        else if(comando=='r'){
                val =2;
        }
        else if(comando=='g'){
                val =3;
        }
        else{
                printf("comando non riconosciuto\n");
        }

        int pid = fork();
        if (pid==0){
                if (val==1){
                        for (int i=0; i<30; i=i+1){
                                printf("led verde acceso\n");
                                usleep(300000);
                        }
                }
                 if (val==2){
                        for (int i=0; i<10; i=i+1){
                                printf("led rosso acceso\n");
                                usleep(700000);
                        }
                }
                 if (val==3){
                        for (int i=0; i<10; i=i+1){
                                printf("led giallo acceso\n");
                                usleep(1200000);
                        }
                }
        }
        else if(pid<0){
                printf("errore nella creazione del processo figlio");
        }
}while(comando!='q');
        return 0;
}
