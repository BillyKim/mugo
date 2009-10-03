#ifndef PRINTOPTIONDIALOG_H
#define PRINTOPTIONDIALOG_H

#include <QtGui/QDialog>

namespace Ui {
    class PrintOptionDialog;
}

class PrintOptionDialog : public QDialog {
    Q_OBJECT
public:
    PrintOptionDialog(QWidget *parent = 0);
    ~PrintOptionDialog();

    int printOption() const{ return printOption_; }
    int movesPerPage() const{ return movesPerPage_; }

protected:
    void changeEvent(QEvent *e);

public slots:
    virtual void accept();

private:
    Ui::PrintOptionDialog *m_ui;
    int printOption_;
    int movesPerPage_;
};

#endif // PRINTOPTIONDIALOG_H
