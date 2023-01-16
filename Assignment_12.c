#include<stdio.h>
/*1
int main()
{
    int prev=0,curr=0,next=1,n;
    printf("Enter a Number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        curr=prev+next;
        printf("%d ",curr);
        prev=next;
        next=curr;
    }
}*/

/*2
 int main()
{
    int i,a,b,hcf=0,max;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    for(i=2;i<=max/2;i++)
        if(a%i==0&&b%i==0)
          hcf=i;
    printf("%d\n",hcf);
}*/

/*3.4
int main()
{
    int i;char j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<4-i;j++)
            printf("%c",'A'+j);
        printf("\n");
    }
}*/

int main()
{
    int i,j;
    for(i=1;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
