#include <stdio.h>
#include <stdbool.h>

int main() {
    float nota1, nota2, media;
    int opcao, total, faltas;

    printf("========== SISTEMA ACADEMICO ==========\n");
    printf("Oque deseja fazer?\n");
    printf("Opcao 1: Calcular media do aluno\nOpcao 2: Calcular presenca do aluno\n");
    scanf("%d", &opcao);


    switch(opcao) {
        case 1: {
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = nota1 + nota2 / 2;

        if (media >= 6) {
            printf("Aluno aprovado\n");
        } else {
            printf("Aluno reprovado\n");
        }
        break;
        }
        case 2: {
            printf("Digite a quantidade total de aulas: ");
            scanf("%d", &total);
            printf("Digite quantas aulas o aluno faltou: ");
            scanf("%d", &faltas);

            if (faltas >= (total*0.25)) {
                printf("Reprovado por faltas");
            } else {
                printf("Presenca dentro do esperado");
            }
        break;    
        }
    }
    return 0;
}



