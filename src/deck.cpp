#include "../include/deck.hpp"

Deck::Deck(int multiplier):
    multi_(multiplier)
{
}


void Deck::fill()
{
    deck_.clear();
    deck_.reserve(52 * multi_);

    for (int i = 0; i < multi_; i++) {
        for (int s = 0; s < 4; s++){
            for (int r = 0; r < 13; r++){
                deck_.emplace_back(static_cast<SUITS>(s+1), static_cast<RANKS>(r+1));

            }
        }
    }    

    std::cout << "Deck the size of " << 52 * multi_ << " created succesfully with multiplier of " << multi_ << std::endl;
}

Deck::~Deck()
{
    
}

void Deck::shuffle()
{
    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(deck_.begin(), deck_.end(), g);
}

void Deck::printDeck()
{
    for(auto card : deck_){
        std::cout << card.getName() << " With the value of " << card.getValue() << std::endl;
    }
}