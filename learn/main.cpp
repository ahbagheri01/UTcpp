#include <iostream>
#include <vector>
using namespace std;

int main() {

}
class Table{
public:
    Table(int _width,int _height);
   int  get_width(){ return width;}
   int get_height(){
       return height;
   }

private:
    int width;
    int height;


};
Table::Table(int _width,int _height){
    if(_width <= 0 || _height <=0)
        abort();
    width = _width;
    height = _height;
}
class Ball{
public:
    Ball(int _x,int _y,int _vx, int _vy,Table* _table);

private:
    int x;
    int y;
    int vx;
    int vy;
    Table* table;
};
Ball::Ball(int _x,int _y,int _vx, int _vy,Table* _table){
    if (_x < 0 || _x > table->get_width() || _y < 0 || _y >(* _table).get_height())
        abort();
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
    table = _table;

}
