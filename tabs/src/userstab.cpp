#include <QGridLayout>
#include <QLabel>
#include "tabs/h/userstab.h"

UsersTab::UsersTab(QWidget *parent)
    : QWidget(parent)
{
    // Main Layout of the tab
    this->mainGridLayout = new QGridLayout(this);

    // Users Group Box
    this->usersGroupBox = new QGroupBox("Users");

    this->usersGridLayout = new QGridLayout();
    this->usersGridLayout->addWidget(new QLabel("List of the users on the system"), 0, 0);
    
    this->usersGroupBox->setLayout(this->usersGridLayout);

    // Groups Group Box
    this->groupsGroupBox = new QGroupBox("Groups");
    
    this->groupsGridLayout = new QGridLayout();
    this->groupsGridLayout->addWidget(new QLabel("List of the groups on the system"), 0, 0);

    this->groupsGroupBox->setLayout(this->groupsGridLayout);

    // Users - Groups Association Group Box
    this->usersGroupsGroupBox = new QGroupBox("Users - Groups Association");

    this->usersGroupsGridLayout = new QGridLayout();
    this->usersGroupsGridLayout->addWidget(new QLabel("Visual association between users and groups."
        " Maybe buckets of groups in which you find the users"));

    this->usersGroupsGroupBox->setLayout(this->usersGroupsGridLayout);

    // Main Layout of the tab
    this->mainGridLayout->addWidget(this->usersGroupBox, 0, 0);
    this->mainGridLayout->addWidget(this->groupsGroupBox, 0, 1);
    this->mainGridLayout->addWidget(this->usersGroupsGroupBox, 1, 0, 1, 2);

    this->setLayout(this->mainGridLayout);
}

UsersTab::~UsersTab()
{
    delete this->mainGridLayout;
}