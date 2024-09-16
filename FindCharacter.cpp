#include <iostream>
#include <string>
using namespace std;
int countCharacter(string str1, int len, char ch){
    int count=0;
    for(int i=0; i<len; i++){
        if(str1[i]==ch){
            count++;
        }
    }
    return count;
    
}

int main() {
    string str1;
    cout<<"Enter String: ";
    getline(cin, str1);
    int len= str1.length();
    char ch;
    cout<<"Enter character you want to search: ";
    cin>>ch;
    int result=countCharacter(str1, len, ch);
    if(result<0){
        cout<<"Charachter not found!..";
    }else{
        cout<<"Total "<<ch<<" in "<<str1<<" is: "<<result<<endl;
    }
    return 0;
}
