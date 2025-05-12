/* 
Challenge 1: Arithmetic Operators
Write a program that calculates the price of tea packs. A user enters the number of tea packs they want,
and the price per pack. Apply a 10% tax to the total price and display the final cost.
*/

#include  <iostream>

using namespace std;

int main (){

    int teaPacks;
    double pricePerPack,  totalprice, finalCost;

    cout << "Enter the number of tea packs" << endl;
    cin >> teaPacks;

    cout << "Enter the price of one tea pack" << endl;
    cin >> pricePerPack;

    totalprice = teaPacks * pricePerPack;

    finalCost = totalprice + (totalprice * 0.1);


    cout <<"Total price is : " << finalCost << endl;

    return 0;
}