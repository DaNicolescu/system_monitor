#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>

class QPushButton;
class QTextButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QTabWidget *tabWidget;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

#endif