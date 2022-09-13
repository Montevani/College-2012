#include <iostream.h>
int main( )
{
    int nome[3];
    nome[0]=0;
    nome[1]=1;
    nome[2]=2;
    nome[3]=3;
    int *pn, i, *pj;
    cout << nome[3] << nome[2] << nome[1] << nome[0] << "\n";
    pn=nome;
        for (i=0;i<4;i++)
        {
            *(pn+i)=nome[i]*2;
        }
    cout << nome[3] << nome[2] << nome[1] << nome[0] << "\n";
    pn=&nome[3];
    pj=&nome[2];
    i=nome[3];
    *pn=nome[2];
    *pj=i;
    pn=&nome[1];
    pj=&nome[0];
    i=nome[1];
    *pn=nome[0];
    *pj=i;
    cout << nome[3] << nome[2] << nome[1] << nome[0] << "\n";
    system("PAUSE");
}
     
