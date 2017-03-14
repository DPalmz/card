// Dylan Palmer
// 3/09/17
// This program is for teaching us how to use classes

#include <iostream>
#include "Card.h"
#ifndef DeckOfCards_h
#define DeckOfCards_h

using namespace std;

const int SIZE = 52; // number of cards
int top = 0; // current top card

class DeckOfCards{



public:
    DeckOfCards();

    void getTop();
    void getSpecific(int i);
    void getRandom(int seed);
    int getRemaining();
    void shuffle();

    friend void printDeck(DeckOfCards full);

private:

    Card deck[SIZE];

};






#endif
