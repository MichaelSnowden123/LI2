//
// Created by miguel on 10/03/20.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "logica.h"
#include "dados.h"
int jogar(ESTADO *e, COORDENADA c) {
    printf("jogar %d %d\n", c.coluna, c.linha);
    return 1;
}