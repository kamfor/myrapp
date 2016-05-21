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

    rapp::robot::navigation nav;
    bool status;
    status = nav.lookAtPoint(10,1,1);
    status = nav.moveTo(1, 0, 0);
    status = nav.lookAtPoint(10,2,0);
    status = nav.moveTo(0, 1, 5);
    status = nav.lookAtPoint(10,0,2);
    status = nav.moveTo(1, 1, 5);


    return 0;
}
