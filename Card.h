// Dylan Palmer
// 3/09/17
// This program is for teaching us how to use classes

#ifndef Card_h
#define Card_h



class Card{

public:
    Card();
    Card(char s, char n);

    void setCard(char s, char n);
    char getSuit(); // gets card suit
    char getNum(); // gets card number

    friend void printCard(Card cd);

private:

    char suit;
    char num;

};

#endif
