#include <iostream>

using namespace std;

int main (){

    float teaPrice = 49.85;

    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 3;

    double totalTeaPrice = teaPrice * teaQuantity;


    cout << totalTeaPrice << endl;

    return 0;
}