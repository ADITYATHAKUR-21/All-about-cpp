#include  <iostream>

using namespace std;

int main (){
    int Choice;
    double Price;

    cout << "Enter your tea Choice" << endl;
    cout << "1. Green tea" << endl;
    cout << "2. Black tea" << endl;
    cout << "3. Oolong tea" << endl;
    cout << "Select your tea Choice" << endl;

    cin >> Choice;

    switch (Choice){
        case 1:
            Price = 2.5;
               cout << "You Selected Green tea : " << Price << endl;
            break;
        case 2:
            Price = 3;
             cout << "You Selected Black tea : " << Price << endl;
            break;
        case 3:
            Price = 5;
             cout << "You Selected Oolong tea : " << Price << endl;
            break;    
        default:
         cout << "invalid choice ";
            break;
    }
    
return 0;
}