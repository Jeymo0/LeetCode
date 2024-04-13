#include <iostream>

using namespace std;

int myatoi2(string s){
    const char * string = s.c_str();
    const char* nospace[200];
    int result = 0;
    int count = 0;
    //sizeof gives the length of the array but c strings contain null pointer

    for(int i=0; string[i]!= '\0'; i++){
        if(string[i] != ' '&& isdigit(string[i])){
                nospace[count] = &string[i];
                count++;
            }
        else if(string[i] == '+'||string[i] == '-'||string[i] == '.'){
            nospace[count] = &string[i];
            count++;
        }


    }
        nospace[count] = nullptr;
        int j = 0;
        while(nospace[j]!= nullptr){
            //dereference char pointer array to access data memory
        cout<<*nospace[j];
        j++;
    }


    return result;
}

int myatoi(string s){
    int result = 0;
    int sign = 1;
    //usigned integer
    size_t i = 0;

    //white space
    while(i<s.length() && (s[i]== ' '|| s[i] =='\t')){
        i++;
    }
    // signs
    while(i<s.length() && s[i] == '+' || s[i] == '-'){
        sign = (s[i] == '-') ? -1:1;
        i++;
    }
    //string to integer conversion
    while(i<s.length() && s[i] >='0' && s[i]<='9'){
        result = result*10 + (s[i] - '0');
        i++;
    }

    return sign*result;
}

int main() {
    string a = "42";
    string b = "   -42";
    string c = "4193 with words";
    string d = "        67      ";

    const char* chararray = c.c_str();

    // atoi and stoi are both methods
    cout<<myatoi(a)<<endl;
    cout<< stoi(a)<<endl;
    cout<<atoi(chararray)<<endl;
    int value = myatoi(b);
    cout<<value<<endl;



    return 0;
}
