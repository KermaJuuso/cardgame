#ifndef DECKOFCARDS_HPP
#define DECKOFCARDS_HPP
#include <iostream>
#include <string>
#include <vector>

enum SUITS {
    HEARTS = 1,
    DIAMONDS,
    CLUBS,
    SPADES
};
enum RANKS {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

class Card
{
public:
    Card(SUITS suit, RANKS rank);

    void setSuit(SUITS s);
    void setRank(RANKS r);

    SUITS getSuit() const;
    RANKS getRank() const;



private:
    SUITS suit_;
    RANKS rank_;
    int value_;
    bool ace;

};

class Deck
{
public:
    Deck(int multiplier = 1);
    void fill();

    // Combining decks
    //Deck(std::vector<Deck> decks);

    virtual ~Deck();
    void printDeck();

private:
    std::vector<Card> deck_;
    int multi_ = 1;

};

#endif //DECKOFCARDS_HPP