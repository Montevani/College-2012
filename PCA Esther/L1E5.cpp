#include <iostream.h>
#include <conio.h>
int main ()
{
   int n, i=0, j, k=1, q=0;
   do 
   {
       cout << "Digite um numero inteiro positivo e maior que 0.\n";
       cin >> n;
   } while (n<=0);
   while (i==0)
   {
         j=n/k;
         if (j>=1)
         {
                 k=k*10;
                 q=q+1;
         }
         else
         {
             i=1;
         }
   }
   cout << "O seu numero " << n << " tem " << q << " caracteres";
   getch();
}  
