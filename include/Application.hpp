#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <nanovg.h>

#pragma once

#ifndef __SWITCH__
#define ASSET(_str) "./resources/" _str
#else
#define ASSET(_str) "romfs:/" _str
#endif

namespace app
{
    class FontStash
    {
        public:
            int regular = 0;
    };

    class Application
    {
        public:
            bool init();
            bool mainLoop();

        private:
            GLFWwindow* window  = NULL;
            NVGcontext *vg      = NULL;

            FontStash fontStash;

            void frame();
            void exit();
    };

    class FrameContext
    {
        public:
            NVGcontext *vg  = NULL;
            int windowWidth, windowHeight = 0;
            float pixelRatio = 0.0;

            FontStash *fontStash = NULL;
    };
};
