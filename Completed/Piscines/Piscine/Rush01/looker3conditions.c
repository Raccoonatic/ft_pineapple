void looker3_lines__with_less_than_4_at_end(char **board) 
{
    int     f;

    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[0][f] == '3' && board[4][f] <= '4')
        {
            board[3][f] = '4';
        }
        f++;
    }
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[5][f] == '3' && board[1][f] <= '4')
        {
            board[2][f] = '4';
        }
        f++;
    }
}
void looker3_columns__with_less_than_4_at_end(char **board) 
{
    int     f;

    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[f][0] == '3' && board[f][4] <= '4')
        {
            board[f][3] = '4';
        }
        f++;
    }
    f = 1;
    while (f >= 1 && f <= 4)
    {
        if (board[f][5] == '3' && board[f][1] <= '4')
        {
            board[f][2] = '4';
        }
        f++;
    }
}

void looker3conditions (char **board)
{
    looker3_lines__with_less_than_4_at_end(board);
    looker3_columns__with_less_than_4_at_end(board);
}