class Solution {
public:bool isTrue(vector<vector<char>> board, int row, int col, int dig)
{
    int count = 0;
    // checking row
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == dig)
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }

    // checking column
    count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == dig)
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }

    // checking grid
    count = 0;
    int srow = row / 3 * 3;
    int scol = col / 3 * 3;
    for (int i = srow; i <= srow + 2; i++)
    {
        for (int j = scol; j <= scol + 2; j++)
        {
            if (board[i][j] == dig)
            {
                count++;
            }
        }
        if (count > 1)
        {
            return false;
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int dig = board[i][j];
            int row = i;
            int col = j;
            if (dig != '.')
            {
                if (!isTrue(board, row, col, dig))
                {
                    return false;
                }
            }
        }
    }
    return true;
    }
};