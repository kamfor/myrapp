#include "../include/camera_movement.hpp"

int camera_movement() {
    rapp::robot::navigation nav;
    std::vector<std::string> joint_names;
    joint_names.clear();
    std::vector<float> joint_angles;
    joint_angles.clear();
    joint_names.push_back("head_pitch");
    joint_angles.push_back(-1); // turn head in pitch to -1 rad orientation
    joint_names.push_back("head_yaw");
    joint_angles.push_back(1.57); // turn head in yaw to 1.57 rad orientation

    nav.moveJoint(joint_names, joint_angles);
    return 0;
}