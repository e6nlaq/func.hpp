
#ifndef __FUNC_JS_HPP__
#define __FUNC_JS_HPP__

#include <iostream>
#include <string>

namespace func
{
	struct js_console
	{
		inline void log(std::string message)
		{
			std::cout << message << std::endl;
		}

		inline void info(std::string message)
		{
			func::js_console::log(message);
		}

		inline void error(std::string message)
		{
			std::cerr << message << std::endl;
		}

		inline void warn(std::string message)
		{
			func::js_console::error(message);
		}
	};

	js_console console;

} // namespace func

#endif /* __FUNC_JS_HPP__ */