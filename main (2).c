#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
#include  <stdlib.h>
#include <time.h> 

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define Yellow  "\e[43m"//background
#define White  "\e[40m"//background
#define Cyan  "\e[46m"//background
#define SIZE 20
FILE *fptr1;
//Function prototype
int menu();
void help();
void computational();
void delay();
void score();
void mathematical();
void biological();
//Main was done by all of the group members by discussion 

void main() {
    int i;
    char choice;
    int option, start;
    int end;
    printf("\n\t\t\t"MAGENTA"Project: Abbreviation"RESET"\n\t\t\t"MAGENTA"Group 8"RESET
            "\n\t\t\t"MAGENTA"Group Members:"RESET
            "\n\t\t\t"MAGENTA"Fehmeeda Mustafa 681-FBAS/BSBI/F20"RESET
            "\n\t\t\t"MAGENTA"Zeenat begum     683-FBAS/BSBI/F20"RESET
            "\n\t\t\t"MAGENTA"Atiqa Maqbool    678-FBAS/BSBI/F20"RESET);
    delay();
    printf("\n\t\t"BLUE"======================================================="RESET);
    printf("\n\t\t\t\t"MAGENTA"Abbreviation Guess Game"RESET);
    printf("\n\t\t"BLUE"======================================================="RESET);
    delay();
    printf("\n\t\t\t\t"MAGENTA"Welcome""\n\t\t\t\t\t"MAGENTA"To""\n\t\t\t\t\t\t"
            MAGENTA"The Game"RESET);
    printf("\n\t\t"BLUE"======================================================="RESET);
    printf("\n\t\t"BLUE"======================================================="RESET);
    delay();
    printf("\n\t\t\t"MAGENTA"BECOME AN EXPERT IN GUESSING ABBREVIATION!!!!"RESET);
    do {
        //Displaying menu
        printf("\n\t\t"BLUE"======================================================="RESET);
        delay();
        printf("\n\t\t\t\t\t"MAGENTA"MENU"RESET);
        printf("\n\t\t"BLUE"======================================================="RESET);
        printf("\n\t\t"BLUE"======================================================="RESET);
        printf("\n\t\t\t"RED"> "MAGENTA"Press S to Start the Game"RESET);
        delay();
        printf("\n\t\t\t"RED"> "MAGENTA"Press v to view the Highest score"RESET);
        delay();
        printf("\n\t\t\t"RED"> "MAGENTA"Press H for Help"RESET);
        delay();
        printf("\n\t\t\t"RED"> "MAGENTA"Press E to Exit"RESET);
        delay();
        printf("\n\t\t"BLUE"======================================================="RESET);
        delay();
        //Asking for choice
        do {
            //Checking the choice
            printf("\n\t\t\t"MAGENTA"Enter your choice:"RESET);
            scanf(" %c",&choice);
            choice = toupper(choice);
            getchar();
            if ((choice != 'H')&&(choice != 'E')&&(choice != 'S')&&(choice != 'V')) {
                delay();
                printf("\n\t\t\t"RED"Invalid input.Try again"RESET);

            }
        } while ((choice != 'H')&&(choice != 'E')&&(choice != 'S')&&(choice != 'V'));

        //Working according to choice
        switch (choice) {
            case 'S':
                //Opening file
                fptr1 = fopen("score.txt", "a");
                char s1[50];
                do {
                    //Taking user name
                    printf("\n\t\t\t"MAGENTA"Enter Player Name:"RESET);

                    fgets(s1, 49, stdin);
                    strupr(s1);
                    if (s1[0] == '\n')
                        printf("\n\t\t\t"RED"ERROR!Player name can not be empty "RESET);
                } while (s1[0] == '\n');
                //Storing user name in file
                fprintf(fptr1, "\n%s", s1);
                //Closing of file 
                fclose(fptr1);
                delay();
                //Tips
                printf("\n\t\t"RED"Here are some tips you might wanna know before playing:"RESET);
                delay();
                printf("\n\t\t"BLUE"--------------------------------------------------------"RESET);
                delay();
                printf("\n\t\t"RED">> "MAGENTA"There are 3 Types of Abbreviation guesses"RESET);
                printf("\n\t\t"RED">> "MAGENTA"You can select anyone of them"RESET);
                delay();
                printf("\n\t\t"RED">> "MAGENTA"Total 10 Question in each of them"RESET);
                delay();
                printf("\n\t\t"RED">> "MAGENTA"1 will be added to your score if you guess right"RESET);
                delay();
                printf("\n\t\t"RED">> "MAGENTA"Otherwise 1 will be deducted from your score"RESET);
                delay();
                printf("\n\n\t\t"BLUE"_____________________"MAGENTA"All The Best"BLUE"_____________________"RESET);
                delay();
                do {

                    printf("\n\n\t\t\t"MAGENTA"Press Y to start the game:"RESET);
                    start = toupper(getchar());
                    getchar();
                } while (start != 'Y');

                //Types of Abbreviation
                printf("\n\t\t\t"MAGENTA"Which type of abbreviation you want to guess"RESET);
                printf("\n\t\t\t"MAGENTA"1-Biological Abbreviation"RESET);
                printf("\n\t\t\t"MAGENTA"2-Computational Abbreviation"RESET);
                printf("\n\t\t\t"MAGENTA"3-Mathematical Abbreviation"RESET);
                //Checking for option
                do {
                    printf("\n\t\t\t"MAGENTA"Enter your option:"RESET);
                    scanf("%d", &option);
                    if (option != 1 && option != 2 && option != 3)
                        printf("\n\t\t\t"RED"ERROR! Invalid Input..Try Again.."RESET);
                } while (option != 1 && option != 2 && option != 3);
                //Working According to option
                switch (option) {
                    case 1:
                        delay();
                        printf("\n\t\t\t"MAGENTA"Hi %s.""\n\t\t\t"MAGENTA"Welcome to Abbreviation Guess Game"RESET, s1);
                        getchar();
                        delay();
                        biological();
                        break;
                    case 2:
                        delay();
                        printf("\n\t\t\t"MAGENTA"Hi %s.""\n\t\t\t"MAGENTA"Welcome to Abbreviation Guess Game\n"RESET, s1);
                        getchar();
                        delay();
                        computational();
                        break;
                    case 3:
                        delay();
                        printf("\n\t\t\t"MAGENTA"Hi %s.""\n\t\t\t"MAGENTA"Welcome to Abbreviation Guess Game"RESET, s1);
                        getchar();
                        delay();
                        mathematical();
                        break;

                }
                break;
            case 'V':
                score();
                delay();
                break;
            case 'H':
                help();
                delay();
                break;
            case 'E':
                exit(1);
                break;
        }//switch

        do {
            printf("\n\n\t\t"MAGENTA"If you want to return to main menu Press Y otherwise Press E to exit:"RESET);
            end = toupper(getchar());
            getchar();
            if (end != 'E' && end != 'Y')
                printf("\n\t\t"RED"ERROR!..Invalid Input..."RESET);
        } while (end != 'E' && end != 'Y');
    } while (end != 'E');
    printf("\n\n\t\t\t"BLUE"Thanks for Playing......"RESET);
}//main
//Function for Displaying help it only contain some Game information.

void help() {
    printf("\n\t\t"MAGENTA"..................................................."RESET);
    delay();
    printf("\n\t\t"MAGENTA"................"BLUE"Abbreviation Guess Game"MAGENTA"............"RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"There are three different types of abbreviation."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"You can select anyone of them."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"Each type consist of 10 questions."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"You can only guess once."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"You will be asked questions continuously."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"If you guess right +1 will be added to your score."RESET);
    delay();
    printf("\n\t\t"RED">> "BLUE"If you guess wrong -1 will be subtracted from your score."RESET);
    delay();
    printf("\n\t\t"MAGENTA"****************************************************"RESET);
    delay();
    printf("\n\t\t"MAGENTA"*******************"BLUE"BEST OF LUCK"MAGENTA "*********************"RESET);
    delay();
}
//Used to Display Statement one after another

void delay() {
    long double i;
    //As the value of i is extremely large so loop take same time to run that much time
    //We only used this for delaying purpose
    for (i = 1; i <= 100000000; i++);
}
//Done By Fehmeeda Mustafa
void computational() {
    int score;
    char type[]={"Computational"};
    //Array of Questions
    char *questions[SIZE] = {"What does WWW stands for?"//1
        , "What does CPU stands for?"//2
        , "What does CC stands for?"//3
        , "What does USB stands for?"//4
        , "What does AT stands for?"//5
        , "What does DVD stands for?"//6
        , "What does OS stands for?"//7
        , "What does PDF stands for?"//8
        , "What does URL stands for?"//9
        , "What does IP stands for?"//10
        , "What does HTTP stands for?"//11
        , "What does Wi-Fi stands for?"//12
        , "What does URI stands for?"//13
        , "What does PC stands for?"//14
        , "What does LED stands for?"//15
        , "What does IT stands for?"//16
        , "What does HD stands for?"//17
        , "What does HTML stands for?"//18
        , "What does DVR stands for?"//19
        , "What does CD stands for?"//20
    };
    //Array of Answers
    char *answers[SIZE] = {"WORLD WIDE WEB"//1
        , "CENTRAL PROCESSING UNIT"//2
        , "CARBON COPY"//3
        , "UNIVERSAL SERIAL BUS"//4
        , "ACCESS TIME"//5
        , "DIGITAL VIDEO DISPLAY"//6
        , "OPERATING SYSTEM"//7
        , "PORTABLE DOCUMENT FORMAT"//8
        , "UNIFORM RESOURCE LOCATOR"//9
        , "INTERNET PROTOCOL"//10
        , "HYPERTEXT TRANSFER PROTOCOL"//11
        , "WIRELESS FIDELITY"//12
        , "UNIFORM RESOURCE IDENTIFIER"//13
        , "PERSONAL COMPUTER"//14
        , "LIGHT EMITTING DIODE"//15
        , "INFORMATION TECHNOLOGY"//16
        , "HIGH DENSITY"//17
        , "HYPERTEXT MARKUP LANGUAGE"//18
        , "DIGITAL VIDEO RECORDER"//19
        , "COMPACT DISC"//20
    };

    int i;
    char boolean[SIZE];
    //Using loop for Displaying 10 question
    for (i = 1; i <= 10; i++) {
        srand(time(NULL));
        int position;
        char ans[100];
        //Checking that either  questions are repeating or not
        do {
            position = rand() % SIZE; //Generating random position for Random Questions

        } while (boolean[position] == '1');

        delay();
        //Displaying Question
        printf("\n\t\t\t"MAGENTA"%s"RESET, questions[position]);
        printf("\n\t\t\t"MAGENTA"Enter your guess:"RESET);
        gets(ans);
        strupr(ans);
        //Am Assigning that position of boolean with '1' so that next time same position will not repeat 
        boolean[position] = '1';
        //Comparing strings and also displaying correct or wrong
        if (strcmp(ans, answers[position]) == 0) {
            delay();
            printf("\n\t\t\t"GREEN"Correct"RESET);
            score++;
            continue;
        } else {
            delay();
            printf("\n\t\t\t"RED"Wrong"RESET);
            score--;
            continue;
        }
    }
    delay();
    //Displaying score 
    printf("\n\t\t\t"BLUE"Your Score is %d", score);
    delay();
    printf("\n\t\t\t"
            BLUE"If you want to see highest score.Go to main menu and Press V to see Highest Score"RESET);
    fptr1 = fopen("score.txt", "a");
    fprintf(fptr1, "%s\n%d", type, score);
    fclose(fptr1);
}

void score() {
    int score;
    int highest = 0;
    char name[50];
    char type[20];

    //Opening file in read mood
    fptr1 = fopen("score.txt", "r");

    //Reading from file and Storing data in new variable
    int status = 0;
    //Here status is acting as a flag and its true value is 3 and false value is 0
    status = fscanf(fptr1, "%s%s%d", name,type, &score);
    //compiler can only enter inside this if structure when status value is 3
    if (status == 3) {
        printf("\n\n\t\t\t"BLUE"Players Name"BLUE"\tType"BLUE"\t\tScore\t"RESET, name, score);

        highest = score;
        //Checking end of file
        while (status != EOF) {
            printf("\n\t\t\t"MAGENTA"%s\t"MAGENTA"\t%s\t"MAGENTA"%d"RESET, name, type,score);
            status = fscanf(fptr1, "%s%s%d", name,type, &score);

            //Checking for highest score and storing them in new variable

            if (highest < score) {
                highest = score;

            }
        }
        //Closing of File
        fclose(fptr1);
        //Displaying Highest Score
        printf("\n\n\t\t"MAGENTA"*******************************************************"RESET);
        printf("\n\t\t"MAGENTA"*""\t\t"BLUE"    HIGHEST SCORE"RESET"\t\t"MAGENTA"      *");
        printf("\n\t\t"MAGENTA"*""\t\t\t\t\t\t"MAGENTA"      *");
        printf("\n\t\t"MAGENTA"*"RESET"\t\t\t"MAGENTA"%d"RESET"\t\t\t"MAGENTA"      *", highest);
        printf("\n\t\t"MAGENTA"*******************************************************"RESET);
    } else
        printf("\n\t\t"MAGENTA"No Higher score yet...");
}

//Done By Atiqa Maqbool 

void biological() {
    int record;
    char bio[]={"Biological"};
    //Array of Questions
    char *questions[SIZE] = {"What does DNA stands for?"
        , "What does AIDS  stands for?"
        , "What does ORFs stands for?"
        , "What does HIV stands for?"
        , "What does AA stands for?"
        , "What does miRNA stands for?"
        , "What does PCR stands for?"
        , "What does RT stands for?"
        , "What does UV stands for?"
        , "What does VCA stands for?"
        , "What does IGF stands for?"
        , "What does NCRs stands for?"
        , "What does UNAIDS stands for?"
        , "What does BP stands for?"
        , "What does GH stands for?"
        , "What does RBC stands for?"
        , "What does WBC stands for?"
        , "What does ATP stands for?"
        , "What does RNA stands for?"
        , "What does MRI stands for?"};
    //Array of Answers
    char *answers[SIZE] = {"DEOXYRIBONUCLEIC ACID"
        , "ACQUIRED IMMUNODEFICIENCY SYNDROME"
        , "OPEN READING FREAMES"
        , "HUMAN IMMUNODEFICIENCY VIRUS"
        , "AMINO ACID"
        , "MICRO-RNAs"
        , "POLYMERASE CHAIN REACTION"
        , "REVERSE TRANSCRIPTASE"
        , "ULTRAVIOLET"
        , "VIRAL CAPSID ANTIGENS"
        , "INSULIN-GROWTH FACTOR"
        , "NON-CODING REGIONS"
        , "UNITED NATIONS PROGRAMME ON HIV/AIDS"
        , "BLOOD PRESSURE"
        , "GROWTH HORMONES"
        , "RED BLOOD CELL"
        , "WHITE BLOOD CELL"
        , "ADENOSINE TRIPHOSPHATE"
        , "RIBONUCLEIC ACID"
        , "MAGNETIC RESONANCE IMAGING"};

    int j;
    char boolean[SIZE];
    //Using loop for Displaying 10 question
    for (j = 1; j <= 10; j++) {
        srand(time(NULL));
        int pos;
        char ans[100];
        //Checking that either  questions are repeating or not
        do {
            pos = rand() % SIZE; //Generating random position for Random Questions
        } while (boolean[pos] == '1');
        delay();
        //Displaying Question
        printf("\n\t\t\t"MAGENTA"%s", questions[pos]);
        printf("\n\t\t\t"MAGENTA"Enter your guess:");
        gets(ans);
        strupr(ans);
        //Am Assigning that position of boolean with '1' so that next time same position will not repeat 
        boolean[pos] = '1';
        //Comparing strings and also displaying correct or wrong
        if (strcmp(ans, answers[pos]) == 0) {
            delay();
            printf("\n\t\t\t"GREEN"Correct");

            record++;
            continue;
        } else {
            delay();
            printf("\n\t\t\t"RED"Wrong");
            record--;
            continue;
        }
    }
    delay();
    //Displaying score 
    printf("\n\t\t\t"BLUE"Your Score is %d", record);
    delay();
    printf("\n\t\t\t"
            BLUE"If you want to see highest score.Go to main menu and Press V to see Highest Score"RESET);
    fptr1 = fopen("score.txt", "a");
    fprintf(fptr1, "%s\n%d", bio, record);
    fclose(fptr1);

}
//Done by Zeenat Begum

void mathematical() {
    int marks;
    char s1[]={"Mathematical"};
    //Array of Questions
    char *questions[SIZE] = {"What does mm stands for?"//1
        , "What does oz stands for?"//2
        , "What does yd stands for?"//3
        , "What does pt stands for?"//4
        , "What does gal stands for?"//5
        , "What does qt stands for?"//6
        , "What does in stands for?"//7
        , "What does s stands for?"//8
        , "What does kg stands for?"//9
        , "What does t stands for?"//10
        , "What does km  for?"//11
        , "What does tbsp.  stands for?"//12
        , "What does Ib stands for?"//13
        , "What does tsp  stands for?"//14
        , "What does  m stands for?"//15
        , "What does wk  stands for?"//16
        , "What does  mi  stands for?"//17
        , "What does ft  stands for?"//18
        , "What does min  stands for?"//19
        , "What does  g  stands for?"//20
    };
    //Array of Answers
    char *answers[SIZE] = {"MILLIMETER"//1
        , "OUNCE"//2
        , "YARD"//3
        , "POINT"//4
        , "GALLON"//5
        , "QUART"//6
        , "INCH"//7
        , "SECOND"//8
        , "KILOGRAM"//9
        , "TON"//10
        , "KILOMETER"//11
        , "TABLESPOON"//12
        , "POUND"//13
        , "TEASPOON"//14
        , "METER"//15
        , "WEEK"//16
        , "MILE"//17
        , "FEET"//18
        , "MINUTE"//19
        , "GRAM"//20
    };

    int x;
    char boolean[SIZE];
    //Using loop for Displaying 10 question
    for (x = 1; x <= 10; x++) {
        srand(time(NULL));
        int value;
        char guess[100];
        //Checking that either  questions are repeating or not
        do {
            value = rand() % SIZE; //Generating random position for Random Questions

        } while (boolean[value] == '1');
        delay();
        //Displaying Question
        printf("\n\t\t\t"MAGENTA"%s", questions[value]);
        printf("\n\t\t\t"MAGENTA"Enter your guess:");
        gets(guess);
        strupr(guess);
        //Am Assigning that position of boolean with '1' so that next time same position will not repeat 
        boolean[value] = '1';
        //Comparing strings and also displaying correct or wrong
        if (strcmp(guess, answers[value]) == 0) {
            delay();
            printf("\n\t\t\t"GREEN"Correct");

            marks++;
            continue;
        } else {
            delay();
            printf("\n\t\t\t"RED"Wrong");
            marks--;
            continue;
        }

    }
    delay();
    //Displaying score 
    printf("\n\t\t\t"BLUE"Your Score is %d", marks);
    delay();
    printf("\n\t\t\t"
            BLUE"If you want to see highest score.Go to main menu and Press V to see Highest Score"RESET);
    fptr1 = fopen("score.txt", "a");
    fprintf(fptr1, "%s\n%d", s1, marks);
    fclose(fptr1);

}
