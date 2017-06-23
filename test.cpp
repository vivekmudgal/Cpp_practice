#include <iostream>
using namespace std;

int main(){
	//code
	cout << "Give number of test cases";
	int test;

	cin >> test;
	cout << "Enter array size:";
	int N;
	cin >> N;
	int array[N];
	cout << "Enter array elements";


	for (int i = 0; i < N; ++i)
	{
		/* code */
		cin >> array[i];
	}

	cout << "Enter a number to search:";
	int X;
	cin >> X;

	//search(array, N, X);
	
	
	return 0;
}