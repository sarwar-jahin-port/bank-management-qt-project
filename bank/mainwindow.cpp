#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/teck-sink/project/bank/db/db");
    db.open();
}

MainWindow::~MainWindow()
{
    db.close();
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
    QSqlQuery query;
    query.exec(" SELECT * FROM user WHERE email = '"+login_email+"' AND password = '"+login_password+"'");
//    qDebug() << query.next();
    if(query.next()){
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
// Pagination for Activity page


void MainWindow::on_dashboard_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Pagination for Services Page
void MainWindow::on_dashboard_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Pagination for Beneficiary page
void MainWindow::on_dashboard_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//Pagination for bill pay page
void MainWindow::on_dashboard_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
// Pagination for Cards page

void MainWindow::on_dashboard_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Pagination for fund transfer page
void MainWindow::on_dashboard_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// Pagination for Profile page
void MainWindow::on_dashboard_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_fund_tranfer_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_cards_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_bill_pay_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_beneficiary_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_services_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_profile_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_activity_button_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

// This function is responsive for submit form data into the database.
void MainWindow::on_signup_submit_form_clicked()
{
    qDebug() << "submit form clicked";
    signup_account_type = ui->signup_account_type->currentText();
    signup_branch = ui->signup_branch->currentText();
    signup_first_name = ui->signup_first_name->text();
    signup_last_name = ui->signup_last_name->text();
    signup_phone = ui->signup_phone->text();
    signup_email = ui->signup_email->text();
    signup_password = ui->signup_password->text();
    signup_birth_date = ui->signup_birth_date->text();
    signup_address = ui->signup_address->text();
    signup_city = ui->signup_city->text();
    signup_postal_code = ui->signup_postal_code->text();
    signup_country = ui->signup_country->text();
    signup_education = ui->signup_education->currentText();
    qDebug() << signup_account_type << signup_branch << signup_first_name << signup_last_name << signup_phone << signup_email << signup_password << signup_birth_date << signup_address << signup_city << signup_postal_code << signup_country << signup_education;
    QSqlQuery query;
    query.exec("INSERT INTO user (first_name, last_name, phone, email, password, date_of_birth, education, city, postal_code, country, address, account_type, branch) VALUES ('"+signup_first_name+"', '"+signup_last_name+"', '"+signup_phone+"', '"+signup_email+"', '"+signup_password+"', '"+signup_birth_date+"', '"+signup_education+"', '"+signup_city+"', '"+signup_postal_code+"', '"+signup_country+"', '"+signup_address+"', '"+signup_account_type+"', '"+signup_branch+"')");
}

