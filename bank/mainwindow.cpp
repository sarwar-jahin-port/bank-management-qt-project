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
        current_user = login_email;
    }
    dashboard_dataLoad();
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
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * query = new QSqlQuery(db);

    query->prepare("SELECT * FROM 'main'.'transaction'");
    query->exec();
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    qDebug() << (modal->rowCount());
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
// All important functions wrote manually.
void MainWindow::getData()
{
    qDebug() << current_user;
    QSqlQuery query;
    query.prepare(" SELECT balance FROM user WHERE email = '"+current_user+"'");
    if(query.exec()){
        while(query.next()){
            c_balance = query.value("balance").toString();
            c_balance_int = c_balance.toInt();
            qDebug() << "c_balance: "<<c_balance<<"c_balance_int: "<<c_balance_int;
        }
    }
}

void MainWindow::getLastElement()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM user ORDER BY account_no DESC LIMIT 1");
    if(query.exec()){
        while(query.next()){
            l_account_no_int = query.value(0).toInt() + 1;
        }
    }
}

void MainWindow::dashboard_dataLoad()
{
    getData();
    getLastElement();
    ui->home_savings->setText(c_balance);
    ui->home_available_balance->setText((c_balance));
    ui->home_ledger->setText(c_balance);
}

void MainWindow::fund_transfer_dataLoad()
{
    QSqlQuery query;
    query.prepare(" SELECT account_no, balance FROM user WHERE email = '"+current_user+"'");
    if(query.exec()){
        while(query.next()){
            c_account_no = query.value("account_no").toString();
            c_balance_int = query.value("balance").toInt();
            ft_to_account = ui->ft_to_account->text();
            ft_to_account_holder = ui->ft_to_ac_holder->text();
            ft_to_narration = ui->ft_to_narration->text();
            transfer_amount = ui->ft_from_transfer_amount->text().toInt();
        }
    }
}
// This function is responsive for submit form data into the database.
void MainWindow::on_signup_submit_form_clicked()
{
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
    dashboard_dataLoad();
    balance = QString::number(10000);
    account_no = QString::number(l_account_no_int);

    QSqlQuery query;
    query.exec(" SELECT * FROM user WHERE email = '"+signup_email+"' AND password = '"+signup_password+"'");
    if(!query.next()){
        QSqlQuery query1;
        query1.exec("INSERT INTO user (account_no, first_name, last_name, phone, email, password, date_of_birth, education, city, postal_code, country, address, account_type, branch, balance) "
                    "VALUES ('"+account_no+"', '"+signup_first_name+"', '"+signup_last_name+"', '"+signup_phone+"', '"+signup_email+"', '"+signup_password+"', '"+signup_birth_date+"', '"+signup_education+"', '"+signup_city+"', '"+signup_postal_code+"', '"+signup_country+"', '"+signup_address+"', '"+signup_account_type+"', '"+signup_branch+"', '"+balance+"')");

    }
}


void MainWindow::on_ft_send_button_clicked()
{
    transfer_amount = ui->ft_from_transfer_amount->text().toInt();
    qDebug() <<c_balance_int;
    if(c_balance_int >= transfer_amount){
        c_balance_int = c_balance_int - transfer_amount;
        qDebug() << c_balance_int;
        QSqlQuery query;
        query.prepare("UPDATE user SET balance=:balance WHERE email = '"+current_user+"'");
        query.bindValue(":balance", c_balance_int);
        query.exec();
        query.next();
        qDebug() <<current_user;
        c_date = QDate::currentDate().toString("dd-MM-yyyy");
        qDebug() << c_date;
        transfer_amount_text = QString::number(transfer_amount);
        qDebug() << transfer_amount_text;
        c_time = QTime::currentTime().toString("hh:mm AP");
        qDebug() << c_time;
        QSqlQuery query1;
        query1.exec("INSERT INTO 'main'.'transaction' (email, status, date, amount, time) "
                    "VALUES ('"+current_user+"', 'DR', '"+c_date+"', '"+transfer_amount_text+"', '"+c_time+"')");
        query1.next();
    }
}

