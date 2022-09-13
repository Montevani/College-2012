#include<iostream.h>
#include<conio.h>

int main()
{
    int a, d, *pta, *ptd, g;
    float b, e, *ptb, *pte, h;
    double c, f, *ptc, *ptf, i;
    
    pta = &a;
    ptd = &d;
    
    g = sizeof(int);
    
    ptb = &b;
    pte = &e;
    
    h = sizeof(float);
    
    ptc = &c;
    ptf = &f;
    
    i = sizeof(double);
    
    cout<<"End 1 = "<< pta <<" End 2 = "<< ptd <<" Tamanho do int = "<< g << endl;
    cout<<"End 1 = "<< ptb <<" End 2 = "<< pte <<" Tamanho do float = "<< h << endl;
    cout<<"End 1 = "<< ptc <<" End 2 = "<< ptf <<" Tamanho do double = "<< i;
    getch();
}
    
    
