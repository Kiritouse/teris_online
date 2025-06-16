/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QLabel *label;

    void setupUi(QWidget *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->resize(668, 540);
        label = new QLabel(HelpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 90, 501, 361));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(HelpWindow);

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QWidget *HelpWindow)
    {
        HelpWindow->setWindowTitle(QApplication::translate("HelpWindow", "\346\270\270\346\210\217\345\270\256\345\212\251", nullptr));
        label->setText(QApplication::translate("HelpWindow", "<html><head/><body><p>\346\214\211\342\206\220 \342\206\222\346\210\226\350\200\205J L\344\275\277\346\226\271\345\235\227\345\267\246\345\217\263\347\247\273\345\212\250</p><p>\346\214\211\342\206\221\346\210\226D\351\241\272\346\227\266\351\222\210\351\224\256\346\227\213\350\275\254\346\226\271\345\235\227</p<p>\346\214\211A\351\200\206\346\227\266\351\222\210\346\227\213\350\275\254\346\226\271\345\235\227</p><p>\346\214\211\342\206\223\346\210\226\350\200\205K\344\275\277\346\226\271\345\235\227\345\212\240\351\200\237\345\220\221\344\270\213\347\247\273\345\212\250</p>\346\214\211\347\251\272\346\240\274\351\224\256\344\275\277\346\226\271\345\235\227\347\233\264\346\216\245\347\247\273\345\212\250\345\210\260\345\272\225\347\253\257</p><p>\346\214\211S\345\260\206\346\233\277\346\215\242\345\275\223\345\211\215\346\226\271\345\235\227\345\222\214HOLD\346\247\275\346\226\271\345\235\227\344\272\244\346\215\242</p>\n"
"<p>\344\270\200\346\254\241\346\200\247\346\266\210\351\231\244\344\270\200\350\241\214"
                        "\351\200\240\346\210\220\344\270\200\347\202\271\344\274\244\345\256\263</p>\n"
"<p>2\350\241\2143\347\202\271\357\274\2143\350\241\2145\347\202\271\357\274\2144\350\241\2147\347\202\271</p>\n"
"</body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
