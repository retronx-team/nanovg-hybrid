#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <Application.hpp>

using namespace app;
using namespace std;

int main(int argc, char* argv[])
{
    Application *app = new Application();

    if (!app->init())
    {
        printf("Unable to init application");
        delete app;
        return EXIT_FAILURE;
    }

    while (app->mainLoop());

    delete app;
    return EXIT_SUCCESS;
}