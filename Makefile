SHELL := /bin/bash

chortle:
	source /opt/ros/humble/setup.bash
	colcon build --parallel-workers=8

clean:
	rm -rf install build log

run:	
	source install/local_setup.bash
	ros2 run chortle chortle
