#include <QMessageBox>
#include <QDir>
#include <QPixmap>

#include "canvas.h"
#include "viewport.h"

Canvas::Canvas(ViewPort *viewPort)
    : QLabel(viewPort)
{
    m_viewPort = viewPort;
    m_currentImage = 0;
}

Canvas::~Canvas()
{
    if(m_currentImage)
    {
        delete m_currentImage;
        m_currentImage = 0;
    }
}

void Canvas::slotLoadImage(QString url)
{
    m_currentImage = new Image(url);

    if(m_currentImage->isNull())
    {
        QMessageBox::information(m_viewPort,
                                 tr("Error"),
                                 tr("Cannot load %1.").arg(QDir::toNativeSeparators(url)));

        setWindowFilePath(QString());
        setPixmap(QPixmap());
        adjustSize();

        return;
    }

    setPixmap(QPixmap::fromImage(*m_currentImage));
    setWindowFilePath(url);
}
