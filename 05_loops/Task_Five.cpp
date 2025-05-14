#include  <iostream>

using namespace std;

int main (){

    string teaTypes[3] = {"Green tea ", "Black tea", "Oolong tea"};

    for (int i = 0; i < 3; i++){

        if(teaTypes[i] == "Green tea"){
            cout << "skiping the " << teaTypes[i] << endl;
            continue;
            
        }
        cout << "Brewing " << teaTypes[i] << "..." << endl;

    }

return 0;
}