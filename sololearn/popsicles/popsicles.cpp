/* Made by jisumov */
#include <iostream>

using namespace std;

int main() {

    int siblings, popsicles;
    cin >> siblings >> popsicles;
    /* Ask the amount of siblings and popsicles */
    if(popsicles%siblings==0) {
        /* Check if the amount of popsicles can be given away equally to the siblings */
        cout << "give away";
    } else {
        cout << "eat them yourself";
    }

    return 0;
    
}