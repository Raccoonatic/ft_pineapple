void first_line2s(char **board)
{
    int i;

    i = 1;
    while (i <= 4)
    {
        if (board[0][i] == '2' && board[4][i] == '4')
        {
            board[1][i] = '3';
        }
        i++;
    }
}

void last_line2s(char **board)
{
    int i;

    i = 1;
    while (i <= 4)
    {
        if (board[5][i] == '2' && board[1][i] == '4')
        {
            board[4][i] = '3';
        }
        i++;
    }
}

void populate2(char **board, char *nmrs)
{
    int i;

    first_line2s(board);
    last_line2s(board);
    i = 1;
    while (i <= 4)
    {
        if (board[i][0] == '2' && board[i][4] == '4')
        {
            board[i][1] = '3';
        }
        i++;
    }
    i = 1;
    while (i <= 4)
    {
        if (board[i][5] == '2' && board[i][1] == '4')
        {
            board[i][4] = '3';
        }
        i++;
    }
}

