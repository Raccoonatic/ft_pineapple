void sudoku2(char **board)
{
    int pos2;

    pos2 = get_pos2(board);
    board[pos2/10][pos2%10] = '2';  
}

int get_pos2(char **board)
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
            if (board[i][f] == '2')
            {
                line[i-1] = 0;
                column[f-1] = 0;
            }
            f++;
        }       
        i++;
    }
    return (get_pos3_aux(line, column));
}

int get_pos2_aux(int *line, int *column)
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

