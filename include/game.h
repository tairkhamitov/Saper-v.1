#ifndef GAME_H
#define GAME_H

#define N 5

void show_pole(const char (*p)[N]);
void open_zeros(const char (*p)[N], char (*pp)[N], int i, int j);
int check_win(const char (*p)[N], const char (*m)[N]);

#endif