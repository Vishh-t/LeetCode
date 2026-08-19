class Solution {
public:
    bool isValid(vector<vector<int>>& board, int row, int col, int n,
                 int expval)

   {
    if (row < 0 || col < 0 || row >= n || col >= n || board[row][col] != expval)
    {
        return false;
    }

    if (expval == n * n - 1)
    {
        return true;
    }
    // making the 8 different calls possible for a night
    bool ans1 = isValid(board, row - 1, col + 2, n, expval + 1);
    if (ans1)
    {
        return true;
    }
    bool ans2 = isValid(board, row + 1, col + 2, n, expval + 1);
    if (ans2)
    {
        return true;
    }

    bool ans3 = isValid(board, row + 1, col - 2, n, expval + 1);
    if (ans3)
    {
        return true;
    }
    bool ans4 = isValid(board, row - 1, col - 2, n, expval + 1);
    if (ans4)
    {
        return true;
    }
    bool ans5 = isValid(board, row + 2, col + 1, n, expval + 1);
    if (ans5)
    {
        return true;
    }
    bool ans6 = isValid(board, row + 2, col - 1, n, expval + 1);
    if (ans6)
    {
        return true;
    }
    bool ans7 = isValid(board, row - 2, col + 1, n, expval + 1);
    if (ans7)
    {
        return true;
    }
    bool ans8 = isValid(board, row - 2, col - 1, n, expval + 1);
    if (ans8)
    {
        return true;
    }
    return false;
}

    bool checkValidGrid(vector<vector<int>>& board) {
        int n = board.size();
        return isValid(board, 0, 0, n, 0);
        ;
    }
};