#include "harmonization.h"
#include "ui_harmonization.h"

Harmonization::Harmonization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Harmonization)
{
    ui->setupUi(this);
}

Harmonization::~Harmonization()
{
    delete ui;
}
