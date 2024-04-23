#include <iostream>
#include <string>
#include <cctype>

int main(){
std :: string myArray[7] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235" "B179"};
 
for (const std :: string& element : myArray) {
  if (element[0] == 'B'){ 
  std :: cout << element << std :: endl; 
  }
}
    return 0;


}
