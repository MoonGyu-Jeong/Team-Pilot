#ifndef AMBIENT_H
#define AMBIENT_H

#include <QObject>

class Ambient : public QObject
{
    Q_OBJECT
public:
    explicit Ambient(QObject *parent = 0);
    ~Ambient();
signals:

public slots:
    void ambientSlot(const int &msg);
};

#endif // AMBIENT_H
