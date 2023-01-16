#include<stdio.h>
/*1
void printN(int);
int main()
{
printN(6);
}
void  printN(int n)
{
if(n>=0)
printN(n-1);
printf("%d\n",n);
}*/

/*2
void printn(int n);
int main()
{
printn(10);
}

void printn(int n)
{
if(n>=1)
printf("%d\n",n);
printn(n-1);
}*/

/*3

void printodd(int);
int main()
{
printodd(10);
}

void printodd(int n)
{  
if(n>1)
printodd(n-1);
printf("%d",2*n-1);
}*/

/*4

void printodd(int);
int main()
{
printodd(10);
}

void printodd(int n)
{  
if(n>=1)
printf("%d\n",2*n-1);
printodd(n-1);
}*/

/*5

void printodd(int);
int main()
{
printodd(10);
}

void printodd(int n)
{  
if(n>1)
printodd(n-1);
printf("%d\n",2*n);
}*/

/*6

void printodd(int);
int main()
{
printodd(10);
}

void printodd(int n)
{  
if(n>=1)
printf("%d\n",2*n);
printodd(n-1);
}*/

/*7
void printodd(int);
int main()
{
printodd(10);
}

void printodd(int n)
{  
if(n>1)
printodd(n-1);
printf("%d ",n*n);
}*/

/*8
int sumN(int n)
{
int sum=0;
if(n==1)
return 1;
sum=n+sumN(n-1);
return sum;
}
int main()
{
printf("%d",sumN(100));

}*/

/*9
int sumNodd(int n)
{
int sum=0;
if(n==1)
return 1;
if(n%2!=0)
{
    sum=n+sumNodd(n-1);
    return sum;
}
else
sumNodd(n-1);
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",sumNodd(n));
}*/

/*10
int sumNEven(int n)
{
int sum=0;
if(n==2)
return 2;
else
{
    sum=n+sumNEven(n-2);
    return sum;
}
}
int main()
{
int n;
scanf("%d",&n);
printf("%d",sumNEven(n*2));
}*/

/*11
int square(int n)
{
if(n==1)
return 1;
return (n*n+square(n-1));
}
int main()
{
printf("%d",square(10));
}*/

/*12
int sumdigit(int n)
{
int sum=0;
if(n==0)
return 0;
return n%10+sumdigit(n/10);
}
int main()
{
printf("%d",sumdigit(173));
}*/

/*13
int fact(int n)
{
if(n==0)
return 1;
return n*fact(n-1);
}
int main()
{
printf("%d",fact(6));
}*/

/*14
int nfib(int n)
{
    static int a=-1,b=1,c;
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        nfib(n-1);
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",nfib(n));
    return 0;
}*/
