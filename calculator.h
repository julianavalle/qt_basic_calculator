//
// Created by ju on 07/07/22.
//

#ifndef QT_BASIC_CALCULATOR_CALCULATOR_H
#define QT_BASIC_CALCULATOR_CALCULATOR_H
namespace Ui {
    class Calc;
}

class Calc : public QMainWindow
{
    Q_OBJECT

public:
        explicit Calc(QWidget *parent = 0);
    ~Calc();

private:
    Ui::Calc *ui;

private slots :
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();

};
#endif //QT_BASIC_CALCULATOR_CALCULATOR_H
