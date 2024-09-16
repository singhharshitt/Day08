#include <iostream>
#include <string>
using namespace std;
string concatenateStrings(string str1, string str2){
    return str1 + str2;
    
}

int main() {
    string str1,str2;
    cout<<"Enter String1: ";
    getline(cin, str1);
    cout<<"Enter String2: ";
    getline(cin,str2);
    string c=concatenateStrings(str1, str2);
    cout<<"concatenated String: "<<c<<endl;
    
    return 0;
}
