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

/*#include <stdio.h>
#include <math.h>

void desenha_inicial(){

	int let, num;

	for (num = 1; num < 9; num++){

		if (num = 1){
			printf(" ");
			for (let = 0; let < 7; let++){
				printf (". ");
			}
			printf("2 ");
			printf("\n");
		}

		if (num = 4) {
			printf(" ");
			for (let = 0; let < 4; let++){
				printf (". ");
			}
			printf("* ");
			for (let = 5; let < 8; let++){
				printf (". ");
			}
			printf("\n");
		}

		if (num = 8){
			printf(" ");
			printf("1 ");
			for (let = 0; let < 7; let++){
				printf (". ");
			}
			printf("\n");
		}

		else {
			for (let = 0; let < 8; let++){
				printf (". ");
			}
		}
	
	}

}

*/
