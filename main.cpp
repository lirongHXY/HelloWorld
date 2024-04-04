#include <iostream>
using namesapce std;

void sort(int *arr, int size)
{
	for(int i = 0; i < size -1; ++i)
	{
		bool isSwap = false;
		for(int j = 0; j < size -1 - i; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				int itemp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = itemp;
				isSwap = true;
			}
		}
		if(!isSwap)
		{
			return;
		}
	}
}

int mian(void)
{
	int array[] = {56,45,89,76,2};
	sort(array, sizeof(array) / sizeof(array[0]));
	return 0;
}