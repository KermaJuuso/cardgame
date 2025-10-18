#include <iostream>
#include "../include/deckOfCards.hpp"
using namespace std;

int main() {
   Deck deck;
   deck.fill();
   Deck lol = Deck(3);
   lol.fill();

   deck.printDeck();

}