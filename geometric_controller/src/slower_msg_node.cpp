#include "geometric_controller/slower_msg.h"

int main(int argc, char** argv) {
	ros::init(argc, argv, "slow_down_node");

	ros::NodeHandle nh("~");
	ros::NodeHandle nh_private("");

	SlowDown slow_down_node(nh, nh_private);

	ros::spin();
	return 0;
}

