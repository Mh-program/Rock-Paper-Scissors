/* Rock Paper Scissors
    Author: Mahim Hossain
    Date: 13/02/2020
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int player1, player2; // Player variables declared
    
    printf("\n Welcome to Rock Paper Scissors \n \n");
    
    // Player One input asked
    
    printf("\n Player One please enter your move: (Scissors = 0 Paper = 1 Rock = 2) \n \n");
    
    scanf("%d", &player1);
    
    flushall();
    
    // Player Two input asked
    
    printf("\n Player Two please enter your move \n \n");
    
    scanf("%d", &player2);
    
    flushall();
    
    printf("\n Player Inputs taken! \n \n");
    
    // Scissors Beats Paper Conditions
    
    if (player1 == 0 && player2 == 1) {

            if (player1 < player2) {
                
                printf("\n Player1 has won! Scissors beats paper \n \n");
                
            }
            
        }
        
    if (player2 == 0 && player1 == 1) {

            if (player2 < player1) {
                
                printf("\n Player2 has won! Scissors beats paper \n \n");
                
            }
            
        }
        
    //  Paper Beats Rock Conditions
        
    if (player1 == 1 && player2 == 2) {
        
        if (player1 < player2) {
            
            printf("\n Player 1 has won! Paper beats rock \n \n");
            
        }
        
    }
    
    if (player2 == 1 && player1 == 2) {
        
        if (player2 < player1) {
            
            printf("\n Player 2 has won! Paper beats rock \n \n");
            
        }
        
    }
    
    // Rock Beats Scissors Conditions
    
    if (player1 == 2 && player2 == 0) {
        
        if (player1 > player2) {
            
            printf("\n Player One has won! Rock beats scissors \n \n");
            
        }
        
    }
    
    if (player2 == 2 && player1 == 0) {
        
        if (player2 > player1) {
            
            printf("\n Player Two has won! Rock beats scissors \n \n");
            
        }
        
    }
    
    // Draw Condition
    
    if (player1 == player2) {
        
        printf("\n It is Draw! \n \n");
        
    } 
    
    getchar();
    
    return 0;
    
} // end main


