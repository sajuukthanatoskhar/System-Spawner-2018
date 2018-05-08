#include "Wormhole.h"

Wormhole::Wormhole()
{
    //ctor
}

Wormhole::~Wormhole()
{
    //dtor
}

float Wormhole::getwormholeradius()
{
    return wormholeradius;
}
void Wormhole::setwormholeradius(float newwhradius)
{
    this->wormholeradius = newwhradius;
}
