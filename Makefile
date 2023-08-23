SHELL := /bin/bash

chortle:
	colcon build
clean:
	rm -rf install build
run:
	source install/local_setup.bash
	ros2 run chortle chortle
