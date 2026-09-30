#include <iostream>
#include <vector> // Required for dynamic arrays
#include <utility> // Contains std::swap
#include <string>
using namespace std;

bool CheckPalindrome(int i ,int  j, string name){
    if (i >= j){
        return true;
    }
    if (name[i] == name[j]){
        return CheckPalindrome(i + 1, j - 1, name);
    }
    else {
        return false;
    }

}
int main (){
    string name;

    cout << "Enter string\n";

    cin >> name;
    int size =name.length();
   
    if( CheckPalindrome(0, size - 1, name)){
        cout << "Palindrome";
    }
    else {
        cout << "not a plaindrome";
    }
  
}

