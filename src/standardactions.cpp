#include <QAction>
#include <QStyle>

#include "standardactions.h"
#include "appwindow.h"
#include "actioncollection.h"
#include "actionhandlers.h"

StandardActions::StandardActions(AppWindow *appWindow)
    : QObject(appWindow)
{
    m_appWindow = appWindow;
    m_actionHandlers = new ActionHandlers(m_appWindow);
}

StandardActions::~StandardActions()
{
    delete m_actionHandlers;
}

void StandardActions::createStandardActions()
{
    QAction *exitAction = new QAction(tr("Exit"), m_appWindow);
    exitAction->setShortcut(QKeySequence("Ctrl+Q"));
    m_appWindow->actionCollection()->addAction("exit", exitAction);
    connect(exitAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotExit()));

    QAction *openAction = new QAction(m_appWindow->style()->standardIcon(QStyle::SP_DirOpenIcon),
                                      tr("Open"), m_appWindow);
    openAction->setShortcut(QKeySequence("Ctrl+O"));
    m_appWindow->actionCollection()->addAction("open", openAction);
    connect(openAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotOpen()));

    QAction *helpAction = new QAction(m_appWindow->style()->standardIcon(QStyle::SP_DialogHelpButton),
                                      tr("Help"), m_appWindow);
    m_appWindow->actionCollection()->addAction("help", helpAction);
    connect(helpAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotHelp()));

    QAction *aboutAction = new QAction(tr("About"), m_appWindow);
    m_appWindow->actionCollection()->addAction("about", aboutAction);
    connect(aboutAction, SIGNAL(triggered()), m_actionHandlers, SLOT(slotAbout()));

}
