#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1001];
int lis[1001];    
int revLis[1001]; //reverse

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];



	for (int i = 0; i < n; i++)
		for (int j = i; j >= 0; j--)
			if (arr[j] < arr[i])
				lis[i] = max(lis[i], lis[j] + 1);


	for (int i = n-2; i >= 0; i--)
		for (int j = i; j < n; j++)
			if (arr[j] < arr[i])
				revLis[i] = max(revLis[i], revLis[j] + 1);

	int max = 0;
	for (int i = 0; i < n; i++)
		if (max < lis[i] + revLis[i])
			max = lis[i] + revLis[i];

	cout << max+1;

	return 0;
}