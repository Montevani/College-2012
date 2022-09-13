#include <iostream.h>
#include<stdio.h>
#include<conio.h>

int numcaracteres(char *str2); 

int main()
{
    char s2[50], *ps2;
    int num_carac;
    
    cout<<"Programa que calcula e imprime o numero de caracteres de uma string."<< endl;
    cout<<"Digite uma frase: ";
    gets(s2); //Recebe a string.
    
    ps2 = &s2[0]; //Aponta o ponteiro para a matriz de caracteres (string)
    num_carac = numcaracteres(ps2); //Chama a função que conta o num de caracteres
    
    cout<<"\nA frase digitada tem "<< num_carac <<" caracteres."; //Imprime o numero de
    getch();                                         //caracteres retornado pela funçao
}

int numcaracteres(char *str2)
{
    int numcharac = 0, i = 0;
    
    while(*(str2+i) != '\0') //Verifica  se já atingiu o fim da string (caractere '\0')
    {
        numcharac++;         //Contagem de caracteres
        i++;                 //Variavel responsavel por fazer o ponteiro apontar cada elemento
                             //da matriz de caracteres
    }
    return(numcharac);
}
