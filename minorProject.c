#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char playerName[50];
    int score = 0;
    char entry, answer1, answer2, answer3, answer4, answer5;

    printf("Welcome to the IPL Trivia!\n");
    printf("Please enter your name: ");
    scanf("%s", playerName);
    printf("Instructions :\n 1. There are total 5 questions in the quiz.\n 2. Participant will get (+5) marks for every correct answer"
             " and (-1) for every incorrect answer.\n 3. There is no time limit.");
    
    printf("\nPress S'C' to continue or press any other key to exit");
    scanf("%s", &entry);

    if (entry == 'C' || entry == 'c'){
         
    // Question 1
    printf("\nQuestion 1: Which team has won the most IPL titles?\n");
    printf("A) Mumbai Indians\nB) Gujarat Titans\nC) Royal Challengers Banguluru\nD) Sunrisers Hyderabad\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer1);
    if (answer1 == 'A' || answer1 == 'a') {
        printf("Correct! +5 points\n");
        score += 5;
    } else {
        printf("Incorrect! (-1) points\n");
        score -= 1;
    }

    // Question 2
    printf("\nQuestion 2: Who holds the record for the fastest IPL century?\n");
    printf("A) Virat Kohli\nB) Rohit Sharma\nC) AB de villiers\nD) Chris Gayle\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer2);
    if (answer2 == 'D' || answer2 == 'd') {
        printf("Correct! +5 points\n");
        score += 5;
    } else {
        printf("Incorrect! (-1) points\n");
        score -= 1;
    }
     
     // Question 3
    printf("\nQuestion 3: How many teams currently participated in the IPL 2024 ?\n");
    printf("A) 08\nB) 10\nC) 12\nD) 14\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer3);
    if (answer3 == 'B' || answer3 == 'b') {
        printf("Correct! +5 points\n");
        score += 5;
    } else {
        printf("Incorrect! (-1) points\n");
        score -= 1;
    }

     // Question 4
    printf("\nQuestion 4: Which player has taken the most wickets in IPL history?\n");
    printf("A) Yuzvendra Chahal\nB) Lasith Malinga\nC) Rashid Khan\nD) Dwayne Bravo\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer4);
    if (answer4 == 'C' || answer4 == 'c') {
        printf("Correct! +5 points\n");
        score += 5;
    } else {
        printf("Incorrect! (-1) points\n");
        score -= 1;
    }
    // Question 5
    printf("\nQuestion 5: What is the maximum number of foreign players are allowed in an IPL playing XI\n");
    printf("A) 02\nB) 03\nC) 04\nD) 07\n");
    printf("Enter your answer (A/B/C/D): ");
    scanf(" %c", &answer5);
    if (answer5 == 'C' || answer5 == 'c') {
        printf("Correct! +5 points\n");
        score += 5;
    } else {
        printf("Incorrect! (-1) points\n");
        score -= 1;
    }
   
    // Result
    printf("\nThank you for playing, %s!\n", playerName);
    printf("Your total score: %d points out of 25 points\n", score);
    }

    else{
        printf("Atleast try once. You will find this game interesting!");
    }

    return 0;
}
