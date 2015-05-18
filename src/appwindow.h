#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QMainWindow>

#include "actioncollection.h"
#include "standardactions.h"
#include "canvas.h"

class AppWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

    ActionCollection* actionCollection();

signals:

public slots:

private:
    void createMenuBar();

private:
    ActionCollection *m_actionCollection;
    StandardActions *m_standardActions;
    Canvas *m_canvas;
};

#endif // APPWINDOW_H
