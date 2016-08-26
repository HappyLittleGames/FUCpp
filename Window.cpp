#include "Window.h"



Window::Window(StructurePart* nextExtrusion)
{
	m_nextExtrusion = nextExtrusion;
}


Window::~Window()
{
}

void Window::Draw()
{
	printf(" |[]|\n");
	printf(" ||||\n");
	printf(" |[]|		- Actually two windows\n");

	m_nextExtrusion->Draw();

	// whatever graphics engine runs this will probably have  a window class though :D:D
}
