#ifndef meu_nome
#define meu_nome

typedef struct no no;
struct no
{
    char texto_linhas[500];
    char comando[20];
    char parametro_1[20];
    char parametro_2[20];
    no *proximo;
    int numero_da_linha;
    int comando_reconhecido;
};

typedef struct head head;
struct head
{
    no *primeiro;
};

head *criar_lista();

int verificar_lista_vazia(head *cabeca);

void inserir_no(head *cabeca, char *string, int num_linha);

void imprimir_lista_texto_linhas(head *cabeca);

void retirar_no(head *cabeca, char *string);

void desalocar_lista(head *cabeca);

void imprimir_numero_de_linhas(head *cabeca);

void imprimir_lista_comando(head *cabeca);

void imprimir_lista_parametro_1(head *cabeca);

void imprimir_lista_parametro_2(head *cabeca);

#endif