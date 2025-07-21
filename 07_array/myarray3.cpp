#include <iostream>

using namespace std;

int totalChaiServed(int Chai[], int size){

    int total = 0;

    for(int i = 0; i < size; i++){
        total += Chai[i];

    }

return total;
}

int main (){

    int chaiServed[7] = {50,70,80,90,100,110,120};

    int total = totalChaiServed(chaiServed, 7);

    cout << "Total Served Chai :  " << total << endl;

    return 0;
}