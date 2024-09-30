#include <stdio.h>
#include <limits.h>

int main() {
    printf("-----------------------------\n");
    printf("| Tipo                       | Limites                        |\n");
    printf("+-----------------------------+\n");
    printf("| char                      | [%d, %d]      |\n", CHAR_MIN, CHAR_MAX);
    printf("| int                       | [%d, %d]      |\n", INT_MIN, INT_MAX);
    printf("| short int                 | [%d, %d]      |\n", SHRT_MIN, SHRT_MAX);
    printf("| unsigned int              | [0, %u]       |\n", UINT_MAX);
    printf("| long int                  | [%ld, %ld]    |\n", LONG_MIN, LONG_MAX);
    printf("| unsigned long int         | [0, %lu]      |\n", ULONG_MAX);
    printf("| long long int             | [%lld, %lld]  |\n", LLONG_MIN, LLONG_MAX);
    printf("| unsigned long long int    | [0, %llu]     |\n", ULLONG_MAX);
    printf("-----------------------------\n");

    int overflow_demo = INT_MAX; 
        printf("\nDemonstração de ultrapassagem:\n");
        printf("Valor máximo para int: %d\n", INT_MAX);
    
    
        overflow_demo += 1; 
        printf("Após adicionar 1: %d (ultrapassagem)\n", overflow_demo);

    return 0;
}
