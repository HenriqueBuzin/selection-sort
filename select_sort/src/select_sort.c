#include <stdio.h>
#include <stdlib.h>

#include "dados.h"
#include "select_sort.h"

void select_sort(dado_t ** dados, int n_linhas){
	for(int i = n_linhas; i > 1; i--){
		int max = 0;
		for(int j = 1; j < i; j++){
			if(retornar_temperatura(dados[j]) > retornar_temperatura(dados[max])){
				max = j;
			}
		}
		dado_t * aux = dados[i - 1];
		dados[i - 1] = dados[max];
		dados[max] = aux;
	}
}
