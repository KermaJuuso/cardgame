#include <iostream>
#include "../include/deckOfCards.hpp"
using namespace std;

int main() {
   Deck deck;
   deck.fill();
   //deck.shuffle();

   deck.printDeck();

}