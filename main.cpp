//Color Maker//

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); //Makes random random

    //making variable for colors//
    int r1Variable = rand()%9;
    int r2Variable = rand()%9;
    int g1Variable = rand()%9;
    int g2Variable = rand()%9;
    int b1Variable = rand()%9;
    int b2Variable = rand()%9;

    //Output color//
    cout <<"Random Color:"<< r1Variable<< r2Variable<<g1Variable
    <<g2Variable<<b1Variable<<b2Variable<< endl;
}