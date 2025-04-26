// A Simple Quiz
#include <stdio.h>

struct Question {
    char question[300];
    char optionA[100];
    char optionB[100];
    char optionC[100];
    char optionD[100];
    char correctOption;
};

int main() {
    struct Question quiz[] = {
        {"Which city is known as pink city in India?",
         "A. Agra", "B. Jaipur", "C. Kolkata", "D. Mumbai", 'B'},

        {"Which planet is known as the Red Planet?",
         "A. Earth", "B. Jupiter", "C. Mars", "D. Venus", 'C'},

        {"Which fruit is known as the king of fruits?",
         "A. Apple", "B. Grapes", "C. Mango", "D. Banana", 'C'},

        {"Which is the national bird of India?",
         "A. Pigeon", "B.Crow", "C. Sparrow", "D. Peacock", 'D'},

        {"What is the largest continent in the world ?",
         "A. South America", "B. Antarctica", "C. Asia", "D. North America", 'C'}
    };

    int score = 0;
    char answer;
    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);

    printf("=== Welcome to the Quiz Game ===\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("\nQ%d: %s\n", i + 1, quiz[i].question);
        printf("%s\n%s\n%s\n%s\n", quiz[i].optionA, quiz[i].optionB, quiz[i].optionC, quiz[i].optionD);
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer == quiz[i].correctOption || answer == quiz[i].correctOption + 32) { // check lowercase too
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct answer was %c.\n", quiz[i].correctOption);
        }
    }

    printf("\n=== Quiz Over! ===\n");
    printf("Your Score: %d out of %d\n", score, totalQuestions);

    if (score == totalQuestions)
        printf("Excellent! 🎉\n");
    else if (score >= totalQuestions / 2)
        printf("Good job! 👍\n");
    else
        printf("Better luck next time! 💪\n");

    return 0;
}
