#include  <iostream>

using namespace std;

int main (){
   int teaCups;

   cout << "Enter the number of teacups :" << endl;
   cin >>  teaCups;

   //while loop
   while(teaCups > 0){
    cout << "serving a cup of tea \n" << teaCups << "remaining" << endl;
    teaCups --;

   }

   cout << "All tea is served" << endl;
    
return 0;
}