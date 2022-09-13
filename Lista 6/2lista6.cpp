#include<iostream.h>
#include<conio.h>

void mult(int *v1, int n1, int d1);

int main()
{
        int num, dim, i, *pto, vec[15];
        
        cout<<"Digite a dimensao do seu vetor [1-15]: ";
        cin>> dim;
        
        cout<<"Informe o escalar a ser multiplicado pelo vetor: ";
        cin>> num;
        
        pto = &vec[0];
        
        for(i = 0; i < dim; i++)
        {
              cout<<"Informe o valor da posicao "<< i <<" do vetor: ";
              cin>> *(pto + i);
        }
        
        mult(pto, num, dim);
        getch();
}

void mult(int *v1, int n1, int d1)
{
     int j;
     
     cout<<"\nVetor produto: "<< endl;
     for(j = 0; j < d1; j++)
     {
           cout<< *(v1 + j) * n1 <<" ";
     }
}
