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
};

int main() {
    BoardTest test;

    test.testInitialization();    // Test the board initialization
    test.testSetValue();          // Test setting values  

    return 0;
}
