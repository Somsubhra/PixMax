#include "appwindow.h"

AppWindow::AppWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);
    setWindowTitle(tr("PixMax"));
}

AppWindow::~AppWindow()
{

}
