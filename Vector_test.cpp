#include <bits/stdc++.h>

using namespace std;

void print_vect(vector<string> &v)
{
	for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}
  
}

int main()
{
	vector<string> store_string;

	while(1)
	{
		string word;
		cout << "Insert string: ";
		cin >> word;
		if(word=="xxxx")
			{
				print_vect(store_string);
				break;
			}
		else
			store_string.push_back(word);
	}


}