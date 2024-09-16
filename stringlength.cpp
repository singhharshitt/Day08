#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cout<<"Enter String: ";
    getline(cin, str1);
    int len;
    len= str1.length();
    cout<<"Length of the string: "<<len<<endl;
    return 0;
}
