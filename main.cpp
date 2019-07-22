#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class guessGame
{

    public :
        guessGame()
        {
            temp = 0 ;
        }
        void play() ;
        int getRand() ;
    private :
        int temp, RandNum ;


};

void guessGame::play()
{
    RandNum = getRand() ;

    for(int i = 0; i < 5; i++)
    {
        cin >> temp ;


        if (temp == RandNum)
        {
            cout <<"You win" <<endl ;
            break ;
        }
        else if (temp > RandNum && i != 4)
        {
            cout <<"Guess lower" <<endl ;
        }
        else if (temp < RandNum && i != 4)
        {
            cout <<"Guess higher" <<endl ;
        }
        else
        {
            cout <<"You lost" <<endl ;
        }
    }

}
int guessGame::getRand()
{
    srand(time(0)) ;
    RandNum = 1+rand()%101 ;
    return RandNum ;
}

int main()
{

    guessGame *guessing_game = new guessGame ;

    (*guessing_game).play() ;
}
