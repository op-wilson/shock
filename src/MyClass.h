#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QString>
class MyClass : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE void init();
    Q_INVOKABLE void start(int count, int delayT);
    Q_INVOKABLE void pump();
    Q_INVOKABLE void release();
};

#endif //MYCLASS_H
