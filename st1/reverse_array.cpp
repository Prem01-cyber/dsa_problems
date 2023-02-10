#include <bits/stdc++.h>

using namespace std;

string reverseWord(string str);

//driver code
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << reverseWord(s) << endl;
    }
    return 0;
}

/*initialize variables for the start and end of the string
create a variable char to hold the character variable
so that we can assign the temporary char that needs to be shifted
loop through the created variables to reverse the string*/
string reverseWord(string str){
    int start = 0;
    int end = str.length() - 1;
    char temp {};
    while(start<end){
        temp = str.at(start);
        str.at(start)=str.at(end);
        str.at(end) = temp;
        start++;
        end--;
    }
    return str;
}