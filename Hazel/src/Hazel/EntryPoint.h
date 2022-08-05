#pragma once

#ifdef HZ_PLATFORM_WINDOWS



extern Hazel::Application* Hazel::CreateApplication();

int main(int argv, char** argc) {
	printf("Hello pavan");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;


}



#else

	#error this application only supprots in windows



#endif // HZ_PLATFORM_WINDOWS