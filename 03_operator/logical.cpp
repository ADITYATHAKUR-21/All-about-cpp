#include <iostream>

using namespace std;

int main (){
    bool isStudent;
    int caps;

    cout << "Are you a student ( 1 for yes & 0 for no)?" << endl;
    cin >> isStudent;
    cout << "How many caps of tea you purchased ?" << endl;
    cin >> caps;

    if (isStudent || caps > 15){
    
        cout << "You elegibl for the discount" << endl;
    }else{
        cout << "You not elegibl for the discount" << endl;

    }
    
    return 0;
}