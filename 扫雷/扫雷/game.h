#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//核心位置的行和列
#define ROW 9   
#define COL 9
//整个数组的大小
#define ROWS ROW+2
#define COLS COL+2

#define EASY 10  //雷的个数

void init_board(char board[ROWS][COLS], int rows, int cols, char set);  //初始化
void print_board(char board[ROWS][COLS], int row, int col);   //打印棋盘
void set_mine(char board[ROWS][COLS], int row, int col);   //设置雷
void clear_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  //排雷
int get_mine_count(char board[ROWS][COLS], int x, int y);  //统计雷的个数

#endif //__GAME_H__
