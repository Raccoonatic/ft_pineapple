void    populate2(char **board, char *nmrs);
void    sudoku(char **board);
void    looker3conditions(char **board);
void    filler_lines(char **board);
void    filler_columns(char **board);

void first_line(char **board, char *nmrs)
{
    int     i;
    int     f;
    int     c;

    i = 1;
    f = 1;
    c = 0;
    while (f >= 1 && f <= 4)
    {
        board[0][f] = *nmrs;
        if (*nmrs == '4')
        {
            while (i >= 1 && i <= 4)
            {
                board[i][f] = '1' + c;
                c++;
                i++;
            }
        }
        else if (*nmrs == '1')
            board[1][f] = '4';
        f++;
        nmrs++;
    }
}
void last_line(char **board, char *nmrs)
{
    int     i;
    int     f;
    int     c;

    c = 0;
    f = 1;
    i = 4;
    while (f >= 1 && f <= 4)
    {
        board[5][f] = *nmrs;
        if (*nmrs == '4')
        {
            while (i >= 1 && i <= 4)
            {
                board[i][f] = '1' + c;
                c++;
                i--;
            }
        }
        else if (*nmrs == '1')
            board[4][f] = '4';
        f++;
        nmrs++;
    }
}
void first_column(char **board, char *nmrs)
{
    int     i;
    int     f;
    int     c;

    c = 0;
    f = 1;
    i = 1;
    while (f >= 1 && f <= 4)
    {
        board[f][0] = *nmrs;
        if (*nmrs == '4')
        {
            while (i >= 1 && i <= 4)
            {
                board[f][i] = '1' + c;
                c++;
                i++;
            }
        }
        else if (*nmrs == '1')
            board[f][1] = '4';
        nmrs++;
    }
}

void last_column(char **board, char *nmrs)
{
    int     i;
    int     f;
    int     c;

    c = 0;
    f = 1;
    i = 4;
    while (f >= 1 && f <= 4)
    {
        board[f][5] = *nmrs;
        if (*nmrs == '4')
        {
            while (i >= 1 && i <= 4)
            {
                board[f][i] = '1' + c;
                c++;
                i--;
            }
        }
        else if (*nmrs == '1')
            board[f][4] = '4';
        nmrs++;
    }
}

void    populate1(char **board, char *nmrs)
{
    board[0][0] = '\0';
    board[0][5] = '\0';
    board[5][0] = '\0';
    board[5][5] = '\0';
    first_line(board, nmrs);
    last_line(board, nmrs);
    first_column(board, nmrs);
    last_column(board, nmrs);
    populate2(board, nmrs);
    looker3conditions(board);
    sudoku(board);
    filler_lines(board);
    filler_columns(board);

}
