//
// Created by miguel on 10/03/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "logica.h"
#include "dados.h"
#include "interface.h"

int main()
{
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return  0;
}