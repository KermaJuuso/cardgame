#include "../include/card.hpp"

Card::Card(SUITS suit, RANKS rank):
    suit_(suit), rank_(rank)
{
   setValue(rank);
}


void Card::setSuit(SUITS s)
{
    suit_ = s;
}

void Card::setRank(RANKS r)
{
    rank_ = r;
}

void Card::setValue(RANKS r)
{
    if(r > 1 && r < 11){
        value_ = r;
    } else if (r > 10)
    {
        value_ = 10;
    }  else if (r == 1){
        value_ = 11;
    }
}

SUITS Card::getSuit() const
{
    return suit_;
}

RANKS Card::getRank() const
{
    return rank_;
}

int Card::getValue() const
{
    return value_;
}

std::string Card::getName()
{
    return RANK_NAMES[rank_] + " OF " + SUIT_NAMES[suit_];
}