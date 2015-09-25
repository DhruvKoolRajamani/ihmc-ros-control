#include "IHMCRosControlJavaBridge.h"
#include <iostream>
#include <string>
#include <pluginlib/class_list_macros.h>



namespace ihmc_ros_control
{
    IHMCRosControlJavaBridge::IHMCRosControlJavaBridge()
    {

    }

    IHMCRosControlJavaBridge::~IHMCRosControlJavaBridge()
    {

    }


    void IHMCRosControlJavaBridge::update(const ros::Time &time, const ros::Duration &period)
    {

    }

    bool IHMCRosControlJavaBridge::init(hardware_interface::EffortJointInterface *hw, ros::NodeHandle &controller_nh)
    {
        std::string jvmArguments;
        std::string mainClass;

        if(!controller_nh.getParam("jvm_args", jvmArguments))
        {
            std::cerr << "No jvm_args provided." << std::endl;
            return false;

        }

        if(!controller_nh.getParam("main_class", mainClass))
        {
            std::cerr << "No main_class provided" << std::endl;
            return false;
        }

        std::cout << "Starting JVM with arguments: " << jvmArguments << std::endl;

        return true;
    }

    void IHMCRosControlJavaBridge::starting(const ros::Time &time)
    {

    }
}

PLUGINLIB_EXPORT_CLASS(
        ihmc_ros_control::IHMCRosControlJavaBridge,
        controller_interface::ControllerBase)
