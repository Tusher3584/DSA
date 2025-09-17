#include <iostream>
#include <vector>
using namespace std;

void insertionsort(vector<int> &arr, bool asc)
{
    int size = arr.size();
    if(asc){        
        for(int i=1; i<size; i++){
            int key=i;
            for(int j=i-1; j>=0; j--){
                if(arr[key]<arr[j]){
                    swap(arr[key], arr[j]);
                    key = j;
                }
            }
        }
    }
    else{        
        for(int i=1; i<size; i++){
            int key=i;
            for(int j=i-1; j>=0; j--){
                if(arr[key]>arr[j]){
                    swap(arr[key], arr[j]);
                    key = j;
                }
            }
        }
    }
}

int main()
{
    vector<int> arr = {3, 5, 1, 10, 8, 7, 2};
    bool asc = true;

    insertionsort(arr, asc);

    cout << "Sorted array: \n";
    for(int dummy: arr){
        cout << dummy << " ";
    }

    insertionsort(arr, false);

    cout << "\nSorted array: \n";
    for(int dummy: arr){
        cout << dummy << " ";
    }
    cout << endl;
}