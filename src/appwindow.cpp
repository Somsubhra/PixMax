#include <QMenu>
#include <QMenuBar>

#include "appwindow.h"

AppWindow::AppWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);
    setWindowTitle(tr("PixMax"));

    m_actionCollection = new ActionCollection(this);

    m_standardActions = new StandardActions(this);
    m_standardActions->createStandardActions();

    createMenuBar();

    m_viewPort = new ViewPort(this);
    setCentralWidget(m_viewPort);
}

AppWindow::~AppWindow()
{
    delete m_actionCollection;
    m_actionCollection = 0;

    delete m_standardActions;
    m_standardActions = 0;

    delete m_viewPort;
    m_viewPort = 0;
}

void AppWindow::createMenuBar()
{
    QMenu* fileMenu = menuBar()->addMenu(tr("File"));
    fileMenu->addAction(m_actionCollection->action("open"));
    fileMenu->addSeparator();
    fileMenu->addAction(m_actionCollection->action("exit"));

    QMenu* helpMenu = this->menuBar()->addMenu(tr("Help"));
    helpMenu->addAction(m_actionCollection->action("help"));
    helpMenu->addSeparator();
    helpMenu->addAction(m_actionCollection->action("about"));
}

ActionCollection* AppWindow::actionCollection()
{
    return m_actionCollection;
}

ViewPort* AppWindow::viewPort()
{
    return m_viewPort;
}
