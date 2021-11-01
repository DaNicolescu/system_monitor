#include <QGridLayout>
#include <QLabel>
#include "tabs/h/generaltab.h"

GeneralTab::GeneralTab(QWidget *parent)
    : QWidget(parent)
{
    // Main Layout of the tab
    this->mainGridLayout = new QGridLayout(this);

    // System Group Box
    this->systemGroupBox = new QGroupBox("System");

    this->systemGridLayout = new QGridLayout();
    this->systemGridLayout->addWidget(new QLabel("Linux Distribution"), 0, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 0, 1);
    this->systemGridLayout->addWidget(new QLabel("CPU"), 1, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 1, 1);
    this->systemGridLayout->addWidget(new QLabel("Total Memory"), 2, 0);
    this->systemGridLayout->addWidget(new QLabel("Placeholder"), 2, 1);
    
    this->systemGroupBox->setLayout(this->systemGridLayout);
    this->systemGroupBox->setMaximumHeight(200);
    this->systemGroupBox->setMaximumWidth(400);

    // Disk Group Box
    this->diskGroupBox = new QGroupBox("Disk");
    
    this->diskGridLayout = new QGridLayout();
    this->diskGridLayout->addWidget(new QLabel("df -h like output"), 0, 0);

    this->diskGroupBox->setLayout(this->diskGridLayout);

    // Memory Group Box
    this->memoryGroupBox = new QGroupBox("Memory");

    this->memoryGridLayout = new QGridLayout();
    this->memoryGridLayout->addWidget(new QLabel("Line chart with memory consumption (you can choose the rate of refresh)"));

    this->memoryGroupBox->setLayout(this->memoryGridLayout);

    // Main Layout of the tab
    this->mainGridLayout->addWidget(this->systemGroupBox, 0, 0);
    this->mainGridLayout->addWidget(this->diskGroupBox, 0, 1);
    this->mainGridLayout->addWidget(this->memoryGroupBox, 1, 0, 1, 2);

    this->setLayout(this->mainGridLayout);
}

GeneralTab::~GeneralTab()
{
    delete this->mainGridLayout;
}