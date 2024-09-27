#include <iostream>
#define SIZE 10
int tmp[SIZE] = {0};
void MergeSort(int arr[], int low, int high)
{
    if(low >= high){return;}
    int mid = low + high >> 1;

    MergeSort(arr,low,mid), MergeSort(arr,mid + 1,high);

    int k = 0, i = low, j = mid + 1;
    while(i <= mid && j <= high)
    {
        tmp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    
    while(i <= mid)
    {
       tmp[k++] = arr[i++];
    } 
    while(j <= high)
    {
       tmp[k++] = arr[j++];
    }
     
    for (i = low, j = 0; i <= high; i++,  j++ ) arr[i] = tmp[j];
}




int main()
{
	int arr[SIZE] = {2,6,1,8,3,5,9,0,7,4};
	MergeSort(arr, 0, 9);

	for (const auto& a : arr)
	{
		printf("%d\t", a);
	}
	return 0x0;
}