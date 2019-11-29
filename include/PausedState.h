#ifndef PAUSEDSTATE_H
#define PAUSEDSTATE_H

#include <State.h>


class PausedState : public State
{
    public:
        using State::State;
        virtual ~PausedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PAUSEDSTATE_H
