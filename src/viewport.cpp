#include "viewport.h"

#include "appwindow.h"

ViewPort::ViewPort(AppWindow *appWindow)
    : QScrollArea(appWindow)
{
    m_appWindow = appWindow;

    setBackgroundRole(QPalette::Dark);

    m_canvas = new Canvas(this);
    setWidget(m_canvas);
}

ViewPort::~ViewPort()
{
    delete m_canvas;
    m_canvas = 0;
}

AppWindow* ViewPort::appWindow()
{
    return m_appWindow;
}

Canvas* ViewPort::canvas()
{
    return m_canvas;
}
