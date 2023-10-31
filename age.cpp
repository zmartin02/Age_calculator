#include <QApplication>
#include <QDate>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
 
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
 
    QWidget window;
    QVBoxLayout layout(&window);
 
    QLabel label("Enter your birthday: (yyyy-mm-dd)(include dashes(-))");
    QLineEdit edit;
 
    QPushButton button("Calculate Age");
 
    QLabel resultLabel;
 
    layout.addWidget(&label);
    layout.addWidget(&edit);
    layout.addWidget(&button);
    layout.addWidget(&resultLabel);
 
    QObject::connect(&button, &QPushButton::clicked, [&]() {
        QDate today = QDate::currentDate();
        QDate birthday = QDate::fromString(edit.text(), "yyyy-MM-dd");
        int age = today.year() - birthday.year();
        if (today < QDate(today.year(), birthday.month(), birthday.day())) {
            age--;
        }
 
        resultLabel.setText(QString("You are %1 years old.").arg(age));
    });
 
    window.show();
    return app.exec();
}
