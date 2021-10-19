#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float calcular_ICM(float peso, float altura);
float promedio(float *arreglo, int n);
float maximo(float *arreglo, int n);


int main(int argc, char **argv){
	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				if(elementos <= 0){
					printf("Numero de personas invalido \n");
					exit(1);
				}	
				
				

				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	float sum = 0.0f;
	float max_imc = 0.0f;

	float arr[elementos];

	for(int i = 0; i < elementos; i ++){
		float peso;
		float altura;

		printf("Peso:");
		scanf("%f", &peso);
		if(peso < 0){
			printf("Numero invalido \n");
			exit(1);
		}

		printf("Altura:");
		scanf("%f", &altura);
		if(altura < 0){
			printf("Numero invalido \n");
			exit(1);
		}

		float icm = calcular_ICM(peso, altura);
		arr[i] = icm;
	}	
	//Comentario de prueba
	sum = promedio(arr, elementos);
	max_imc = maximo(arr, elementos);
	
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}


float calcular_ICM(float peso, float altura){
	return peso/(altura * altura);

}

float promedio(float *arreglo, int n){
	float prom;
	for(int i = 0; i < n; i ++){
		prom = prom + arreglo[i];
	}
	return prom/n;
}

float maximo(float *arreglo, int n){
	float maximo = arreglo[0];
	for(int i = 1 ; i < n; i ++){
		if(maximo < arreglo[i]){
			maximo = arreglo[i];
		}	
	}
	return maximo;
}
