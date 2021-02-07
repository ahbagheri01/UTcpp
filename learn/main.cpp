#include <iostream>
#include "Date.h"
int test(int h = 0 , int j = 0);
int main() {
    test(4

            );
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
int test(int h, int j ){
 Date* d = new Date(5,6,33434);
 //d->set_date(4,5,3377);
 delete d;
 Date b(4,5,6555);
 //b.set_date(4,5,6666);

}