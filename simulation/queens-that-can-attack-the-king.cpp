class Solution {
public:
    bool attacks(vector<string>& board, int row, int col, int n) {

        // row check(downwards)
        for (int i = row + 1; i < n; i++) {

            if (board[i][col] != '.') {
                if (board[i][col] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // row check ( upwards)
        for (int i = row - 1; i >= 0; i--) {

            if (board[i][col] != '.') {
                if (board[i][col] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // column check (rightwards)

        for (int j = col + 1; j < n; j++) {
            if (board[row][j] != '.') {
                if (board[row][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // column check (leftwards)

        for (int j = col - 1; j >= 0; j--) {
            if (board[row][j] != '.') {
                if (board[row][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // left diagonal check ( upwards)
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] != '.') {
                if (board[i][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // left diagonal check (downwards)
        for (int i = row + 1, j = col - 1; i < n && j >= 0; i++, j--) {
            if (board[i][j] != '.') {
                if (board[i][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // right diagonal check (upwards)

        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] != '.') {
                if (board[i][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        // right diagonal check (downwards)

        for (int i = row + 1, j = col + 1; i < n && j < n; i++, j++) {
            if (board[i][j] != '.') {
                if (board[i][j] == 'K') {
                    return true;
                } else {
                    break;
                }
            }
        }

        return false;
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens,
                                            vector<int>& king) {
        string s;
        int n = 8;
        vector<string> board;
        for (int i = 0; i < n; i++) {
            s.push_back('.');
        }
        for (int i = 0; i < n; i++) {
            board.push_back(s);
        }

        board[king[0]][king[1]] = 'K';
        for (int i = 0; i < queens.size(); i++) {
            board[queens[i][0]][queens[i][1]] = 'Q';
        }

        vector<vector<int>> ans;
        for (int i = 0; i < queens.size(); i++) {
            if (attacks(board, queens[i][0], queens[i][1], n)) {
                ans.push_back(queens[i]);
            }
        }
        return ans;
    }
};