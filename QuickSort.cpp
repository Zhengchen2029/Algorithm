#include <iostream>
#include <algorithm>
void QuickSort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) std::swap(q[i], q[j]);
    }
    QuickSort(q, l, j), QuickSort(q, j + 1, r);
}

int main()
{
	const int SIZE  = 10;
	int arr[SIZE] = {2,6,1,8,3,5,9,0,7,4};
	QuickSort(arr, 0, 9);
	for (const auto& a : arr)
	{
		printf("%d\t", a);
	}
	return 0x0;
}