#ifndef HARMONIZATION_H
#define HARMONIZATION_H

#include <QDialog>

namespace Ui {
class Harmonization;
}

class Harmonization : public QDialog
{
    Q_OBJECT

public:
    explicit Harmonization(QWidget *parent = nullptr);
    ~Harmonization();

private:
    Ui::Harmonization *ui;
};

#endif // HARMONIZATION_H
