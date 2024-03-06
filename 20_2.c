#include<stdio.h>
void swap(char *p, char *q);
int main()
{
    char str[20];
    char str1[20];
    printf("Enter the string: ");
    fgets(str,20,stdin);
    fgets(str1,20,stdin);
    swap(str,str1);
    printf("%s%s",str,str1);
    return 0;
}
void swap(char *p, char *q)
{
    char x;
    int i;
    for(i=0;i<20;i++)
    {
        x=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=x;
    }
    
}