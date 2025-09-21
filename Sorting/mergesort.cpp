#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int mid, int right)
{
    int l1 = mid - left + 1;
    int l2 = right - mid;

    vector<int> leftarr(l1), rightarr(l2);

    for(int i=0; i<l1; i++){
        leftarr[i] = arr[left+i];
    }
    for(int i=0; i<l2; i++){
        rightarr[i] = arr[mid+1+i];
    }    

    int i = 0, j = 0, k = left;
    while(i<l1 && j<l2){
        if(leftarr[i]<rightarr[j]){
            arr[k++] = leftarr[i++];
        }
        else{
            arr[k++] = rightarr[j++];
        }
    }
    while(i<l1){
        arr[k++] = leftarr[i++];
    }
    while(j<l2){
        arr[k++] = rightarr[j++];
    }
}

void mergesort(vector<int> &arr, int left, int right)
{
    if(left>=right){
        return;
    }

    int mid = (left+right)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);

    merge(arr, left, mid, right);
}

int main()
{
    vector<int> arr = {3, 5, 1, 10, 8, 7, 2};
    int size = arr.size();

    mergesort(arr, 0, size-1);

    cout << "Sorted array: \n";
    for(int dummy:arr){
        cout << dummy << " ";
    }
    cout << endl;
}