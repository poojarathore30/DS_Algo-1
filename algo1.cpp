#include<bits/stdc++.h>
using namespace std;

int EuclidGCD(int a, int b) {
  if(b == 0)
    return a;
  float temp = a % b;
  return EuclidGCD(b, temp);
}

int main () {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  int n;
  cin >> n;

  while(n--) {
    int number1;
    int number2;
    cin>> number1 >> number2;
      cout<< EuclidGCD(number1, number2)<<'\n';
  }
  return 0;
}
