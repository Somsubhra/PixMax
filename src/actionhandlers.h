#ifndef ACTIONHANDLERS_H
#define ACTIONHANDLERS_H

#include <QObject>

class AppWindow;

class ActionHandlers : public QObject
{
    Q_OBJECT
public:
    explicit ActionHandlers(AppWindow *appWindow);
    ~ActionHandlers();

signals:

public slots:
    void slotExit();
    void slotOpen();

    void slotHelp();
    void slotAbout();

private:
    AppWindow *m_appWindow;
};

#endif // ACTIONHANDLERS_H
