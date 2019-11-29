#include "Player.h"

Player::Player()
{
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    for(int ii = 0; ii<12 ; ii++)
    {
        //std::ostringstream oss;
        //tracksList->push_back(oss <<"Track" << ii);
        tracksList->push_back("Track " + std::to_string(ii));
    }


}

Player::~Player()
{
    delete tracksList;
}
