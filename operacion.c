#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"
#include <unistd.h>

puerta door;
volatile double v=0;

void *divi(void *arg) {
    cerrar_puerta(door);
    double z=25, y=350;
    sleep(2);
    v=z/y;
    abrir_puerta(door);
    return 0;
}

void *multi(void *arg) {
    cerrar_puerta(door);
    double x=1250;
    v=x*v;
    abrir_puerta(door);
    return 0;
}

int main(int argc, char *argv[]) {
    crear_puerta(door);
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, divi, NULL); 
    Pthread_create(&p2, NULL, multi, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    printf("V= : %f\n", v);
    destruir_puerta(door);
    return 0;
}
