/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: mazur
 * 
 * Created on August 25, 2021, 6:57 PM
 */

#include "Board.h"
#include <iostream>

Board::Board() {
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

//draw the current state of the game
void Board::drawBoard() {
    std::cout << _board[0][0] << "  " << _board[0][1] << "  " <<_board[0][2] << "\n";
    std::cout << _board[1][0] << "  " << _board[1][1] << "  " <<_board[1][2] << "\n";
    std::cout << _board[2][0] << "  " << _board[2][1] << "  " <<_board[2][2] << "\n";
}

//check whether someone has won (8 possibilities to win)
bool Board::hasWinner() {
    //check rows
    for(int i=0;i<3;i++){
        if(_board[i][0] == _board[i][1] and _board[i][0] == _board[i][2]){
            return true;
        }
    }
    
    // check columns
    for(int i=0;i<3;i++){
        if(_board[0][i] == _board[1][i] and _board[0][i] == _board[2][i]){
            return true;
        }
    }
    //check diagonals
    if (_board[0][0] == _board[1][1] and _board[0][0] == _board[2][2]) {
        return true;
    } else if (_board[0][2] == _board[1][1] and _board[1][1] == _board[2][0]) {
        return true;
    }
    
    return false;
}

