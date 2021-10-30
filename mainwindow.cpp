#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->tabWidget = new QTabWidget();
    this->tabWidget->addTab(new QWidget(), "General");
    this->tabWidget->addTab(new QWidget(), "Users");
    this->tabWidget->addTab(new QWidget(), "Processes");

    this->setCentralWidget(this->tabWidget);

    this->setWindowTitle("System Monitor");
    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete this->tabWidget;
}