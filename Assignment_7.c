/*1
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if(a%3==0)
     {  
        if(a%2==0)
            printf("Divisible By 3 and 2 both");
        else
        printf("Divisible by 3");
    }
    else if(a%2==0)
        printf("Divisible by 2 Only");
    else
        printf("Non-Divisible by 3 or 2");
}*/

/*2
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%7==0)
    {
        if(a%3==0)
        printf("Divisible by 7 and 3 both\n");
        else
        printf("Divisible bY 7");
    }
    else if(a%3==0)
    {
        printf("Divisible by 3");
    }
    else
    printf("Non-Divisible By Both");
    
}*/

/*3
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0)
        printf("Positive\n");
    else if(a<0)
        printf("Negative");
    else
       printf("Zero");
}*/

/*4
int main()
{
    int year;
    printf("Enter a Year");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        printf("Leap Year");
        else
        printf("Not a Leap Year");
    }
    else if (year%4==0)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
}*/

/*5
int main()
{
    int a,b,c;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
      printf("%d is greater",a);
    else if(b>c)
    printf("%d is Greater",b);
    else
    printf("%d is Greater",c);
}*/

/*6
int main()
{
    char a;
    printf("Enter an alphabet");
    scanf("%c",&a);
    if(a>64&&a<91)
    {
        printf("Upper Case Alphabet");
    }
    else if(a>96&&a<123)
    {
        printf("Lowercase  Case Alphabet");
    }
    else
        printf("Not An alphabet");
}*/

/*7
#include<stdio.h>
int main()
{
    int f,b,s;
    printf("Enter First Side of the triangle ");
    scanf("%d",&f);
    printf("Enter base of the triangle ");
    scanf("%d",&b);
    printf("Enter Second Side of the triangle ");
    scanf("%d",&s);
    if(f+s>b)
    {
        printf("This Triangle is Valid");
    }
    else
        printf("Invalid Triangle");
}*/

/*8
int main()
{

    int m;
    printf("Enter a Month Number\n");
    scanf("%d",&m);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31 Days in this month");
        else if(m==4||m==6||m==9||m==11)
            printf("30 Days");
        else if(m==2)
            printf("28/29 Days");
        else
            printf("Invalid Number");
}*/

/*9
int main()
{
    double a,b,c,disc,real,imag,root1,root2;
    printf("Enter Coefficients a, b and c ");
    scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc>0){
      root1 = (-b + sqrt(disc))/(2*a);
      root2 = (-b - sqrt(disc))/(2*a);
      printf("Root1 = %.2lf and Root2 = %.2lf\n",root1,root2);
      printf("Roots are Real and Distinct");
    }
    else if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("Root1 = Root2 = %.2lf\n;",root1);
        printf("Roots are real and equal");
    }
    else{
        real = -b/(2*a);
        imag = sqrt(-disc)/(2*a);
        printf("Root1 = %.2lf+%.2lfi and Root2 = %.2lf-%.2lfi\n",real,imag);
         printf("Both Roots are real and imaginary");     
}
        return 0;
}*/

/*10
int main()
{
    int phy,che,bio,maths,com,total;
    float p;
    printf("Enter 5 Subjects Marks\n");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&maths,&com);
    total=phy+che+bio+maths+com;
    p=total/5.0;
    if(p>=90)
    printf("Grade A\n");
    else if(p>=80)
    printf("Grade B\n");
    else if(p>=70)
    printf("Grade c\n");
    else if(p>=60)
    printf("Grade D\n");
    else if(p>=40)
    printf("Grade E\n");
    else
    printf("Grade F\n");
    
}*/
