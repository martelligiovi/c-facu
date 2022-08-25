# include <stdio.h>
int main ()
{
int x,a,b;
printf ("Ingrese un número: ");
scanf ("%d", &a);
printf ("Ingrese otro ; ");
scanf ("%d", &b);
x= a>b? a:b;
printf ("El mayor es %d", x);/* El primer operando es una condición, el segundo operando es el valor de toda la expresión.condicional si la condición es verdadera, y el tercer operando es el valor de toda la expresión condicional si la condición es falsa. */
return 0;

}