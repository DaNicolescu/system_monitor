#ifndef USERSTAB_H
#define USERSTAB_H

#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>

class UsersTab : public QWidget
{
    Q_OBJECT

    QGridLayout *mainGridLayout;

    QGroupBox *usersGroupBox;
    QGridLayout *usersGridLayout;

    QGroupBox *groupsGroupBox;
    QGridLayout *groupsGridLayout;

    QGroupBox *usersGroupsGroupBox;
    QGridLayout *usersGroupsGridLayout;

public:
    explicit UsersTab(QWidget *parent = nullptr);
    ~UsersTab();
};

#endif