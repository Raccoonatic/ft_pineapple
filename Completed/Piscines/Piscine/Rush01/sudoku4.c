void sudoku4(char **board)
{
    int pos4;

    pos4 = get_pos4(board);
    board[pos4/10][pos4%10] = '4';  
}

int get_pos4(char **board)
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
            if (board[i][f] == '4')
            {
                line[i-1] = 0;
                column[f-1] = 0;
            }
            f++;
        }       
        i++;
    }
    return (get_pos4_aux(line, column));
}

int get_pos4_aux(int *line, int *column)
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

