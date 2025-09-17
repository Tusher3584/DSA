#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr, bool asc)
{
    int size = arr.size();

    for(int i = 0; i<size-1; i++){
        int min_or_max_index = i;
        for(int j=i+1; j<size; j++){
            if(asc){
                if(arr[j]<arr[min_or_max_index]){
                min_or_max_index = j;
                }
            }
            else{
                if(arr[j]>arr[min_or_max_index]){
                min_or_max_index = j;
            }
            }
        }
        swap(arr[min_or_max_index], arr[i]);
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
