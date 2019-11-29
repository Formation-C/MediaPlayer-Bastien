#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>

class StoppedState : public State
{
    public:
        /** Default constructor */
        //StoppedState();
        using State::State;

        /** Default destructor */
        virtual ~StoppedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // STOPPEDSTATE_H
