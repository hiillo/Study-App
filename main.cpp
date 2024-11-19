#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font("Courier");  //built in fonts
    QIcon icon(":res/affine/bg1.jpg"); // little emoji to the button
    // QIcon Qicon::fromTheme ( const QString &name, const QIcon &fallback = QIcon());
    // button.setIcon(QIcon::fromTheme("face-smile"));

    MainWindow w;
    w.show();

    QPushButton button("test Qbutton"); // button that shows up on a new window
    // Attributes
    button.setText("renamed test Qbutton");
    button.setToolTip("Tool tip"); // hover shown text
    button.setFont(font);
    button.setIcon(icon);

    button.show();



    return a.exec();
}
