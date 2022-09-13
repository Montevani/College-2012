#include <iostream.h>
#include <conio.h>
int main ()
{
    float N1, N2, n1, n2, MMC=1;
    int i=0, j, c=2;
    cout << "Diga dois numeros inteiros: ";
    cin >> N1 >> N2;
    while (N1!=1 || N2!=1)
    {
          if(N1>1)                                  //Teste para ver se é divisivel.
          {
                  n1=N1/c;
                  for (j=0;j<n1;j++);                
                  n1=n1-j;
          }
          
          if(N2>1)                                  //Teste para ver se é divisivel.
          {
                  n2=N2/c;
                  for (j=0;j<n2;j++);
                  n2=n2-j;
          }
          
          if (n1==0 || n2==0)                        //Caso os dois sejam divisiveis por c
          {
                    if (n1==0 && N1>1)
                    {
                              N1=N1/c;
                    }
                    
                    if (n2==0 && N2>1)
                    {
                              N2=N2/c;
                    }
                    MMC=MMC*c;
                    i++;
                    n1=1;
                    n2=1;
          }
          else                               //Se não for divisivel, tenta o proximo
          {
              c++;
          }
    }
    cout << "Os numeros foram divididos " << i <<" vezes.\n";
    cout << "\nO MMC dos dois numeros e: " << MMC;
    getch();
}
