#ifndef BIRTHDAYAGECALCULATOR_H
#define BIRTHDAYAGECALCULATOR_H

#include <QApplication>
#include <QDate>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class BirthdayAgeCalculator : public QWidget {
public:
    BirthdayAgeCalculator(QWidget* parent = nullptr);

private:
    QLabel label;
    QLineEdit edit;
    QPushButton button;
    QLabel resultLabel;
};

#endif
