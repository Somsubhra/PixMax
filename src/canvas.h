#ifndef CANVAS_H
#define CANVAS_H

#include <QLabel>

class AppWindow;

class Canvas : public QLabel
{
    Q_OBJECT
public:
    Canvas(AppWindow *appWindow);
    ~Canvas();

private:
    AppWindow *m_appWindow;
};

#endif // CANVAS_H
