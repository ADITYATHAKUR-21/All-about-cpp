#include <iostream>
#include <string>

using namespace std;

int main (){

    string UserTea;
    string TeaQuantity;

    cout << "What whould you like to order in a tea \n";
    getline(cin,  UserTea);

    cout << "how many cup\t" << UserTea;
    cin >> TeaQuantity;

    cout << UserTea;
    cout <<  TeaQuantity;

    return 0;

}
