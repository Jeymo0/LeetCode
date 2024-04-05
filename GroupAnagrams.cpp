#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string,vector<string>>map;

    for(auto s:strs){
        string word = s;
        //sorting the string
        sort(word.begin(),word.end());
        //pushing back the anagram version of the string
        map[word].push_back(s);

    }
    for(auto x: map){
        result.push_back(x.second);
    }

    return result;
}

int main() {
    string s = "abc";

    vector<string> test = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> out =groupAnagrams(test);

    for(auto x:out){

    }
    return 0;
}
