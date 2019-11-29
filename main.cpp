#include <iostream>
#include <algorithm>
#include "player.h"

using namespace std;

//void displayTrackName(string trackName){
//    cout << trackName << endl;
//}

int main()
{
    string input;
    Player* player = new Player();

    while (input != "exit"){
        cout << "Enter command :" << endl;
        cin >> input;

        if(input == "play")
            player->Getstate()->onPlay();
        else if (input == "stop")
            player->Getstate()->onStop();
        else
            cout << "Unknown command" << endl;

    }

//    Player* player = new Player();
//    for_each(
//            player->GettracksList()->begin(),
//            player->GettracksList()->end(),
//            //displayTrackName)
//            [](string trackName){cout << trackName << endl;}
//            );
//
//    cout << player->nextTrack() << endl;
    return 0;
}
