#ifndef STANDARDACTIONS_H
#define STANDARDACTIONS_H

#include <QObject>

class AppWindow;
class ActionHandlers;

class StandardActions : public QObject
{
    Q_OBJECT
public:
    explicit StandardActions(AppWindow *appWindow);
    ~StandardActions();

    void createStandardActions();

signals:

public slots:

private:
    AppWindow *m_appWindow;
    ActionHandlers *m_actionHandlers;
};

#endif // STANDARDACTIONS_H
