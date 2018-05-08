#include "Celestial.h"


//class Celestial;

        float Celestial::getorbitdistance()
        {
            return orbitdistance;
        }

        float Celestial::getorbitperiod(){return orbitperiod;}
        float Celestial::getradius(){return radius;}
        void Celestial::setorbitdistance(float neworbitdistance){this->orbitdistance=neworbitdistance;}
        void Celestial::setorbitperiod(float neworbitperiod){this->orbitperiod = neworbitperiod;}
        void Celestial::setradius(float newradius){this->radius=newradius;}
        std::string Celestial::getname(){return name;}
        void Celestial::setname(std::string newname){ this->name = newname;}
        std::vector<Celestial> Celestial::get_getownedcelslist()
        {
            return this->ownedcels;
        }

        //I forgot what I was doing here
        void Celestial::set_ownedcelslist(Celestial *newCel)
        {
            this->ownedcels.push_back(*newCel);
        }
        //Orbitrate is in days to complete - unit is radians/day
        //Days is time into current cycle  unit is days
        //Phase is where the celestial starts
        void Celestial::get_XY_coordinate(float days, float orbitrate, float phase)
        {
            float Xcoord, Ycoord;

            //From Systemspawnercode

            float thetaposition = days/orbitrate * 3.14159 + phase/orbitrate * 3.14159;
            Xcoord = this->getorbitdistance()* cos(thetaposition);
            Ycoord = this->getorbitdistance()* sin(thetaposition);

            std::cout << "X: " << Xcoord << std::endl << "Y: " << Ycoord << std::endl;
        }

        /*
        Attaches the current celestial to another in orbit around another
        Input - Memory address of other planet
        */

        void Celestial::set_owned(Celestial *newcelestial)
        {
            this->ownedby = newcelestial;
            newcelestial->set_ownedcelslist(this);

        }

        Celestial Celestial::get_owned()
        {
            return *ownedby;
        }
Celestial::Celestial()
{

}

Celestial::~Celestial(){

//std::cout << "Celestial Deleted" << std::endl;
}

