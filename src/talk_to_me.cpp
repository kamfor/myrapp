#include "../include/talk_to_me.hpp"

int talk_to_me(int argc, char * argv[]) {
    rapp::robot::info info(argc, argv);
    rapp::robot::communication comm(argc, argv);

    comm.text_to_speech("         I will kill you         ");

    return 0;
}
