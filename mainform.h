//
// Created by ChengKeKe on 2023/3/1.
//

#ifndef RECORDER_MAINFORM_H
#define RECORDER_MAINFORM_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class MainForm; }
QT_END_NAMESPACE

class MainForm : public QDialog {
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = nullptr);

    ~MainForm() override;

private:
    Ui::MainForm *ui;
};


#endif //RECORDER_MAINFORM_H
