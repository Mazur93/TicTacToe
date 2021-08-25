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

#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();
    Board(const Board& orig);
    virtual ~Board();
    void drawBoard();
    bool hasWinner();
private:
    char _board[3][3] = {'.','.','.','.','.','.','.','.','.'};
};

#endif /* BOARD_H */

