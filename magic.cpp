 class Solution {
public:
    bool isMagic(vector<vector<int>>& grid, int row, int col) {
        // Check if all elements in the 3x3 subgrid are between 1 and 9 and are distinct
        vector<int> count(10, 0); // Count occurrences of numbers 1-9

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                int num = grid[row + i][col + j];
                if (num < 1 || num > 9) return false;
                if (++count[num] > 1) return false;
            }
        }

        // Check if sums of rows, columns, and diagonals are all 15
        int sum = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        for (int i = 0; i < 3; ++i) {
            if (grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2] != sum) return false;
            if (grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i] != sum) return false;
        }
        if (grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != sum) return false;
        if (grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != sum) return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        // Loop over every possible 3x3 subgrid
        for (int i = 0; i <= rows - 3; ++i) {
            for (int j = 0; j <= cols - 3; ++j) {
                if (grid[i + 1][j + 1] == 5 && isMagic(grid, i, j)) {
                    ++count;
                }
            }
        }

        return count;
    }
};
