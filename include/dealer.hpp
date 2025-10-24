#ifndef DEALER_HPP
#define DEALER_HPP
#include "card.hpp"
#include "hand.hpp"
#include <vector>
using namespace std;

class Dealer
{
public:
    Dealer();
    virtual ~Dealer();

private:
    Hand hand_;

};

#endif // DEALER_HPP