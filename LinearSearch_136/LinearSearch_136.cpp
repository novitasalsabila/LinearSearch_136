#include <iostream>
using namespace std;

int arr[20];	//Array to be searted
int n;	//Number of element in array
int i;	//Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array :";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maxsimum 20 element.\n\n";
	};
	//Accept array elements
	cout << "\n----------------------\n";
	cout << "Enter array elements \n";
	cout << "\n----------------------\n";
	for (i = 0;i < n;i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
void linearSearch()
{
	char ch;
	int ctr;



