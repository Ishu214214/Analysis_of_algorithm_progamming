#include<stdio.h>
void swap(int *a ,int *b)
{
int temp =*a;
*a = *b;
*b=temp;

}

void bubbleSort(int arr[] ,int n)
{

int i,j;
for(i=0;i<n-1;i++)
{

for(j=0;j<n-i-1;j++)
{
if(arr[j] >arr[j+1])
{
swap(&arr[j] ,&arr[j+1]);
}
}

}

}

void printArray(int arr[] ,int size)
{
int i;
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
 }
printf("\n");


}

int main()
{
int arr[10];
int a1;
int n;
printf("enter the array");
for(a1=0; a1<10;a1++)
{
scanf("%d",&arr[a1]);
}
n =sizeof(arr) / sizeof(arr[0]);


bubbleShort(arr,n);
printf("shorted array \n");
printArray(arr,n);

return 0;

}







