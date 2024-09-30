#include <stdio.h>

int main() {
    float N1, N2, PPD, N3, nota_exame;
    int EU, N3_realizada;


    printf("Digte a nota N1 (0 a 4.5): ");
    scanf("%f", &N1);
    printf("Digite a nota N2 (0 a 4.5): ");
    scanf("%f", &N2);
    printf("Digite a nota PPD (0 a 1): ");
    scanf("%f", &PPD);


    if (N1 < 0 || N1 > 4.5 || N2 < 0 || N2 > 4.5 || PPD < 0 || PPD > 1) {
        printf("Codigo de erro: 3\n");
        return 3;
    }


    printf("O estudante realizou o Exame Unificado (0 para não, 1 para sim): ");
    scanf("%d", &EU);

    if (EU < 0 || EU > 1) {
        printf("Codigo de erro: 3\n");
        return 3;
    }

  
    if (EU == 1) {
        printf("Digite a nots do Exame Unificado (0 a 1): ");
        scanf("%f", &nota_exame);

        if (nota_exame < 0 || nota_exame > 1) {
            printf("Codigo de erro: 3\n");
            return 3;
        }
    }

    
    printf("O estudante realizou a N3 (0 para não, 1 para sim): ");
    scanf("%d", &N3_realizada);

    if (N3_realizada < 0 || N3_realizada > 1) {
        printf("Codigo de erro: 3\n");
        return 3;
    }


    if (N3_realizada == 1) {
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &N3);

        if (N3 < 0 || N3 > 4.5) {
            printf("Codigo de erro: 3\n");
            return 3;
        }

        
        if (N1 < N2 && N1 < N3) {
            N1 = N3;
        } else if (N2 < N1 && N2 < N3) {
            N2 = N3;
        }
    }

    float nota_final = N1 + N2 + PPD + (EU == 1 ? nota_exame : 0);

   
    if (nota_final > 10) {
        nota_final = 10;
    }

    
    printf("Nota final: %.2f\n", nota_final);
    if (nota_final >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
