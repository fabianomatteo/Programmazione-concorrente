/* Hello World: dal programma C al processo in esecuzione. */
#include <stdio.h>
#include <unistd.h>

int main(void) {
    const char *nome = "Matteo";
    const char *messaggio = "Hello World dell'esercizio b.";

    printf("Hello, World!\n");
    printf("Studente: %s\n", nome);
    printf("%s\n", messaggio);
    /* Il sistema operativo assegna un PID al processo che esegue il programma. */
    printf("PID del processo: %d\n", (int)getpid());

    return 0;
}
