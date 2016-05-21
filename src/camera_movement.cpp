#include "../include/camera_movement.hpp"

int camera_movement() {
    rapp::robot::navigation nav;
/*
    std::vector<std::string> joint_names3;
    joint_names3.clear();
    std::vector<float> joint_angles3;
    joint_angles3.clear();

    joint_names3.push_back("head_pitch");
    joint_angles3.push_back(0); // turn head in pitch to -1 rad orientation
    joint_names3.push_back("head_yaw");
    joint_angles3.push_back(0.5); // turn head in yaw to 1.57 rad orientation
    nav.moveJoint(joint_names3, joint_angles3);
    std::this_thread::sleep_for(std::chrono::seconds(2));
*/

    std::vector<std::string> joint_names;
    joint_names.clear();
    std::vector<float> joint_angles;
    joint_angles.clear();

    std::vector<std::string> joint_names2;
    joint_names2.clear();
    std::vector<float> joint_angles2;
    joint_angles2.clear();

    joint_names.push_back("head_pitch");
    joint_angles.push_back(0); // turn head in pitch to -1 rad orientation
    joint_names.push_back("head_yaw");
    joint_angles.push_back(2); // turn head in yaw to 1.57 rad orientation

    joint_names2.push_back("head_pitch");
    joint_angles2.push_back(0); // turn head in pitch to -1 rad orientation
    joint_names2.push_back("head_yaw");
    joint_angles2.push_back(1.4); // turn head in yaw to 1.57 rad orientation

    nav.moveVel(1, 8);
    for(int i = 0; i<5; ++i) {
        //nav.lookAtPoint(0,0,0);
        nav.moveJoint(joint_names, joint_angles);
        std::this_thread::sleep_for(std::chrono::seconds(2));
        nav.moveJoint(joint_names2, joint_angles2);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    nav.moveStop();
    return 0;
}