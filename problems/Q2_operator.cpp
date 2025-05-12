/*

Challenge 3: Relational and Logical Operators

A tea subscription service offers a discount if the user buys more than 12 cups or if they are a
member for more than a year.Write a program that checks if the user qualifies for a discount based 
on their input.

*/

#include  <iostream>

using namespace std;

int main (){

    int cups, oldMembers;

    cout << "How many cups of tea you purchased" << endl;
    cin >> cups;

    cout << "If you are old member more than a year (press 1) or (0) " << endl;
    cin >>  oldMembers;

    if(cups  > 12 || oldMembers == 1){

        cout << "You elegibl for the discount" << endl;
        return 0;

    }else{
        cout << "You not elegibl for the discount" << endl;
    }
    return 0;
}