#include "../include/camera_movement.hpp"

int camera_movement() {
    rapp::robot::navigation nav;
    std::vector<std::string> joint_names;
    joint_names.clear();
    std::vector<float> joint_angles;
    joint_angles.clear();

    std::vector<std::string> joint_names2;
    joint_names2.clear();
    std::vector<float> joint_angles2;
    joint_angles2.clear();

    joint_names.push_back("head_pitch");
    joint_angles.push_back(-1); // turn head in pitch to -1 rad orientation
    joint_names.push_back("head_yaw");
    joint_angles.push_back(1.57); // turn head in yaw to 1.57 rad orientation

    joint_names2.push_back("head_pitch");
    joint_angles2.push_back(-0.3); // turn head in pitch to -1 rad orientation
    joint_names2.push_back("head_yaw");
    joint_angles2.push_back(-1); // turn head in yaw to 1.57 rad orientation

    nav.moveVel(1, 8);
    for(int i = 0; i<4; ++i) {
        //nav.lookAtPoint(0,0,0);
        nav.moveJoint(joint_names, joint_angles);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        nav.moveJoint(joint_names2, joint_angles2);
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }
    nav.moveStop();
    return 0;
}