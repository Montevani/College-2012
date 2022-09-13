#include <iostream.h>
#include <conio.h>
#include <math.h>
int Q (int x);
int main ()
{
    int x;
    cout << "Digite um numero inteiro e positivo: ";
    do{
        cin >> x;
        } while (x<=0);
    x=Q(x);
    if (x==1)
    {
            cout << "O numero e' uma potencia prima.";
    }
    else
    {
        cout<< "\aO numero NAO e' uma potencia prima.";
    }
    getch();
}

int Q (int x)
{
        int p, k, i, teste, a=0, r=0;
    for(p=1;p<=x;p++)                //Testando números primos
    {
           for (i=2;i<=(p/2);i++)
           {
                teste=p%i;
                if (teste==0)
                {
                    a=1;
                }
           }
           if (a==0)                 //Caso p seja primo
           {
                   for(k=1;k<=x;k++) //Testa valores de k
                   {
                                   if(x==pow(p,k)) //Caso x=p'k
                                   {
                                               r=1;
                                   }
                   }
           }
           a=0;
    }
    return(r);
}
