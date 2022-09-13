#include<iostream.h>
#include<conio.h>
#define MAX 100
int separavetor (int vetor[],int n)
{
    int i,j,k, vetorpar[MAX], vetorimpar[MAX];
 
    j=0;
    k=0;
    for(i=0;i<n;i++)
    {
                    if((vetor[i]%2)==0)
                    {
                       vetorpar[j]=vetor[i];
                       j++;
                    }
                    else
                    {
                       vetorimpar[k]=vetor[i];
                       k++;
                    }
    }
    cout <<"\nVetor par: ";
    for(i=0;i<j;i++)
    {
                    cout << vetorpar[i] << " ";
    }
    cout <<"\nVetor par: ";
    for(i=0;i<k;i++)
    {
                    cout << vetorpar[i] << " ";
    }

}


int main ()
{
    int vetor[MAX],i,n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    for(i=0;i<n;i++)
    {
                    cout << "Digite o elemento " << i+1 << ": ";
                    cin >> vetor[i];
    }
    separavetor(vetor,n);
    cout <<endl;
    getch();
}
