#include<iostream>
#include<stdlib.h> // header for rand function
#include<ctime>    // header for time function 

void GetToKnow();
bool GameBrain(int Difficulty){
	
	int Level;
	Level = Difficulty;                                        // use conditional statement to make more difficult levels
	const int InternalOne = rand() % Difficulty + Difficulty; // % <- help us to set up the range(entered number -1)
	const int InternalTwo = rand() % Difficulty + Difficulty;
	const int InteranalThree = rand() % Difficulty + Difficulty;
	
	
	const int InternalAdd = InternalOne +InternalTwo + InteranalThree ;
	const int InternalMultiplied = InternalOne * InternalTwo * InteranalThree ;
	
	
	std::cout << "---------------------------\n";
	std::cout << "Emergency Aleart!!:---\n";
	std::cout << std::endl;
	std::cout << "All Defence System Are down\n";
	std::cout << std::endl;
	std::cout << "Error in :- MAIN FRAME\n";
	std::cout << std::endl;
	std::cout << "ERROR TYPE 1::->"<<InternalAdd<<"\n";
	std::cout << std::endl;
	std::cout << "ERROR TYPE 2::->"<<InternalMultiplied<<"\n";
	std::cout << std::endl;
	std::cout << "System:- OFFLINE\n";
	std::cout << std::endl;
	std::cout << "SELF DISTRUCTION IN T-200 SECOND\n";
	std::cout << std::endl;
	std::cout <<"SYSTEM HACKED LEVEL::->"<<Difficulty<<"\n";
	std::cout << std::endl;
	std::cout << "Enter the Level::"<<Level<<"Security Code\n";
	std::cout << "--------------------------------\n";
	int PlayerChoise1, PlayerChoise2, PlayerChoise3 ;
	std::cin >> PlayerChoise1 >> PlayerChoise2 >> PlayerChoise3;
	
	
	int AddedValue = PlayerChoise1 + PlayerChoise2	 + PlayerChoise3 ;
	int MultipliedValue = PlayerChoise1 * PlayerChoise2 * PlayerChoise3 ;
	
     if (InternalAdd == AddedValue && InternalMultiplied == MultipliedValue  ){
     	
     	
     	std::cout << "System:-"<<"Level"<<Level<<" Online\n";
     	std::cout << std::endl;
     	std::cout << "Level"<<Level<<"Error :- Eradicated\n";
     	std::cout << std::endl;
     	std::cout << "All Level-- "<<Level<<"Defence System are Initialized\n";
   	    std::cout << std::endl;
     	std::cout << "SELF DISTUCTION LEVEL::->"<<Level<<":--Paused And Being Reset\n";
     	std::cout << std::endl;
     	std::cout << "Enter the Level::"<<Level<<"Security Code\n";
     	return true;//tell level is completed
     	
	 }
	 else {
	 	
	 	std::cout << "System:- Crashed\n";
	 	std::cout << std::endl;
	 	std::cout << "Error : - !!!!!!!!!!\n";
	 	std::cout << std::endl;
	 	std::cout << "Error in :- MAIN FRAME\n";
      	std::cout << std::endl;
    	std::cout << "ERROR TYPE 1::->"<<InternalAdd<<"\n";
	    std::cout << std::endl;
	    std::cout << "ERROR TYPE 2::->"<<InternalMultiplied<<"\n";
	    std::cout << std::endl;
	 	std::cout << "TRY AGAIN \n";
	 	std::cout << std::endl;
	 	std::cout << "SELF DISTRUCTION :-!!\n";
	 	std::cout << std::endl;
	 	std::cout << "Try Again the security code\n";
	 	
	 	
	    return false;//tell level is not completed
	 }
	
		
}

int main()
{
	srand(time(NULL));// **Seeding Rand ::create new randome sequence based on time of day**
	int LevelDifficulty = 1;
	GetToKnow();
	int const MaxDifficulty = 5;
   while(LevelDifficulty <= MaxDifficulty)//Game loop
   {	
    
    bool bLevelComplete = GameBrain(LevelDifficulty);
    // these two function stop loop to get in infinite 
    std::cin.clear();// clear error relation to input
    std::cin.ignore();// ignore the invalidity(buffer) or we can say it remove that wrong input from input buffer
    if (bLevelComplete)
		{
    	
    	++LevelDifficulty;
	}
   }
   std::cout << "Jade-> This is not good , today I managed to save us but the word is becoming more cruel\n ";
   std::cout << "Jade-> I have to prepare for worse now\n ";
   std::cout << "Jade-> This Just a  Begning!\n";
   std::cout << "xxxxxxxxxxxxxxxxxxCHAPETER-1::COMPLETEDxxxxxxxxxxxxxxxx ";
	return  0;

}
void GetToKnow(){


 std::cout << "\n\n\n                                    |JADE EXPLOSION|                     \n\n\n\n";
 std::cout << "This is a small journy of Squadleader:Jade \n";
 std::cout << "Jade is struggling to save his base from the apocalyptic world\n";
 std::cout << "Suddenly the base is under attack by some strong Bandits\n";
 std::cout << "Jade is able to take out all the bandit but the bandits had cause the harm\n";
 std::cout << "Bandits hacked the system and activated the SELF DISTRUCTION\n\n";
 std::cout << "\nJade->I Have To Make The System Online Again And Stop The Self Distruction\n\n\n\n\n ";

}

