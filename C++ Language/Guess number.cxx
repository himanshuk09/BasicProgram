// GUESS THE NUMBER BETWEEN 1 and 1000 
#include <iostream> 
#include <ctime> 
#include <cstdlib> 
using namespace std; 
 
bool isCorrect( int, int ); // function prototype 
 
void guessGame() 
{ 
   int answer; // stores randomly generated number 
   int guess;  
   char response; // 'y' or 'n' response to continue game 
 
   // loop until user types 'n' to quit game 
   do { 
           // 1 is shift, 1000 is scaling factor 
      answer = 1 + rand() % 1000; 
 
     cout << "I have a number between 1 and 1000.\n"  
          << "Can you guess my number?\n"  
            << "Please type your first guess." << endl << "? "; 
       cin >> guess; 
 
      // loop until correct number 
            while ( !isCorrect( guess, answer ) )  
         cin >> guess;       
 
      // prompt for another game 
      cout << "\nExcellent! You guessed the number!\n" 
           << "Do you want to play again (y or n)? "; 
      cin >> response; 
 
      cout << endl; 
   }while ( response == 'y' ); 
} // end function guessGame 
 
bool isCorrect( int g, int a ) 
{ 
   // guess is correct 
   if ( g == a ) 
      return true; 
 
   // guess is incorrect; display hint 
   if ( g < a ) 
      cout << "Too low. Try again.\n? "; 
   else 
      cout << "Too high. Try again.\n? "; 
 
   return false;
   } // end function isCorrect 
 
int main() 
{ 
   srand( time( 0 ) ); // seed random number generator  
   guessGame(); 
 
   return 0; // indicate successful termination 
} // main block end here 