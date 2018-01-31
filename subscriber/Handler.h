#include <string>
#include <lcm/lcm-cpp.hpp>
#include "../BSMData.hpp"

class Handler
{
public:
	void onMessage(const lcm::ReceiveBuffer *rbuf, const std::string &channel, const BSMData *msg);
};
