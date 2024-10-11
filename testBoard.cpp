#include "Board.h"
#include "testPlayer.cpp"
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
    void testCheckHorizontalWin() {
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
    void testCheckVerticalWin() {
        cout << "Test: Checking vertical win conditions..." << endl;

        // Test 1: Vertical win for player 1
        Board board1(3);
        board1.setValue(0, 0, 1);
        board1.setValue(1, 0, 1);
        board1.setValue(2, 0, 1);
        board1.display();
        if (board1.checkWin(1)) {
            cout << "Vertical win (Player 1): PASSED" << endl;
        }
        else {
            cout << "Vertical win (Player 1): FAILED" << endl;
        }

        // Test 2: No vertical win for player 2
        Board board2(3);
        board2.setValue(0, 1, 2);
        board2.setValue(1, 1, 2);
        board2.setValue(2, 2, 2); // No vertical line for Player 2
        board2.display();
        if (!board2.checkWin(2)) {
            cout << "No vertical win for Player 2: PASSED" << endl;
        }
        else {
            cout << "No vertical win for Player 2: FAILED" << endl;
        }

        // Test 3: No win case for mixed board
        Board board3(3);
        board3.setValue(0, 0, 1);
        board3.setValue(1, 0, 2);
        board3.setValue(2, 0, 1);
        board3.display();
        if (!board3.checkWin(1)) {
            cout << "No vertical win for Player 1: PASSED" << endl;
        }
        else {
            cout << "No vertical win for Player 1: FAILED" << endl;
        }

        cout << "---------------------------" << endl;
    }
    void testCheckDiagonalWin() {
    cout << "Test: Checking diagonal win conditions..." << endl;

    // Test 1: Primary diagonal win for player 1
    Board board1(3);
    board1.setValue(0, 0, 1);
    board1.setValue(1, 1, 1);
    board1.setValue(2, 2, 1);
    board1.display();
    if (board1.checkWin(1)) {
        cout << "Primary diagonal win (Player 1): PASSED" << endl;
    } else {
        cout << "Primary diagonal win (Player 1): FAILED" << endl;
    }

    // Test 2: Secondary diagonal win for player 2
    Board board2(3);
    board2.setValue(0, 2, 2);
    board2.setValue(1, 1, 2);
    board2.setValue(2, 0, 2);
    board2.display();
    if (board2.checkWin(2)) {
        cout << "Secondary diagonal win (Player 2): PASSED" << endl;
    } else {
        cout << "Secondary diagonal win (Player 2): FAILED" << endl;
    }

    // Test 3: No diagonal win for player 1
    Board board3(3);
    board3.setValue(0, 0, 1);
    board3.setValue(1, 1, 2);  // Mixed player values
    board3.setValue(2, 2, 1);
    board3.display();
    if (!board3.checkWin(1)) {
        cout << "No diagonal win for Player 1: PASSED" << endl;
    } else {
        cout << "No diagonal win for Player 1: FAILED" << endl;
    }

    cout << "---------------------------" << endl;
}


};

int main() {
    BoardTest test;

    test.testInitialization();    // Test the board initialization
    test.testSetValue();          // Test setting values  
    test.testCheckHorizontalWin(); // Test horizontal win-checking functionality
    test.testCheckVerticalWin();
    test.testCheckDiagonalWin();

    Board board1(3);
    PlayerTest testPlayer;
    testPlayer.testMakeMove(board1);
    return 0;
}
