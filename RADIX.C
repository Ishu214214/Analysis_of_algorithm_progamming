#include<stdio.h>

void print(int A[] ,int a)
{
int i;
for (i=0;i<a;i++)
{
printf("%f\n",A[i]);
}

}

void bubble(int A[], int a)
{
int j ,i, temp;

 for(i=0;i<a;i++)

 {
  for(j=i+1;j<a;j++)

  {
   if(A[j]<A[i])
   {
   temp =A[i];
   A[i]=A[j];
   A[j]=temp;

   }
  }

 }
 }



int main()
{

int i,j,n,a,w[10],p[10];
float A[10];
printf("enter sack capicity \n");
scanf("%d",&n);
printf("enter object no\n");
scanf("%d" ,&a);
printf("enter the weight and profit\n");
for( i=0;i<a;i++)
{
printf("enter weight\n" );
scanf("%d", &w[i]);
printf("enter profit\n");
scanf("%d",&p[i]);

}



for(i=0;i<a;i++)
{
A[i] = p[i]/w[i];

}
printf("the average is\n");
for(i=0;i<a;i++)
{
printf("%f\n",A[i]);

}

bubble(A,a);

print(A,a);

return 0;
}