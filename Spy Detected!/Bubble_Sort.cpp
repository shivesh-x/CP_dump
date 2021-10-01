// Bubble sort is the simplest sorting algorithm that works repeatedly swapping the adjacent elements if they are in wrong order.
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }    
}

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {5,1,9,2,6,4,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted Array"<<endl;
    printarray(arr, n);
    return 0;
}


// Time Complexity : O(n^2)
