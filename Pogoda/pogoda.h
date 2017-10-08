#ifndef POGODA_H
//#define POGODA_H

#include <QtWidgets/QMainWindow>
#include "ui_pogoda.h"



class Pogoda : public QMainWindow
{
	Q_OBJECT

private slots:
	//buttnony------------------------------------
	void on_pushButton_dzien_clicked();
	void on_pushButton_noc_clicked();
	void on_pushButton_podglad_clicked();
	void on_pushButton_save_clicked();
	//---------------------------------------------

	//comboboxy------------------------------------
	void on_comboBox_bialystok_activated(int index);
	void on_comboBox_bydgoszcz_activated(int index);
	void on_comboBox_gdansk_activated(int index);
	void on_comboBox_gorzow_activated(int index);
	void on_comboBox_katowice_activated(int index);
	void on_comboBox_krakow_activated(int index);
	void on_comboBox_lodz_activated(int index);
	void on_comboBox_lublin_activated(int index);
	void on_comboBox_olsztyn_activated(int index);
	void on_comboBox_poznan_activated(int index);
	void on_comboBox_rzeszow_activated(int index);
	void on_comboBox_suwalki_activated(int index);
	void on_comboBox_szczecin_activated(int index);
	void on_comboBox_warszawa_activated(int index);
	void on_comboBox_wroclaw_activated(int index);
	void on_comboBox_zielona_activated(int index);
	//---------------------------------------------

	//panel adv------------------------------------
	void on_checkBox_adv_clicked();
	void on_radioButton_pogoda_clicked();
	void on_radioButton_temperatura_clicked();
	void on_comboBox_adva_activated(int index);
	void on_pushButton_itemUp_clicked();
	void on_pushButton_itemDown_clicked();
	void on_pushButton_itemLeft_clicked();
	void on_pushButton_itemRight_clicked();
	void on_pushButton_savepos_clicked();
	void wczytaj_pozycje();
	//---------------------------------------------

	//rysowanie_mapki------------------------------
	void mapka();
	//---------------------------------------------

public:
	Pogoda(QWidget *parent = 0);

	QImage img;
    QString ikonki[9];
	QString ikonki_50[9];
	bool day_flag;
	int adv_x;
	int adv_y;


	~Pogoda();

private:
	Ui::PogodaClass ui;
};

#endif // POGODA_H
