#include <iostream>
#include <algorithm>
#include "player.h"

using namespace std;

//void displayTrackName(string trackName){
//    cout << trackName << endl;
//}

int main()
{
//    string input;
//    while (input != "exit"){
//        cout << "Enter command :" << endl;
//        cin >> input;
//        cout << input << endl;
//    }

    Player* player = new Player();
    for_each(
            player->GettracksList()->begin(),
            player->GettracksList()->end(),
            //displayTrackName)
            [](string trackName){cout << trackName << endl;}
            );
    return 0;
}
