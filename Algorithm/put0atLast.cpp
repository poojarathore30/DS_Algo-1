#include<bits/stdc++.h>
using namespace std;

vector<int> putZeroesAtLast (vector<int>nums) {
    int start = 0, end = nums.size()-1;
    while(start < end) {
      if( nums[start] == 1)
        start ++;
      if (nums[end] == 0)
        end--;
      if(nums[start] == 0 && nums[end]==1){
        swap(nums[start], nums[end]);
        start ++;
        end--;
      }
    }
    return nums;
}
int main() {
  vector<int> nums = {1,1,0,0,0,0,1,0,1,1,0,1,0,0,
                      0,0,1,1,0,1,1,0,1,1,0,1,0,1,1,0,0,1,0};
  for(int x : putZeroesAtLast(nums) )
    cout << x << " ";
    return 0;
}
