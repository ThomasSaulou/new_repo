#ifndef BITE_H
#define BITE_H

#include <QDeclarativeItem>
#include <QMainWindow>
#include <QObject>
#include <QQuickItem>
#include <QSharedDataPointer>
#include <QWidget>

class BiteData;

class Bite
{
public:
    Bite();
    Bite(const Bite &);
    Bite &operator=(const Bite &);
    ~Bite();

private:
    QSharedDataPointer<BiteData> data;
};

#endif // BITE_H