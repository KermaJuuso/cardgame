#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "card.hpp"
#include "hand.hpp"

#include <iostream>
#include <vector>
using namespace std;


class Player
{
public:
    Player(int balance = 50);
    void newCard(Card card);

    // Decisions
    void bet(int amount);
    void hit();
    void stand();
    void doubleDown();
    void split();

    // Calculate current sum of cards
    int sumCards();

private:
    Hand hand_;
    int currentBet_;
    int balance_;
};

#endif // PLAYER_HPP