#ifndef GAME_H
#define GAME_H

#define N 5

void init_pole(char pole[N][N]);
void show_pole(const char pole[N][N], const char opened[N][N]);
void open_cell(const char pole[N][N], char opened[N][N], int x, int y);
int is_mine(const char pole[N][N], int x, int y);
int check_win(const char pole[N][N], const char opened[N][N]);
void show_mines(const char pole[N][N]);

#endif