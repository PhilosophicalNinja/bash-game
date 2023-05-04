#include <cstdlib>
#include <iostream>
using namespace std;

int length(const char array[]){
    int i = 0;
    while(array[i] != '\0'){
        i++;
    }
    return i;
}

int length(char array[]){
    int i = 0;
    while(array[i] != '\0'){
        i++;
    }
    return i;
}

int coords(int x, int y, int cols){
    return x+y*cols;
}

void assign(char * ptr, char array[]){
    ptr = (char*)realloc(ptr, length(array)*sizeof(char));
    for(int i = 0; i < length(array); i++){
        ptr[i] = array[i];
    }
}

void assign(char * ptr, const char array[]){
    ptr = (char*)realloc(ptr, length(array)*sizeof(char));
    for(int i = 0; i < length(array); i++){
        ptr[i] = array[i];
    }
}

void draw(char array[], int rows, int cols){
    system("clear");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << array[coords(j, i, cols)];
        }
        cout << "\n";
    }
    cout << endl;
}