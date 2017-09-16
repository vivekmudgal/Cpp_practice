#include <bits/stdc++.h>
using namespace std;

void printarray(const vector<int> &a)
{
	cout << "The array is: ";
	for (int i = 0; i < a.size(); ++i)
	{	
		cout << a[i] << " ";
	}
	cout << endl;
}


vector<int> maxCrossingSubarray(const vector<int> &input, int low, int high)
{
	vector<int> output;
	int mid = low + (high-low)/2;
	int maxLeft = mid, maxRight = mid;

	int leftSum = -99999, rightSum = -99999;
	int sum = 0;

	for (int i = mid; i >= low; i--)
	{
		sum = sum + input[i];
		if (sum > leftSum)
		{
			leftSum = sum;
			maxLeft = i;
		}
	}

	sum = 0;

	for (int i = mid; i <= high; i++)
	{
		sum = sum + input[i];
		if (sum > rightSum)
		{
			rightSum = sum;
			maxRight = i;
		}
	}

	output.push_back(maxLeft);
	output.push_back(maxRight);
	output.push_back(leftSum + rightSum);

	return output;
}

vector<int> maxSubarray(const vector<int> input, int low, int high)
{
	vector<int> out;
	if (high == low)
	{
		out.push_back(low);
		out.push_back(high);
		out.push_back(input[low]);
	}

	else
	{
		int mid = low + (high - low)/2;

		vector<int> leftOut, rightOut, crossOut;

		leftOut = maxSubarray(input, low, mid);
		rightOut = maxSubarray(input, mid, high);
		crossOut = maxCrossingSubarray(input, low, high);

		if (leftOut[2] >= rightOut[2] && leftOut[2] >= crossOut[2])
			return leftOut;  
		else if (rightOut[2] >= leftOut[2] && rightOut[2] >= crossOut[2])
			return rightOut;
		else
			return crossOut;
	}	
}

int main()
{
	vector<int> a, out;
	int n;

	cout << "Array size: ";
	cin >> n;
	cout << "Enter the array elements: ";

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	out = maxCrossingSubarray(a, 0, n-1);
	printarray(out);
	
}

