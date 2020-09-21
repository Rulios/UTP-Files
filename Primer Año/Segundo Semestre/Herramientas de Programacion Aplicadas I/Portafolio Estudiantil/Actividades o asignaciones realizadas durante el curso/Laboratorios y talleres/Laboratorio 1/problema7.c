/* Grupo #5 Integrantes:
 * Robert Lu Zheng 3-750-1980
 * Martin Castañeda 8-970-1352
 * Leonardo Dieppa 8-928-410
 * Johan Ovalle 8-970-795
 * Antonio Reyna 8-964-1747
 */

#include <stdio.h>
void main()
{
    //Intro de variables
   int monno;
   printf("Introduzca el numero del mes : ");
   scanf("%d",&monno);
   //Programa en si
   switch(monno)
   {
	case 1:
	       printf("Enero\n");
	       break;
	case 2:
	       printf("Febrero\n");
	       break;
	case 3:
	       printf("Marzo\n");
	       break;
	case 4:
	       printf("Abirl\n");
	       break;
	case 5:
	       printf("Mayo\n");
	       break;
	case 6:
	       printf("Junio\n");
	       break;
	case 7:
	       printf("Julio\n");
	       break;
	case 8:
	       printf("Agosto\n");
	       break;
	case 9:
	       printf("Septiembre\n");
	       break;
	case 10:
	       printf("Octubre\n");
	       break;
	case 11:
	       printf("Noviembre\n");
	       break;
	case 12:
	       printf("Diciembre\n");
	       break;
	default:
	       printf("Numero invalido. \nPorfavor intentar denuevo...\n");
	       break;
      }
}
