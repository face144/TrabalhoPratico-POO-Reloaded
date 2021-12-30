#include "Building.h"


Building::Building() {
    type = "             ";
    level = 0;
    max_level = 0;
    destroy_prob = 0 ;
    is_online = false;
    cap = 0;
    max_cap = 0;
    output = 0;
}

int Building::GetOutput(){
    return output;
}

Building::~Building() { }



string Building::GetType() const {
    return type;
}

Building* Building::Create(const string& type) {
    Building* building;
    if (type == "minaf") {
        building = new Minaf;
    } else if (type == "minac") {
        building = new Minac;
    } else if (type == "central") {
        building = new Central;
    } else if (type == "bat") {
        building = new Bat;
    } else if (type == "fund") {
        building = new Fund;
    } else if (type == "edx") {
        building = new Edx;
    } else building = new Building;
    return building;
}

Minaf::Minaf() {

    type = "minaf        ";
    level = 1;
    max_level = 5;
    destroy_prob = 0.15;
    is_online = false;
    cap = 0;
    max_cap = 0;
    output = 2;

}

Minac::Minac() {
    type = "minac        ";
    level = 1;
    max_level = 5;
    destroy_prob = 0.1;
    is_online = false;
    output = 2;
}

Central::Central() {
    type = "central      ";
    level = 1;
    max_level = 1;
    destroy_prob = 0;
    is_online = false;
    output = 1;

}

Bat::Bat() {
    type = "bat          ";
    level = 1;
    max_level = 5;
    destroy_prob = 0;
    is_online = false;

}

Fund::Fund() {
    type = "fund         ";
    level = 1;
    max_level = 1;
    destroy_prob = 0;
    is_online = false;
}

Edx::Edx() {
    type = "edx          ";
    level = 1;
    max_level = 1;
    destroy_prob = 0;
    is_online = false;
}
