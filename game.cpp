//gnerating a rock paper scissor game in c++
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;

void greet(){
    cout<<"Welcome to my Rock Paper Scissor game!!"<<endl;
    cout<<"****************************************"<<endl;
    cout<<endl;
    cout<<"Enter R or r for Rock !!"<<endl;
    cout<<"Enter S or s for Scissor !!"<<endl;
    cout<<"Enter P or p for Paper !!"<<endl;
    cout<<"Press Q or q for quitting!!"<<endl;
    cout<<endl;
    cout<<"************************************"<<endl;
    cout<<endl;
    cout<<"###################################"<<endl;
    
}

int chanceNo = 0 ;
int attempts = 0 ;
int score = 0 ;
int compWins = 0 ;

void ScoreCard(){
    cout<<endl;
    cout<<endl;
    cout<<"#########################################"<<endl;
    cout<<"#########################################"<<endl;
    cout<<"Total Attempts : "<<attempts<<endl;
    cout<<"You Win : "<<score<<" attempts"<<endl;
    cout<<"Computer Win : "<<compWins<<endl;
    if(score > compWins){
        cout<<endl;
        cout<<endl;
        cout<<"You Win The Game!!!"<<endl;
    }else{
        cout<<endl;
        cout<<endl;
        cout<<"You Lose The Game!!!"<<endl;;
    }
    cout<<"#########################################"<<endl;
    cout<<"#########################################"<<endl;
}


void logic(){
    
    
    //rock = 0 
    //paper = 1 
    //scissor = 2 
    
    
    
    
    // for computer choice 
    
    
    while(true){  
        char  choice ;


        // generating a random number 
        srand(time(0));
        int randomNo = rand() % 3 ;
        
        //getting computer choice 
        char array[] = {'r','p','s'};
        char computerChoice = array[randomNo];

        //used for indexing my game 
        chanceNo++ ;

        // user choice 
        cout<<endl;
        cout<<"Chance No "<<chanceNo<<endl;
        cout<<endl;
        cout<<"Please Enter Your Choice : " ;
        cin>>choice;
        char userChoice = (char)tolower(choice);

        
        
        if(userChoice == 'q'){
            ScoreCard();
            exit(0);
        }
        else if(userChoice == 'r' && computerChoice == 'r'){
            cout<<endl;
            cout<<"Computer Chooses Rock"<<endl;
            cout<<"You Chooses Rock"<<endl;
            cout<<endl;
            cout<<"It is A Draw "<<endl;
            cout<<"#########################################"<<endl;
            attempts++ ;
        }
        else if(userChoice == 'r' && computerChoice == 'p'){
            cout<<endl;
            cout<<"Computer Chooses Paper"<<endl;
            cout<<"You Chooses Rock"<<endl;
            cout<<endl;
            cout<<"Computer  Wins!! "<<endl;
            cout<<"#########################################"<<endl;
            attempts++ ;
            compWins++;
            
        }
        else if(userChoice == 'r' && computerChoice == 's'){
            cout<<endl;
            cout<<"Computer chooses Scissor"<<endl;
            cout<<"You Chooses Rock"<<endl;
            cout<<endl;
            cout<<"You Wins!!"<<endl;
            cout<<"#########################################"<<endl;
            attempts++ ;
            score++ ;

        }
        
        
        else if(userChoice == 'p' && computerChoice == 'r'){
            cout<<endl;
            cout<<"Computer Chooses Rock"<<endl;
            cout<<"You Chooses Paper"<<endl;
            cout<<endl;
            cout<<"You Wins!!"<<endl;
            cout<<"#######################################"<<endl;
            attempts++;
            score++ ;
        }
        else if(userChoice == 'p' && computerChoice == 's'){
            cout<<endl;
            cout<<"Computer Chooses Scissor"<<endl;
            cout<<"You Chooses Paper"<<endl;
            cout<<endl;
            cout<<"Computer  Wins!! "<<endl;
            cout<<"#######################################"<<endl;
            attempts++ ;
            compWins++;
        }
        else if(userChoice == 'p' && computerChoice == 'p'){
            cout<<"==============================="<<endl;
            cout<<"Computer Scissor Paper"<<endl;
            cout<<"You Chooses Paper"<<endl;
            cout<<"==============================="<<endl;
            cout<<"It is a Draw!!"<<endl;
            cout<<"######################################"<<endl;
            attempts++;
        }
        
        
        else if(userChoice == 's' && computerChoice == 'r'){
            cout<<endl;
            cout<<"Computer Chooses Rock"<<endl;
            cout<<"You Chooses Scissor"<<endl;
            cout<<endl;
            cout<<"Computer Wins!!"<<endl;
            cout<<"#####################################"<<endl;
            attempts++ ;
            compWins++;
        }
        else if(userChoice == 's' && computerChoice == 'p'){
            cout<<endl;
            cout<<"Computer Chooses Paper "<<endl;
            cout<<"You Chooses Scissor "<<endl;
            cout<<endl;
            cout<<"You Wins!! "<<endl;
            cout<<"####################################"<<endl;
            attempts++ ;
            score++ ;
        }
        else if(userChoice == 's' && computerChoice == 's'){
            cout<<endl;
            cout<<"Computer chooses Scissor"<<endl;
            cout<<"You Chooses Scissor"<<endl;
            cout<<endl;
            cout<<"It is a Draw!!"<<endl;
            cout<<"###################################"<<endl;
            cout<<endl;
            attempts++ ;
        }
        else{
            cout<<"Invalid Input"<<endl;
            continue;
        }
    } 
}


int main(){
    greet();
    logic();

    
    return 0 ;
}
