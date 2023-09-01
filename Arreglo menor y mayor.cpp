#include <stdio.h>
#include <stdlib.h>

/* GERVACIO HERNÁNDEZ VIKTOR, PROGRAMA HECHO EN LENGUAJE C, 31/08/23*/

int main(int argc, char *argv[]) {
	/*DECLARAMOS LAS VARIABLES A UTILIZAR*/
	int arreglo1, arreglo2, resultado, menu, opcion;
/*FUNCIONES DEL MENU*/
	do{ 
	printf("\n--------MAYOR O MENOR--------\n........PRESIONAR NUMERO 2 PARA CONTINUAR........\n");
	scanf("%d",&menu);
	switch (menu){
		
	/*FUNCIONES DE BUSQUEDA MENOR O MAYOR*/
		case 2:
	    printf( "\n   Introduzca el primer n%cmero (entero): ", 163 );
        scanf( "%d", &arreglo1 );
        printf( "\n   Introduzca el segundo n%cmero (entero): ", 163 );
        scanf( "%d", &arreglo2 );

        if ( arreglo1 > arreglo2 )
        printf( "\n   El %d es MAYOR.", arreglo1 );
        else
        if ( arreglo1 < arreglo2 )
            printf( "\n   El %d es MAYOR.", arreglo2 );
        else
            printf( "\n   SON IGUALES" );
        break;
			}
			/*PREGUNTAR PARA TERMINAR O VOLVER A INICIAR*/
printf("\nES CORRECTO?\nSI=2\tNO=1\n");
scanf("%d", &opcion);
}while (opcion==1);

if (opcion==2){
/*FIN DEL PROGRAMA*/	
	printf("GRACIAS POR USARME");
}
return 0;


}
