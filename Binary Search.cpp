#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target){
    int left = 0;
    int right = nums.size()-1;

    while(left<=right){
        //avoid overflow
        int middle =  left + (right - left)/2;
        if(nums[middle] == target){
            return middle;
        }
        if(target>nums[middle]){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return -1;
}
int main() {
    vector<int>s = {1,2,3,4,5,6};
    vector<int>t = {-1,0,3,5,9,12};
    cout<<search(t, 9);

    return 0;
}
