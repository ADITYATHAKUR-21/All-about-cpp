#include  <iostream>
#include <string>
using namespace std;

int main (){
    string responce;

    while(true){
        cout << "Do you want to more tea type(stop to exite)? : ";
        getline(cin, responce);

        if(responce == "stop") {
            break;
        }

        cout << "Here is the another cup of tea" << endl;
    }
     cout << "No more tea will be serve to you \n";

return 0;
}
