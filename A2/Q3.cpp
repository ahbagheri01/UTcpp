#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <functional>
#include <string>
int backtrack_start(int n,int m , vector<vector<int>> table,int x,int y);
int backtrack(int n,int m , vector<vector<int>> &table,int x,int y);

bool is_valid(int n,int m , vector<vector<int>> &table,int x,int y);
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> table(n,vector<int> (m,0));
    vector<int> harvest;
    for (int i = 0; i < n ; i++){
        for(int j = 0 ; j < m ; j++)
            cin>>table[i][j];
    }
    for (int i = 0; i < n ; i++){
        for(int j = 0 ; j < m ; j++)
            if( table[i][j] != 0 )
                harvest.push_back(backtrack_start(n,m,table,i,j));
    }
    int maximum = 0;
    for_each(harvest.begin(),harvest.end() , [&maximum](const int & a){
        maximum = maximum > a ? maximum:a;
    });
    cout<<maximum;

}
int backtrack_start(int n,int m , vector<vector<int>> table,int x,int y){
    return backtrack(n,m,table,x,y);
}
int backtrack(int n,int m , vector<vector<int>> &table,int x,int y){
    if(table[x][y] == 0)
        return 0;
    int hold = table[x][y], sum1 = 0 ,sum2 = 0 ,sum3 = 0 ,sum4 =0 ;
    table[x][y] = 0;
    if(is_valid(n,m,table,x+1,y))
        sum1= backtrack(n,m,table,x+1,y);
    if(is_valid(n,m,table,x-1,y))
        sum2= backtrack(n,m,table,x-1,y);
    if(is_valid(n,m,table,x,y+1))
        sum3= backtrack(n,m,table,x,y+1);
    if(is_valid(n,m,table,x,y-1))
        sum4= backtrack(n,m,table,x,y-1);
    return hold+max(sum1 > sum2? sum1 : sum2 ,sum3 > sum4? sum3 :sum4);
}
bool is_valid(int n,int m , vector<vector<int>> &table,int x,int y){
    if ( x >= n || y >= m || x< 0 || y<0 || table[x][y] == 0)
        return false;
    return true;
}

