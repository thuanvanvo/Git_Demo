#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; string result ="" ;
    cout << "Nhập chuỗi s: " ; getline(cin, s);
    int i = 0;
    bool isSpaced = true;
    int firstPos, secPos;
    
    // Check start and end position of '#'
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '#'){
            firstPos = i;
            for(int j = i+1; j<s.size(); j++){
                if(s[j] == '#'){
                    secPos = j;
                    break;
                } 
            }
            break;
        }
    }
    
    //Check if the string is space
    for(int i = firstPos+1; i<secPos; i++){
        if(s[i] != ' ') isSpaced = false;
    }
    
    //Print the result
    if(isSpaced) cout<<"Empty";
    else cout<< s.substr(firstPos + 1, secPos - 1);
    
//dui
    return 0;
}