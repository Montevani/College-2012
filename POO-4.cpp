#include"Relógio.h"
#include<string.h>

int main()
{
    Relogio w;
    int h, m, s;
    char c;
    do
    {  
       c = getch();
        switch(c)
        {
               case 'w':cout<<"Digite a hora, minuto e segundo:\n";
                        cin>>h>>m>>s;
                        w.sethora(h,m,s);
                        break;
               case 's':w.muda();
                        break;
               case 'r':w.gethora(h,m,s);
                        break;
               case 'p':cout<<"hora: "<<h<<"\n"<<"Minuto: "<<m<<"\n"<<"Segundo: "<<s<<"\n";
                        break;
        }
    }while(1);
}
    
    
