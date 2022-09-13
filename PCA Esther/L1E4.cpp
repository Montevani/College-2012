#include<iostream.h>
#include<conio.h>
#define M 100

int main()
{
    int i,j=0;
    char frase[M];
    cout << "Escreva uma frase: ";
    gets(frase);    
    for(i=0;frase[i]!='\0';i++) 
        {
                                 if(frase[i]=='A') 
                                 {
                                           frase[i]='E';   
                                           j++;
                                 }
                                 if(frase[i]=='a') 
                                 {
                                           frase[i]='e';   
                                           j++;
                                 }
        }
    
    cout << "\nA frase modificada fica " << "\"" << frase << "\"" << ", sendo que a letra \"A\" (ou \"a\") apareceu " << j <<" vezes."; 
    getch();
}
