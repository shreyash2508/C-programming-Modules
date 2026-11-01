#include <stdio.h>
#include <stdbool.h>

char board[3][3];

// Initialize the board with empty numbers 1-9 for reference
void init_board() {
    int counter = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = '0' + counter;
            counter++;
        }
    }
}

// Print the game board
void draw_board() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Check if a player has won
bool check_win() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    
    return false;
}

// Place a marker on the board
bool place_marker(int slot, char marker) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (slot < 1 || slot > 9) return false;
    if (board[row][col] == 'X' || board[row][col] == 'O') return false;

    board[row][col] = marker;
    return true;
}

int main() {
    int current_player = 1;
    char marker;
    int slot;
    int total_moves = 0;
    bool game_won = false;

    init_board();

    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1 = X, Player 2 = O\n");

    while (total_moves < 9 && !game_won) {
        draw_board();
        marker = (current_player == 1) ? 'X' : 'O';
        
        printf("Player %d (%c), enter a slot (1-9): ", current_player, marker);
        if (scanf("%d", &slot) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (!place_marker(slot, marker)) {
            printf("Slot occupied or invalid! Try again.\n");
            continue;
        }

        total_moves++;
        game_won = check_win();

        if (!game_won) {
            current_player = (current_player == 1) ? 2 : 1;
        }
    }

    draw_board();

    if (game_won) {
        printf("Congratulations! Player %d wins!\n", current_player);
    } else {
        printf("It's a tie game!\n");
    }

    return 0;
}