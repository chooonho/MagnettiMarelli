#pragma once

#include <string>

class Utils
{
public:
	Utils() = default;
	~Utils() = default;
	static std::string caesar(const std::string &input);
};
