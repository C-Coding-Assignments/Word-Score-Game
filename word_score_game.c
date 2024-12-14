
#include <stdio.h>
#include <stdbool.h>

//function definition for calculate_score which checks to make sure the user input a valid number of arguments; otherwise, the user will get an error message
int calculate_score(char *);

int main(int argc, char *argv[])
{
    //variable declaration and initialization
    char **ptr = ++argv;
    int ptsMarjorie, ptsJohn;
    
    //selection statement which checks if the user entered three arguments into the command line
    if (argc == 3)
    {
        //for loop which iterates over the last two arguments that the user entered
        for (int i = 1; i < argc; i++, ptr++)
            //ternary operator which assigns points to Marjorie for the second argument and points to John for the third argument 
            (i == 1) ? (ptsMarjorie = calculate_score(*ptr)) : (ptsJohn = calculate_score(*ptr));

        //selection statement which checks if Marjorie earned more points than John
        if (ptsMarjorie > ptsJohn)
            printf("Marjorie wins!\n");
        //selection statement which checks if John earned the same number of points as Marjorie   
        else if (ptsMarjorie == ptsJohn)
            printf("Play again!\n");
        //selection statement which checks if John earned more points than Marjorie  
        else
            printf("John wins!\n");            
    }    

    //selection statement which evaluates to true if the user did not enter three arguments
    else
        printf("invalid number of arguments\n");    

    return 0;
}

//function definiton for calculate_score which determines whether the user's input is valid or not
int calculate_score(char *ptr)
{
    //variable declaration and initialization
    int points = 0;
    
    //for loop which iterates through the entire string and tallies up the number of points the player earned
    for (; *ptr != '\0'; ptr++)
    {
        //conditional statement which when evaluated to true adds 1 point to user's score
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            points++;

        //conditional statement which when evaluated to true adds 2 points to user's score
        else if (*ptr == 't' || *ptr == 'n' || *ptr == 's' || *ptr == 'r' || *ptr == 'h')
            points += 2;

        //conditional statement which when evaluated to true adds 3 points to user's score
        else if (*ptr >= 'a' && *ptr <= 'z')
            points += 3;
    }

    return points;
}
