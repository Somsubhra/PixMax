#include "actioncollection.h"

ActionCollection::ActionCollection(QObject *parent) : QObject(parent)
{
    m_actions = new QHash<QString, QAction*>();
}

ActionCollection::~ActionCollection()
{
    delete m_actions;
    m_actions = 0;
}

void ActionCollection::addAction(QString key, QAction *action)
{
    m_actions->insert(key, action);
}

QAction* ActionCollection::action(QString key)
{
    if(m_actions->contains(key))
    {
        return m_actions->value(key);
    }
    else
    {
        return 0;
    }
}
