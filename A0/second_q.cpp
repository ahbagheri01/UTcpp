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
int second_q();
/*int main() {
    cout<< second_q();

}*/

int second_q(){
    int n,m,temp;
    cin>>n>>m;
    vector<int> sum_col(m,0);
    vector<int> sum_row(n,0);
    vector<vector<int>> table(n,vector<int> (m,0));
    for (int i = 0; i < n ; i++){
        for(int j = 0 ; j <  m ; j++){
            cin>> temp ;
            table[i][j] = temp;
            sum_col[j]+=temp;
            sum_row[i]+=temp;
        }
    }
    int max_col,max_row;
    int sum = 0;
    for(int i = 0 ; i < 4 ; i++){
        max_col = find_max_index(sum_col,m);
        max_row = find_max_index(sum_row,n);

        if (sum_col[max_col] > sum_row[max_row]){
            sum+=sum_col[max_col];
            do_row_opt(table,n,sum_row,max_col);
            sum_col[max_col] = 0;
        }

        else {
            sum += sum_row[max_row];
            do_col_opt(table, m, sum_col, max_row);
            sum_row[max_row] = 0;
        }
    }
    return sum;

}
void do_row_opt(vector<vector<int>> & table,int row,vector<int> & sum_row,int col_index){
    for(int i = 0; i < row;i++){
        sum_row[i]-=table[i][col_index];
        table[i][col_index] = 0;
    }
}
void do_col_opt(vector<vector<int>> & table,int col,vector<int> & sum_col,int row_index){
    for(int i = 0; i < col;i++){
        sum_col[i] -= table[row_index][i];
        table[row_index][i] = 0;
    }
}
int find_max_index(const vector<int>& arr , int size){
    int temp = 0;
    for(int i = 0 ; i < size ; i++){
        if (arr[temp] < arr[i])
            temp = i;
    }
    return temp;
}
/*
5 5
0 9 2 7 0
9 0 3 0 5
0 8 0 3 1
6 7 4 3 9
3 6 4 1 0
 */