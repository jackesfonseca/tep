#include <iostream> 
#include <stdlib.h> 

using namespace std;

int gcd(int a,int b) { 
  int temp = 0; 
  while(b != 0) { 
    temp = b; 
    b = a % b; 
    a = temp; 
  } 
  return a; 
} 
int arr1[1005] = {0}; 
int div1[1005] = {0}; 

int main() { 
  while(cin >> arr1[0]) { 
    if(arr1[0] == 0) break; 
    int n = 1; 
    while(scanf("%d",&arr1[n])) { 
      if(arr1[n] == 0) break; 
      div1[n-1] = abs(arr1[n]-arr1[n-1]); n++; 
    } 
    int temp = div1[0]; 
    for(int i = 1 ; i < n-1 ; ++i) { 
      temp = gcd(temp,div1[i]); 
    } 
    cout << temp << endl; 
  } 
  return 0; 
}