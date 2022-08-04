#include <stdio.h>
int BinarySearch(int array[], int l, int r, int element){
   while (l <=r){
        int comp=0;
    comp++;
      int m = l + (r- l )/2;
      if (array[m] == element)
         return m;
      if (array[m] < element)
         l = m + 1;
      else
         r = m - 1;
         printf("comparison %d\n", comp);
   }
   return -1;
}
int main()
{
    int n,j,element;
    printf("enter the no. of elements in the array");
    scanf("%d", &n);
   int array[n];
   for(j=0;j<n;j++)
   {
       scanf("%d", &array[j]);
   }
   printf("enter the searching element");
   scanf("%d", &element);
   int index = BinarySearch(array, 0, n-1, element);
   if(index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d", index);
   }
   return 0;
}
