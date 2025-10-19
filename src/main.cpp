#include <iostream>
#include "../include/deck.hpp"
using namespace std;

int main() {
   Deck deck;
   deck.fill();
   //deck.shuffle();

   deck.printDeck();

}