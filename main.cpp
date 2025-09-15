//Color Maker//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); //Makes random random
    //making variable for colors//
    int r1Variable = rand()%16;
    if(r1Variable==16) {

    }

    int gVariable = rand()%16;

    int bVariable = rand()%16;

    cout << r1Variable << endl;
    cout << gVariable << endl;
    cout << bVariable << endl;
}