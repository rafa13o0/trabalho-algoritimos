#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "validacao.h"

int main() {

    char mensagem[101];
    char hex[3];
    int n, b, i, j, resultado; 

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &b);
        scanf("%s", &mensagem);
        for(j = 0; j < strlen(mensagem); j += 2){
            hex[0] = mensagem[j];
            hex[1] = mensagem[j+1];
            hex[2] = '\0';
            int dec = (int)strtol(hex, NULL, 16);

            if (dec == 0) {
                break;
            }

            resultado = func_val(j/2+1, b);
            if (resultado != 0) {
                printf("%c", dec);
            }
        }
    }

    return 0;
}