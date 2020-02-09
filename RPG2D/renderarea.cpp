#include "renderarea.h"

#include <QPainter>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(width(), height());
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent * )
{
        QPainter painter(this);
        double x = width()/4;
        double y = height()/4;
        painter.save();
        painter.translate(x, y);

        painter.restore();
        painter.setPen(palette().dark().color());
        painter.setBrush(Qt::NoBrush);
        painter.drawRect(QRect(0, 0, width() - 1, height() - 1));
}
