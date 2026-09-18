#include <iostream>
#include <vector> // Required for dynamic arrays
#include <utility> // Contains std::swap

using namespace std;

void ReverseArray(int i, int j, int n , vector<int>& arr){
   
    if (i >= j)
    {
        return;
    }
  swap(arr[i], arr[j]);
 
  ReverseArray(i+1, j-1, n, arr);
}
int main (){
    int n;
   
    
    cout << "Enter size of array\n";
    cin >> n;
    vector<int> arr(n);
    for ( int i =0; i < n; i++){
        cin >> arr[i];
    }
  
    ReverseArray(0, n -1, n,arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

}

//sengmentation fault encountered because condidition was i == j 
// i started with 5 because i was declared as a global variable thereofrre after first loop it was called with 5 and -1 as i and j
 