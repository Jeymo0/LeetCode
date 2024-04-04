#include <iostream>
#include<unordered_map>

using namespace std;

bool isAnagram(string s,string t){
    unordered_map<char,int> map;

    for(auto &i:map){
        map[i]++;
    }

    for(auto &j:t){
        if(map.find(j) == map.end()||map[j] == 0){
            return false;
        }
        map[j]--;
    }

    return true;
}

int main(){

    cout<<isAnagram("anagram","nagaram");

}