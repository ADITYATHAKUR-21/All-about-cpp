#include  <iostream>

using namespace std;

int main (){

    int cups;
    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the ordered tea cups" << endl;
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if(cups > 20){
        discount = totalPrice * 0.20;
    }else if(cups >=  10 && cups <= 20){
        discount = totalPrice * 0.10;
    }else{
        discount = 0;
    }

    totalPrice -= discount;

    cout << "Total price after discount is : " << totalPrice <<  endl;

return 0;
}