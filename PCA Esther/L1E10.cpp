#include <iostream.h>
#include <conio.h>

int main ()
{
    int m, n, p, q, i, j, k;
    do
    {
        cout << "Digite o numero de linhas da matriz 1: ";
        cin >> m;
        cout << "Digite o numero de colunas da matriz 1: ";
        cin >> n;
        cout << endl;
        cout << "Digite o numero de linhas da matriz 2: ";
        cin >> p;
        cout << "Digite o numero de colunas da matriz 2: ";
        cin >> q;
        cout << endl << endl;
    } while (m<=0||n<=0||p<=0||q<=0||n!=p);
    
    int A[m-1][n-1], B[p-1][q-1], C[m-1][q-1];
    cout << "Agora digite os valores para a matriz A:" <<endl;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
                            cout << "Valor "<<i+1<<"x"<<j+1<<": ";
                            cin >> A[i][j];
        }
    }
    cout <<endl << "Agora digite os valores para a matriz B:" <<endl;
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
                            cout << "Valor "<<i+1<<"x"<<j+1<<": ";
                            cin >> B[i][j];
        }
    }
    cout << endl << endl << "A multiplicacao das duas matrizes e':" <<endl;
    for(i=0;i<m;i++)
    {

                    for(j=0;j<q;j++)
                    {
                                    C[i][j]=0;                    
                                    for(k=0;k<n;k++)
                                    {
                                                    C[i][j]=(A[i][k]*B[k][j])+C[i][j];
                                    }
                    cout << "Elemento " <<i+1 <<"x" <<j+1 <<"= " <<C[i][j] <<endl;
                    
                    }
    }
    getch();
}
