#include <iostream>
int test(int h = 0 , int j = 0);
int main() {
    test(4

            );
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
int test(int h, int j ){
    std :: cout<< h<<j;
    return 8;

}