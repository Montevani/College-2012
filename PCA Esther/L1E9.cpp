#include <iostream.h>
#include <conio.h>

int main ()
{
    int nd, nb[29], i=0, r;
    do
    {
        cout << "Digite um numero decimal inteiro positivo: ";
        cin >> nd;
    } while (nd<=0 || nd>=1073741823); 
    r=nd;
    while (r>0)
    {
          nb[i]=r%2;
          r=r/2;
          i++;
    }
    cout << "O numero em binario e': ";
    for(i=i-1;i!=-1;i--)
    {
                     cout << nb[i];
    }
    getch();
}
