#include <cstdlib>
#include <iostream>

using namespace std;

int main(){

int daysUntilExpiration = (rand() % 11);

switch (daysUntilExpiration) {
case 0:
     cout << "your subscription has expired";
     break;
 case 1:
     cout << "Your subscription expires within a day!"<< endl;
     cout << "Renew now and save 20%";
     break;
 case 2:
 case 3:
 case 4:
 case 5: 
     cout << "Your subscription expires in " +daysUntilExpiration << endl;
     cout << "renew now and save 10%!";
     break;
 case 6:
 case 7:
 case 8:
 case 9:
 case 10:
     cout << "Your subscription will expire soon. Renew now!";
     break;
 case 11:
     cout << "you have an active subscription";
     break;
}
return 0;
}