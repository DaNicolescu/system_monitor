#include "mainwindow.h"
#include "tabs/generaltab.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->tabWidget = new QTabWidget();
    this->tabWidget->addTab(new GeneralTab(), "General");
    this->tabWidget->addTab(new QWidget(), "Users");
    this->tabWidget->addTab(new QWidget(), "Processes");

    this->setCentralWidget(this->tabWidget);

    this->setWindowTitle("System Monitor");
    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
}