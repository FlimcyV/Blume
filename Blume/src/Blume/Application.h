#pragma once

#include "core.h"

namespace Blume {

	class BLUME_API Application 
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}