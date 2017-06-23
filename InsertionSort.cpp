#include <iostream>
using namespace std;


void swap(int *xp, int *yp)
{
    
	
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<' ';
    cout<<endl;

}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    cout<<"Sorted Array"<<endl;

    printArray(arr, n);
    return 0;
}