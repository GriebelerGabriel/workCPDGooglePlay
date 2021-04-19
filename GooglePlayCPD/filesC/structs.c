#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <string.h>
#define T 15
#define C 30


struct genero
{
    char idGenero[T];
    char nomeGenero[T];


struct avaliacoes
{
    int idAvaliacao;
    float estrelas;
    char comentario[C];
};

struct jogo
{
    char nome[T];
    char versão[T];
    int downloads;
    int  idJogo;
    struct avaliacao ava;
    struct genero gen;

};
