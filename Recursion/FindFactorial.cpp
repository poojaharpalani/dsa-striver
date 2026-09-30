#include <iostream>
#include <vector> // Required for dynamic arrays
#include <utility> // Contains std::swap
#include <string>
using namespace std;
int findFactorial(int n, int i, int product){
  if (i > n){
      return product;
  }
  product = product * i;
  i++; 
  return findFactorial(n, i , product);
 
}
int main(){
    int product = 1;
    int i = 1;
    int n;
    cout << "Enter no. to find factorial";
    cin >> n;
    cout << findFactorial(n, i, product);
}