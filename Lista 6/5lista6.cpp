#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void copiastr(char *pstr2, char *pstr1);

int main()
{
    int i;
    char s1[51], s2[51], *str1, *str2;

    cout<<"Digite uma frase de ate 50 caracteres: ";
    gets(s1);

    str1 = s1;
    str2 = s2;

    for(i=0; i < 51; i++)
    {
             *(str2 + i) = 0;
    }

    cout<<"\nA frase digitada esta salva em uma string [s1]. "
        <<"Esse conteudo sera copiado para outra string vazia [s2]. Conteudos das strings:"<< endl
        <<"Conteudo de s1: "<< s1 <<"\nConteudo de s2: "<< s2 << endl
        <<"Pressione ENTER para continuar."<< endl;
    getch();

    copiastr(str2, str1);

    cout<<"\nAgora a segunda string possui o mesmo conteudo da primeira. Conteudos das \nstrings:"
        <<"\nConteudo de s1: "<< s1 <<"\nConteudo de s2: "<< s2;
    getch();
}

void copiastr(char *pstr2, char *pstr1)
{
     int i=0;

     while(*(pstr1 + i) != '\0')
     {
                     *(pstr2 + i) = *(pstr1 + i);
                     i++;
     }
}
