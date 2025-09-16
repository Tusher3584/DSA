// sorting with bubble sort algorithm both ascendingly and descendingly

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, bool asc)
{
    int n = arr.size();
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(asc){        //sorting ascendingly
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
            else{       //sorting descendingly
                if(arr[j]<arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
            swapped = true;
        }
        if(!swapped){
            break;
        }
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bool asc = false;   //not needed if we want either asceding or descending
    bubbleSort(arr, asc);
    cout << "Sorted array: \n";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
}