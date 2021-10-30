#include <QGridLayout>
#include <QLabel>
#include "generaltab.h"

GeneralTab::GeneralTab(QWidget *parent)
    : QWidget(parent)
{
    this->systemGridLayout = new QGridLayout();
    this->systemGridLayout->addWidget(new QLabel("Linux Distribution"), 0, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 0, 1);
    this->systemGridLayout->addWidget(new QLabel("CPU"), 1, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 1, 1);
    this->systemGridLayout->addWidget(new QLabel("Total Memory"), 2, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 2, 1);

    this->systemGroupBox = new QGroupBox("System");
    this->systemGroupBox->setLayout(this->systemGridLayout);
    this->systemGroupBox->setMaximumHeight(200);
    this->systemGroupBox->setMaximumWidth(400);

    QGridLayout *gridLayout = new QGridLayout();
    gridLayout->addWidget(this->systemGroupBox, 0, 0);

    this->setLayout(gridLayout);
}

GeneralTab::~GeneralTab()
{
    delete this->systemGroupBox;
}