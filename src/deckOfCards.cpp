#include "../include/deckOfCards.hpp"


Card::Card(SUITS suit, RANKS rank):
    suit_(suit), rank_(rank)
{

    if(rank > 1 && rank < 11){
        value_ = rank;
    } else if (rank > 10)
    {
        value_ = 10;
    } 
    // CONTINUE HERE TOMORROW
    
}


void Card::setSuit(SUITS s)
{
    suit_ = s;
}

void Card::setRank(RANKS r)
{
    rank_ = r;
}

SUITS Card::getSuit() const
{
    return suit_;
}

RANKS Card::getRank() const
{
    return rank_;
}

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

void Deck::printDeck()
{
    for(auto card : deck_){
        std::cout << "Suit: " << card.getSuit() << " " << "Rank: " << card.getRank() << std::endl;
    }
}




