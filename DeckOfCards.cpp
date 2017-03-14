// Dylan Palmer
// 3/09/17
// This program is for teaching us how to use classes

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "DeckOfCards.h"

using namespace std;

 DeckOfCards::DeckOfCards(){

     char suits[] = {'h', 'd', 's', 's'};
     char num[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

     for(int i = 0; i < SIZE; i++){

        deck[i] = Card(suits[i/13], num[i % 13]);
     }

 }

 void DeckOfCards::getTop(){

     printCard(deck[top]);
     top++;

 }

 void DeckOfCards::getSpecific(int i){

     if (i <= SIZE - top){

        printCard(deck[i]);

     }

     else{
        cout << "No card in that position\n";
     }

 }

 void DeckOfCards::getRandom(int seed){
     int i, j;
     int rnd; // random place holder
     Card temp;

     srand(seed);

     for(i = 0; i < 5; i++){
        rnd = rand()%52;
        printCard(deck[rnd]);
        temp = deck[rnd];
        for(j = rnd; rnd > top; j--){
            deck[j] = deck[j -1];

        }
        deck[top] = temp;
        top++;
     }

 }

 int DeckOfCards::getRemaining(){

     return SIZE - top;

 }

 void DeckOfCards::shuffle(){

     for( int i; i < SIZE; i++){

        int mixup = (rand() + time(0)) % SIZE;
        Card temp = deck[i];
        deck[i] = deck[mixup];
        deck[mixup] = temp;
     }

 }

 void printDeck(DeckOfCards full){

     cout << "Current deck ( " << top << " cards remaining)\n";
     for(int i; i < SIZE; i++){
        printCard(full.deck[i]);
        if(i % 13)
            cout << '\n';
     }



}
