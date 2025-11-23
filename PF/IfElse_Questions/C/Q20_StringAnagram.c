#include<stdio.h>
void main()
{
    // Declaring String
    char str1[100];
    char str2[100];
    // Reading Input for String
    printf("Enter the string 1 : ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the string 2 : ");
    fgets(str2,sizeof(str2),stdin);
    // Declaring Variables for Sum of characters
    int sum1=0;
    int sum2=0;
    // Calculating sum of ascii code of characters of str1
    for(int i=0;str1[i]!='\n';i++)
        sum1+=str1[i];
    // Calculating sum of ascii code of characters of str2
    for(int i=0;str2[i]!='\n';i++)
        sum2+=str2[i];
    // If sum1 is equal to sum2, strings are anagrams
    if(sum1==sum2)
        printf("These Strings are anagrams");
    // If sum1 is not equal to sum2, strings are not anagrams
    else
        printf("These Strings are not anagrams");
}