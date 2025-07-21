#include <iostream>

using namespace std;

int* perpareChaiOrders(int cups){

    int* Orders = new int [cups];

    for(int i = 0; i < cups; i++ ){
        Orders[i] = (i + 1) * 10;

    }

    return Orders;

}

int main (){

    int cups = 6;

    int* chaiOrders = perpareChaiOrders(cups);

    for(int i = 0; i < cups; i++){
        
        cout << "Cups " << i+1 << "has " << chaiOrders[i] << "ml\n"; 
    }
    
     delete[] chaiOrders;
    return 0;
}