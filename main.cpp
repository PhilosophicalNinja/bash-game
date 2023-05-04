#include <iostream>
#include <fstream>
#include <cstdlib>
#include "convenience.h"
using namespace std;
int rows = 30;
int cols = 20;
char screen[600];

class character{
    public:
    int x;
    int y;
    char rep;
    character(int X, int Y, char REP){
        x = X;
        y = Y;
        rep = REP;
    }
    void move(int X, int Y){
        x = X;
        y = Y;
    }
};
int main(){
    //initialize screen
    for(int i = 0; i < 600; i++){
        screen[i] = 'O';
    }
    //everything else
    draw(screen, rows, cols);
    return 0;
}



//gameloop:
//player move
//bullet move 
//tick enemy movement
//resolve effects