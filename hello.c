#include <stdio.h>
//comentarios añadidos
int main(void){
	printf("Hola Mundo");
	printf("Hola a todos");
	decirHola("Luis");
	return 0;
}

void decirHola(char* nombre){
	printf("Hola %s, ", nombre);
}
