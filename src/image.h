#ifndef IMAGE_H
#define IMAGE_H

#include <QImage>

class Image : public QImage
{
public:
    Image(QString url);
    ~Image();

    QString url();

private:
    QString m_url;
};

#endif // IMAGE_H
