#include<stdio.h>
void main(){
int n,i,key,found=0;
printf("enter number of elements:");
scanf("%d",&n);
int a[n];
printf("enter %d elements:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter element to search:\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
    if(a[i]-key==0)
    {
        printf("element found at %d position:\n",i+1);
        found=1;
        break;
    }
}
if(!found)
    printf("element not found!!\n");
getch();
}
