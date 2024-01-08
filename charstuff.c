#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,n;
char a[20],b[50],ch;
printf("enter string\n");
scanf("%s",&a);
n=strlen(a);
strcpy(b,"dlestx");
j=6;
while(i<n)
{
if( a[i]=='d'&& a[i+1]=='l'&& a[i+2]=='e')
{
b[j]='d';
b[j+1]='l';
b[j+2]='e';
j=j+3;
}
b[j]=a[i];
i++;
j++;
}
strcat(b,"dleetx");
printf("\nframe after stuffing:\n");
printf("%s",b);
return 0;
}
