/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QStackedWidget *WindowStack;
    QWidget *LoginPage;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QLabel *loginLabel;
    QWidget *RegisterPage;
    QFrame *frame_3;
    QLabel *label_2;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QPushButton *completeRegisterButton;
    QLineEdit *eBox;
    QPushButton *backToLoginPageButton;
    QLabel *regLabel;
    QLabel *rpLabel;
    QPushButton *uploadButton;
    QWidget *MainPage;
    QFrame *frame_4;
    QLabel *loggedUserHeader;
    QPushButton *logoutButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *nameLabel;
    QLabel *rankLabel;
    QPushButton *editButton;
    QCommandLinkButton *Game1v1Button;
    QCommandLinkButton *Game9Button;
    QCommandLinkButton *GameSingleButton;
    QCommandLinkButton *HelpButton;
    QLabel *loggedPic;
    QPlainTextEdit *textEdit;
    QLineEdit *editMsg;
    QToolButton *sendButton;
    QWidget *EditPage;
    QFrame *frame_5;
    QLabel *label_5;
    QLineEdit *uBox_2;
    QLineEdit *pBox_2;
    QPushButton *editedButton;
    QLineEdit *eBox_2;
    QPushButton *backToMainPageButton;
    QLabel *regLabel_2;
    QPushButton *uploadButton_2;
    QLabel *rpLabel_2;
    QLabel *FloatWindow;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(1440, 810);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        mainwindow->setPalette(palette);
        mainwindow->setCursor(QCursor(Qt::CrossCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindow->setWindowIcon(icon);
        mainwindow->setAutoFillBackground(false);
        mainwindow->setStyleSheet(QString::fromUtf8("#LoginPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"\n"
"#MainPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"\n"
"#RegisterPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"\n"
"#EditPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}"));
        centralWidget = new QWidget(mainwindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setStyleSheet(QString::fromUtf8("#LoginPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"#LoginPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"#LoginPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
"#LoginPage {\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setBaseSize(QSize(750, 450));
        frame->setAutoFillBackground(true);
        frame->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        WindowStack = new QStackedWidget(frame);
        WindowStack->setObjectName(QString::fromUtf8("WindowStack"));
        WindowStack->setGeometry(QRect(0, 0, 1440, 810));
        WindowStack->setAutoFillBackground(false);
        WindowStack->setStyleSheet(QString::fromUtf8(""));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(LoginPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 1440, 810));
        frame_2->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 130, 175, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Droid Sans"));
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';\n"
""));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName(QString::fromUtf8("usernameBox"));
        usernameBox->setGeometry(QRect(500, 260, 400, 80));
        QPalette palette1;
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(190, 190, 190, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush6(QColor(190, 190, 190, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush7(QColor(190, 190, 190, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        usernameBox->setPalette(palette1);
        QFont font1;
        font1.setPointSize(20);
        font1.setKerning(true);
        usernameBox->setFont(font1);
        usernameBox->setLayoutDirection(Qt::LeftToRight);
        usernameBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        usernameBox->setFrame(false);
        usernameBox->setCursorPosition(0);
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName(QString::fromUtf8("passwordBox"));
        passwordBox->setGeometry(QRect(500, 400, 400, 80));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush8(QColor(190, 190, 190, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush9(QColor(190, 190, 190, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush10(QColor(190, 190, 190, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        passwordBox->setPalette(palette2);
        passwordBox->setFont(font1);
        passwordBox->setLayoutDirection(Qt::LeftToRight);
        passwordBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        passwordBox->setInputMethodHints(Qt::ImhNone);
        passwordBox->setFrame(false);
        passwordBox->setCursorPosition(0);
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(440, 570, 200, 40));
        loginButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        registerButton = new QPushButton(frame_2);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(780, 570, 200, 40));
        registerButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        loginLabel = new QLabel(frame_2);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(560, 200, 267, 16));
        loginLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        WindowStack->addWidget(LoginPage);
        RegisterPage = new QWidget();
        RegisterPage->setObjectName(QString::fromUtf8("RegisterPage"));
        frame_3 = new QFrame(RegisterPage);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1440, 810));
        QFont font2;
        font2.setPointSize(20);
        frame_3->setFont(font2);
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 40, 223, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox = new QLineEdit(frame_3);
        uBox->setObjectName(QString::fromUtf8("uBox"));
        uBox->setGeometry(QRect(340, 210, 400, 80));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush11(QColor(190, 190, 190, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush12(QColor(190, 190, 190, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush13(QColor(190, 190, 190, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        uBox->setPalette(palette3);
        uBox->setFont(font1);
        uBox->setLayoutDirection(Qt::LeftToRight);
        uBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        uBox->setFrame(false);
        uBox->setCursorPosition(0);
        pBox = new QLineEdit(frame_3);
        pBox->setObjectName(QString::fromUtf8("pBox"));
        pBox->setGeometry(QRect(340, 310, 400, 80));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush14(QColor(190, 190, 190, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush15(QColor(190, 190, 190, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush16(QColor(190, 190, 190, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        pBox->setPalette(palette4);
        pBox->setFont(font1);
        pBox->setLayoutDirection(Qt::LeftToRight);
        pBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        pBox->setInputMethodHints(Qt::ImhNone);
        pBox->setFrame(false);
        pBox->setCursorPosition(0);
        completeRegisterButton = new QPushButton(frame_3);
        completeRegisterButton->setObjectName(QString::fromUtf8("completeRegisterButton"));
        completeRegisterButton->setGeometry(QRect(730, 570, 200, 40));
        QFont font3;
        font3.setPointSize(10);
        completeRegisterButton->setFont(font3);
        completeRegisterButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox = new QLineEdit(frame_3);
        eBox->setObjectName(QString::fromUtf8("eBox"));
        eBox->setGeometry(QRect(340, 410, 400, 80));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush17(QColor(190, 190, 190, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush17);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush18(QColor(190, 190, 190, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush19(QColor(190, 190, 190, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush19);
#endif
        eBox->setPalette(palette5);
        eBox->setFont(font1);
        eBox->setLayoutDirection(Qt::LeftToRight);
        eBox->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        eBox->setInputMethodHints(Qt::ImhNone);
        eBox->setFrame(false);
        eBox->setCursorPosition(0);
        backToLoginPageButton = new QPushButton(frame_3);
        backToLoginPageButton->setObjectName(QString::fromUtf8("backToLoginPageButton"));
        backToLoginPageButton->setGeometry(QRect(380, 570, 200, 40));
        backToLoginPageButton->setFont(font3);
        backToLoginPageButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel = new QLabel(frame_3);
        regLabel->setObjectName(QString::fromUtf8("regLabel"));
        regLabel->setGeometry(QRect(360, 120, 800, 40));
        regLabel->setFont(font2);
        regLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        rpLabel = new QLabel(frame_3);
        rpLabel->setObjectName(QString::fromUtf8("rpLabel"));
        rpLabel->setGeometry(QRect(850, 230, 128, 128));
        rpLabel->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/image/user.png);"));
        uploadButton = new QPushButton(frame_3);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(820, 430, 200, 40));
        uploadButton->setFont(font3);
        uploadButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        WindowStack->addWidget(RegisterPage);
        MainPage = new QWidget();
        MainPage->setObjectName(QString::fromUtf8("MainPage"));
        frame_4 = new QFrame(MainPage);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 1440, 810));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        loggedUserHeader = new QLabel(frame_4);
        loggedUserHeader->setObjectName(QString::fromUtf8("loggedUserHeader"));
        loggedUserHeader->setGeometry(QRect(540, 30, 245, 41));
        loggedUserHeader->setFont(font);
        loggedUserHeader->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        logoutButton = new QPushButton(frame_4);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(1150, 100, 200, 40));
        logoutButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 290, 100, 40));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(8, 8, 8);\n"
"font-weight: bold;"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 370, 200, 40));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(8, 8, 8);\n"
"font-weight: bold;"));
        nameLabel = new QLabel(frame_4);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(220, 290, 300, 40));
        nameLabel->setFont(font4);
        nameLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(8, 8, 8);\n"
"font-weight: bold;"));
        rankLabel = new QLabel(frame_4);
        rankLabel->setObjectName(QString::fromUtf8("rankLabel"));
        rankLabel->setGeometry(QRect(320, 370, 260, 40));
        rankLabel->setFont(font4);
        rankLabel->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(8, 8, 8);\n"
"font-weight: bold;"));
        editButton = new QPushButton(frame_4);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(1150, 150, 200, 40));
        editButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        Game1v1Button = new QCommandLinkButton(frame_4);
        Game1v1Button->setObjectName(QString::fromUtf8("Game1v1Button"));
        Game1v1Button->setGeometry(QRect(90, 600, 201, 71));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
        font5.setPointSize(20);
        Game1v1Button->setFont(font5);
        Game1v1Button->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        Game1v1Button->setIcon(icon1);
        Game1v1Button->setIconSize(QSize(50, 50));
        Game9Button = new QCommandLinkButton(frame_4);
        Game9Button->setObjectName(QString::fromUtf8("Game9Button"));
        Game9Button->setGeometry(QRect(350, 500, 201, 71));
        Game9Button->setFont(font5);
        Game9Button->setIcon(icon1);
        Game9Button->setIconSize(QSize(50, 50));
        GameSingleButton = new QCommandLinkButton(frame_4);
        GameSingleButton->setObjectName(QString::fromUtf8("GameSingleButton"));
        GameSingleButton->setGeometry(QRect(90, 500, 201, 71));
        GameSingleButton->setFont(font5);
        GameSingleButton->setIcon(icon1);
        GameSingleButton->setIconSize(QSize(50, 50));
        HelpButton = new QCommandLinkButton(frame_4);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setGeometry(QRect(350, 600, 201, 71));
        HelpButton->setFont(font5);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        HelpButton->setIcon(icon2);
        HelpButton->setIconSize(QSize(50, 50));
        loggedPic = new QLabel(frame_4);
        loggedPic->setObjectName(QString::fromUtf8("loggedPic"));
        loggedPic->setGeometry(QRect(240, 120, 128, 128));
        loggedPic->setStyleSheet(QString::fromUtf8("border-image: url(:/image/user.png);"));
        textEdit = new QPlainTextEdit(frame_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(610, 210, 741, 411));
        QFont font6;
        font6.setPointSize(15);
        textEdit->setFont(font6);
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255, 200);"));
        textEdit->setFrameShadow(QFrame::Sunken);
        textEdit->setUndoRedoEnabled(false);
        textEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        editMsg = new QLineEdit(frame_4);
        editMsg->setObjectName(QString::fromUtf8("editMsg"));
        editMsg->setGeometry(QRect(610, 632, 561, 41));
        editMsg->setFont(font6);
        editMsg->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgba(255, 255, 255, 200);"));
        sendButton = new QToolButton(frame_4);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(1192, 632, 161, 41));
        sendButton->setFont(font6);
        sendButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        WindowStack->addWidget(MainPage);
        EditPage = new QWidget();
        EditPage->setObjectName(QString::fromUtf8("EditPage"));
        frame_5 = new QFrame(EditPage);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 1440, 810));
        frame_5->setStyleSheet(QString::fromUtf8(""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(540, 40, 273, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName(QString::fromUtf8("uBox_2"));
        uBox_2->setGeometry(QRect(340, 210, 400, 80));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush20(QColor(190, 190, 190, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush20);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush21(QColor(190, 190, 190, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush21);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush22(QColor(190, 190, 190, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush22);
#endif
        uBox_2->setPalette(palette6);
        uBox_2->setFont(font1);
        uBox_2->setLayoutDirection(Qt::LeftToRight);
        uBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        uBox_2->setFrame(false);
        uBox_2->setCursorPosition(0);
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName(QString::fromUtf8("pBox_2"));
        pBox_2->setGeometry(QRect(340, 310, 400, 80));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush23(QColor(190, 190, 190, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush23);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush24(QColor(190, 190, 190, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush24);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush25(QColor(190, 190, 190, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush25);
#endif
        pBox_2->setPalette(palette7);
        pBox_2->setFont(font1);
        pBox_2->setLayoutDirection(Qt::LeftToRight);
        pBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        pBox_2->setInputMethodHints(Qt::ImhNone);
        pBox_2->setFrame(false);
        pBox_2->setCursorPosition(0);
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName(QString::fromUtf8("editedButton"));
        editedButton->setGeometry(QRect(730, 570, 200, 40));
        editedButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName(QString::fromUtf8("eBox_2"));
        eBox_2->setGeometry(QRect(340, 410, 400, 80));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush26(QColor(190, 190, 190, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush26);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush27(QColor(190, 190, 190, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush27);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QBrush brush28(QColor(190, 190, 190, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush28);
#endif
        eBox_2->setPalette(palette8);
        eBox_2->setFont(font1);
        eBox_2->setLayoutDirection(Qt::LeftToRight);
        eBox_2->setStyleSheet(QString::fromUtf8("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: rgb(190, 190, 190);"));
        eBox_2->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        eBox_2->setInputMethodHints(Qt::ImhNone);
        eBox_2->setFrame(false);
        eBox_2->setCursorPosition(0);
        backToMainPageButton = new QPushButton(frame_5);
        backToMainPageButton->setObjectName(QString::fromUtf8("backToMainPageButton"));
        backToMainPageButton->setGeometry(QRect(380, 570, 200, 40));
        backToMainPageButton->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_2 = new QLabel(frame_5);
        regLabel_2->setObjectName(QString::fromUtf8("regLabel_2"));
        regLabel_2->setGeometry(QRect(360, 120, 800, 40));
        regLabel_2->setFont(font2);
        regLabel_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        uploadButton_2 = new QPushButton(frame_5);
        uploadButton_2->setObjectName(QString::fromUtf8("uploadButton_2"));
        uploadButton_2->setGeometry(QRect(820, 430, 200, 40));
        uploadButton_2->setStyleSheet(QString::fromUtf8("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        rpLabel_2 = new QLabel(frame_5);
        rpLabel_2->setObjectName(QString::fromUtf8("rpLabel_2"));
        rpLabel_2->setGeometry(QRect(850, 230, 128, 128));
        rpLabel_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/user.png);"));
        label_5->raise();
        uBox_2->raise();
        pBox_2->raise();
        eBox_2->raise();
        backToMainPageButton->raise();
        regLabel_2->raise();
        editedButton->raise();
        uploadButton_2->raise();
        rpLabel_2->raise();
        WindowStack->addWidget(EditPage);
        FloatWindow = new QLabel(frame);
        FloatWindow->setObjectName(QString::fromUtf8("FloatWindow"));
        FloatWindow->setGeometry(QRect(0, 0, 1440, 810));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FloatWindow->sizePolicy().hasHeightForWidth());
        FloatWindow->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font7.setPointSize(72);
        FloatWindow->setFont(font7);
        FloatWindow->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:rgba(0, 0, 0, 128);\n"
"	color:white;\n"
"}"));
        FloatWindow->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        mainwindow->setCentralWidget(centralWidget);

        retranslateUi(mainwindow);

        WindowStack->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", nullptr));
        label->setText(QApplication::translate("mainwindow", "\347\231\273\345\275\225", nullptr));
        usernameBox->setText(QString());
        usernameBox->setPlaceholderText(QApplication::translate("mainwindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordBox->setInputMask(QString());
        passwordBox->setText(QString());
        passwordBox->setPlaceholderText(QApplication::translate("mainwindow", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QApplication::translate("mainwindow", "\347\231\273\345\275\225", nullptr));
        registerButton->setText(QApplication::translate("mainwindow", "\346\263\250\345\206\214", nullptr));
        loginLabel->setText(QString());
        label_2->setText(QApplication::translate("mainwindow", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        uBox->setText(QString());
        uBox->setPlaceholderText(QApplication::translate("mainwindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pBox->setInputMask(QString());
        pBox->setText(QString());
        pBox->setPlaceholderText(QApplication::translate("mainwindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        completeRegisterButton->setText(QApplication::translate("mainwindow", "\346\263\250\345\206\214", nullptr));
        eBox->setInputMask(QString());
        eBox->setText(QString());
        eBox->setPlaceholderText(QApplication::translate("mainwindow", "\346\230\265\347\247\260\357\274\232", nullptr));
        backToLoginPageButton->setText(QApplication::translate("mainwindow", "\350\277\224\345\233\236", nullptr));
        regLabel->setText(QApplication::translate("mainwindow", "\350\257\267\345\241\253\345\206\231\344\270\213\345\210\227\344\277\241\346\201\257\345\256\214\346\210\220\346\263\250\345\206\214", nullptr));
        rpLabel->setText(QString());
        uploadButton->setText(QApplication::translate("mainwindow", "\344\270\212\344\274\240\345\244\264\345\203\217", nullptr));
        loggedUserHeader->setText(QApplication::translate("mainwindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        logoutButton->setText(QApplication::translate("mainwindow", "\347\231\273\345\207\272\350\264\246\345\217\267", nullptr));
        label_3->setText(QApplication::translate("mainwindow", "Name:", nullptr));
        label_4->setText(QApplication::translate("mainwindow", "Rankpoints:", nullptr));
        nameLabel->setText(QString());
        rankLabel->setText(QString());
        editButton->setText(QApplication::translate("mainwindow", "\346\233\264\346\224\271\344\277\241\346\201\257", nullptr));
        Game1v1Button->setText(QApplication::translate("mainwindow", "1v1\345\257\271\346\210\230", nullptr));
        Game9Button->setText(QApplication::translate("mainwindow", "9\344\272\272\344\271\261\346\226\227", nullptr));
        GameSingleButton->setText(QApplication::translate("mainwindow", "\345\215\225\344\272\272\346\250\241\345\274\217", nullptr));
        HelpButton->setText(QApplication::translate("mainwindow", "\346\270\270\346\210\217\345\270\256\345\212\251", nullptr));
        loggedPic->setText(QString());
        sendButton->setText(QApplication::translate("mainwindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        label_5->setText(QApplication::translate("mainwindow", "\344\277\256\346\224\271\347\225\214\351\235\242", nullptr));
        uBox_2->setText(QString());
        uBox_2->setPlaceholderText(QApplication::translate("mainwindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        pBox_2->setInputMask(QString());
        pBox_2->setText(QString());
        pBox_2->setPlaceholderText(QApplication::translate("mainwindow", "\345\257\206\347\240\201", nullptr));
        editedButton->setText(QApplication::translate("mainwindow", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        eBox_2->setInputMask(QString());
        eBox_2->setText(QString());
        eBox_2->setPlaceholderText(QApplication::translate("mainwindow", "\346\230\265\347\247\260", nullptr));
        backToMainPageButton->setText(QApplication::translate("mainwindow", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        regLabel_2->setText(QApplication::translate("mainwindow", "\350\257\267\345\241\253\345\206\231\344\270\213\345\210\227\344\277\256\346\224\271\344\270\213\345\210\227\344\277\241\346\201\257", nullptr));
        uploadButton_2->setText(QApplication::translate("mainwindow", "\344\270\212\344\274\240\345\244\264\345\203\217", nullptr));
        rpLabel_2->setText(QString());
        FloatWindow->setText(QApplication::translate("mainwindow", "\346\255\243\345\234\250\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
