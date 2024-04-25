#include <iostream>
#include <cstdlib>
#include <string>

int main () {
 double height;
 double base; 
 int userChoice;

do{
std :: cout << "select the area of the shape to calculate" << std ::endl;
std :: cout << "1. rectangle" << std ::endl;
std :: cout << "2. triangle" << std ::endl;
std :: cout << "3. square "<< std ::endl;
std :: cout << "4. quit program" << std ::endl;

std :: cin >> userChoice ;

switch (userChoice){
case 1:
std :: cout <<"enter height"<< std ::endl;
std :: cin  >> height; 
std :: cout <<"enter base" << std ::endl;
std :: cin  >> base; 
std :: cout << "the area of the rectangle is:" <<height * base  << std :: endl; 
break;

case 2:
std :: cout <<"enter height"<< std ::endl;
std :: cin  >> height; 
std :: cout <<"enter base" << std ::endl;
std :: cin  >> base; 
std :: cout << "the area of the Triangle is:" <<0.5 * base * height << std :: endl;
break;

case 3:
 std :: cout <<"enter height"<< std ::endl;
 std :: cin  >> height; 
 std :: cout << "the area of the Square is:" <<height * 2 << std :: endl;
 break;

 case 4:
  return 0;
  break;

  default:
 std ::  cout << "invalid choice, select a valid number from 1 to 4" << std :: endl;
}
}
while (userChoice!=4);
return 0;
}

