#include <iostream>
#include <lcm/lcm-cpp.hpp>
#include "Handler.h"
#define LCM_CHANNEL_1 "LCM_CHANNEL_1"

int main(int argc, char* argv[])
{
	lcm::LCM lcm;
	if(!lcm.good()){
		return -1;
	}
	Handler handler;
	lcm.subscribe(LCM_CHANNEL_1,&Handler::onMessage,&handler);
	while(true){
		lcm.handle();
	}
}
