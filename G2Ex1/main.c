
#include <stdio.h>

#include "ponto.h"
#include "ret.h"
#include "array.h"
//---------------------Exercicio 3--------------------------
int main(int argc, char* argv[]) {
    ret2D tab[10] = {{{2,3}, 10, 4}, {{4,5},2,3}};
    int total = 2;

    listarTodos(tab, total);

    adicionarRet(tab, &total);

    listarTodos(tab,total);
    printf("Total:%d\n\n", total);

    eliminaPequeno(tab, &total);
    printf("Total:%d\n\n", total);

    listarTodos(tab,total);

//--------------------Fim Exercicio 3--------------------------------

/*
//---------------------Exercicio 2---------------------------------
    ret2D r1 = {{1,1}, 4, 10}, r2={{0,0}, 0, 0};

    printR(r1);

    initR(&r2);

    printR(r2);

    printf("Area: %d\n", areaR(r2));
//-----------------------Fim Exercicio 2-------------------------------
*/
    return 0;
}

