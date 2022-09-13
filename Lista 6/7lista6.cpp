#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int compara(char *pstr1, char *pstr2);

int main()
{
    int i;
    char s1[51], s2[51], *str1, *str2;

    cout<<"Digite uma frase de ate 50 caracteres  : ";
    gets(s1);

    cout<<"Digite outra frase de ate 50 caracteres: ";
    gets(s2);

    str1 = s1;
    str2 = &s2[0];

    i = compara(str1, str2);

    cout<<"\nA string 1 e: "<< s1 << endl;
    cout<<"A string 2 e: "<< s2 << endl;

    if(i == 0)
         cout<<"As strings sao iguais!";
    if(i == -1)
         cout<<"As strings sao diferentes!";

    getch();
}

int compara(char *pstr1, char *pstr2)
{
    int teste=0, j=0;

    while((*(pstr1+j) != '\0') && (teste != -1))
    {
            if(*(pstr1+j) == *(pstr2+j))
                          j++;
            else
                          teste = -1;
    }

    return(teste);
}
