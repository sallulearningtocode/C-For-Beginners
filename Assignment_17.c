#include<stdio.h>
#include<string.h>
/*1
int main()
{
    char a[10]="Salman";
    int i,count=0;
    for(i=0;a[i];i++)
    {
        printf("%c",a[i]);
        count++;
    }
    printf("\nLength of the String is %d",count);
    return 0;
}*/

/*2
#include<stdio.h>
int main()
{
    char b,s[]="saurabh";
    printf("Which Character you want to find in string\n");
    scanf("%c",&b);
    for(int i=0;s[i];i++)
    {
        if(b==s[i])
       { printf("Character found at %d position",i);
        break;
        }
    }
    return 0;
}*/

/*3
int main()
{
    char a[] = "INEURON";
    int vowels = 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            vowels++;
        }
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            vowels++;
        }
   }
    if (vowels > 0)
        printf("There are %d Vowels in the String", vowels);
    return 0;
}*/

/*4
int main()
{
    char a[4]="aman";
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>96){
        a[i]=a[i]-32;
        printf("%c",a[i]);
        }
    }    
    return 0;
}*/

/*5
int main()
{
    char a[4]="AMAN";
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]<96){
        a[i]=a[i]+32;
        printf("%c",a[i]);
        }
    }    
    return 0;
}*/

/*6
int main()
{
    char b[7],a[7]="Saurabh";
    int i,temp;
    for(i=0;i<=6;i++)
    {
        b[i]=a[6-i];
    }
    for(i=0;b[i];i++)
    printf("%c",b[i]);
    return 0;
}*/

/*7
#include<stdio.h>
int main()
{
    char str[]="JavascriptHackathon";
    printf("%d",len(str));
    return 0;
}
int len(char str[])
{
    int i,l;
    for(i=0;str[i];i++);
    return i;
}*/
   
/*8
#include<stdio.h>
int main()
{
    char a[4]="aman";
    rev(a,4);
    return 0;
}
void rev(char a[],int size)
{
    int i,temp;
    for(i=0;i<(size/2);i++)
    {
        temp=a[size-i-1];
        a[size-i-1]=a[i];
        a[i]=temp;
    }
    for(i=0;i<size;i++)
        printf("%c",a[i]);    
}
*/

/*9

#include<stdio.h>
int main()
{
    char a[20],b[20];
    printf("Enter First String\n");
    fgets(a,20,stdin);
    printf("Enter Second String\n");
    fgets(b,20,stdin);
    cmp(a,b);
    return 0;
}
int cmp(char a[],char b[])
{
    int i,count=0,length=0;
    for(i=0;a[i];i++)
    {
        if(a[i]==b[i])
        count++;
        length++;
    }
    if(count==length)
    printf("Both Strings are equal");
    else
    printf("Different Strings");
}*/

/*10
int main()
{
    char cities[6][20],temp[20];
    fflush(stdin);

    for(int i=0; i<6; i++)
     {
        fflush(stdin);
        fgets(cities[i],20,stdin);
     }
    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(strcmp(cities[j],cities[j+1])>0)
            {
                strcpy(temp,cities[j]);
                strcpy(cities[j],cities[j+1]);
                strcpy(cities[j+1],temp);
            }
        }
    }
    printf("\n");
     for(int i=0;i<6;i++)
     {
        printf("%s",cities[i]);
     }
}*/

