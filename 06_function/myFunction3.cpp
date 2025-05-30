#include <iostream>

using namespace std;

// PASS BY REFRENCE 
void pourChai (int &cups ){
    cups = cups+5;
    cout << "pourChai "<< cups << endl;
}


int main (){
    int chaiCups = 2;
    pourChai(chaiCups);
    cout << chaiCups;

    return 0;
}