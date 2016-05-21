#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>

#include <rapp-robots-api/info/info.hpp>
#include <rapp-robots-api/localization/localization.hpp>
#include <rapp-robots-api/navigation/navigation.hpp>
#include "include/camera_movement.hpp"


int main(int argc, char * argv[]) {
    //talk_to_me(argc, argv);
    camera_movement(argc, argv);

    return 0;
}
