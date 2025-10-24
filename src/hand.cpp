#include "../include/hand.hpp"

Hand::Hand()
{
    
}

Hand::~Hand()
{
    
}

void Hand::addCard(Card card)
{
    cards_.push_back(card);
}

void Hand::clear()
{
    cards_.clear();
}

vector<Card> Hand::getCards()
{
    return cards_;
}
