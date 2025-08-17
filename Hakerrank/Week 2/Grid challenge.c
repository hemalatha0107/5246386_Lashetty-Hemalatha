char* gridChallenge(int grid_count, char** grid) {
    
    int n = grid_count;
    for (int i = 0; i < n; i++) {
        qsort(grid[i], strlen(grid[i]), sizeof(char),cmpfunc);
    }
    for (int col = 0; col < n; col++) {
        for (int row = 1; row < n; row++) {
            if (grid[row][col] < grid[row - 1][col]) {
                return "NO";
            }
        }
    }

    return "YES";
}
