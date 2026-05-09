class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int startRow = 0;
        int endRow = m - 1;
        int startCol = 0;
        int endCol = n - 1;

        while (startRow <= endRow && startCol <= endCol) {

            vector<int> layer;

            // Extract layer

            // First row
            for (int j = startCol; j <= endCol; j++) {
                layer.push_back(grid[startRow][j]);
            }

            // Right column
            for (int i = startRow + 1; i <= endRow - 1; i++) {
                layer.push_back(grid[i][endCol]);
            }

            // Bottom row
            for (int j = endCol; j >= startCol; j--) {
                layer.push_back(grid[endRow][j]);
            }

            // Left column
            for (int i = endRow - 1; i >= startRow + 1; i--) {
                layer.push_back(grid[i][startCol]);
            }

            // Rotate layer
            int size = layer.size();
            int rot = k % size;

            vector<int> rotated(size);

            for (int i = 0; i < size; i++) {
                rotated[i] = layer[(i + rot) % size];
            }

            // Put back values
            int idx = 0;

            // First row
            for (int j = startCol; j <= endCol; j++) {
                grid[startRow][j] = rotated[idx++];
            }

            // Right column
            for (int i = startRow + 1; i <= endRow - 1; i++) {
                grid[i][endCol] = rotated[idx++];
            }

            // Bottom row
            for (int j = endCol; j >= startCol; j--) {
                grid[endRow][j] = rotated[idx++];
            }

            // Left column
            for (int i = endRow - 1; i >= startRow + 1; i--) {
                grid[i][startCol] = rotated[idx++];
            }

            // Move to inner layer
            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }

        return grid;
    }
};