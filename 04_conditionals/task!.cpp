#include  <iostream>
#include <string>

using namespace std;

int main (){
    string teaOrder;

    cout << "Enter your tea order" << endl;
    getline (cin, teaOrder);

    if(teaOrder == "Green Tea"){

        cout << "you have ordered Green Tea" << endl;

        return 0;
    }

    return 0;
}