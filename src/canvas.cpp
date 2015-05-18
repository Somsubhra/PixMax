#include "canvas.h"
#include "appwindow.h"

Canvas::Canvas(AppWindow *appWindow)
    : QLabel(appWindow)
{
    m_appWindow = appWindow;
}

Canvas::~Canvas()
{

}

