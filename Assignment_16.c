#include<stdio.h>
/*1
int main()
{
    int arr[10],s=0,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        s=s+arr[i];
    }
     printf("%d",s);
}*/

/*2
int main()
{
    int arr[10],s=0,i;
    float avg;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        s=s+arr[i];
    }
    avg=(s/i);
    printf("Average is %2f",avg);
}*/

/*3
int main()
{
    int arr[10],so=0,se=0,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
    {
        if(arr[i]%2==0)
        {
            se=se+arr[i];
        }
        else
        {
            so=so+arr[i];
        }
    }
    printf("Sum of Eve Numbers in the array %d\n Sum of all Odd Numbers in The Array %d",se,so);
}*/

/*4
int main()
{
    int arr[10],g,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    g=arr[0];
    for(i=1;i<=9 ;i++)
    {
        if(g<arr[i])
        g=arr[i];
    }
    printf("%d",g);
}*/

/*5
int main()
{
    int arr[10],g,i;
    printf("Enter Values\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    g=arr[0];
    for(i=1;i<=9 ;i++)
    {
        if(g>arr[i])
        g=arr[i];
    }
    printf("%d",g);
}*/

/*6
 int greatest(int a[],int s)
    {
        int i,g;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        g=a[0];
        for(i=0;i<s;i++)
        {
            if(g<a[i])
            g=a[i];
        }
        return g;
    }*/

/*7
int smallest(int a[],int s)
    {
        int i,sm;
        printf("Enter Values in the Array");
        for(i=0;i<s;i++)
        {
            scanf("%d",&a[i]);
        }
        sm=a[0];
        for(i=0;i<s;i++)
        {
            if(sm>a[i])
            sm=a[i];
        }
        return sm;
    }*/

/*8
int* sort(int[],int);
int main()
{
    int a[10];
    int *p;
    p=sort(a,10);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",(*(p+i)));
    }
}
int* sort(int a[],int s)
{
    int i,j,temp;
    printf("Enter values in Array");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;

}

/*Function to Rotate Array in a Given Direction.
void rotate();
int main()
{
    int a[5];
    rotate(a,5);
}

void rotate(int a[],int s)
{

    int temp,n;
    printf("Enter Values\n");
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    } 
    printf("How many times You Want array to Rotate towards left\n");
    scanf("%d",&n);
 for(int j=1; j<=n; j++)
 { 
    temp=a[0];   
    for(int i=0; i<=4; i++)
    {
        a[i]=a[i+1];
    }
        a[4]=temp;
 }  
     for(int i=0; i<=4; i++)
    {
        printf("Value at %d index %d\n",i,a[i]);
    }
}*/

/*9
int* sort(int[],int);
int main()
{
    int n;
    scanf("%d,&n");
    int a[n],*p;
    p=sort(a,n);
    for (size_t i = 0; i < n; i++)
        printf("%d ",(*(p+i)));
}
int* sort(int a[],int s)
{
    int i,j,temp;
    printf("Enter values in Array");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}*/

/*10
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Sum of Matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]+b[j][i]);
        printf("\n");
   }
}*/

/*11
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter Values For First Array\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&a[j][i]);
    }
    }
    printf("Enter Values For Second Array\n");
    for ( j = 0; j <= 2; j++)
    {
        for(i=0;i<=2;i++)
    {
        scanf("%d",&b[j][i]);
    }
    }
    
    printf("Product of Two matrices is...\n");
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=2;i++)
        printf("%d ",a[j][i]*b[j][i]);
        printf("\n");
   }
}*/

/*12
int main()
{
    int rows,columns;
    scanf("%d %d",&rows,&columns);
 
    int a[rows][columns];
    for(int i=0;i<rows;i++)
        for(int j=0;j<columns;j++)
            scanf("%d",&a[i][j]);

        printf("\n");

        for(int i=0;i<columns;i++)
        {
            for(int j=0;j<rows;j++)
            printf("%2d ",a[j][i]);
            printf("\n");
        }
}*/