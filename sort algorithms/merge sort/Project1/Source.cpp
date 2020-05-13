//#define _CRT_SECURE_NO_WARNINGS
//#include "pch.h"
#include <iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<math.h>
#include<set>
#include<map>
#include<deque>
#include<queue>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <cstdlib>
#include <ctime>
#include <functional>
#include<stdio.h>
#include<bitset>
#include<queue>
#include<deque>
#include<stack>
using namespace std;
#define  ll long long
#define  ull unsigned long long
#define  ul unsigned long
#define  Mahmoud fast();

#define mod 1000000007
#define ex(n) return cout<<n<<finl,0;

void fast() {

	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

#ifdef ONLINE_JUDGE
	//freopen("alice.in ", "r", stdin);

	//freopen("little.out", "w", stdout);
#endif
#ifndef ONLINE_JUDGE
	//freopen("input.in", "r", stdin);

	// freopen("output.out", "w", stdout);
#endif
}






ll ConvertToInt(string s)
{

	stringstream geek(s);
	ll x = 0;
	geek >> x;

	return x;

}


bool CheckConsecutive(ll num)
{

	double dou = log2(num);

	int ans = dou;

	if (ans == dou)
		return true;
	else
		return false;
}

string ConverToString(ll n)
{
	string Result;

	stringstream convert;

	convert << n;

	Result = convert.str();

	return Result;


}
void sort(int *arr,int  s,int  e)
{
	int mid = (s + e) / 2;

	int i = s; 
	int j = mid + 1; 
	int k = s; 
	int temp[100]; 


	while (i <= mid && j <= e)
	{
		if (arr[i] < arr[j]) {
			temp[k++] = arr[i++];
			
		}
		else {
			temp[k++] = arr[j++];

		}

		
	}

	while (i <= mid)
	{
		temp[k++] = arr[i++];
	}

	while (j <= e)
	{
		temp[k++] = arr[j++]; 
	}

	for (int i = s; i <= e; i++)
	{
		arr[i] = temp[i];
	}



}
void mergesort(int *arr, int s, int e)
{
	if (s >= e)
	      return; 

	int mid = (s + e) / 2;


	mergesort(arr, s, mid); 

	mergesort(arr, mid + 1, e);


	sort(arr, s, e);

}

// You can do it ^_^
ll arr1[1000000], arr2[1000000];
const ll md = 1e9 + 7;
const double PI = 3.141592654;

int fre[100000];

int main()

{

	//freopen("notshort.in", "r", stdin);

	Mahmoud


	int arr[10000]; 

	int n; 
	cin >> n; 

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}

	mergesort(arr, 0, n - 1);

	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " "; 

	}
	cout << endl; 
	




		system("pause");
	return 0;
}
