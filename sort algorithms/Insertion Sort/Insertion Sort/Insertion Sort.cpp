#include <iostream>
using namespace std;

int main()
{


	int arr[1000]; 
	int n; 
	cin >> n; 


	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 

	}


	int key, j;
	for (int i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " "; 
	}

	cout << "\n"; 

	system("pause"); 
	return 0; 
}

