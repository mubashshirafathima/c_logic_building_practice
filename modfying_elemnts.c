// MODIFYING ELEMENTS OF ARRAY
// Write a function named updateScore that takes:

// An integer array representing the scores of 5 players
// A player number (1 to 5)
// A new score value
// The function should update the score of the specified player and then print all scores in the format: "Scores: [score1, score2, score3, score4, score5]"

// Remember that arrays in C are 0-indexed, so player 1 corresponds to index 0.

#include <stdio.h>

void updateScore(int scores[], int playerNumber, int newScore) {
    // Write your code here
    scores[playerNumber-1]=newScore;
    printf("Scores: [%d, %d, %d, %d, %d]",scores[0],scores[1],scores[2],scores[3],scores[4]);

}

int main() {
    int scores[5];
    
    // Read the current scores
    for (int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
    }
    
    // Read the player number and new score
    int playerNumber, newScore;
    scanf("%d %d", &playerNumber, &newScore);
    
    // Call the updateScore function
    updateScore(scores, playerNumber, newScore);
    
    return 0;
}