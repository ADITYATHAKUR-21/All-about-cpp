#include <iostream>

using namespace std;

int main (){

    int teaBags;
    
    cout << "Enter the teabag you have : " ;
    cin >> teaBags;

    if (teaBags < 10){

        teaBags += 5;
        cout << "Total bags are : "  << teaBags;
        return 0;

    }
    cout << "Total bags are " << teaBags;

    return 0;
}
