#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Board {
private:
    int n;  // Size of the board (n x n)
    vector<vector<int>> grid;  // Dynamic 2D vector to represent the grid
    const int PLAYER_1_VALUE = 1;
    const int PLAYER_2_VALUE = 2;
    bool checkHorizontalWin(int player_number) {
        bool won = true;
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < n; column++) {
                if (grid[row][column] == player_number) continue;
                else {
                    won = false;
                    break;
                }
            }
            if (won) {
                return true;
            }
        }
        return false;
    }

    bool checkVerticalWin(int player_number) {
        bool won = true;
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < n; column++) {
                if (grid[column][row] == player_number) continue;
                else {
                    won = false;
                    break;
                }
            }
            if (won) {
                return true;
            }
        }
        return false;
    }

public:
    // Constructor to initialize the grid with size n
    Board(int n) {
        this->n = n;  // Use 'this->' to explicitly refer to the class member 'n'
        this->grid = vector<vector<int>>(n, vector<int>(n, 0));  // Initialize grid with size n
    }

    void setValue(int row,int column,int value) {

        if(this->grid[row][column]==0 && (value== PLAYER_1_VALUE || value== PLAYER_2_VALUE)){
            this->grid[row][column] = value;
        }
    }

   
    bool checkWin(int player_number) {
        //check on horizontal line
        bool isHorizontalWin = checkHorizontalWin(player_number);
        if (isHorizontalWin) {
            return true;
        }
        bool isVerticalWin = checkVerticalWin(player_number);
        if (isVerticalWin) {
            return true;
        }
        return false;
        
    }

    // Method to display the grid
    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << this->grid[i][j];  // Use 'this->' to access the grid
                if (j < n - 1) cout << " | ";  // Column separators
            }
            cout << endl;
            if (i < n - 1) {
                for (int k = 0; k < n; k++) {
                    cout << "--";  // Row separators
                    if (k < n - 1) cout << "+";
                }
                cout << endl;
            }
        }
    }

    
};
