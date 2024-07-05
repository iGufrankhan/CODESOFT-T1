#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    
cout<<".........................................................................."<<endl;
           cout<<"\t\t\tWELCOME TO GAME WORLD....."<<endl;
    cout<<"\n\t\t\tWelcome to GuessTheNumber game!"<<endl;
      cout<<"\n\t\t\t\tloading......"<<endl;
      cout<<"\t\t\t\t\t..."<<endl;
      cout<<endl;

cout<<"................................................................................"<<endl;
    cout<<"You have to guess a number between 1 and range that you wanted"<<endl;\
    cout<<endl;
    cout<<" By the way ,remaind! You have limited numbers os step to clear each levels"<<endl;
    cout<<"\t\t\t\tGood Luck"<<endl;
   
    while(true){
        cout << "\nEnter the difficulty level: \n";
        cout << "a for easy!\t";
        cout<<"b for medium!\t";
        cout<<"c for difficult!\t";
        cout<<"d for ending the game!\n"<<endl;

        char level_Choice ;
        cout<<"Enter your  choice  : ";
        cin>>level_Choice;

      int range;
      cout<<"enter the range of number you want to find: ";
      cin>>range;

        srand(time(0));
        int Right_Number = 1 + (rand()% range);
        int playerChoice;

        if(level_Choice=='a'){
            cout << "\nYou have 10 choices for finding the Right number between 1 and "<<range<<".";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Right_Number){
                    cout << "Well played! You won, " << playerChoice << " is the Right number" << endl;
                    cout<<"huray! you won ."<<endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    cout<<"--------------------------------------------"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << " is not the Right number\n";
                    if(playerChoice>Right_Number){
                        cout << "You have chosen too higher number than the Right number" << endl;
                    }
                    else{
                        cout << "You have chosen too lower number than the Right number" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the Right number, it was "<<Right_Number<<", You lose!!\n\n";
                        cout<<"\t\ttry your luck next time"<<endl;
                        cout<<"Play the game again to win!!!\n\n";
                        cout<<"--------------------------------------------------------"<<endl;
                    }
                }

            }
        }
        else if(level_Choice=='b'){
            cout << "\nYou have 7 choices for finding the Right number between 1 and"<<range<<".";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Right_Number){
                    cout << "Well played! You won, " << playerChoice << " is the Right number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"\t\t\tYou won the medium level ,great future"<<endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                     cout<<"--------------------------------------------------------"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << " is not the Right number\n";
                    if(playerChoice>Right_Number){
                        cout << "You have chosen too higher number than the Right number" << endl;
                    }
                    else{
                        cout << " You have chosen too lower number than the Right number" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the Right number, it was "<<Right_Number<<", You lose!!\n\n";
                        cout<<"\t\tbetter luck next time"<<endl;
                        cout<<"Play the game again to win!!!\n\n";
                         cout<<"--------------------------------------------------------"<<endl;
                    }
                }

            }
        }
        else if(level_Choice=='c'){
            cout << "\nYou have 5 choices for finding the secret number between 1 and"<<range<<".";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Right_Number){
                    cout << "Well played! You won, " << playerChoice << " is the Right number" << endl;
                    cout<<"\t\tYou have won the hardest level,you are genius"<<endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                     cout<<"--------------------------------------------------------"<<endl;
                    break;
                }else{
                    cout << "Nope, " << playerChoice << " is not the Right number\n";
                    if(playerChoice>Right_Number){
                        cout << "You have chosen too higher number than the Right number" << endl;
                    }
                    else{
                        cout << "TYou have chosen too lower number than the Right number" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the Right number, it was "<<Right_Number<<", You lose!!\n\n";
                        cout<<"\t\t\tBetter luck next time"<<endl;
                        cout<<"Play the game again to win!!!\n\n";
                         cout<<"--------------------------------------------------------"<<endl;
                    }
                }

            }
        }
        else if(level_Choice=='d'){
            exit(0);
        }
        else{
            cout << "Wrong choice, Enter valid choice to play the game! (a,b,c,d)"<<endl;
             cout<<"--------------------------------------------------------"<<endl;
        }

    }

}