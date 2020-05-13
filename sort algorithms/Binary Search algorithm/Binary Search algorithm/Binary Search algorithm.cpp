#include<iostream>
#include <stdio.h>
#include<cmath>
#include<vector>
#include<bitset>
#include<algorithm>
using namespace std;

bool BS(int* arr, int s, int target)
{
	int mid;
	int st = 0;
	int end = s - 1;

	while (st <= end)
	{
		mid = st + (end - st) / 2;

		if (target > arr[mid])
		{
			st = mid + 1;
		}
		else if (target < arr[mid])
		{
			end = mid - 1;
		}
		else
		{
			return true;
		}
	}

	return false;
}

int main() {

	int n, arr[1000], t;
	cin >> n >> t;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);


	if (BS(arr, n, t))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;


	return 0;
}

