#ifndef LINEOK_H
#define LINEOK_H

#include <QObject>

class LineOk : public QObject
{
    Q_OBJECT
public:
    explicit LineOk(QObject *parent = nullptr);

signals:

public slots:
};

#endif // LINEOK_H