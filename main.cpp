#include "Celestial.h"
#include "Planet.h"
#include "Wormhole.h"
#include <iostream>




//#include "Wormhole.h"
//#include "Asteroidbelt.h"


using namespace std;
//using namespace solarsystem;
int main()
{
    Planet Object1;
    Object1.setname("Halo1");
    Object1.setorbitdistance(1);
    cout << Object1.getname() << endl;
    Celestial Object2;
    Object2.setname("Hedbinger");
    Object2.setorbitdistance(0.2);
    Object2.set_owned(&Object1);
    Planet Object3, Object4;
    Object3.setname("Litmus");
    Object3.setorbitdistance(0.2);
    Object3.set_owned(&Object1);
    Object4.setname("Doril");
    Object4.setorbitdistance(0.2);
    Object4.set_owned(&Object1);


    Object2.get_owned().get_XY_coordinate(50, 365, 25);
    for(Celestial k:Object1.get_getownedcelslist())
    {
        cout << k.getname() << endl;
    }


    //cout << "Final" << endl;
    return 0;
}
