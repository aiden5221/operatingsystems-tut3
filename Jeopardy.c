#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

    //Global variables for categories initialized
    char* Math = ("Math");
    char* Sci = ("Science");
    char* Geo = ("Geography");
    
    //Values initialized for each question
    int m1 = 100, s1 = 100, g1 = 100;
    int m2 = 200, s2 = 200, g2 = 200;
    int m3 = 300, s3 = 300, g3 = 300;
    
    //These keep track of which questions have been answered
    int x1 = 0, x2 = 0, x3 = 0;
    int x4 = 0, x5 = 0, x6 = 0;
    int x7 = 0, x8 = 0, x9 = 0;
    
    //Counter is used to keep track of how many questions have
    //been answered correctly
    int counter = 0;
    
void EndGame(){
    
    printf("Player Scores: ");
}
    
void CreateBoard(){
    
    //Checks if all answers have been answered
    if (counter == 9){
        
        printf("All questions have been answered!\n");
        EndGame();
        return 0;
    }
    
    //Print catagories
    printf(Math);
    printf("  ");
    printf(Sci);
    printf(" ");
    printf(Geo);
    printf("\n");
    
    //2-D array of questions initialized
    int Questions[3][3] = {{m1,s1,g1} ,{m2,s2,g2} ,{m3,s3,g3}};
    
    //2-D array is printed to represent board
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", Questions[i][j]);
            printf("    ");
        }
        printf("\n");
    }
    
    //Value from Compare function is sent to Ques function
    int val = Compare();
    Ques(val);
    
}


int Compare(){
    
    //A is used to idientfy position of question on board
    int A;
    
    //UserCat is the category chosen by the user
    char UserCat[10];
    
    //Recieve category from user
    printf("Enter Catagory(Case Sensitive): \n");
    scanf("%s", UserCat);
    
    //UserAm holds the amount the user chooses from the board
    int UserAm;
    
    //Recieve amount from user
    printf("Enter Amount: \n");
    scanf("%d", &UserAm);
    printf ("\n");
    
    //Category and amount from user are compared with positions on the board
    //and is given a value accordingly
    if((strcmp(UserCat, Math) == 0) && UserAm == 100){
        A = 1;
        
    } else if((strcmp(UserCat, Math) == 0) && UserAm == 200){
        A = 2;
        
    } else if((strcmp(UserCat, Math) == 0) && UserAm == 300){
        A = 3;
        
    } else if((strcmp(UserCat, Sci) == 0) && UserAm == 100){
        A = 4;
        
    }else if((strcmp(UserCat, Sci) == 0) && UserAm == 200){
        A = 5;
        
    }else if((strcmp(UserCat, Sci) == 0) && UserAm == 300){
        A = 6;
        
    }else if((strcmp(UserCat, Geo) == 0) && UserAm == 100){
        A = 7;
        
    }else if((strcmp(UserCat, Geo) == 0) && UserAm == 200){
        A = 8;
        
    }else if((strcmp(UserCat, Geo) == 0) && UserAm == 300){
        A = 9;
        
    } else {
        
        printf("Invalid Input. Try Again!\n");
        CreateBoard();
    }
    
    return A;
    
}

void Ques(int x){
    
    //ans holds the ans from the user
    char ans[10];
    
    
    //Based on position identified from the compare function a question is
    //displayed
    if (x == 1){
        
        //Checks if question has already been answered   
        if(x1 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }    
        
        //Display question and recieve answer
        printf("What does 10 x 20 equal: \n");
        scanf("%s", ans);
        
        
        //Check if answer is correct
        if ((strcmp(ans, "200") == 0)){
            
            //Postion on board is set to 0 
            printf("Correct\n");
            m1 = 0;
            x1 = 1;
            counter++;
            CreateBoard();
            
        } else {
            
            //Wrong answer
            printf("Wrong\n");
            CreateBoard();
            
        }
    }

    //Repeated from above for each question
    if (x == 2){
        
        if(x2 == 1){
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }    
        
        printf("What does 20 x 20 equal: \n");
        scanf("%s", ans);
    
        
        if ((strcmp(ans, "400") == 0)){
            
            printf("Correct\n");
            x2 = 1;
            m2 = 0;
            counter++;
            CreateBoard();
            
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 3){
        
        
        if(x3 == 1){
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }
        
        printf("What does 20 x 40 equal: \n");
        scanf("%s", ans);
        
        if ((strcmp(ans, "800") == 0)){
            
            printf("Correct\n");
            x3 = 1;
            m3 = 0;
            counter++;
            CreateBoard();
            
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
        
        
    }
    
    if (x == 4){
        
        if(x4 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }   
        
        printf("What is a common name for H20: \n");
        scanf("%s", ans);
        
        
        if ((strcmp(ans, "Water") == 0)){
            
            printf("Correct\n");
            x4 = 1;
            s1 = 0;
            counter++;
            CreateBoard();
        
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 5){
        
        
        if(x5 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        } 
        
        
        printf("What is the 8th element in the periodic table: \n");
        scanf("%s", ans);
           
        
        if ((strcmp(ans, "Oxygen") == 0)){
            
            printf("Correct\n");
            x5 = 1;
            s2 = 0;
            counter++;
            CreateBoard();
            
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 6){
        
        if(x6 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }  
        
        printf("What is the largest planet in the solar system: \n");
        scanf("%s", ans);
          
        
        if ((strcmp(ans, "Jupiter") == 0)){
            
            printf("Correct\n");
            x6 = 1;
            s3 = 0;
            counter++;
            CreateBoard();
        
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 7){
        
        
        if(x7 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }   
        
        
        printf("What is the largest country: \n");
        scanf("%s", ans);
         
        
        if ((strcmp(ans, "Russia") == 0)){
            
            printf("Correct\n");
            x7 = 1;
            g1 = 0;
            counter++;
            CreateBoard();
             
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 8){
        
        
        if(x8 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }    
        
        printf("How many states does America have: \n");
        scanf("%s", ans);
        
        
        if ((strcmp(ans, "50") == 0)){
            
            printf("Correct\n");
            x8 = 1;
            g2 = 0;
            counter++;
            CreateBoard();
              
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    if (x == 9){
        
        if(x9 == 1){
            
            printf("Question Has Already Been Answered!\n");
            CreateBoard();
        }   
        
        printf("What is the most populated country in the world: \n");
        scanf("%s", ans);
         
        
        if ((strcmp(ans, "China") == 0)){
            
            printf("Correct\n");
            x9 = 1;
            g3 = 0;
            counter++;
            CreateBoard();
             
        } else {
            
            printf("Wrong\n");
            CreateBoard();
            
        }
    }
    
    
    
}

int main(){
    
    //Create the board for the game Board
    CreateBoard();
}    
    
    