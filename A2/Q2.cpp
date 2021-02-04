#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
int find_product(vector<int> &nums,int right,int i );
int main() {
    vector<int> nums;
    char* temp = (char*)malloc(10000);
    cin.getline(temp,10000);
    stringstream s(temp);
    free(temp);
    string token;
    while (getline(s, token, ' ')) {
        nums.push_back(stoi(token,nullptr,10));
    }
    find_product(nums,1,nums.size()-1);
    for_each(nums.begin(),nums.end(),[](int &a){
       cout<<a<<" ";
    });
}
int find_product(vector<int> &nums,int right,int i ){
    if (i <0 )
        return 1;
    int current = nums[i];
    int left = find_product(nums, right * nums[i], i - 1);
    nums[i] = left*right;
    return current*left;
}
