#include "../include/blackjack.hpp"

Blackjack::Blackjack(vector<shared_ptr<Player>> players):
    players_(std::move(players))
{
    
}

Blackjack::~Blackjack()
{
    
}
