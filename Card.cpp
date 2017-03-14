// Dylan Palmer
// 3/09/17
// This program is for teaching us how to use classes

#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(){}

Card::Card(char s, char n){

   suit = s;
   num = n;

}

void Card::setCard(char s, char n){

    suit = s;
    num = n;

}

char Card::getSuit(){

    return suit;

}

char Card::getNum(){

    return num;

}

void printCard(Card cd){

    cout << cd.getSuit() << cd.getNum() << ' ';

}

