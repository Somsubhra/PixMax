#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <QScrollArea>

#include "canvas.h"

class AppWindow;

class ViewPort : public QScrollArea
{
    Q_OBJECT
public:
    ViewPort(AppWindow *appWindow);
    ~ViewPort();

private:
    AppWindow *m_appWindow;
    Canvas *m_canvas;
};

#endif // VIEWPORT_H
