#include <stdio.h>
#include "ponto.h"
#include "ret.h"
#include "array.h"
//----------------------------Exercicio 3-------------------------------
 void listarTodos(ret2D r[], int num){
    for(int i=0;i<num;i++) {
        printf("Retangulo %d\n", i+1);
        printR(r[i]);
        printf("\n");
    }
}

void adicionarRet(ret2D r[], int *num) {

        if (*num == 10) {
            printf("Capacidade Cheia!!");
        } else {
            initR(&r[*num]);
            (*num)++;
        }

}

void eliminaPequeno(ret2D r[], int *num){
    int i, m=areaR(r[0]), p=0;

    for(i=1; i<*num;i++){
        if(areaR(r[i]) < m){
            m = areaR(r[i]);
            p = i;
        }
        r[p] = r[*num - i];
        (*num)--;
    }
}