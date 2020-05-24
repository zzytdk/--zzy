#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

class Rectangle{

public:
//在下面的空格声明 Rectangle 类的成员函数
         Rectangle(double x1,double y1,double x2,double y2);
         void getarea();

private:
    //左下角坐标
    double _x1;
    double _y1;

    //右上角坐标
    double _x2;
    double _y2;

    //宽度和高度
    double _width;
    double _height;
};

//在下面的空格实现 Rectangle 类的成员函数

Rectangle::Rectangle(double x1,double y1,double x2,double y2){
    _x1=x1;
    _x2=x2;
    _y1=y1;
    _y2=y2;
    _width=_x2-_x1;
    _height=_y2-_y1;
}
void Rectangle::getarea(){
    double round;
    double area;
    round=2*(this->_width+this->_height);
    area=this->_width*this->_height;
    cout<<setprecision(2)<<fixed<<round<<endl;
    cout<<setprecision(2)<<fixed<<area<<endl;
    cout<<setprecision(2)<<fixed<<2*round<<endl;
    cout<<setprecision(2)<<fixed<<2*area<<endl;
    return;


}

int main(){

    double x1, x2, y1, y2;
    cin >>x1>>y1>>x2>>y2;
    Rectangle r1(x1,y1,x2,y2);

    Rectangle r2 = r1;

//在下面的空格按题目要求输出结果

r1.getarea();

    return 0;
}
