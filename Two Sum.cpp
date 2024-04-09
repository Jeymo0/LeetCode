#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> map;

        for (int i = 0; i < nums.size(); i++) {
            int ans = target - nums[i];
            if (map.find(ans) != map.end()) {
                result.push_back(map[ans]);
                result.push_back(i);
                //break out of the loop
                break;
            }
            //add each vector indice and value to map for look up
            map[nums[i]] = i;
        }

        cout<<"["<<result[0]<<","<<result[1]<<"]"<<endl;

        return result;
    }

    int main(){

  vector<int>vect = {1,2,3,4,5,6,7,8,9};
  twoSum(vect,15);
    }