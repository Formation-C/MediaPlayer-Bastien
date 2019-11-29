#include "Player.h"

Player::Player()
{
    SetcurrentTrack(0);
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    for(int ii = 0; ii<12 ; ii++)
    {
        //std::ostringstream oss;
        //tracksList->push_back(oss <<"Track" << ii);
        tracksList->push_back("Track " + std::to_string(ii));
    }
    Setstate(new StoppedState(this));

}

Player::~Player()
{
    delete tracksList;
}

std::string Player::startPlayback(){
        return ("playing " + tracksList->at(currentTrack));
}

std::string Player::pausePlayback(){
        return ("pause " + tracksList->at(currentTrack));
}

std::string Player::stopPlayback(){
        return ("stopped "+ tracksList->at(currentTrack));
}

std::string Player::previousTrack(){
        currentTrack--;
        // Force currentTrack value to get back to 0 if it's = to trackList size
        currentTrack %=tracksList->size();

        return ("playing " + tracksList->at(currentTrack));
}

std::string Player::nextTrack(){
        currentTrack++;
        // Force currentTrack value to get back to 0 if it's = to trackList size
        currentTrack %=tracksList->size();

        return ("playing " + tracksList->at(currentTrack));
}
