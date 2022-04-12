
#include <stdio.h>
#include "ponto.h"
#include "ret.h"

void printR(ret2D r){
    printf("CIE: {%d, %d}\n", r.cie.x, r.cie.y);
    printf("CSE: {%d, %d}\n", r.cie.x, r.cie.y+r.alt);
    printf("CID: {%d, %d}\n", r.cie.x+r.larg, r.cie.y);
    printf("CSD: {%d, %d}\n", r.cie.x+r.larg, r.cie.y+r.alt);
}

void initR(ret2D *r){
    printf("Introduza as coordenadas do canto inferior esuqerdo:\n");
    scanf("%d %d", &(r->cie.x), &(r->cie.y));
    printf("Introduza a altura e largura, respetivamente:\n");
    scanf("%d %d",&(r->alt), &(r->larg));
}

int areaR(ret2D r){
    int area;
    area = r.alt * r.larg;
    return area;
}
