#include <stdio.h>

/*
Quest�o 7 letra B:
    - s�o n chamadas recursivas e sua complexidade � O(2^n);
*/

int calcular(int n);

int main(void){

    int n, resp;

    printf("Informe um valor para N: ");
    scanf("%d", &n);

    resp = calcular(n);

    printf("A resposta eh: %d", resp);
}

int calcular(int n){
    if(n == 1 || n == 2){
        return 0;
    }else{
        return 2*calcular(n-1) + calcular(n-2) + n;
    }
}
