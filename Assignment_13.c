#include<stdio.h>
/*1.
#include<stdio.h>
int main()
{
    int x;
        printf("Enter a Number");
        scanf("%d",&x);
        switch(x)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            printf("31 Days");
            break;
            case 4:case 6:case 9:case 11:
            printf("30 Days");
            break;
            case 2:
            printf("28/29 Days");
            break;
            default:
            printf("Invalide Choice");
            break;
            if(x==0)
            return 0;
        }
    }*/

/*2
#include<stdio.h>
int main()
{
    int x,a,b;
    while(1){
    printf("Enter Your Choice\n");
    printf("Press 1 to Addition\n");
    printf("Press 2 to Subtraction\n");
    printf("Press 3 to Multiplication\n");
    printf("Press 4 to Quotient\n");
    printf("Press 5 to Remainder\n");
    printf("Press 0 to Exit...\n");
    scanf("%d",&x);
    if(x==0)
    break;
    switch(x)
    {
    case 1:
    printf("Enter two Numbers");
    scanf("%d %d",&a,&b);
    printf("Sum is %d\n",a+b);
    break;
    case 2:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Difference is %d\n",a-b);
    break;
    case 3:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Product is %d\n",a*b);
    break;
    case 4:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Quotient is is %d\n",a/b);
    break;
    case 5:
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    printf("Remainder is %d\n",a%b);
    break;
    default:
    printf("Invalid Choice, Choose Between 1-5");
   }
 }
}*/

/*3
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day Number");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Sunday-Funday");
        break;
        case 2:
        printf("Monday-Motivation");
        break;
        case 3:
        printf("Tuesday-WarmUP");
        break;
        case 4:
        printf("Wednesday-WaistDay");
        break;
        case 5:
        printf("Thursday-BicepsDay");
        break;
        case 6:
        printf("Friday-ThighDay");
        break;
        case 7:
        printf("Saturday-ChestDay");
        break;
        default:
        printf("Invalid");
    }
}*/

/*4
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x;
        while(1)
        {
            printf("Enter 1 to Check triangle is equilateral or not\n");
            printf("Enter 2 to Check triangle is Isoceles or not\n");
            printf("Enter 3 to Check triangle is Right-Angled Triangle or not\n");
            printf("Press 4 to exit\n");
            scanf("%d",&x);

            printf("Enter sides of triangle");
            scanf("%d%d%d",&a,&b,&c);
        switch(x)
        {
            
            case 1:
            if(a==b&&b==c&&c==a)
            {
                printf("Equilateral Triangle\n");
            }
            else
            printf("Not Equilateral Triangle\n");
            break;
            case 2:
            if(a==b&&b!=c||b==c&&b!=a||c==a&&c!=b)
            {
                printf("Isoceles Triangle\n");
            }
            else
            printf("Not an Isoceles Triangle\n");
            break;
            case 3:
            if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
            {
                 printf("Right-Angled Triangle\n");
            }            
            else
            printf("Not a Right angled Triangle\n");
            break;

            case 4:
                exit(0);
        }
    }
}*/
