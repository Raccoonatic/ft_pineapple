void sudoku1(char **board)
{
    int pos1;

    pos1 = get_pos1(board);
    board[pos1/10][pos1%10] = '1';  
}

int get_pos1(char **board)
{
    int f;
    int i;
    int *line;
    int *column;


    line    = (int[]){1, 2, 3, 4};
    column  = (int[]){1, 2, 3, 4};
    f = 1;
    i = 1;
    while (i < 5)
    {
        while (f >= 1 && f<= 4)
        {
            if (board[i][f] == '1')
            {
                line[i-1] = 0;
                column[f-1] = 0;
            }
            f++;
        }       
        i++;
    }
    return (get_pos1_aux(line, column));
}

int get_pos1_aux(int *line, int *column)
{
    int result_line;
    int result_column;
    int i;

    i = 0;
    while (i < 4)
    {
        if (line[i] != 0)
            result_line = line[i];
        if (column[i] != 0)
            result_column = column[i];
        i++;
    }
    return (10 * result_line + result_column);
}

