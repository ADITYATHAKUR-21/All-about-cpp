#include  <iostream>
#include <string>

using namespace std;

int main (){

    string responce;

    do{
        cout << "Do you want more Tea (yes/no) : " << endl;
        getline(cin, responce);
        
    } while (responce == "yes"  || responce == "Yes");
    

return 0;
}