#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int gade;
    string G[] = {"A","B+","B","C+","C","D+","D","F","W"};
    
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    gade = rand()%8;
    cout << "You will get " << G[gade] << " in this 261102.";
    return 0;
}

