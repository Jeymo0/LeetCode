#include <iostream>
#include <vector>

using namespace std;

int searchTest(vector<int>&nums, int target){
    int n = nums.size();
    int distance = nums[0] - target;

    if(nums[0]>target){
        int check = nums[n-distance+1];
        if(check == target){
            return n-distance+1;
        }
    }
    if(nums[0]<target){
        int check = nums[0-distance];
        if(check == target){
            return 0-distance;
        }
    }
    if(n == 1 && nums[0] == target){
        return 0;
    }

    return -1;

}

//binary search
int search(vector<int>&nums, int target){
    int left = 0, right = nums.size()-1;

    while(left<=right){
        //avoid overflow
        int middle = left+ (right - left)/2;
        if(nums[middle] == target){
            return middle;
        }

        if(nums[middle]>=nums[left]){
            //left half is sorted
            if(target>=nums[left] && target<nums[middle]){
                right = middle - 1;

            }else{
                left = middle + 1;
            }
        }else{
            //right half is sorted
            if(target>nums[middle] && target<= nums[right]){
                left= middle +1;
            }else{
                right = middle -1;
            }
        }
    }

    return -1;
}
int main() {
   vector<int>vect = {6,7,1,2,3,4,5};

   cout<<search(vect,7);
    return 0;
}
