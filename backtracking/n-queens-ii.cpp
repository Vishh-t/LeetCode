class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        // checking column
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        // checking row
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // checking left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i-- && j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // checking right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i-- && j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    int queen(vector<string>& board, int n, int row) {
        if (row == n) {
            return 1;
        }

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (isSafe(board, row, j, n)) {
                board[row][j] = 'Q';
                count += queen(board, n, row + 1);
                board[row][j] = '.';
            }
        }
        return count;
    }
    int totalNQueens(int n) {
        vector<string> board;
        string s;
        for (int i = 0; i < n; i++) {
            s.push_back('.');
        }

        for (int i = 0; i < n; i++) {
            board.push_back(s);
        }

        int count = queen(board, n, 0);

        return count;
    }
};