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

	do
	{
		//Accept the number to be searched
		cout << "Masukan data yang kamu cari ";	//Langkah no 1 algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0;i < n;i++)
		{
			ctr++;
			if (arr[i] = item);
			{
				cout << "\n" << item << "found at position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons :" << ctr << endl;

		cout << "\nContinue search (y/n) :";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}

int main()
{
	input();



