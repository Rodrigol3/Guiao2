#ifndef RET_H
#define RET_H
//----------------Exercicio 2-----------------------
typedef struct retangulo ret2D;

struct retangulo{
    ponto2D cie;
    int alt, larg;
};

void printR(ret2D r);

void initR(ret2D* r);

int areaR(ret2D r);

int verifiR(ret2D r, ponto2D);
#endif /* RET_H */