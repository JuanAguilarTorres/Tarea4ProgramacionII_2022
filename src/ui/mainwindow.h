#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void actualizarLista();

    void on_btnImportar_clicked();

    void on_btnAgregar_clicked();

    void on_btnEditar_clicked();

    void on_btnEliminar_clicked();

    void on_lineNombre_editingFinished();

    void on_lineDirWeb_editingFinished();

    void on_lineDirFisica_editingFinished();

    void on_lineTelefono_editingFinished();

    void on_btnGuardar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
