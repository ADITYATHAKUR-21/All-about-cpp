#include <iostream>

using namespace std;

void pourchai (int cups) {
    cups = cups + 5;
    cout << "serve  " << cups << endl;
}

// PASS BY VALUE

int main (){

    int chaiCups = 2;
    pourchai(chaiCups);
    cout << chaiCups;

    return 0;
}