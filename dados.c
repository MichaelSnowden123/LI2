//
// Created by miguel on 10/03/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dados.h"
#include "logica.h"

typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;





ESTADO *inicializar_estado(){

}
int obter_jogador_atual(ESTADO *estado){

}
int obter_numero_de_jogadas(ESTADO *estado){

}
int obter_estado_casa(ESTADO *e, COORDENADA c){

}