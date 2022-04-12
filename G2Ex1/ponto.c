#include <stdio.h>
#include "ponto.h"
//--------------------------Exercicio 1---------------------
//alinea b)
void printPonto(ponto2D a){
    printf("Ponto: (%d,%d)\n", a.x, a.y);
}

//alinea c)
void initPonto(ponto2D* p){
    printf("Indique a coordenada X e Y: \n");
    scanf("%d %d",&(p->x),&(p->y));
}

//alinea d)
void movePonto(ponto2D* p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}