#include <iostream>
#include <algorithm>
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) std::swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}

int main()
{
	int n;
	scanf("%d", &n);
	const int SIZE  = 2e6;
	int arr[SIZE];
	for (int i = 1; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}
	quick_sort(arr, 0, n - 1);
	for (const auto& a : arr)
	{
		printf("%d", a);
	}
	return 0x0;
}