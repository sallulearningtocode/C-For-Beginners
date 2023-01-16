#include<stdio.h>
/*1
void swap(int *a, int *b)
{   
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d b = %d",a,b);
    return 0;
}*/

/*2
int main()
{
    int s;
    char a[20],b[20],c[20];
    printf("Enter Your First Name\n");
    fgets(a,20,stdin);
    printf("Enter Your Last Name\n");
    fgets(b,20,stdin);
    s=strlen(a);
    if(swap(a,b,s))
    printf("\n%s\n%s",a,b);
}

//Method 1
void swap(char *a,char *b)
{
    char c[20];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("\n%s\n%s",a,b);
    return 1;
}
//Method 2
 int swap(char *a,char *b,int s)
{
    char *c;
    int i;
    for(i=0;i<s;i++)
    {
        *(c+i)=*(a+i);
        *(a+i)=*(b+i);
        *(b+i)=*(c+i);
    }
    return 1;
}*/

/*3
void sort(int *,int s);
int main()
{
    int a[12]={0,40,15,78,2,3,45,1,4,9,55,20};
    sort(a,12);
}
void sort(int *a,int s)
{
    int i,j,t;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s-1;j++)
        if(a[i]<a[j])
        {
            t=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=t;
        }
    }
        for(i=0;i<s;i++)
        printf("%d ",a[i]);
}*/

/*4
int main()
{
    int v=0,c=0;
    char str[]={'a','w','q','s','e','d','r','t','f','g','y','i','n','h','b','v','c','x','z','o','p','e','r','t','y','u','i','o','p'};
    count(str,&v,&c);
    printf("Vowels are %d and Consonants are %d",v,c);
    return 0;
}

void count(char *str,int *v,int *c)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        if((*(str+i)=='a')||(*(str+i)=='e')||(*(str+i)=='i')||(*(str+i)=='o')||(*(str+i)=='u'))
        *v=*v+1;
        else
        *c=*c+1;
    }
}*/

/*5
int sum(int *,int);
int main()
{
    int a[7]={20,41,12,3,4,5,6};
    printf("%d",sum(a,7));
    return 0;
}
int sum(int *a,int s)
{
    int i,sum=0;
    for(i=0;i<s;i++)
        sum=sum+*(a+i);
        return sum;
}*/

/*6
int main()
{
    int a[8]={10,20,30,40,50,60,70,80};
    rev(a,8);
    return 0;
}
 void rev(int *a,int s)
 {
    int i,j,t;
    for(i=0;i<s-4;i++)
    {
        t=*(a+s-1-i);
        *(a+s-1-i)=*(a+i);
        *(a+i)=t;
    }
    for(i=0;i<s;i++)
    printf("%d ",a[i]);
 }*/

/*7
int main()
{
    char str[]="Salman";
    rev(str,6);
    return 0;
}
void rev(char *str,int s)
{
    int i;
    for(i=s-1;i<s;i--)
    {
        printf("%c",*(str+i));
        if(*(str+i)==*(str+0))
        break;
    }
}*/