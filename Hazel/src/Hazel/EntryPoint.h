#pragma once

#ifdef HZ_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argv, char** argc) {

	Hazel::Log::Init();
	HZ_CORE_WARN("Logging is working!!!");
	int a = 0;
	HZ_CORE_ERROR("info from Client logger a = {0}!!!", a);


	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}



#else

	#error this application only supprots in windows

#endif // HZ_PLATFORM_WINDOWS