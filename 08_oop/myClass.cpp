#include <iostream>
#include <vector>

using namespace std;

class Chai {

    public:
        // data mumbers (attributes
        string teaname; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for the tea


        // member function
        void displayChaiDetails(){
            cout << "Tea name: " << teaname << endl;
            cout << "servings: " << servings  << endl;
                cout << "Tea name: ";
                for (string ingredient : ingredients) {
                    cout << ingredient << " ";
                    cout <<  endl;

                }
        }
};

int main (){
    Chai chaiOne;
    chaiOne.teaname = "Lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"suger", "water", "lemon", "tea"};

    chaiOne.displayChaiDetails();

    
    Chai chaiTwo;
    chaiTwo.teaname = "masala chai";
    chaiTwo.servings = 5;
    chaiTwo.ingredients = {"water", "masala", "tea", "milk", };

    chaiTwo.displayChaiDetails();

    return 0;

}
