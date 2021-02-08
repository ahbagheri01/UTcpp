#include <iostream>
#include <vector>
#include "staticmembers.h"
using namespace std;
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
    void move(int dt);
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
void Ball::move(int dt){
    x += vx*dt;
    y = vy*dt;
    if (x<0){
        x = -x;
        vy = -vy;
    }
    if (y < 0 ){
    }
}

int main() {
    Table t(100,50);
    Ball b(5,10,3,2,&t);
    staticmembers::is_leap_year(89);


}
