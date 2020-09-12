#include<bits/stdc++.h>
using namespace std;
int main() {
  int n ;
  cin>> n;
  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for(int i = 2; i< n; i++) {
    int temp = a+b;
    a = b;
    b = temp;
    cout << temp << " ";
  }
  return 0;
}
