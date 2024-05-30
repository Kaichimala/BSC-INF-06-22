#include <cstdlib>
#include <iostream>

using namespace std;

int main(){

int daysUntilExpiration = (rand() % 11);

if  (daysUntilExpiration == 0){
std :: cout << "your subscription has expired";
}
else if  (daysUntilExpiration == 1){
std :: cout << "Your subscription expires within a day!"<< endl;
std :: cout << "Renew now and save 20%";
}

else if  (daysUntilExpiration <=5){
std :: cout << "Your subscription expires in " +daysUntilExpiration << endl;
std :: cout << "renew now and save 10%!";
} 

else if  (daysUntilExpiration <= 10){
std ::  cout << "Your subscription will expire soon. Renew now!";
}

else{ 
std :: cout << "you have an active subscription";
} 
  return 0;
}