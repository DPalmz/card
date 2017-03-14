// Dylan Palmer
// 3/09/17
// This program is for teaching us how to use classes

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h"

using namespace std;

int main(){

    int seed, input;
    char cmd;
    DeckOfCards deck;

    cout << "Input Seed: \n";
    cin >> seed;

    while(1){

        cout << "Input command <P : D : R : N : S : X>: \n";
        cin >> cmd;

        if( cmd == 'p' || cmd == 'P'){
                printDeck(deck);
        }

        else if( cmd == 'd' || cmd == 'D'){

            cout << "Dealt top 5 cards";
            deck.getTop();
            deck.getTop();
            deck.getTop();
            deck.getTop();
            cout << endl;

        }

        else if( cmd == 'r' || cmd == 'R'){

            cout << "Dealt 5 random cards";
            deck.getRandom(seed);
            cout << endl;
        }

        else if( cmd == 'n' || cmd == 'N'){

            cout << "Enter starting position (0 - " << deck.getRemaining() << " ):\n";
            cin >> input;
            deck.getSpecific(input);
        }

        else if( cmd == 's' || cmd == 'S'){
            cout << "Shuffling...\n";
            deck.shuffle();
        }

        else if( cmd == 'x' || cmd == 'X'){
            return 0;
        }

        else{
            cout << "Not a correct command\n";
        }

    }






    return 0;


}
