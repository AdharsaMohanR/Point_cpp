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
 /**
  * @brief Function isOrigin
  * 
  * @return true 
  * @return false 
  */
 bool Point::isOrigin() const{
 return((x==0)&&(y==0));
 }
 /**
  * @brief Function isOnaxis
  * 
  * @return true 
  * @return false 
  */
 bool Point::isOnXAxis() const{
 return(y==0);
 }
 /**
  * @brief Function isOnYaxis
  * 
  * @return true 
  * @return false 
  */
 bool Point::isOnYAxis() const{
 return(x==0);
 }
 /**
  * @brief Function Display
  * 
  */
 void Point::display() const{
 std::cout<<x<<"+"<<y<<"+";
 }