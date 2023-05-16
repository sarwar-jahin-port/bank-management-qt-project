#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_login_sign_in_button_clicked();

    void on_login_sign_up_button_clicked();

    void on_fund_tranfer_button_clicked();

    void on_cards_button_clicked();

    void on_login_forget_button_clicked();

    void on_forget_back_button_clicked();

    void on_bill_pay_button_clicked();

    void on_beneficiary_button_clicked();

    void on_services_button_clicked();

    void on_profile_button_clicked();

    void on_activity_button_clicked();

    void on_fund_tranfer_button_2_clicked();

    void on_dashboard_button_2_clicked();

    void on_cards_button_2_clicked();

    void on_bill_pay_button_2_clicked();

    void on_beneficiary_button_2_clicked();

    void on_services_button_2_clicked();

    void on_profile_button_2_clicked();

    void on_activity_button_2_clicked();

    void on_dashboard_button_4_clicked();

    void on_fund_tranfer_button_4_clicked();

    void on_cards_button_4_clicked();

    void on_bill_pay_button_4_clicked();

    void on_beneficiary_button_4_clicked();

    void on_services_button_4_clicked();

    void on_profile_button_4_clicked();

    void on_activity_button_4_clicked();

    void on_dashboard_button_5_clicked();

    void on_fund_tranfer_button_5_clicked();

    void on_cards_button_5_clicked();

    void on_bill_pay_button_5_clicked();

    void on_beneficiary_button_5_clicked();

    void on_services_button_5_clicked();

    void on_profile_button_5_clicked();

    void on_activity_button_5_clicked();

    void on_dashboard_button_7_clicked();

    void on_fund_tranfer_button_7_clicked();

    void on_cards_button_7_clicked();

    void on_bill_pay_button_7_clicked();

    void on_beneficiary_button_7_clicked();

    void on_services_button_7_clicked();

    void on_profile_button_7_clicked();

    void on_activity_button_7_clicked();

    void on_dashboard_button_8_clicked();

    void on_fund_tranfer_button_8_clicked();

    void on_cards_button_8_clicked();

    void on_bill_pay_button_8_clicked();

    void on_beneficiary_button_8_clicked();

    void on_services_button_8_clicked();

    void on_profile_button_8_clicked();

    void on_activity_button_8_clicked();

    void on_dashboard_button_9_clicked();

    void on_fund_tranfer_button_9_clicked();

    void on_cards_button_9_clicked();

    void on_bill_pay_button_9_clicked();

    void on_beneficiary_button_9_clicked();

    void on_services_button_9_clicked();

    void on_profile_button_9_clicked();

    void on_activity_button_9_clicked();

    void on_dashboard_button_10_clicked();

    void on_fund_tranfer_button_10_clicked();

    void on_cards_button_10_clicked();

    void on_bill_pay_button_10_clicked();

    void on_beneficiary_button_10_clicked();

    void on_services_button_10_clicked();

    void on_profile_button_10_clicked();

    void on_activity_button_10_clicked();

    void on_signup_submit_form_clicked();

    void getData();

    void getLastElement();

    void dashboard_dataLoad();

    void fund_transfer_dataLoad();

    void on_ft_send_button_clicked();

private:
    Ui::MainWindow *ui;
    QString current_user, c_balance, c_account_no, l_account_no, c_date, c_time;
    QString ft_to_account, ft_to_account_holder, ft_to_narration, transfer_amount_text;
    QString account_no, login_email, login_password, signup_account_type, signup_branch, signup_first_name, signup_last_name, signup_phone, signup_email, signup_password, signup_birth_date, signup_address, signup_city, signup_postal_code, signup_country, signup_education, balance;
    qint32 c_balance_int, l_account_no_int, transfer_amount;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
