#include<stdio.h>
#include<string.h>
int main()
{
 char a[30];
printf("enter the string:");
 for(int i=0;i<30;++i)
 scanf("%c",&a[i]);
for(int i=0;i<30;++i)
{ 
 if(a[i]=='Z'||a[i]=='z')
  a[i]='A';
else
if(a[i]=='Y'||a[i]=='y')
  a[i]='B';
else
if(a[i]=='X'||a[i]=='x')
  a[i]='C';
else
if(a[i]=='W'||a[i]=='w')
  a[i]='D';
else
if(a[i]=='V'||a[i]=='v')
  a[i]='E';
else
if(a[i]=='U'||a[i]=='u')
  a[i]='F';
else
if(a[i]=='T'||a[i]=='t')
  a[i]='G';
else
if(a[i]=='S'||a[i]=='s')
  a[i]='H';
else
if(a[i]=='R'||a[i]=='r')
  a[i]='I';
else
if(a[i]=='Q'||a[i]=='q')
  a[i]='J';
else
if(a[i]=='P'||a[i]=='p')
  a[i]='K';
else
if(a[i]=='O'||a[i]=='o')
  a[i]='L';
else
if(a[i]=='N'||a[i]=='n')
  a[i]='M';
if(a[i]=='A'||a[i]=='a')
  a[i]='Z';
else
if(a[i]=='B'||a[i]=='b')
  a[i]='Y';
else
if(a[i]=='C'||a[i]=='c')
  a[i]='X';
else
if(a[i]=='D'||a[i]=='d')
  a[i]='W';
else
if(a[i]=='E'||a[i]=='e')
  a[i]='V';
else
if(a[i]=='F'||a[i]=='f')
  a[i]='U';
else
if(a[i]=='G'||a[i]=='g')
  a[i]='T';
else
if(a[i]=='H'||a[i]=='h')
  a[i]='S';
else
if(a[i]=='I'||a[i]=='i')
  a[i]='R';
else
if(a[i]=='J'||a[i]=='j')
  a[i]='Q';
else
if(a[i]=='K'||a[i]=='k')
  a[i]='P';
else
if(a[i]=='L'||a[i]=='l')
  a[i]='O';
else
if(a[i]=='M'||a[i]=='m')
  a[i]='N';
else
{
a[i]=a[i];
continue;
}

}
printf("the string is:");
 for(int i=0;i<30;++i)
 printf("%c",a[i]);

 return 0;
}
