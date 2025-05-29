#include <iostream>

using namespace std;


int cheackTemperatur (int Temperature ){
    return Temperature;

}

void serveChai (int cups);

void makeChai (){

    cout << "Make a chai" << endl;
}


int main (){
   int temp = cheackTemperatur(58);
   cout << temp;
   serveChai(4);
   makeChai();
   return 0;
}


void serveChai(int cups){
    cout <<" serveing "<< cups << " chai " << endl;
}