#include <iostream>
#include <string>
#include <cstdlib>

int  main () {
int userInput;

std :: cout << "enter an integer from 5 to 10" << std :: endl;
std :: cin  >> userInput;

while (userInput < 5 || userInput > 10){
   std :: cout << "invalid number, enter an integer between 5 and 10"<<std::endl;
   std :: cin  >> userInput;
}
    std :: cout << "good job";

return 0;

}