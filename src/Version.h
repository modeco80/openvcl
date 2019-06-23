#ifndef __OPENVCL_VERSION_H__
#define __OPENVCL_VERSION_H__

/*
 * Version.h
 *
 * Copyright (C) 2004 Jesper Svennevid & Daniel Collin, (C) 2019 modeco80
 *
 * Licensed under the AFL v2.0. See the file LICENSE included with this
 * distribution for licensing terms.
 *
 */

#include <string>
#include <sstream>

namespace vcl {

	namespace version {
	
		constexpr int major = 0;
		constexpr int minor = 3;
		constexpr int patch = 4;

		inline std::string to_string() {
			std::stringstream stream;
			stream << major << '.' << minor << '.' << patch;
			return stream.str();
		}

	}
}

#endif