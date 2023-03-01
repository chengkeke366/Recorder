//
// Created by ChengKeKe on 2023/3/1.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainForm.h" resolved

#include "mainform.h"
#include "ui_MainForm.h"


MainForm::MainForm(QWidget *parent) :
        QDialog(parent), ui(new Ui::MainForm) {
    ui->setupUi(this);
}

MainForm::~MainForm() {
    delete ui;
}

