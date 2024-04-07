#include <iostream>
using namesapce std;

// 分区操作，将数组划分为小于基准元素和大于基准元素的两部分
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // 选择第一个元素作为基准元素
    int i = low;
    int j = high;
    
    while (i < j) {
        // 从右向左找到第一个小于基准元素的元素
        while (arr[j] > pivot) {
            j--;
        }
        // 从左向右找到第一个大于基准元素的元素
        while (arr[i] <= pivot && i < j) {
            i++;
        }
        // 交换这两个元素
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    // 将基准元素放到最终位置
    swap(&arr[low], &arr[j]);
    return j;
}

void quicksort(int *arr, int low, int high)
{
	if(low < high)
	{
		// 划分数组并获取基准元素的位置
        int pivot_index = partition(arr, low, high);
        // 递归地对基准元素左右两侧的子数组进行快速排序
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
	}
}

int mian(void)
{
	int array[] = {56,45,89,76,2};
	quicksort(array, 0, array.size() - 1);
	return 0;
}