#ifdef __linux__
#include "glad/glad.h"
#endif
#ifdef __MACH__
#define GLFW_DLL
#define GLFW_INCLUDE_GLCOREARB
#endif
#ifdef WIN32
//#include <gl/GL.h>
#include "../deps/glad/glad.h"
#define GLFW_INCLUDE_GLCOREARB
#endif
#include "../deps/GLFW/glfw3.h"
