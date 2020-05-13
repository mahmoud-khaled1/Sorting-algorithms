#include <iostream>
using namespace std;

int main()
{
	int arr[100];


	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int temp, min;
	for (int i = 0; i < 10; i++)
	{
		
		min = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;

			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;

	}


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

