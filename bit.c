
#include<stdio.h>
#include<string.h>
int main()
{
char data[50],stuff[50],final[100],
flag[]="0111110";
int i,len,j=0,cnt=0;
printf("enter binary data\n");
scanf("%s",&data);
len=strlen(data);
for(i=0;i<len;i++)
{
if(data[i]=='1')
{
cnt++;
}
else
{
cnt=0;
}
stuff[j]=data[i];
j++;
if(cnt==5 && data[i+1]=='1')
{
stuff[j]='0';
j++;
cnt=0;
}
}
strcpy(final,flag);
strcat(final,stuff);
strcat(final,flag);
printf("Stuffed data is %s ",final);
return 0;
}
