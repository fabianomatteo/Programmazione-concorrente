#include <stdio.h>
#include <unistd.h>

int main(void){
	printf("Inserisci un comando tra v,r,g,q\n");
	char comando;
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
		return 0;
	}
	
	int pid = fork();
	if (pid==0){
		if (val==1){
			for (int i=0; i<30; i=i+1){
				printf("led verde acceso\n");
				usleep(300000);
                                printf("led verde spento\n");
                                usleep(300000);
			}
		}
		 if (val==2){
                        for (int i=0; i<10; i=i+1){
                                printf("led rosso acceso\n");
                                usleep(700000);
                                printf("led rosso spento\n");
                                usleep(700000);
                        }
                }
		 if (val==3){
                        for (int i=0; i<10; i=i+1){
                                printf("led giallo acceso\n");
                                usleep(1200000);
                                printf("led giallo spento\n");
                                usleep(1200000);
                        }
                }
	}
	else if(pid<0){
		printf("errore nella creazione del processo figlio");
	}
	return 0;
}
