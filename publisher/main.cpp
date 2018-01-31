#include <iostream>
#include <lcm/lcm-cpp.hpp>
#include <unistd.h>
#include "../BSMData.hpp"
#define LCM_CHANNEL_1 "LCM_CHANNEL_1"
int main(int argc, char* argv[])
{
	lcm::LCM lcm;
	if(!lcm.good()){
		return -1;
	}
	BSMData data;
	data.id = 1730700;
	data.name = "yasin";
	data.score = 95;
	int i = 0;
	while(1){
		lcm.publish(LCM_CHANNEL_1,&data);
		++i;
		sleep(1);
		if(i>30){
			break;
		}
	}
	return 0;
}
