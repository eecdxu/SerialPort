#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QList>

class Coordinate : public QWidget
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent *);
public:
    int m_count;
    float x;
    QTimer* m_Timer;
    QList<float> xList;
    QList<float> yList;

    Coordinate(QWidget *parent = 0);
    ~Coordinate();

public slots:
    void creatData();

};

#endif // WIDGET_H
