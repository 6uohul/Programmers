#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

/*
프로그래머스 코딩테스트 해시 <완주하지 못한 선수>

제한사항 :  마라톤 경기에 참여한 선수의 수는 1명 이상 100,000명 이하입니다.
        completion의 길이는 participant의 길이보다 1 작습니다.
        참가자의 이름은 1개 이상 20개 이하의 알파벳 소문자로 이루어져 있습니다.
        참가자 중에는 동명이인이 있을 수 있습니다.

내가 푼 방법:   벡터와 정렬

*/

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    //참가자와 완주자 배열을 정렬
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (int i = 0; i < completion.size(); i++)
    {
        if (participant[i] != completion[i])
        {
            return participant[i];
        }
        return participant[participant.size() - 1];
    }
}

int main()
{
    vector<string> p = {"leo", "kiki", "eden"};
    vector<string> c = {"eden", "kiki"};
    cout << solution(p, c) << "는 참여자 명단에는 있지만, 완주자 명단에는 없기 때문에 완주하지 못했습니다." << endl;
    return 0;
}