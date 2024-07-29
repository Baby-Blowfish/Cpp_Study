#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class UpAndDownGame
{
    private :
    static int correct_answer;
    static int max, min;
    
    public :
        UpAndDownGame();
        static int Correct_Answer(){ return correct_answer; }
        int AskNumber(int answer);
};

UpAndDownGame::UpAndDownGame()
{
    srand((unsigned)time(0)); // 항상 다른 랜덤수를 발생시키기 위한 seed 설정
    int corret_answer = rand(); // 0에서 RAND_MAX(32767) 사이의 램덤한 정수가 n에 발생
    corret_answer = corret_answer % 100; // n은 0 ~ 99 사이의 정수
}

class Person
{
    private :
    	string s_answer;
        int answer;
    public :
        Person();
        void get_answer(){ cin >> s_answer; answer = stoi(s_answer); }
        int Answer(){ return answer;}
};

int UpAndDownGame::correct_answer = 0;
int UpAndDownGame::max = 99;
int UpAndDownGame::min = 0;

int UpAndDownGame::AskNumber(int answer)
{
    if ( answer > UpAndDownGame::correct_answer) 		UpAndDownGame::max = answer;
    else if(answer < UpAndDownGame::correct_answer)		UpAndDownGame::min = answer;
    else return 0;
	cout<<"답은 "<< UpAndDownGame::min<<"과 "<<UpAndDownGame::max<<"사이에 있습니다."<<endl;
}

int main()
{
    UpAndDownGame first_game;
    Person kim, oh;
    int stop = 1;

    cout << "Up & Down 게임을 시작합니다."<<endl;
    cout << "답은 0과 99사이에 있습니다."<<endl;
    while(1)
    {

        kim.get_answer();
        if( 0 == first_game.AskNumber(kim.Answer())) 
		{
			cout<<" 김인수가 이겼습니다."<< endl; 
			break;	
		}
        oh.get_answer();
        if( 0 == first_game.AskNumber(oh.Answer()))
		{
			cout<<" 오은가 이겼습니다."<< endl; 
			break;	
		} 

    }


    return 0;
}