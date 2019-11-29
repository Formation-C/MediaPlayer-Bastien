#include "StoppedState.h"
#include "PlayingState.h"
#include "PausedState.h"
//StoppedState::StoppedState(Player*) : State(player)
//{
//    //ctor
//}

StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPlay(){
    player->Setstate(new PlayingState(player));
    std::cout<< player->startPlayback() << std::endl;
    delete this;
};
void StoppedState::onStop(){

    std::cout<< "Error : already stopped" << std::endl;
};
