/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: mazur
 *
 * Created on August 25, 2021, 6:57 PM
 */

#include<string>


#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    void drawBoard();
    bool hasWinner(); 
    void putAtPosition(int y, int x, std::string s);
    bool turnOfPlayer1 = true;
    bool gameIsOver();
private:
    std::string _board[3][3] = {"00","01","02","10","11","12","20","21","22"};
    int numberOfTurns = 0;
};

#endif /* BOARD_H */

