/* 
 * File:   main.cpp
 * Author: mazur
 *
 * Created on August 25, 2021, 6:39 PM
 * A sample implementation to get familiar with C++;
 */

#include <cstdlib>
#include <iostream>
#include <string>

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
    std::string player1Symbol;
    std::string player2Symbol;
    
    std::cout << "Please enter the symbol for "<< player1 << ": ";
    std::cin >> player1Symbol;
    
    std::cout << "Please enter the symbol for "<< player2 << ": ";
    std::cin >> player2Symbol;
    
    
    std::cout << "Let's start! Player \n";
    
    while(!b.hasWinner() and !b.gameIsOver()) {
        b.drawBoard();
        std::string pos;
        if (b.turnOfPlayer1) {
            std::cout << player1 << ", please enter a position from the board: ";
            std::cin >> pos;
            //std::cout<< "Test: " << pos << "\n";
            //std::cout<< "Test2: " << pos[0] << "\n";
            //std::cout<< "Test3: " << pos[1] << "\n";
            //std::cout<< "Test4: " << player1Symbol << "\n";
            
            char c = pos[0];
            int y = c - '0';
            
            char c1 = pos[1];
            int x = c1 - '0';
            
            b.putAtPosition(y,x, player1Symbol);
        } else {
            std::cout << player2 << ", please enter a position from the board: ";
            std::cin >> pos;
            
            char c = pos[0];
            int y = c - '0';
            
            char c1 = pos[1];
            int x = c1 - '0';
            
            b.putAtPosition(y,x, player2Symbol);
            //b.putAtPosition(pos[0], pos[1], player2Symbol);
        }
        
        
        
        
        b.turnOfPlayer1 = !b.turnOfPlayer1;
    }
    
    if (b.hasWinner()) {
        b.drawBoard();
        if(b.turnOfPlayer1) {
      std::cout << "Player2 wins!\n";  
    } else {
        std::cout << "Player1 wins!\n";
    }
    } else {
        std::cout << "We have a draw!";
    }
    
    return 0;
}

