#ifndef HAND_HPP
#define HAND_HPP

#include <iostream>
#include <vector>
#include "card.hpp"
using namespace std;

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void addCard(Card card);
    void clear();
    vector<Card> getCards();

private:
    vector<Card> cards_;
};


#endif // HAND_HPP