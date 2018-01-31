#include "Handler.h"
#include <iostream>
void Handler::onMessage(const lcm::ReceiveBuffer *rbuf, const std::string &channel, const BSMData *msg)
{
	std::cout<<"receive message on channel "<<channel<<" : "<<std::endl;
	std::cout<<msg->id<<std::endl;
	std::cout<<msg->name<<std::endl;
	std::cout<<msg->score<<std::endl;
	std::cout<<"------------------"<<std::endl;
}
