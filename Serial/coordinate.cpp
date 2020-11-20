#include "coordinate.h"
#include <QPainter>
#include <QPointF>
#include <QPen>
#include <qmath.h>

Coordinate::Coordinate(QWidget *parent) : QWidget(parent)
{
    x = -10;
    m_count = 0;
    m_Timer = new QTimer(this);
    m_Timer->start(10);
    connect(m_Timer,SIGNAL(timeout()),this,SLOT(creatData()));
}
void Coordinate::creatData()
{
    x += 0.2;
    m_count += 1;
    if(m_count%2)
    {
        xList.append(x);
        yList.append(qSin(x));
    }
    else
    {
        xList.append(x);
        yList.append(qSin(x));
        update();
    }
    if(m_count == 100)
    {
        xList.clear();
        yList.clear();
        m_count = 0;
        x = -10;
    }
}
void Coordinate::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);
    pen.setWidthF(0.05);
    painter.setPen(pen);
    painter.setViewport(50, 50, width()-100, height()-100);
    painter.setWindow(-10, 2, 20, -4); // (-10, 2)    (10, -2)
    painter.fillRect(-10, 2, 20, -4, Qt::white);
    painter.drawLine(QPointF(-10, 0), QPointF(10, 0));   // x
    painter.drawLine(QPointF(0, 2), QPointF(0, -2));     // y
    for(int i = 0; i < yList.count(); i++)
    {
        if(i == 0)
            painter.drawPoint(QPointF(xList[i], yList[i]));
        else
            painter.drawLine(QPointF(xList[i-1], yList[i-1]), QPointF(xList[i], yList[i]));
    }
}
Coordinate::~Coordinate()
{

}
