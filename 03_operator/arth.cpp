#include   <iostream>

using namespace std;

int main () {

    int caps;
    double pricePerCap, totalPrice, discountPrice;

    cout << "Enter the number of tea cap";
    cin >> caps;

    cout << "Enter the price of per cap";
    cin >> pricePerCap;

    totalPrice = caps * pricePerCap;

    // Apply the discount of toatalprice if price is above 100

    if(totalPrice > 100){

        discountPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price:" << discountPrice << endl;
        return 0;
        
    }else{
        cout << "Total Price is:" << totalPrice;
    }

    return 0;
}