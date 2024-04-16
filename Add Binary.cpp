#include <iostream>
#include<algorithm>

using namespace std;

string addBinary(string a, string b){
    string result;
    int i = a.length() - 1 , j = b.length() - 1;
    int carry = 0;
    while(i>=0||j>=0){
        int sum = carry;
        if(i>=0){
            //subtract the ASCII value of 0 from a[i]
            sum+= a[i--] - '0';
        }
        if(j>=0){
            sum+= b[j--] - '0';
        }
        carry = sum>1 ? 1:0;
        //Depending on the carry value add 1 or 0 to result
        result+= to_string(sum%2);
    }
    if(carry) result+='1';
    reverse(result.begin(),result.end());

 return result;
}

int main() {
    string a = "11";
    string b = "1";
   cout<<addBinary(a,b);
    return 0;
}
