#include <stdio.h> 
#include <string.h>

//vamos a hacer que el estudiante ingrese su matricula y su nombre y que luego la maquina imprima esa info]

int main(){
    char name[100];
    char id[100];
printf("Ingresa tu nombre:");
// fgets lee hasta el salto de linea o n-1 caracteres 
// stdin es el flujo de entrada estandar (teclado)
fgets(name, sizeof(name), stdin);
name[strcspn(name, "\n")] = 0;
printf("Ingrese su matricula:");
fgets(id, sizeof(id), stdin);
id[strcspn(id, "\n")]=0;
//esa ultima linea elimina el salto de linea que puede incluir fgets


printf("su usuario y matricula son: %s y %s\n", name, id);
printf("gracias por usar el programa\n")
return 0;

}
