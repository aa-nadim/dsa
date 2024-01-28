# Quick Sort

Quick Sort [Visual Explanation] ===> `https://www.youtube.com/watch?v=WprjBK0p6rw&t=4s`

```
#include<iostream>
using namespace std;

int partitionOfArray(int arr[], int low, int high)
{
    int swapMaker = low - 1;
    int piVot_value = arr[high];

    for(int currentIndex=low; currentIndex <= high; currentIndex++){
        if(arr[currentIndex] <= piVot_value){
            swapMaker++;
            if(swapMaker < currentIndex)
                swap(arr[swapMaker], arr[currentIndex]);
        }
    }
    return swapMaker;
}
void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int piVot = partitionOfArray(arr, low, high);
        quickSort(arr,low,piVot-1);
        quickSort(arr,piVot+1,high);
    }
}
int main()
{
	int arr[] = {2, 1, 6, 10, 4, 1, 3, 9, 7};

	quickSort(arr,0,8);

    cout<<"Sorted array is :--------------------- "<<endl;

    for(int i=0;i<9;i++)
    	cout<<arr[i]<<" ";

    cout<<endl;
	return 0;
}

```