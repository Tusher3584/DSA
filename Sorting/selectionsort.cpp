#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr, bool asc)
{
    int size = arr.size();

    if(asc){                //will proceed here if want it to be ascending
        for(int i = 0; i<size-1; i++){
            int pivot_index = i;
            for(int j=i+1; j<size; j++){
                if(arr[j]<arr[pivot_index]){
                    pivot_index = j;
                }    
            }
            swap(arr[pivot_index], arr[i]);
        }
    }
    else{                      // will proceed here if we want it to be descending
        for(int i = 0; i<size-1; i++){
            int pivot_index = i;
            for(int j=i+1; j<size; j++){
                if(arr[j]>arr[pivot_index]){
                    pivot_index = j;
                }    
            }
            swap(arr[pivot_index], arr[i]);
        }
    }        
}

int main()
{
    vector<int> arr = {3, 5, 1, 10, 8, 7, 2};
    bool asc = false;

    selectionsort(arr, asc);

    cout << "Sorted array: \n";
    for(int dummy: arr){
        cout << dummy << " ";
    }
    cout << endl;
}
