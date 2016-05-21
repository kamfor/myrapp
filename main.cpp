#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>

#include <rapp-robots-api/info/info.hpp>
#include <rapp-robots-api/localization/localization.hpp>
#include <rapp-robots-api/navigation/navigation.hpp>
#include "include/talk_to_me.hpp"
#include "include/camera_movement.hpp"


int main(int argc, char * argv[]) {
    camera_movement();
    std::this_thread::sleep_for(std::chrono::seconds(2));
    talk_to_me(argc, argv);


    return 0;
}
