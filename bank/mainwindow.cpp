#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_forget_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_login_sign_in_button_clicked()
{
    login_email = ui->login_username_or_email_input->text();
    login_password = ui->login_password_input->text();
//    qDebug() << login_email << login_password;
    if(login_email == "admin" && login_password == "admin"){
        ui->stackedWidget->setCurrentIndex(1);
    }
}

void MainWindow::on_login_sign_up_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_fund_tranfer_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_cards_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_forget_back_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_bill_pay_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_beneficiary_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_services_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_profile_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_activity_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

