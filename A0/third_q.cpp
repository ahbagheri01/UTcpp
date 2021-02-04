//
// Created by asus on 2/4/2021.
//
#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
void do_row_opt( vector<vector<int>> &table,int row,vector<int> &sum_row,int col_index);
void do_col_opt( vector<vector<int>> &table,int col,vector<int> &sum_col,int row_index);
int find_max_index(const vector<int> &arr , int size);
int third_q();
int main() {
    cout<< third_q();

}

int third_q() {
    string s1;
    string s2;
    int temp;
    cin>>temp>>s1>>temp>>s2;
    int size = min(s1.size(),s2.size());
    int sum = s1.size()+s2.size();
    for (int i = 0 ; i < size; i++){
        if (s1[i] == s2[i])
            sum-=2;
        else
            break;
    }
    return sum;

}
/*
8
abcdefgh
10
abcdhpefgh

:
10
 */