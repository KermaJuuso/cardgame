#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP
#include <memory>
#include <vector>

#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include "dealer.hpp"

using namespace std;


/* Imagine this as just a table the player sits to*/
class Blackjack
{
public:

private:
    Dealer dealer_;
    Deck deck_;
    vector<shared_ptr<Player>> players_;
};

#endif // BLACKJACK_HPP