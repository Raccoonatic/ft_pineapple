
void sudoku1(char **board);
void sudoku2(char **board);
void sudoku3(char **board);
void sudoku4(char **board);

int    counter_first_line(char **board, int *c1, int *c2, int *c3)
{
    int     f;
    int     c4;

    c4 = 0;
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[1][f] == '1')
            c1++;
        else if (board[1][f] == '2')
            c2++;
        else if (board[1][f] == '3')
            c3++;
        else if (board[1][f] == '4')
            c4++;
        f++;
    }
    return (c4);
}

int    counter_second_line(char **board, int *c1, int *c2, int *c3)
{
    int     f;
    int     c4;

    c4 = 0;
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[2][f] == '1')
            c1++;
        else if (board[2][f] == '2')
            c2++;
        else if (board[2][f] == '3')
            c3++;
        else if (board[2][f] == '4')
            c4++;
        f++;
    }
    return (c4);
}

int    counter_third_line(char **board, int *c1, int *c2, int *c3)
{
    int f;
    int c4;

    c4 = 0;
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[3][f] == '1')
            c1++;
        else if (board[3][f] == '2')
            c2++;
        else if (board[3][f] == '3')
            c3++;
        else if (board[3][f] == '4')
            c4++;
        f++;
    }
    return (c4);
}

int    counter_fourth_line(char **board, int *c1, int *c2, int *c3)
{
    int f;
    int c4;

    c4 = 0;
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[4][f] == '1')
            c1++;
        else if (board[4][f] == '2')
            c2++;
        else if (board[4][f] == '3')
            c3++;
        else if (board[4][f] == '4')
            c4++;
        f++;
    }
    return (c4);
}

void    sudoku(char **board)
{
    int c1;
    int c2;
    int c3;
    int c4;

    c4 = counter_first_line(board, &c1, &c2, &c3);
    c4 = c4 + counter_second_line(board, &c1, &c2, &c3);
    c4 = c4 + counter_third_line(board, &c1, &c2, &c3);
    c4 = c4 + counter_fourth_line(board, &c1, &c2, &c3);
    if (c1 == 3)
        sudoku1(board);
    else if (c2==3)
        sudoku2(board);
    else if (c3==3)
        sudoku3(board);
    else if (c4==3)
        sudoku4(board);
    

}