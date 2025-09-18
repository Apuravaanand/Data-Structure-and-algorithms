#include <iostream>
#include <vector>
using namespace std;
int main(){

    int target = 9;

    vector<int> nums = {2,7,11,15};
    int n = nums.size();

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout<<nums[i] <<" + " <<nums[j]<<" = " << target;
            }
        }
    }
    return 0;
}