#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern Blume::Application* Blume::CreateApplication();

int main(int argc, char** argv)
{
	printf("Entry Point YAYYYYY!!!!!\n");
	auto app = Blume::CreateApplication();
	app->Run();
	delete app;
}

#endif