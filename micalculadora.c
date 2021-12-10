///Bibliotecas a utilizar
#include<stdio.h>
#include <math.h>
#define pi 3.1415926536
int main(int argc, char const *argv[])
{
		//Variables a utilizar
		int op,cont=0,nume,nu1,nu2,resu;
		char au=163,ao=162,aa=160,ai=161,ae=130;
		float res,x,seno,coseno,tangente,rad,con,ang,bas,pot,n1,n2;
		double numero;
	//Establecer que el proceso se repita hasta que la opción elegida sea salir
	do
	{
		//Mensaje de bienvenida
		printf("\n\n\t\tBienvenido a mi calculadora :)\n\n");
		
		//Mostrar menú
		printf("1) Suma\n2) Resta\n3) Multiplicaci%cn\n4) Divisi%cn\n5) Ra%cz cuadrada\n6) M%cdulo\n7) Seno\n8) Coseno\n9) Tangente\n10) Arco tangente\n11) Logaritmo decimal\n12) Logaritmo neperiano\n13) Conversi%cn de grados a radianes\n14) Conversi%cn de radianes a grados\n15) Potencia\n16) Tablas de multiplicar\n17) Salir\n",ao,ao,ai,ao,ao,ao);
		
		//Solicitar la opción
		printf("Elige la opci%cn a realizar: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma: ",au);
				// Escanear lo que el usuario ingresa
				scanf("%f,%f",&n1,&n2);
				//Realizar la suma
				res=n1+n2;
				printf("El resultado de la suma es: %f\n",res);
				break;
			case 2:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma: ",au);
				// Escanear lo que el usuario ingresa
				scanf("%f,%f",&n1,&n2);
				//Realizar la resta
				res=n1-n2;
				printf("El resultado de la resta es: %f\n",res);
				break;
			case 3:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma: ",au);
				// Escanear lo que el usuario ingresa
				scanf("%f,%f",&n1,&n2);
				//Realizar la multiplicación
				res=n1*n2;
				printf("El resultado de la multiplicaci%cn es: %f\n",ao,res);
				break;
			case 4:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma: ",au);
				// Escanear lo que el usuario ingresa
				scanf("%f,%f",&n1,&n2);
				//Impletación del if-else
				if(n2==0)
				{
					//Informar al usuario que la división no se puede realizar ya que es una división entre 0
					printf("La divisi%cn no se puede hacer, ya que es una divisi%cn entre 0:(\n",ao,ao);
				}
				else
				{
					//Realizar la división
					res=(float)n1/(float)n2;
					printf("El resultado de la divisi%cn es: %f \n",ao,res);
				}
				break;
			case 5:
				//Solicitar variables
				printf("Escribe un n%cmero y te dir%c su ra%cz cuadrada\n",au,ae,ai);
				// Escanear lo que el usuario ingresa
				scanf("%lf", &numero); 
				//Se ponen condiciones para poder realizar el calculo de la raíz cuadrada
				if(numero<0)
				{
					//Informar al usuario que no es posible calcular la raíz cuadrada porque es un numero negativo y el resultado no está dentro de los números reales positivos
					printf("No es posible calcular la ra%cz cuadrada porque es un n%cmero negativo y el resultado no est%c dentro de los n%cmeros reales positivos :(\n",ai,au,aa,au);
				}
				else
				{
				//Realizar la raíz cuadrada
				double raizCuadrada=sqrt(numero); 
				printf("La ra%cz cuadrada de %lf es: %lf\n",ai,numero,raizCuadrada);
				}
				break;
			case 6:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma: ",au);
				// Escanear lo que el usuario ingresa
				scanf("%d,%d",&nu1,&nu2);
				//Realizar el modulo
				resu=nu1%nu2;
				printf("El resultado del m%cdulo es: %d \n",ao,resu);
				break;
			case 7:
				//Solicitar variables
				printf("Ingresa el %cngulo en grados:\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Realizar el calculo del seno del ángulo
				rad=x*pi/180;
				seno=sin(rad);
				printf("El seno del %cngulo es: %f\n",aa,seno);
				break;
			case 8:
				//Solicitar variables
				printf("Ingresa el %cngulo en grados:\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Realizar el calculo del coseno del ángulo
				rad=x*pi/180;
				coseno=cos(rad);
				printf("El coseno del %cngulo es: %f\n",aa,coseno);
				break;
			case 9:
				//Solicitar variables
				printf("Ingresa el %cngulo en grados dentro de la primera vuelta (de 0 a 360 grados):\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Se ponen condiciones para poder realizar el calculo de la tangente del ángulo
				if((x==270)||(x==90))	
				{
					//Informar al usuario que no se puede realizar la operación, ya que la tangente no está definida en esos puntos.
					printf("No se puede realizar la operaci%cn, ya que la tangente no est%c definida en esos puntos :(",ao,aa);
				}
				else 
				{
					//Realizar el calculo de la tangente del ángulo
					rad=x*pi/180;
					tangente=tan(rad);
					printf("La tangente del %cngulo es: %f\n",aa,tangente);
				}
				break;
			case 10:
				//Solicitar variables
				printf("Ingresa el %cngulo en grados:\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Realizar el calculo del arco tangente del ángulo
				printf("El arco tangente del %cngulo es: %f\n",aa,atan(x));
				break;
			case 11:
				//Solicitar variables
				printf("Escribe un n%cmero y te dir%c su logaritmo decimal:\n",au,ae);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Se ponen condiciones para poder realizar el calculo del logaritmo decimal
				if(x<=0)
				{
					//Informar al usuario que no es posible realizar la operación porque no está dentro del dominio de la función
					printf("No es posible realizar la operaci%cn porque no est%c dentro del dominio de la funci%cn :(",ao,aa,ao);
				}
				else
				{
				//Realizar el calculo del logaritmo decimal
				printf("El resultado del logaritmo decimal es: %f\n",log10(x));
				}
				break;
			case 12:
				//Solicitar variables
				printf("Escribe un n%cmero y te dir%c su logaritmo neperiano\n",au,ae);
				// Escanear lo que el usuario ingresa
				scanf("%f",&x);
				//Se ponen condiciones para poder realizar el calculo del logaritmo neperiano
				if(x<=0)
				{
					//Informar al usuario que no es posible realizar la operación porque no está dentro del dominio de la función
					printf("No es posible realizar la operaci%cn porque no est%c dentro del dominio de la funci%cn :(",ao,aa,ao);
				}
				else
				{
				//Realizar el calculo del logaritmo neperiano
				printf("El resultado del logaritmo neperiano es: %f\n",log(x));
				}
				break;
			case 13:
				//Solicitar variables
				printf("Ingrese el valor de su %cngulo en grados:\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f",&ang);
				//Realizar la conversión
				con=ang*pi/180;
				printf("La conversi%cn a radianes de %f grados es: %f radianes\n",ao,ang,con);
				break;
			case 14:
				//Solicitar variables
				printf("Ingrese el valor de el %cngulo en radianes:\n",aa);
				// Escanear lo que el usuario ingresa
				scanf("%f", &ang);
				//Realizar la conversión
				con=ang*180/pi;
				printf("La conversi%cn a grados de %f radianes es: %f grados\n",ao,ang,con);
				break;
			case 15:
				//Solicitar variables
				printf("Dame 2 n%cmeros separados por coma, el primero es el n%cmero base y el segundo es la potencia a la que lo quieres elevar:\n",au,au);
				// Escanear lo que el usuario ingresa
				scanf("%f,%f",&bas,&pot);
				//Realizar el caculo de la potencia
				printf("El resultado del n%cmero %f elevado al %f es: %f\n",au,bas,pot,pow(bas,pot));
				break;
			case 16:
				printf("\a----- Tabla de multiplicar -----\n");
				//Solicitar variables
				printf("Ingrese el n%cmero del que quiere saber su tabla de multiplicar: \n",au);
				// Escanear lo que el usuario ingresa
				scanf("%d", &nume);
				//Realizar el calculo de la tabla de multiplicar 
				printf("La tabla de multiplicar del %d es:\n", nume);
				//Poner condición para la repetición del proceso para que solo se calculo hasta la posición 10
				while (++cont<=10)
				printf("%d x %d = %d\n", nume, cont, nume*cont);
				break;
			case 17:
				//Mensaje de despedida
				printf("Gracias por utilizar mi calculadora\n");
				break;
			default:
				//Monsatrar en caso de no elegir una de las opciones dadas
				printf("Opci%cn no v%clida",ao,aa);
		}
	}while(op!=17);
	
	return 0;
}