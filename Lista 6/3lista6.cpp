#include<iostream.h>
#include<conio.h>

void troca(float *px, float *py);

int main()
{
    float x, y, *ppx, *ppy;
    
    ppx = &x;
    ppy = &y;
    
    cout<<"Informe os valores de x e y: ";
    cin>> x >> y;
    cout<<"X = "<< *ppx <<" Y = "<< *ppy << endl;
    
    troca(ppx, ppy);
    
    cout<<"\nApos chamar a funcao troca:"<< endl;
    cout<<"X = "<< *ppx <<" Y = "<< *ppy;
    getch();
}

void troca(float *px, float *py)
{
     float t;
     
     t = *px;
     *px = *py;
     *py = t;
}
