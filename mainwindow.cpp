#include "mainwindow.h"
#include "tabs/h/generaltab.h"
#include "tabs/h/userstab.h"
#include "tabs/h/processestab.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->tabWidget = new QTabWidget(this);
    this->tabWidget->addTab(new GeneralTab(this->tabWidget), "General");
    this->tabWidget->addTab(new UsersTab(this->tabWidget), "Users");
    this->tabWidget->addTab(new ProcessesTab(this->tabWidget), "Processes");

    this->setCentralWidget(this->tabWidget);

    this->setWindowTitle("System Monitor");
    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete this->tabWidget;
}