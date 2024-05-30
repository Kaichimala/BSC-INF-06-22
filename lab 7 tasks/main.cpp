#include <iostream>
#include "Rectangle.h"

int main(){
    Rectangle rect;
    
   float userLength, userWidth;

    std::cout << "enter the length:" ;
    std::cin >> userLength ;

    std::cout << "enter the width" ;
    std::cin >> userWidth ;

    rect.setLength(userLength);
    rect.setWidth(userWidth);

    float area = rect.calculateArea();

    std :: cout << "Area of the rectangle is:" << area << std::endl;

   return 0;
}

