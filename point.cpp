#include"point.h"
Point::Point():x(0),y(0){
}
 Point::Point(int a,int b):x(a),y(b){
}
 Point::Point(const Point& ref):x(ref.x),y(ref.y){
 }
 Quadrant Point::quadrant() const
 {
 if((x>=0)&&(y>=0)){
 return Q1;
 }
 else if((x<=0)&&(y>=0)){
 return Q2;
 }
 else if((x<=0)&&(y<=0)){
 return Q3;
 }
 else {
 return Q4;
 }
}
 
 bool Point::isOrigin() const{
 return((x==0)&&(y==0));
 }
 bool Point::isOnXAxis() const{
 return(y==0);
 }
 bool Point::isOnYAxis() const{
 return(x==0);
 }
 void Point::display() const{
 std::cout<<x<<"+"<<y<<"+";
 }