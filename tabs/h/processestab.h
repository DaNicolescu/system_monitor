#ifndef PROCESSESTAB_H
#define PROCESSESTAB_H

#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>

class ProcessesTab : public QWidget
{
    Q_OBJECT

    QGridLayout *mainGridLayout;

    QGroupBox *processTreeGroupBox;
    QGridLayout *processTreeGridLayout;

public:
    explicit ProcessesTab(QWidget *parent = nullptr);
    ~ProcessesTab();
};

#endif