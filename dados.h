//
// Created by miguel on 10/03/20.

#ifndef GUI5_DADOS_H
#define GUI5_DADOS_H

typedef enum CASA;
typedef struct  COORDENADA;
typedef struct JOGADA;
typedef struct JOGADA JOGADAS;
typedef struct  ESTADO;
int obter_jogador_atual(struct ESTADO *estado);
int obter_numero_de_jogadas(struct ESTADO *estado);
int obter_estado_casa(struct ESTADO *e, struct COORDENADA c);
#endif //GUI5_DADOS_H
