#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
int first_q();
/*int main() {
  cout<< first_q();

}*/
int first_q(){
    vector<int> nums(10e5,0);
    int temp = 1;
    while ((cin >> temp) && temp != -1 ){
        nums[temp-1] = ++nums[temp-1];
    }
    for(int i= 0 ; i < 10e5  ; i++ ){
        if (nums[i]%2 !=0){
            return (i+1);
        }
    }
    return 0;
}

