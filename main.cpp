/* 
 * File:   main.cpp
 * Author: mazur
 *
 * Created on August 25, 2021, 6:39 PM
 * A sample implementation to get familiar with C++;
 */

#include <cstdlib>
#include <iostream>

#include "Board.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //To store both player names
    std::string player1;
    std::string player2;
    
    std::cout << "Lets play tic-tac-toe!!!\n";
    
    std::cout << "Please enter the name of player 1: ";
    std::cin >> player1;
    
    std::cout << "Please enter the name of player 2: ";
    std::cin >> player2;
    
    Board b = Board();
    b.drawBoard();
    
    //get the symbols the players want to use
    char player1Symbol;
    char player2Symbol;
    
    std::cout << "Please enter the symbol for "<< player1 << ":";
    std::cin >> player1Symbol;
    
    std::cout << "Please enter the symbol for "<< player2 << ":";
    std::cin >> player2Symbol;
    
    std::cout << b.hasWinner() ;
    
    
    return 0;
}

