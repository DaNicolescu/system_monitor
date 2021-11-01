#include <QGridLayout>
#include <QLabel>
#include "tabs/h/processestab.h"

ProcessesTab::ProcessesTab(QWidget *parent)
    : QWidget(parent)
{
    // Main Layout of the tab
    this->mainGridLayout = new QGridLayout(this);

    // Process Tree Group Box
    this->processTreeGroupBox = new QGroupBox("Process Tree");

    this->processTreeGridLayout = new QGridLayout();
    this->processTreeGridLayout->addWidget(new QLabel("pstree"), 0, 0);
    
    this->processTreeGroupBox->setLayout(this->processTreeGridLayout);

    // Main Layout of the tab
    this->mainGridLayout->addWidget(this->processTreeGroupBox, 0, 0);

    this->setLayout(this->mainGridLayout);
}

ProcessesTab::~ProcessesTab()
{
    delete this->mainGridLayout;
}