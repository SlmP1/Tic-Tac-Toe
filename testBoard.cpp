#include "Board.h"

class BoardTest {
public:
    // Test initializing the board with a given size
    void testInitialization() {
        cout << "Test: Initializing board..." << endl;
        Board board(3);  // Create a 3x3 board
        board.display();
        cout << "---------------------------" << endl;
    }

    // Test setting a value on the board
    void testSetValue() {
        cout << "Test: Setting values on board..." << endl;
        Board board(3);
        board.setValue(0, 0, 1);  // Set value at (0, 0)
        board.setValue(1, 1, 2);  // Set value at (1, 1)
        board.setValue(2, 2, 3);  // Set value at (2, 2)
        board.display();
        cout << "---------------------------" << endl;
    }
    void testCheckWin() {
        cout << "Test: Checking horizontal win conditions..." << endl;

        // Test 1: Horizontal win for player 1
        Board board1(3);
        board1.setValue(0, 0, 1);
        board1.setValue(0, 1, 1);
        board1.setValue(0, 2, 1);
        board1.display();
        if (board1.checkWin(1)) {
            cout << "Horizontal win (Player 1): PASSED" << endl;
        }

        // Test 2: No horizontal win for player 2
        Board board2(3);
        board2.setValue(0, 1, 2);
        board2.setValue(1, 1, 2);
        board2.setValue(2, 2, 2);
        board2.display();
        if (!board2.checkWin(2)) {
            cout << "No horizontal win for Player 2: PASSED" << endl;
        }

        // Test 3: No win case for mixed board
        Board board3(3);
        board3.setValue(0, 0, 1);
        board3.setValue(1, 1, 2);
        board3.setValue(2, 2, 1);
        board3.display();
        if (!board3.checkWin(1)) {
            cout << "No horizontal win for Player 1: PASSED" << endl;
        }

        cout << "---------------------------" << endl;
    }

};

int main() {
    BoardTest test;

    test.testInitialization();    // Test the board initialization
    test.testSetValue();          // Test setting values  
    test.testCheckWin();          // Test horizontal win-checking functionality
    return 0;
}
