#include<stdio.h>
#include<string.h>
#define N strlen(g)
char t[28],cs[28],g[]="10010";
int a,i,j;
void xor1()
{
for(j = 1;j < N; j++)
cs[j] = (( cs[j] == g[j])?'0':'1');
}
void crc()
{
for(i=0;i<N;i++)
cs[i]=t[i];
do
{
if(cs[0]=='1')
xor1();
for(j=0;j<N-1;j++)
cs[j]=cs[j+1];
cs[j]=t[i++];
}
while(i<=a+N-1);
}
int main()
{
printf("\nEnter data : ");
scanf("%s",t);
printf("\n ");
printf("\nGeneratng polynomial : %s",g);
a=strlen(t);
for(i=a;i<a+N-1;i++)
t[i]='0';
printf("\n ");
printf("\nModified data is : %s",t);
printf("\n ");
crc();
printf("\nChecksum is : %s",cs);
for(i=a;i<a+N-1;i++)
t[i]=cs[i-a];
printf("\n ");
printf("\nFinalcodeword is : %s",t);
printf("\n ");
printf("\nEnter received message ");
scanf("%s",t);
crc();
for(i=0;(i<N-1) && (cs[i]!='1');i++);
if(i<N-1)
printf("\nError detected\n\n");
else
printf("\nNo error detected\n\n");
printf("\n \n");
return 0;
}
--
