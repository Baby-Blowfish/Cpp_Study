#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string r,j;
    cout<<"가위 바위 보 게임을 합니다. 가위,바위,보 중에서 입력하세요."<<endl;
    cout<<"로미오>>";
    cin>>r;
    cout<<"줄리엣>>";
    cin>>j;
    if(r!="가위"&&r!="바위"&&r!="보"&&j!="가위"&&j!="바위"&&j!="보") cout<<"잘못 입력하셨습니다"<<endl;
    else if(r==j) cout << "비겼습니다."<<endl;
    else if(r=="가위") 
    {
        if(j == "보") cout<<"로미오가 이겼습니다."<<endl;
        else cout<<"줄리엣이 이겼습니다."<<endl;
    }
    else if(r=="바위")
    {
       if(j == "가위") cout<<"로미오가 이겼습니다."<<endl;
        else cout<<"줄리엣이 이겼습니다."<<endl;
    } 
    else // r == "보" 일경우
    {
        if(j == "바위") cout<<"로미오가 이겼습니다."<<endl;
        else cout<<"줄리엣이 이겼습니다."<<endl;
    }

    return 0;
}