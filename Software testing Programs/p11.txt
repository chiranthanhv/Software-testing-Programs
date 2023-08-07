#include <stdio.h>
void swap ( int* a, int* b )
{
int t = *a;
*a = *b;
*b = t;
}
int partition (int arr[], int l, int h)
{
int x = arr[h];
int i = (l - 1),j;
for (j = l; j <= h- 1; j++)
{
if (arr[j] <= x)
{
i++;
swap (&arr[i], &arr[j]);
}
}
swap (&arr[i + 1], &arr[h]);
return (i + 1);
}
void quickSortIterative (int arr[], int l, int h)
{
int stack[10],p;
int top = -1;
stack[ ++top ] = l;
stack[ ++top ] = h;
while ( top >= 0 )
{
h = stack[ top-- ];
l = stack[ top-- ];
p = partition( arr, l, h );
if ( p-1 > l )
{
stack[ ++top ] = l;
stack[ ++top ] = p - 1;
}
if ( p+1 < h )
{
stack[ ++top ] = p + 1;
stack[ ++top ] = h;
}
}
}
int main()
{
int arr[20],n,i;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
quickSortIterative( arr, 0, n - 1 );
printf("Elements of the array are; \n");
for(i=0;i<n;i++)
printf("%d \n",arr[i]);
return 0;
}