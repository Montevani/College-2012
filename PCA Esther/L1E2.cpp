#include<iostream.h>
#include<conio.h>

void tabela(void)
{
    int i;
    for(i=0;i<256;i++)
    {
                cout << i << " " << char(i) << endl;
    }
}


   
int main() 
{
      int i; 
      cout << "Tabela ASCII:"; 
      tabela();
      getch();
}
