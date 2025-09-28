#include<iostream>
#include<vector>

using namespace std;
void merge(int *arr, int st, int mid, int ed){

    vector<int> temp;
    int i = st;
    int j = mid + 1;


    while (i <= mid && j <= ed){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j++]);
        }        
    }

    while (i <= mid){
        temp.push_back(arr[i++]);
        
    }
    while (j <= ed){
        temp.push_back(arr[j++]);
        
    }

    for(int idx = st, i = 0; idx <= ed; idx++){
        arr[idx] = temp[i++];
    }

}
    

void MergeSort(int *arr, int st, int ed){
    //Base Case
    if(st >= ed){
        return;
    }

    int mid = (st + ed) / 2;
    MergeSort(arr,st,mid);
    MergeSort(arr,mid + 1,ed);

    merge(arr, st, mid, ed);
}



int main(){
    int arr[] = {2,4,3,1,6,5};

    int n = 6;
    int m = sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < m; i++){
        cout<< arr[i] <<" ";
    }
    

    return 0;
}