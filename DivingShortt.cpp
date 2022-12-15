// Author: Cullen Shortt
// DivingShortt.cpp
// This program calculates the scores for a local diving competition. 
//There are six judges who are rating each diver on a scale of 1 to 10. Scores can be
//entered up to 2 decimal places. This program reads the scores and determines the average score.
//This program also determines the highest and lowest score fiven to each diver. 

#include <iostream> //The header file for displaying screen content and allowing keyboard input.
#include <iomanip> //allows for formatting of output statements.


using namespace std; 

//Function Prototypes
int numOfDivers();                       
double judgeScore();//(int judg);  //pass by reference to change judge number.
void findHighestScore(double, double, double, double, double, double); //needs data type of all arguments passed
void findLowestScore(double, double, double, double, double, double);
void findAverageScore(double, double, double, double, double, double);  


int main() //This marks the beginning of a function.
{  //Program Variables
    int numDivers,
        judge = 1;
    double score1,
           score2,
           score3,
           score4,
           score5,
           score6;
     
  
  //Program Function Calls
  
  numDivers = numOfDivers(); // determines the number of divers
  
  cout << fixed << showpoint <<setprecision(2); // sets the numeric output formatting 
  
  for(int diver = 1; diver <= numDivers; diver++) //For Loop 
  {
  cout << "Score for diver # " << diver << endl;
  score1 = judgeScore();
  
  score2 = judgeScore();
  
  score3 = judgeScore();
  
  score4 = judgeScore();
  
  score5 = judgeScore();
  
  score6 = judgeScore();
  
  findHighestScore(score1,score2,score3,score4, score5, score6); 
  findLowestScore(score1,score2,score3,score4, score5, score6);
  findAverageScore(score1,score2,score3,score4, score5, score6);
   
  }  

 }
  
  
  //functions
  
  int numOfDivers() //returns a value 
   {
    int divers;
    do{
    cout << "How many divers are there?" << endl;
    cout << "Please enter in a value of between 1 and 10" <<endl;
    cin >> divers;   
       }while ( divers < 1 || divers > 10);
       return divers;
   }
       
       
  double judgeScore()//returns a value
  {
   
   double score = 0;
   int judge;
   do{cout << "What is judge # "<< judge <<"'s score? "<< endl << endl;
      cout << "Please enter in a value between 1 and 10" <<endl;
      cin >> score; 
       if(score < 1.00 || score >10.00) 
      {
       cout << "That is not a valid value. Please try again."<< endl;
      }
     }while (score < 1.00 || score >10.00);
      judge++; //incrementer 
      return score;
   
   }
  
   void findHighestScore(double a, double b,double c, double d, double e, double f) //does not return a value
   {  
    double maxScore = a; 
    
    if ((maxScore > b) && (maxScore > c ) && (maxScore > d) && (maxScore > e) && (maxScore > f))
    {    
    maxScore = maxScore;
    }
    else if ((b > maxScore) && (b > c) && (b > d) && (b > e) && (b > f))
    {    
    maxScore = b;
    }
    else if ((c > maxScore ) && (c > b) && (c > d) && (c > e) && (c > f))
    {    
    maxScore = c;
    } else if ((d > maxScore) && (d > b) && (d > c) && (d > e) && (d > f))
    {    
    maxScore = d;
    } else if ((e > maxScore) && (e > b) && (e > c) && (e > d) && (e > f))
    {    
    maxScore = e;
    } else if ((f > maxScore) && (f > b) && (f > c) && (f > d) && (f > e))
    {    
    maxScore = f;
    }
         
    
    cout << "The highest score is: " << maxScore << endl;
       
   }


   void findLowestScore(double a, double b,double c, double d, double e, double f)//does not return a value
   {
    double minScore = a;
    
     if ((minScore < b) && (minScore < c ) && (minScore < d) && (minScore < e) && (minScore < f))
    {    
    minScore = minScore;
    }
    else if ((b < minScore) && (b < c) && (b < d) && (b < e) && (b < f))
    {    
    minScore = b;
    }
    else if ((c < minScore ) && (c < b) && (c < d) && (c < e) && (c < f))
    {    
    minScore = c;
    } else if ((d < minScore) && (d < b) && (d < c) && (d < e) && (d < f))
    {    
    minScore = d;
    } else if ((e < minScore) && (e < b) && (e < c) && (e < d) && (e < f))
    {    
    minScore = e;
    } else if ((f < minScore) && (f < b) && (f < c) && (f < d) && (f < e))
    {    
    minScore = f;
    }

  
    cout << "The lowest score is: " << minScore << endl;
  
   }
 

   void findAverageScore( double a, double b, double c, double d, double e, double f) //does not return a value
   {
    
    cout << "The average score for this diver is: " << (a + b + c + d + e + f) / 6 << endl << endl; 
  
  
   }
