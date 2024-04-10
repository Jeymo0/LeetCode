#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k){
    int result;
    priority_queue<int>q;

    //max queue
    //priority_queue<int> q (nums.begin(),nums.end());

    for(auto i: nums){
        q.push(i);
    }


    for(int i=0; i<k; i++){
       result = q.top();
       q.pop();
    }
    return result;
}

int main() {
  vector<int> nums = {3,2,1,5,6,4};
  cout<<findKthLargest(nums,2);
    return 0;
}
