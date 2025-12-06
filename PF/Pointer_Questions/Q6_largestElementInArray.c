#include<stdio.h>
void main()
{
    int size; // size of array
    printf("Enter size of array : ");
    scanf("%d",&size); // reading size of array
    int arr[size]; // declaring array
    int *p; // declaring pointer
    p=arr; // assignning address of arr[0] to pointer
    int largest=0; // initialising largest variable
    printf("Elements : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",p); // reading array using pointer
        if(*p>largest) // if value of *p is greater than largest
            largest=*p; // updating largest with value of *p
        p++; // updating pointer to next address using arithematic
    }
    printf("Largest is : %d",largest); // displaying largest
}