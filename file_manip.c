#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ char a[50], ch;
  FILE *f;
  f=fopen("burn.txt","a+");
  while((ch=getchar())!=EOF) // EOF = Ctrl+d
    putc(ch,f); 
  /*  do // for some reason you have to type the line along with the condition yes/no
  { printf("next\n");
    gets(a);
    scanf("%[^\n]s",a);
    fprintf(f,"%s\n",a);
    printf("--More--(y=yes||n==no)");
    scanf(" %c",&ch);
  }while(ch=='y');*/
  rewind(f);
  while((ch=getc(f))!=EOF)
    printf("%c",ch); 
  fclose(f);
}

