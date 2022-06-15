#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binary(arr, l, mid - 1, x);


		return binary(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 1, 4, 5 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binary(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
