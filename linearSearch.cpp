#include <iostream>
using namespace std;

int search(int arr[], int n, int X){

	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(arr[i]==X){
			return i;
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
	
		cout<<search(array, N, X)<<endl;
		}

	return 0;
}