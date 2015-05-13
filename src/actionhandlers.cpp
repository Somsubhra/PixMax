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

    QString file = QFileDialog::getOpenFileName(m_appWindow,
                                                    tr("Open Document"),
                                                    picDir);

    Q_UNUSED(file);
}

void ActionHandlers::slotHelp()
{

}

void ActionHandlers::slotAbout()
{

}
