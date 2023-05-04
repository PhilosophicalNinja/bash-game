#include <iostream>
#include <fstream>
#include <cstdlib>
#include "convenience.h"
ifstream inputStream;
ofstream outputStream;
using namespace std;
int cols = 20;
int rows = 30;
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
        screen[coords(x, y, cols)] = rep;
    }
    void move(int X, int Y){
        screen[coords(x, y, cols)] = ' ';
        x = X;
        y = Y;
        screen[coords(x, y, cols)] = rep;
    }
};


int main(){
    //initialize 
    inputStream.open("data.txt");
    //gameloop
    bool game = true;
    int gameTime = 0;
    char input;
    while(game){
        if(inputStream.is_open()){
            input = inputStream.peek();
            cout << "You pressed: " << input << endl;
        }
        if(gameTime > 5){
            game = false;
        }
        gameTime++;
        system("sleep 1");
    }
    inputStream.close();
    return 0;
}
//gameloop:
//player move
//bullet move 
//tick enemy movement
//resolve effects