#include <iostream>

using namespace std;

int main (){

    int caps;
    cout << "Enter the cap of tea you have :" << endl;
    cin >> caps;

    if (caps >= 20){

        cout << "You will get a GOLD badge" << endl;
        return 0;

    } else if (caps >= 10 && caps <= 20){
        cout << "You will get a SILVER badge" << endl;
    
    }else{
        cout << "NO BADGE" << endl;

    }
 
    return 0;
}