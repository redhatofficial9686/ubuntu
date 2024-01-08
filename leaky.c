#include<stdio.h>
#include<stdlib.h>
int arr[10], size[10];
int main()
{
int c1=0,s,rem=0,n,i,j,rate;
printf("Enter no of packets : ");
scanf("%d",&n);
printf("Enter the arrival time : ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter size of packets ");
for(j=0;j<n;j++)
scanf("%d",&size[arr[j]]);
printf("Enter the size of leaky bucket ");
scanf("%d",&s);
printf("Enter the output rate ");
scanf("%d",&rate);
for(i=0; c1<n || rem!=0; i++)
{
printf("\n\n time=%d ",i);
if(size[i]!=0)
c1++;
if(size[i]>s)
{
printf("packet %d dropped ",c1);
}
else if((size[i]+rem)>s)
printf("\npacket %d is droped ",c1);
else
rem=rem+size[i];//remainder is incremented
if(rem<rate)
printf("\nBytes transmitted =%d\n",rem);
else
printf("\nBytes transmitted =%d\n",rate);
rem=rem-rate;
if(rem<=0)
rem=0;
else
printf("\nBytes still to be transmitted=%d",rem);
}
return 0;
}
