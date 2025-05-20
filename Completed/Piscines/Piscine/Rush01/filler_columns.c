void filler_first_column(char **board)
{
    int f;
    int c;
    int sum;
    int line;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    line = -1;
    while (f <= 4) {
        if (board[f][1] >= '1' && board[f][1] <= '4') 
        {
            c++;
            sum += board[f][1] - '0'; 
        } 
        else 
            line = f; 
        f++;
    }
    if (c == 3 && line != -1) 
    {
        missing_number = 10 - sum; 
        board[line][1] = missing_number + '0'; 
    }
}
void filler_second_column(char **board)
{
    int f;
    int c;
    int sum;
    int line;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    line = -1;
    while (f <= 4) 
    {
        if (board[f][2] >= '1' && board[f][2] <= '4') {
            c++;
            sum += board[f][2] - '0'; 
        } 
        else 
            line = f; 
        f++;
    }
    if (c == 3 && line != -1) {
        missing_number = 10 - sum; 
        board[line][2] = missing_number + '0'; 
    }
}

void filler_third_column(char **board)
{
    int f;
    int c;
    int sum;
    int line;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    line = -1;
    while (f <= 4) 
    {
        if (board[f][3] >= '1' && board[f][3] <= '4') {
            c++;
            sum += board[f][3] - '0'; 
        } 
        else 
            line = f; 
        f++;
    }
    if (c == 3 && line != -1) {
        missing_number = 10 - sum; 
        board[line][3] = missing_number + '0'; 
    }
}

void filler_fourth_column(char **board)
{
    int f;
    int c;
    int sum;
    int line;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    line = -1;
    while (f <= 4) 
    {
        if (board[f][4] >= '1' && board[f][4] <= '4') 
        {
            c++;
            sum += board[f][4] - '0'; 
        } 
        else 
            line = f; 
        f++;
    }
    if (c == 3 && line != -1) {
        missing_number = 10 - sum; 
        board[line][4] = missing_number + '0'; 
    }
}

void filler_columns(char **board)
{
    filler_first_column(board);
    filler_second_column(board);
    filler_third_column(board);
    filler_fourth_column(board);
}