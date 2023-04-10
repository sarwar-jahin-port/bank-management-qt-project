#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->login_support_number->setText("<h1>12345</h1>");
}

MainWindow::~MainWindow()
{
    delete ui;
}

