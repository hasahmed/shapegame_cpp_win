#pragma once
#include "Scene.hpp"
namespace shapegame {
    class Color {
        friend class Scene;
        private:
            float _color[4];
        public:
            Color(float r, float g, float b, float a);
            Color(float r, float g, float b);
            Color();

            static Color BLACK;
            static Color WHITE;
            static Color RED;
            static Color PINK;
            static Color KATIE_PINK;
            static Color GREEN;
            static Color BLUE;
            static Color YELLOW;
            static Color PURPLE;
    };
}

