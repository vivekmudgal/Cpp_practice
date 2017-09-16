#include <iostream>
using namespace std;

int search(int arr[], int l, int r, int X){

	while(l<=r){
		int mid = l+ (r-1)/2;

		if(arr[mid]== X){
		return mid;
		}

		if(arr[mid]< X){
		l=mid+1;
		}

		if(arr[mid]>X){
		r = mid	-1;
		}	
	}
	return -1;
}

int main(){
	//code
	cout << "Give number of test cases:";
	int test;

	cin >> test;
	cout << "Enter array size:";
	int N;
	cin >> N;
	int array[N];
	cout << "Enter array elements:";


	for (int i = 0; i < N; ++i)
	{
		/* code */
		cin >> array[i];
	}	

	for (int i = 0; i < test; ++i)
	{
		/* code */
		cout << "Enter a number to search:";
		int X;
		cin >> X;
	
		cout<<search(array,0 ,N-1, X)<<endl;
		}

	return 0;
}