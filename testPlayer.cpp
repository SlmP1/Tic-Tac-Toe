#include <iostream>
#include "board.h"
#include "player.h"

class PlayerTest {
public:
    // Test function to check if makeMove works
    void testMakeMove(Board &board) {
        // Create a player with index 1
        Player player1(1, board);

        // Player 1 makes a move at position (0, 0)
        player1.makeMove(0, 0);

        // Check if the move was made correctly
        std::cout << "Test 1 - Player 1 moves to (0, 0):" << std::endl;
        board.display();
        std::cout << std::endl;

        if (board.checkWin(1)) {
            std::cout << "Player 1 wins after the move!" << std::endl;
        }
        else {
            std::cout << "No winner yet." << std::endl;
        }

        // Player 1 makes another move at position (1, 1)
        player1.makeMove(1, 1);

        // Check board state again
        std::cout << "Test 2 - Player 1 moves to (1, 1):" << std::endl;
        board.display();
        std::cout << std::endl;

        if (board.checkWin(1)) {
            std::cout << "Player 1 wins after the second move!" << std::endl;
        }
        else {
            std::cout << "No winner yet after the second move." << std::endl;
        }
    }
};