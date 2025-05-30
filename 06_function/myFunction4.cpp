#include <iostream>
using namespace std;

//LAMBDA FUNCTION

int main (){
    auto prepared = [](int cups){

        cout << "preparing "<< cups << " cups of tea"  << endl;
    };
    prepared(5);

    return 0;
}