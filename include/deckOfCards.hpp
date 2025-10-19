#ifndef DECKOFCARDS_HPP
#define DECKOFCARDS_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <array>


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

static const std::vector<std::string> SUIT_NAMES{"?", "HEARTS", "DIAMONDS", "CLUBS", "SPADES"};
static const std::vector<std::string> RANK_NAMES{"?", "ACE", "TWO", "THREE", "FOUR", "FIVE",
                                                 "SIX", "SEVEN", "EIGHT", "NINE", "TEN", "JACK", 
                                                 "QUEEN", "KING"};






class Card
{
public:
    Card(SUITS suit, RANKS rank);

    void setSuit(SUITS s);
    void setRank(RANKS r);
    void setValue(RANKS r);

    SUITS getSuit() const;
    RANKS getRank() const;
    int getValue() const;
    std::string getName();



private:
    SUITS suit_;
    RANKS rank_;
    int value_;

};

class Deck
{
public:
    Deck(int multiplier = 1);
    void fill();

    // Combining decks
    //Deck(std::vector<Deck> decks);

    virtual ~Deck();
    void shuffle();
    void printDeck();

private:
    std::vector<Card> deck_;
    int multi_ = 1;

};

#endif //DECKOFCARDS_HPP