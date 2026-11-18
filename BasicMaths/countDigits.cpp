#include <iostream>
using namespace std;

int countDigits(int num)
{ 
    int count = 0;
    while(num >0){
    int lasDigit = num % 10;
    count++;
    num = num /10;
}
return count;
}



int main (){
    int num;

    cout << "Enter number to count digits\n";

    cin >> num;
    
   
    int count = countDigits(num);
    cout << "Total digits" << count;
}