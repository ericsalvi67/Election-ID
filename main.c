#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void titulo_de_eleitor(char titulo[11],int *dv1, int *dv2)
{
  int i;
  int soma=0;
  *dv1=0;
  *dv2=0;

  for(i=0;i<8;i++)
  {
    soma+=(titulo[i]-48)*(i+2);
  }
  if(soma%11==10) *dv1=0;
  else *dv1=soma%11;

  soma=0;
  soma+=(titulo[8]-48)*7;
  soma+=(titulo[9]-48)*8;
  soma+=*dv1*9;
  if(soma%11==10) *dv2=0;
  else *dv2=soma%11;

  titulo[10]=*dv1+48;
  titulo[11]=*dv2+48;
}

int main()
{
  char titulo[11];
  int dv1,dv2;
  printf("DIGITE O TITULO (10 DIGITOS): ");
  gets(titulo);

  titulo_de_eleitor(titulo,&dv1,&dv2);

  printf("TITULO: %s",titulo);
}
