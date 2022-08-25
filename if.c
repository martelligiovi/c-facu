# include <stdio.h>
int main ()
{
int a,b;
printf ("Ingrese un número: ");
scanf ("%d", &a);
printf ("Ingrese otro: ");
scanf ("%d", &b);
if (a<b)
{
  printf("el menor es %d", a);
    }
else
{
   printf("el menor es %d", b);
     }
return 0;
}