#include "image.h"

Image::Image(QString url)
    : QImage(url)
{
    m_url = url;
}

Image::~Image()
{

}

QString Image::url()
{
    return m_url;
}
