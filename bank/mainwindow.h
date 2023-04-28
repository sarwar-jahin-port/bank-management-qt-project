#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>

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

private:
    Ui::MainWindow *ui;
    QString login_email, login_password;
};
#endif // MAINWINDOW_H
