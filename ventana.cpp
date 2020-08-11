#include "ventana.h"
#include "ui_ventana.h"

Ventana::Ventana(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);
    connect(ui->btnSaludar, SIGNAL(clicked(bool)),
            this, SLOT(saludar()));
    connect(ui->txtNombre, SIGNAL(returnPressed()),
            this, SLOT(saludar()));
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::saludar()
{
    QString texto = ui->txtNombre->text();
    ui->lblSaludo->setText("Bienvenida/o " + texto);
}
