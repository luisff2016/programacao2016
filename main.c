#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

typedef struct {
int cpf;
char nome[50];
char sexo;
float notas[4];
} TESTUDANTE;

int nroMaxAlunos=50;
int codCadastro;
TESTUDANTE aluno[50];
TESTUDANTE est;

void menu();
int buscaEstudante();
void lerAluno();
void gravarAluno();
void addMenu();

int main(){
    setlocale(LC_ALL, "portuguese");
    addMenu();
    return 0;
}

void menu (){
printf("============================================\n");
printf("\t\tMenu\t\t\n");
printf("============================================\n");
printf ("1. Adicione registro de estudante\n");
printf ("2. Apague registro de estudante\n");
printf ("3. Atualize registro de estudante\n");
printf ("4. Ver todos os registros\n");
printf ("5. Calcular a m�dia de um estudante\n");
printf ("6. Mostrar o estudante que conseguiu a maior m�dia\n");
printf ("7. Mostrar o estudante com a menor m�dia\n");
printf ("8. Encontrar estudante pela matr�cula\n");
printf ("9. Encontrar estudante pelo nome\n");
printf ("10. Mostrar os registros ordenados pela m�dia\n");
printf ("0. Sair do programa\n");
}

void gravarAluno(TESTUDANTE registrar){
    aluno[codCadastro] = registrar;
    codCadastro++;
}

int buscaEstudante(TESTUDANTE mat){
    int i;
    for (i=0; i<nroMaxAlunos ; i++)
    if (aluno[i].cpf == mat.cpf)
        return i;
    return -1;
}

void lerAluno(){
    printf("Digite o CPF:\n");
    scanf("%d", &est.cpf);
    int i = buscaEstudante(est);
    if ( i != -1 )
        printf("\nMatr�cula j� cadastrada\n");
    else if (codCadastro == nroMaxAlunos)
        printf("\nN�mero m�ximo de estudantes ultrapassado\n");
        else {
            printf("\nDigite o nome do aluno:\n");
            scanf("%s", est.nome);
            printf("\nDigite o sexo: H ou M\n");
            est.sexo = getche();
            printf("\nDigite as notas:\n");
            int i;
            for (i=0; i<4; i++)
                scanf("%f", &est.notas[i]);
            gravarAluno(est);
            printf("\nCadastrado realizado com sucesso\n");
    }
}

void addMenu(){
    menu();
    int opcao;
    printf("\nDigite a op��o desejada do MENU\n\n");
    scanf("%d", &opcao);
    while ( opcao != 0){
            switch (opcao){
                case 0: return 0;
                case 1: lerAluno(); break;
                case 2: printf("\n opcao 2 em construcao\n\n"); break;
                case 3: printf("\n opcao 3 em construcao\n\n"); break;
                case 4: printf("\n opcao 4 em construcao\n\n"); break;
                case 5: printf("\n opcao 5 em construcao\n\n"); break;
                case 6: printf("\n opcao 6 em construcao\n\n"); break;
                case 7: printf("\n opcao em construcao\n\n"); break;
                case 8: printf("\n opcao em construcao\n\n"); break;
                case 9: printf("\n opcao em construcao\n\n"); break;
                case 10: printf("\n opcao em construcao\n\n"); break;
                default: printf("\n DIGITE UMA OPCAO VALIDA!\n\n"); break;
                }
            menu();
            printf("\n Digite a op��o desejada do MENU\n\n");
            scanf("%d", &opcao);
            }
}
