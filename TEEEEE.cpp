#include<iostream.h>
#include<stdlib.h>

float total;

class venda
{
      public:
             float np,p;
      private:
              void in();
              void tt();
};

int main()
{
    int c, i;
    venda x[10];
    cout<<"digite onumero de peças que serao cadastradas";
    cin>>i;
       for(c=0;c<i;c++)
       {
                cout<<"digite o numero de peças e o valor de cada uma delas";
                x[c].in();
                x[c].tt();
       }
    cout<<total;

}

void venda::in()
{
     cin>>np>>p;
}
void venda::tt()
{
     total=total+(np*p);
}
