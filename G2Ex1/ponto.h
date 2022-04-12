#ifndef G2EX1_PONTO_H
#define G2EX1_PONTO_H
//-----------------Exercicio 2------------------
//alinea a)
typedef struct ponto ponto2D;
struct ponto{
    int x, y;
};

void printPonto(ponto2D a);

void initPonto(ponto2D* p);

void movePonto(ponto2D* p, int dx, int dy);

#endif //G2EX1_PONTO_H
