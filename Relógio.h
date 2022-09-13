#include<iostream.h>
#include<conio.h>
class Relogio
{
      private: int hora, minuto, segundo;
      public: Relogio();
              void sethora(int h, int m, int s);
              void gethora(int *h,int *m, int *s);
              void muda();
};

Relogio::Relogio()
{
      hora = 0;
      minuto = 0;
      segundo = 0;
}

void Relogio::sethora(int h,int m,int s)
{
     hora = h;
     minuto = m;
     segundo = s;
}

void Relogio::gethora(int *h,int *m, int *s)
{
     h = hora;
     m = minuto;
     s = segundo;
}

void Relogio::muda()
{
     if(segundo<59)
     {
            segundo = segundo+1;
     }
     else
     {
         segundo = 0;
         if(minuto<59)
         {
               minuto = minuto + 1;
         }
         else
         {
               minuto = 0;
               if(hora<24)
               {
                     hora = 0;
               }
         }
         
     }
}
            

