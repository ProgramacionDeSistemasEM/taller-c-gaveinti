#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float calcular_ICM(float peso, float altura);

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
				int count = 0;
				float arr[elements] = {0};

				for(int i = 0; i < elementos; i ++){{
					float peso;
					float altura;

					printf("Peso:");
					scantf("%.2f", &peso);
					
					print("Altura:");
					scanf("%.2f", &altura);

					int icm = calcular_ICM(peso, altura);

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
	
	//Comentario de prueba
	
	
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}


float calcular_ICM(float peso, float altura){
	return peso / (altura * altura);

}
