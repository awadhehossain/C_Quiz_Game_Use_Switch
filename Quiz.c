#include<stdio.h>
int main()
{
    int choice,answer1,answer2,answer3,answer4,answer5,total;

    printf("It is a quiz game.\n");
    printf("Total marks :25\n");
    printf("\nPress 1 to start the quiz.\n");
    printf("\nPress 0 to do not start the quiz.\n");
    printf("\nPress now:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        printf("\nThe quiz is starting.\nBe ready.\nBest of luck.");
        printf("\n\nQuestion1: Who is the father of C language ?\n");
        printf("1. Bjarne Stroustrup\n2. James A. Gosling\n3. Dennis Ritchie\n4. Dr. E.F. Codd\n");
        printf("\nEnter your answer here: ");
        scanf("%d",&answer1);
        switch(answer1)
        {
        case 1:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 2:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 3:
            printf("Your answer is right.\nYou got 5 points.\ncarry on.");
            break;
        case 4:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        default:
            printf("You press the invalid key for answer.\nTry again pls.");
        }
        printf("\n\nQuestion2: C Language was developed at ?\n");
        printf("1. AT & T Bell Laboratory\n2. MIT University\n3. Harvard University\n4. Stanford Lab\n");
        printf("\nEnter your answer here : ");
        scanf("%d",&answer2);
        switch(answer2)
        {
        case 1:
            printf("Your answer is right.\nYou got 5 points.\ncarry on.");
            break;
        case 2:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 3:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 4:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        default:
            printf("Your press the invalid key for answer.\nTry again pls.");
        }
        printf("\n\nQuestion3: Many features of C were derived from which language ?\n");
        printf("1. PASCAL\n2. B\n3. BASIC\n4. FORTRAN\n");
        printf("\nEnter your answer here : ");
        scanf("%d",&answer3);
        switch(answer3)
        {
        case 1:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 2:
            printf("Your answer is right.\nYou got 5 points.\ncarry on.");
            break;
        case 3:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 4:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        default:
            printf("Your press the invalid key for answer.\nTry again pls.");
        }
        printf("\n\nQuestion4: What is C language ?\n");
        printf("1. C language is a structure/procedure oriented\n");
        printf("2. C language is a middle level programming language\n");
        printf("3. C language was invented for implementing UNIX operating system\n");
        printf("4. All of the above\n");
        printf("\nEnter your answer here : ");
        scanf("%d",&answer4);
        switch(answer4)
        {
        case 1:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 2:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 3:
            printf("Your answer is wrong.\nDon't worry.\nTry the next one.");
            break;
        case 4:
            printf("Your answer is right.\nYou got 5 points.\ncarry on.");
            break;
        default:
            printf("You press the invalid key for answer.\nTry again pls.");
        }
        printf("\n\nQuestion5:  First version of C Programming language is ?\n");
        printf("1. K&R\n2. C89\n3. ANSI\n4. R&K");
        printf("\nEnter your answer here : ");
        scanf("%d",&answer5);
        switch(answer5)
        {
        case 1:
            printf("Your answer is right.\nYou got 5 points.\n ");
            break;
        case 2:
            printf("Your answer is wrong.\nDon't worry.\n");
            break;
        case 3:
            printf("Your answer is wrong.\nDon't worry.\n");
            break;
        case 4:
            printf("Your answer is wrong.\nDon't worry.\n");
            break;
        default:
            printf("You press the invalid key for answer.\nTry again pls.");

        }
        printf("\n\nRight Answer:\n");
        printf("Question1:1\n");
        printf("Question2:3\n");
        printf("Question3:2\n");
        printf("Question4:4\n");
        printf("Question5:1\n");
        printf("\nEnter your total marks : ");
        scanf("%d",&total);
        switch(total)
        {
        case 5:
            printf("Practice more and more\n ");
            break;
        case 10:
            printf("Not so Good.\nPractice\n");
            break;
        case 15:
            printf("Average marks.\nYou need little practice.\n");
            break;
        case 20:
            printf("Good\n");
            break;
        case 25:
            printf("Very Good.\nWell done.\n");
            break;

        default:
            printf("You press the invalid marks.\n");

        }
        printf("Thank you for giving me your valuable time.");


        break;
    }
    case 0:
        printf("OK.\nyou can take the quiz next time.\nThanks.");
        break;
    default:
        printf("You press the invalid key.\nTry again");


    }
    return 0;
}
