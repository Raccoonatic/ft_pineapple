void filler_first_line(char **board)
{
    int f;
    int c;
    int sum;
    int column;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    column = -1;
    while (f <= 4) {
        if (board[1][f] >= '1' && board[1][f] <= '4') 
        {
            c++;
            sum += board[1][f] - '0'; 
        } 
        else 
            column = f; 
        f++;
    }
    if (c == 3 && column != -1) 
    {
        missing_number = 10 - sum; 
        board[1][column] = missing_number + '0'; 
    }
}
void filler_second_line(char **board)
{
    int f;
    int c;
    int sum;
    int column;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    column = -1;
    while (f <= 4) 
    {
        if (board[2][f] >= '1' && board[2][f] <= '4') {
            c++;
            sum += board[2][f] - '0'; 
        } 
        else 
            column = f; 
        f++;
    }
    if (c == 3 && column != -1) {
        missing_number = 10 - sum; 
        board[2][column] = missing_number + '0'; 
    }
}

void filler_third_line(char **board)
{
    int f;
    int c;
    int sum;
    int column;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    column = -1;
    while (f <= 4) 
    {
        if (board[3][f] >= '1' && board[3][f] <= '4') {
            c++;
            sum += board[3][f] - '0'; 
        } 
        else 
            column = f; 
        f++;
    }
    if (c == 3 && column != -1) {
        missing_number = 10 - sum; 
        board[3][column] = missing_number + '0'; 
    }
}

void filler_fourth_line(char **board)
{
    int f;
    int c;
    int sum;
    int column;
    int missing_number;

    f = 1;
    c = 0;
    sum = 0;
    column = -1;
    while (f <= 4) 
    {
        if (board[4][f] >= '1' && board[4][f] <= '4') 
        {
            c++;
            sum += board[4][f] - '0'; 
        } 
        else 
            column = f; 
        f++;
    }
    if (c == 3 && column != -1) {
        missing_number = 10 - sum; 
        board[4][column] = missing_number + '0'; 
    }
}

void filler_lines(char **board)
{
    filler_first_line(board);
    filler_second_line(board);
    filler_third_line(board);
    filler_fourth_line(board);
}