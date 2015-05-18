#ifndef CANVAS_H
#define CANVAS_H

#include <QLabel>

#include "image.h"

class ViewPort;

class Canvas : public QLabel
{
    Q_OBJECT
public:
    Canvas(ViewPort *viewPort);
    ~Canvas();

public slots:
    void slotLoadImage(QString url);

private:
    ViewPort *m_viewPort;
    Image *m_currentImage;
};

#endif // CANVAS_H
