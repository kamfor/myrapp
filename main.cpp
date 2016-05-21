#include <iostream>
#include <fstream>
#include <string>

#include <rapp-robots-api/info/info.hpp>
#include <rapp-robots-api/localization/localization.hpp>
#include <rapp-robots-api/navigation/navigation.hpp>
#include "include/talk_to_me.hpp"


int main(int argc, char * argv[]) {
    //talk_to_me(argc, argv);
    /*
    rapp::robot::info info(argc, argv);
    rapp::robot::localization loc;
    rapp::object::qr_code_map qr_map;
    std::ifstream ifstr(info.get_path("share/myrapp/example_qr_map.xml"));
    qr_map = loc.load_qr_code_map(ifstr);
    std::cout<<qr_map.labels.at(0)<<std::endl;
    std::cout<<qr_map.labels.at(3)<<std::endl;
    */
    rapp::robot::navigation nav;
    bool status;
    status = nav.moveTo(0, 0, 0);
    status = nav.moveTo(0, 0, 5);
    status = nav.moveVel(2, 0);
    status = nav.lookAtPoint(1,1,1);

    return 0;
}
