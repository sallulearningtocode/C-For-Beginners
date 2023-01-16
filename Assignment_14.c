#include<stdio.h>

/*1
float circ(float r)
{
    return 3.14*r*r;
}*/

/*2
float si(float p, float r, float t)
{
    return (p*r*t)/100;
}*/

/*3
int iseven(int a)
{
    if(a%2==0)
    return 0;
    return 1;
 }*/

/*4
void nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}*/

/*5
 void nNumbers(int n)
{
    int i;
    while(i<=n)
    {
        printf("%d\n",i*2-1);
        i++;
    }
}*/

/*6
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    fact=fact*i;
    return fact;
}*/

/*9.
int lcm(int a, int b)
{
    int max=(a>b)?a:b;
    while(1)
    {
        if( max%a==0 && max%b==0)
            break;
        ++max;
    }
    return max;
}

int main()
{
    int a,b;
    printf("Enter two Numbers");
    scanf("%d%d",&a,&b);
    printf("%d",lcm(a,b));
    return 0;
}*/

/*10
int Hcf(int a, int b)
{
    int hcf,max=a>b?a:b;
    for(int i=2;i<=max/2;i++)
    {
        if(a%i==0&&b%i==0)
        {
          hcf=i;
        }
    }
    return hcf;
}

int main()
{
    int i,a,b,hcf=0,max;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("%d\n",Hcf(a,b));
}*/

/*11
int main()
{
    int a,i;
    printf("Enter a Number");
    scanf("%d",&a);
    for(i=2; i<=a/2; i++)
    {
        if(a%i!=0){
        printf("Prime Number");
        break;
        }
        else 
        {
            printf("Not Prime Number");
            break;
            }
    }
}*/

/*12
int nextPrime(int a)
{
    int count,k=0;
    while(1)
    {
        count=0;
        a++;
        for(int i=2;i<=a/2;i++)
   {
        if(a%i==0)
    {
        count++;
        break;
    }
    }
        if(count==0)
    {
        k++;
        break;
    }
    if(k!=0)
    break;
 }
 return a;
 }

int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    printf("%d",nextPrime(a));
}*/

/*13
void nPrime(int n)
{
    int s,t=0,i,a,count;
    for(s=1;n!=t;s++)
    {
        count=0;
        a=s;

        for(i=2;i<=a;i++)
   {
       if(a%i==0){
        count++;
        break;
    }
         if(count==0 && a!=1)
        {
            t++;
            printf("%d ",a);
            break;
        }
    }
 }
 }
int main()
{
    int n;
    scanf("%d",&n);
    nPrime(n);
}*/