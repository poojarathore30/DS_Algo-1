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

// git init
// git remote add origin '...................'
// git fetch --all 
// add and commit all your file changes
//git pull origin master --allow-unrelated-histories
//git push --set-upstream origin master
