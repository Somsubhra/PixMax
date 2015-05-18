#include <QFileDialog>
#include <QStandardPaths>

#include "actionhandlers.h"
#include "appwindow.h"

ActionHandlers::ActionHandlers(AppWindow *appWindow)
    : QObject(appWindow)
{
    m_appWindow = appWindow;
}

ActionHandlers::~ActionHandlers()
{

}

void ActionHandlers::slotExit()
{
    m_appWindow->close();
}

void ActionHandlers::slotOpen()
{
    QString picDir = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation).at(0);

    QString url = QFileDialog::getOpenFileName(m_appWindow,
                                                    tr("Open Document"),
                                                    picDir);

    m_appWindow->viewPort()->canvas()->slotLoadImage(url);
}

void ActionHandlers::slotHelp()
{

}

void ActionHandlers::slotAbout()
{

}
