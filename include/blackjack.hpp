#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP
#include <memory>
#include <vector>

#include "card.hpp"
#include "deck.hpp"
#include "player.hpp"
#include "dealer.hpp"

using namespace std;


class Blackjack
{
public:
    Blackjack(vector<shared_ptr<Player>> players);
    virtual ~Blackjack();

private:
    Dealer dealer_;
    Deck deck_;
    vector<shared_ptr<Player>> players_;
};

#endif // BLACKJACK_HPP