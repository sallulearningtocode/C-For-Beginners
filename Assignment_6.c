#include<stdio.h>
/*1
int main()
{
    int a;
    char b;
    float c;
    double d;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
}*/

/*2
    int main()
    {
        int a;
        printf("Enter a Number\n");
        scanf("%d",&a);
        printf("Unit Digit is %d",(a%10));
}*/

/*3
    int main()
    {      int a;
        printf("Enter a Number\n");
        scanf("%d",&a);
        a=(a/10)/10;
        printf("last Digit is %d",a);

}*/

/*4
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",(a/10)%10);
}*/

/*5
int main()
{
    int a,b,c;
    printf("Enter Two Values");
    scanf("%d%d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping %d %d\n",a,b);

}*/

/*6
int main()
{
    int a,b;
    printf("Enter Two Values");
    scanf("%d%d",&a,&b);
    printf("Before Swapping %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping %d %d\n",a,b);

}*/

/*7
int main()
{
    int a,r;
    scanf("%d",&a);
    r=a%10;
    a=a/10;
    r=r*0;
    printf("%d%d",a,r);
}*/

/*8
input a digit. Append a digit in the number and print the resulting number.
int main()
{
    int a,d;
    printf("Enter a Number");
    scanf("%d",&a);
    printf("Enter a Digit");
    scanf("%d",&d);
    a=a*10;
    a=a+d;
    printf("%d",a);

}*/

/*9
int main()
{
    float dol,rup;
    printf("Enter in Rupees");
    scanf("%f",&rup);
    printf("%f Dollar",rup*(1/76.23));
}*/

/*10
rotate its digit by one position towards the right. 
int main()
{
    int a,r,q;
    printf("Enter a Number");
    scanf("%d",&a);
    r=a%10;
    q=a/10;
    a=r*100+q;
    printf("Reverse Number %d",a);
}*/
