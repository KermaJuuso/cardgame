#ifndef DECK_HPP
#define DECK_HPP
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <array>
#include "card.hpp"

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


#endif // DECK_HPP