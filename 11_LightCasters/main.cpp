#include "LightCastersApplication.h"
#include <memory>

int main()
{
	std::unique_ptr<LightCastersApplication> application(new LightCastersApplication("Phong Lighting Model", 800, 600));

	try
	{
		application->Run();
	}
	catch (const GameException& exception)
	{
		std::cerr << exception.what() << "\n";
	}
}