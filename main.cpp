#include <iostream>
using namesapce std;

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
	sort(array, sizeof(array) / sizeof(array[0]));
	return 0;
}