#ifndef PRODUITW_H
#define PRODUITW_H

#include <QDialog>

#include "produit.h"
#include "promotion.h"
#include <QSound>
#include <QtWidgets/QApplication>
#include"exportexcel.h"
#include <QtCharts>
#include <QLineSeries>
#include <QChartView>
#include "smtp.h"
#include "dumessengerconnectiondialog.h"
#include "ui_dumessengerconnectiondialog.h"
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QMenu>
#include "arduino.h"
#include "incendie.h"
#include "panier.h"
namespace Ui {
class produitw;
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class  QMenu;
class QAction;
class QVBoxLayout;
}

class produitw : public QDialog
{
    Q_OBJECT

public:
    explicit produitw(QWidget *parent = nullptr);
    ~produitw();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_chercher_clicked();

    void on_pb_modifier_clicked();

    void on_tri_croissant_clicked();

    void on_tri_decroissant_clicked();

    void on_cherche_aff_clicked();

    void on_tri_ref_clicked();

    void on_tri_quantite_clicked();

    void on_tri_libelle_clicked();

    void on_stat_clicked();

    void on_reset_ajouter_clicked();

    void on_export_but_clicked();

    void on_pb_ajouterp_clicked();

    void on_pb_supprimerp_clicked();

    void on_pb_chercher_p_clicked();

    void on_pb_modifiepr_clicked();

    void sendMail();
    void mailSent(QString);


    void myfunction();


    void on_envoyer_clicked();

    void on_connecter_clicked();


    void on_reset_ajouter_p_clicked();

    void on_cherche_affp_clicked();

    void on_tri_idc_clicked();

    void on_tri_dated_clicked();

    void on_tri_datef_clicked();

    void on_tri_croissant_pour_clicked();

    void on_tri_decroissant_pour_clicked();

    void on_stat_pour_clicked();

    void on_export_but_pour_clicked();

    void on_upload_clicked();


    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino



    void on_stop_clicked();

    void on_pb_ajouter_achat_clicked();

    void on_cherche_aff_achat_clicked();

    void on_pb_supprimer_achat_clicked();

    void on_pb_chercher_2_clicked();

    void on_pb_modifier_achat_clicked();

    void on_return_2_clicked();

private:
    Ui::produitw *ui;
    Produit P;
    Promotion P1;
    Panier P2;
    QTimer *timer;
    QSound *son;
    QSound *son1;
    QSound *son2;
    QSound *son3;
    QSound *son4;
    QSound *son5;

    QTcpSocket *mSocket;

    QCamera *mCamera;
           QCameraViewfinder *mCameraViewfinder;
           QCameraImageCapture *mCameraImageCapture;
           QVBoxLayout *mLayout;
           QMenu *mOptionMenu;
           QAction *mTurnOnAction;
           QAction *mTurnOffAction;
           QAction *mCaptureAction;


           QByteArray data; // variable contenant les données reçues
           Arduino A; // objet temporaire
};


#endif // PRODUITW_H
