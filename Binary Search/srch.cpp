#include <iostream>
#include <vector>
using namespace std;

void BinarySearch(int *arr,int n, int key){
    int s = 0;
    int e = n;
    
    int mid;
    while (s <= e){
        mid = (s + e)/2;
        if(arr[mid] == key){
            cout<<"Key found\n";
            return;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    cout<<"Key not found\n";

}

int main()
{
    int arr[] = {9,12,24,26,35,36,45,46,48,50,59,80,99};
    BinarySearch(arr,13,80);
   

    return 0;
}