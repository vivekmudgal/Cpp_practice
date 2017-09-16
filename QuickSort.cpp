#include <iostream>
using namespace std;


void swap(int *xp, int *yp)
{
    
	
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int l, int r)
{
   if(l<r)
   {
    int pi = partition(arr, l, r);

    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
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

    quickSort(arr, 0, n-1);

    cout<<"Sorted Array"<<endl;

    printArray(arr, n);
    return 0;
}