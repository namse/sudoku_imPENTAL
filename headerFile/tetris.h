#ifndef TETRIS_H
#define TETRIS_H

#include "struct.h"

#define W 119
#define SPACE 32
#define UP 65
#define DOWN 66
#define LEFT 67
#define RIGHT 68

/* 완성 */
void create_Board(tetris* t);

/* 완성 */
void tetris_Print(tetris* t);

/* 완성 */
void setting_Tetris(tetris* t, int width, int height);

int hittest_block(tetris* t);

void carveblock(tetris* t);

void check_line(tetris* t);

void remove_line(tetris* t, int line);

#endif