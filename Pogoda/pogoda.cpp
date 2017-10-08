#include "pogoda.h"
#include <QFileDialog>
#include <QPainter>
#include <QFont>
#include <QFile>
#include <QTextStream>


Pogoda::Pogoda(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setFixedWidth(980);
	day_flag = true;

	ikonki[0] = "images/ikonki/slonce.png";
	ikonki[1] = "images/ikonki/slonce_chmury.png";
	ikonki[2] = "images/ikonki/slonce_deszcz.png";
	ikonki[3] = "images/ikonki/deszcz.png";
	ikonki[4] = "images/ikonki/burza2.png";
	ikonki[5] = "images/ikonki/snieg.png";
	ikonki[6] = "images/ikonki/ksiezyc.png";
	ikonki[7] = "images/ikonki/ksiezyc_chmury.png";
	ikonki[8] = "images/ikonki/pusta.png";

	ikonki_50[0] = "images/ikonki/slonce_50.png";
	ikonki_50[1] = "images/ikonki/slonce_chmury_50.png";
	ikonki_50[2] = "images/ikonki/slonce_deszcz_50.png";
	ikonki_50[3] = "images/ikonki/deszcz_50.png";
	ikonki_50[4] = "images/ikonki/burza2_50.png";
	ikonki_50[5] = "images/ikonki/snieg_50.png";
	ikonki_50[6] = "images/ikonki/ksiezyc_50.png";
	ikonki_50[7] = "images/ikonki/ksiezyc_chmury_50.png";
	ikonki_50[8] = "images/ikonki/pusta.png";

	QFile filepos("positions.txt");
	if(filepos.exists())
		wczytaj_pozycje();
}


void Pogoda::on_pushButton_dzien_clicked()
{
	ui.label_mapka_tlo->setPixmap(QPixmap("images/dzien_50.png"));
	day_flag = true;

}
void Pogoda::on_pushButton_noc_clicked()
{
	ui.label_mapka_tlo->setPixmap(QPixmap("images/noc_50.png"));
	day_flag = false;
}
void Pogoda::on_pushButton_podglad_clicked()
{
	mapka();
	QWidget *pgl = new QWidget;
	QLabel *label_podglad = new QLabel(pgl);
	label_podglad->setFixedSize(960,540);
	label_podglad->setPixmap(QPixmap::fromImage(img));
	label_podglad->setScaledContents(true);
	pgl->show();
}
void Pogoda::on_pushButton_save_clicked()
{

	mapka();
	QString file;
	file = QFileDialog::getSaveFileName(this, "Zapisz");
	if(file!="")
	{
		if(file.rightRef(4) != ".jpg")
			file = file  + ".jpg";

		img.save(file);
	}
}

void Pogoda::on_comboBox_wroclaw_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_wroclaw->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_wroclaw->setPixmap(QPixmap( ));
		break;
	}

}
void Pogoda::on_comboBox_bialystok_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_bialystok->setPixmap(QPixmap(ikonki_50[index]));
		break;
	}

}
void Pogoda::on_comboBox_bydgoszcz_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_bydgoszcz->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_gdansk_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_gdansk->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_gorzow_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_gorzow->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_katowice_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_katowice->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_katowice->setPixmap(QPixmap( ikonki_50[index]));
		break;
	}

}
void Pogoda::on_comboBox_krakow_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_krakow->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_lodz_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_lodz->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_lublin_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_lublin->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_olsztyn_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_olsztyn->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_poznan_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_poznan->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_rzeszow_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_rzeszow->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_suwalki_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_suwalki->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_szczecin_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_szczecin->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_warszawa_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_warszawa->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}
void Pogoda::on_comboBox_zielona_activated(int index)
{
	switch(index)
	{
	case 0:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 1:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 2:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 3:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 4:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 5:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 6:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 7:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index]));
		break;
	case 8:
		ui.label_ico_zielona->setPixmap(QPixmap(ikonki_50[index] ));
		break;
	}

}


void Pogoda::on_checkBox_adv_clicked()
{
	if(ui.checkBox_adv->isChecked())
		this->setFixedWidth(1110);
	else
		this->setFixedWidth(980);

}

void Pogoda::on_radioButton_pogoda_clicked()
{

}
void Pogoda::on_radioButton_temperatura_clicked()
{

}
void Pogoda::on_comboBox_adva_activated(int index)
{
}

void Pogoda::on_pushButton_itemUp_clicked()
{
	int index = ui.comboBox_adv->currentIndex();
	if(ui.radioButton_pogoda->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.label_ico_bialystok->pos().x();
			adv_y = ui.label_ico_bialystok->pos().y();
			ui.label_ico_bialystok->move(adv_x,adv_y - 5);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.label_ico_bydgoszcz->pos().x();
			adv_y = ui.label_ico_bydgoszcz->pos().y();
			ui.label_ico_bydgoszcz->move(adv_x,adv_y - 5);
			break;
		case 2:			//gdansk
			adv_x = ui.label_ico_gdansk->pos().x();
			adv_y = ui.label_ico_gdansk->pos().y();
			ui.label_ico_gdansk->move(adv_x,adv_y - 5);
			break;
		case 3:			//gorzow
			adv_x = ui.label_ico_gorzow->pos().x();
			adv_y = ui.label_ico_gorzow->pos().y();
			ui.label_ico_gorzow->move(adv_x,adv_y - 5);
			break;
		case 4:			//katowice
			adv_x = ui.label_ico_katowice->pos().x();
			adv_y = ui.label_ico_katowice->pos().y();
			ui.label_ico_katowice->move(adv_x,adv_y - 5);

			break;
		case 5:			//krakow
			adv_x = ui.label_ico_krakow->pos().x();
			adv_y = ui.label_ico_krakow->pos().y();
			ui.label_ico_krakow->move(adv_x,adv_y - 5);
			break;
		case 6:			//lodz
			adv_x = ui.label_ico_lodz->pos().x();
			adv_y = ui.label_ico_lodz->pos().y();
			ui.label_ico_lodz->move(adv_x,adv_y - 5);
			break;
		case 7:			//lublin
			adv_x = ui.label_ico_lublin->pos().x();
			adv_y = ui.label_ico_lublin->pos().y();
			ui.label_ico_lublin->move(adv_x,adv_y - 5);
			break;
		case 8:			//olsztyn
			adv_x = ui.label_ico_olsztyn->pos().x();
			adv_y = ui.label_ico_olsztyn->pos().y();
			ui.label_ico_olsztyn->move(adv_x,adv_y - 5);
			break;
		case 9:			//poznan
			adv_x = ui.label_ico_poznan->pos().x();
			adv_y = ui.label_ico_poznan->pos().y();
			ui.label_ico_poznan->move(adv_x,adv_y - 5);
			break;
		case 10:		//rzeszow
			adv_x = ui.label_ico_rzeszow->pos().x();
			adv_y = ui.label_ico_rzeszow->pos().y();
			ui.label_ico_rzeszow->move(adv_x,adv_y - 5);
			break;
		case 11:		//suwalki
			adv_x = ui.label_ico_suwalki->pos().x();
			adv_y = ui.label_ico_suwalki->pos().y();
			ui.label_ico_suwalki->move(adv_x,adv_y - 5);
			break;
		case 12:		//szczecin
			adv_x = ui.label_ico_szczecin->pos().x();
			adv_y = ui.label_ico_szczecin->pos().y();
			ui.label_ico_szczecin->move(adv_x,adv_y - 5);
			break;
		case 13:		//warszawa
			adv_x = ui.label_ico_warszawa->pos().x();
			adv_y = ui.label_ico_warszawa->pos().y();
			ui.label_ico_warszawa->move(adv_x,adv_y - 5);
			break;
		case 14:		//wroclaw
			adv_x = ui.label_ico_wroclaw->pos().x();
			adv_y = ui.label_ico_wroclaw->pos().y();
			ui.label_ico_wroclaw->move(adv_x,adv_y - 5);
			break;
		case 15:		//zielona
			adv_x = ui.label_ico_zielona->pos().x();
			adv_y = ui.label_ico_zielona->pos().y();
			ui.label_ico_zielona->move(adv_x,adv_y - 5);
			break;
		}
	}
	if(ui.radioButton_temperatura->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.lineEdit_bialystok->pos().x();
			adv_y = ui.lineEdit_bialystok->pos().y();
			ui.lineEdit_bialystok->move(adv_x,adv_y - 5);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.lineEdit_bydgoszcz->pos().x();
			adv_y = ui.lineEdit_bydgoszcz->pos().y();
			ui.lineEdit_bydgoszcz->move(adv_x,adv_y - 5);
			break;
		case 2:			//gdansk
			adv_x = ui.lineEdit_gdansk->pos().x();
			adv_y = ui.lineEdit_gdansk->pos().y();
			ui.lineEdit_gdansk->move(adv_x,adv_y - 5);
			break;
		case 3:			//gorzow
			adv_x = ui.lineEdit_gorzow->pos().x();
			adv_y = ui.lineEdit_gorzow->pos().y();
			ui.lineEdit_gorzow->move(adv_x,adv_y - 5);
			break;
		case 4:			//katowice
			adv_x = ui.lineEdit_katowice->pos().x();
			adv_y = ui.lineEdit_katowice->pos().y();
			ui.lineEdit_katowice->move(adv_x,adv_y - 5);

			break;
		case 5:			//krakow
			adv_x = ui.lineEdit_krakow->pos().x();
			adv_y = ui.lineEdit_krakow->pos().y();
			ui.lineEdit_krakow->move(adv_x,adv_y - 5);
			break;
		case 6:			//lodz
			adv_x = ui.lineEdit_lodz->pos().x();
			adv_y = ui.lineEdit_lodz->pos().y();
			ui.lineEdit_lodz->move(adv_x,adv_y - 5);
			break;
		case 7:			//lublin
			adv_x = ui.lineEdit_lublin->pos().x();
			adv_y = ui.lineEdit_lublin->pos().y();
			ui.lineEdit_lublin->move(adv_x,adv_y - 5);
			break;
		case 8:			//olsztyn
			adv_x = ui.lineEdit_olsztyn->pos().x();
			adv_y = ui.lineEdit_olsztyn->pos().y();
			ui.lineEdit_olsztyn->move(adv_x,adv_y - 5);
			break;
		case 9:			//poznan
			adv_x = ui.lineEdit_poznan->pos().x();
			adv_y = ui.lineEdit_poznan->pos().y();
			ui.lineEdit_poznan->move(adv_x,adv_y - 5);
			break;
		case 10:		//rzeszow
			adv_x = ui.lineEdit_rzeszow->pos().x();
			adv_y = ui.lineEdit_rzeszow->pos().y();
			ui.lineEdit_rzeszow->move(adv_x,adv_y - 5);
			break;
		case 11:		//suwalki
			adv_x = ui.lineEdit_suwalki->pos().x();
			adv_y = ui.lineEdit_suwalki->pos().y();
			ui.lineEdit_suwalki->move(adv_x,adv_y - 5);
			break;
		case 12:		//szczecin
			adv_x = ui.lineEdit_szczecin->pos().x();
			adv_y = ui.lineEdit_szczecin->pos().y();
			ui.lineEdit_szczecin->move(adv_x,adv_y - 5);
			break;
		case 13:		//warszawa
			adv_x = ui.lineEdit_warszawa->pos().x();
			adv_y = ui.lineEdit_warszawa->pos().y();
			ui.lineEdit_warszawa->move(adv_x,adv_y - 5);
			break;
		case 14:		//wroclaw
			adv_x = ui.lineEdit_wroclaw->pos().x();
			adv_y = ui.lineEdit_wroclaw->pos().y();
			ui.lineEdit_wroclaw->move(adv_x,adv_y - 5);
			break;
		case 15:		//zielona
			adv_x = ui.lineEdit_zielona->pos().x();
			adv_y = ui.lineEdit_zielona->pos().y();
			ui.lineEdit_zielona->move(adv_x,adv_y - 5);
			break;
		}

	}




}
void Pogoda::on_pushButton_itemDown_clicked()
{
	int index = ui.comboBox_adv->currentIndex();
	if(ui.radioButton_pogoda->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.label_ico_bialystok->pos().x();
			adv_y = ui.label_ico_bialystok->pos().y();
			ui.label_ico_bialystok->move(adv_x,adv_y + 5);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.label_ico_bydgoszcz->pos().x();
			adv_y = ui.label_ico_bydgoszcz->pos().y();
			ui.label_ico_bydgoszcz->move(adv_x,adv_y + 5);
			break;
		case 2:			//gdansk
			adv_x = ui.label_ico_gdansk->pos().x();
			adv_y = ui.label_ico_gdansk->pos().y();
			ui.label_ico_gdansk->move(adv_x,adv_y + 5);
			break;
		case 3:			//gorzow
			adv_x = ui.label_ico_gorzow->pos().x();
			adv_y = ui.label_ico_gorzow->pos().y();
			ui.label_ico_gorzow->move(adv_x,adv_y + 5);
			break;
		case 4:			//katowice
			adv_x = ui.label_ico_katowice->pos().x();
			adv_y = ui.label_ico_katowice->pos().y();
			ui.label_ico_katowice->move(adv_x,adv_y + 5);

			break;
		case 5:			//krakow
			adv_x = ui.label_ico_krakow->pos().x();
			adv_y = ui.label_ico_krakow->pos().y();
			ui.label_ico_krakow->move(adv_x,adv_y + 5);
			break;
		case 6:			//lodz
			adv_x = ui.label_ico_lodz->pos().x();
			adv_y = ui.label_ico_lodz->pos().y();
			ui.label_ico_lodz->move(adv_x,adv_y + 5);
			break;
		case 7:			//lublin
			adv_x = ui.label_ico_lublin->pos().x();
			adv_y = ui.label_ico_lublin->pos().y();
			ui.label_ico_lublin->move(adv_x,adv_y + 5);
			break;
		case 8:			//olsztyn
			adv_x = ui.label_ico_olsztyn->pos().x();
			adv_y = ui.label_ico_olsztyn->pos().y();
			ui.label_ico_olsztyn->move(adv_x,adv_y + 5);
			break;
		case 9:			//poznan
			adv_x = ui.label_ico_poznan->pos().x();
			adv_y = ui.label_ico_poznan->pos().y();
			ui.label_ico_poznan->move(adv_x,adv_y + 5);
			break;
		case 10:		//rzeszow
			adv_x = ui.label_ico_rzeszow->pos().x();
			adv_y = ui.label_ico_rzeszow->pos().y();
			ui.label_ico_rzeszow->move(adv_x,adv_y + 5);
			break;
		case 11:		//suwalki
			adv_x = ui.label_ico_suwalki->pos().x();
			adv_y = ui.label_ico_suwalki->pos().y();
			ui.label_ico_suwalki->move(adv_x,adv_y + 5);
			break;
		case 12:		//szczecin
			adv_x = ui.label_ico_szczecin->pos().x();
			adv_y = ui.label_ico_szczecin->pos().y();
			ui.label_ico_szczecin->move(adv_x,adv_y + 5);
			break;
		case 13:		//warszawa
			adv_x = ui.label_ico_warszawa->pos().x();
			adv_y = ui.label_ico_warszawa->pos().y();
			ui.label_ico_warszawa->move(adv_x,adv_y + 5);
			break;
		case 14:		//wroclaw
			adv_x = ui.label_ico_wroclaw->pos().x();
			adv_y = ui.label_ico_wroclaw->pos().y();
			ui.label_ico_wroclaw->move(adv_x,adv_y + 5);
			break;
		case 15:		//zielona
			adv_x = ui.label_ico_zielona->pos().x();
			adv_y = ui.label_ico_zielona->pos().y();
			ui.label_ico_zielona->move(adv_x,adv_y + 5);
			break;
		}
	}
	if(ui.radioButton_temperatura->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.lineEdit_bialystok->pos().x();
			adv_y = ui.lineEdit_bialystok->pos().y();
			ui.lineEdit_bialystok->move(adv_x,adv_y + 5);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.lineEdit_bydgoszcz->pos().x();
			adv_y = ui.lineEdit_bydgoszcz->pos().y();
			ui.lineEdit_bydgoszcz->move(adv_x,adv_y + 5);
			break;
		case 2:			//gdansk
			adv_x = ui.lineEdit_gdansk->pos().x();
			adv_y = ui.lineEdit_gdansk->pos().y();
			ui.lineEdit_gdansk->move(adv_x,adv_y + 5);
			break;
		case 3:			//gorzow
			adv_x = ui.lineEdit_gorzow->pos().x();
			adv_y = ui.lineEdit_gorzow->pos().y();
			ui.lineEdit_gorzow->move(adv_x,adv_y + 5);
			break;
		case 4:			//katowice
			adv_x = ui.lineEdit_katowice->pos().x();
			adv_y = ui.lineEdit_katowice->pos().y();
			ui.lineEdit_katowice->move(adv_x,adv_y + 5);

			break;
		case 5:			//krakow
			adv_x = ui.lineEdit_krakow->pos().x();
			adv_y = ui.lineEdit_krakow->pos().y();
			ui.lineEdit_krakow->move(adv_x,adv_y + 5);
			break;
		case 6:			//lodz
			adv_x = ui.lineEdit_lodz->pos().x();
			adv_y = ui.lineEdit_lodz->pos().y();
			ui.lineEdit_lodz->move(adv_x,adv_y + 5);
			break;
		case 7:			//lublin
			adv_x = ui.lineEdit_lublin->pos().x();
			adv_y = ui.lineEdit_lublin->pos().y();
			ui.lineEdit_lublin->move(adv_x,adv_y + 5);
			break;
		case 8:			//olsztyn
			adv_x = ui.lineEdit_olsztyn->pos().x();
			adv_y = ui.lineEdit_olsztyn->pos().y();
			ui.lineEdit_olsztyn->move(adv_x,adv_y + 5);
			break;
		case 9:			//poznan
			adv_x = ui.lineEdit_poznan->pos().x();
			adv_y = ui.lineEdit_poznan->pos().y();
			ui.lineEdit_poznan->move(adv_x,adv_y + 5);
			break;
		case 10:		//rzeszow
			adv_x = ui.lineEdit_rzeszow->pos().x();
			adv_y = ui.lineEdit_rzeszow->pos().y();
			ui.lineEdit_rzeszow->move(adv_x,adv_y + 5);
			break;
		case 11:		//suwalki
			adv_x = ui.lineEdit_suwalki->pos().x();
			adv_y = ui.lineEdit_suwalki->pos().y();
			ui.lineEdit_suwalki->move(adv_x,adv_y + 5);
			break;
		case 12:		//szczecin
			adv_x = ui.lineEdit_szczecin->pos().x();
			adv_y = ui.lineEdit_szczecin->pos().y();
			ui.lineEdit_szczecin->move(adv_x,adv_y + 5);
			break;
		case 13:		//warszawa
			adv_x = ui.lineEdit_warszawa->pos().x();
			adv_y = ui.lineEdit_warszawa->pos().y();
			ui.lineEdit_warszawa->move(adv_x,adv_y + 5);
			break;
		case 14:		//wroclaw
			adv_x = ui.lineEdit_wroclaw->pos().x();
			adv_y = ui.lineEdit_wroclaw->pos().y();
			ui.lineEdit_wroclaw->move(adv_x,adv_y + 5);
			break;
		case 15:		//zielona
			adv_x = ui.lineEdit_zielona->pos().x();
			adv_y = ui.lineEdit_zielona->pos().y();
			ui.lineEdit_zielona->move(adv_x,adv_y + 5);
			break;
		}

	}
}
void Pogoda::on_pushButton_itemLeft_clicked()
{
	int index = ui.comboBox_adv->currentIndex();
	if(ui.radioButton_pogoda->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.label_ico_bialystok->pos().x();
			adv_y = ui.label_ico_bialystok->pos().y();
			ui.label_ico_bialystok->move(adv_x - 5,adv_y);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.label_ico_bydgoszcz->pos().x();
			adv_y = ui.label_ico_bydgoszcz->pos().y();
			ui.label_ico_bydgoszcz->move(adv_x - 5,adv_y);
			break;
		case 2:			//gdansk
			adv_x = ui.label_ico_gdansk->pos().x();
			adv_y = ui.label_ico_gdansk->pos().y();
			ui.label_ico_gdansk->move(adv_x - 5,adv_y);
			break;
		case 3:			//gorzow
			adv_x = ui.label_ico_gorzow->pos().x();
			adv_y = ui.label_ico_gorzow->pos().y();
			ui.label_ico_gorzow->move(adv_x - 5,adv_y);
			break;
		case 4:			//katowice
			adv_x = ui.label_ico_katowice->pos().x();
			adv_y = ui.label_ico_katowice->pos().y();
			ui.label_ico_katowice->move(adv_x - 5,adv_y);

			break;
		case 5:			//krakow
			adv_x = ui.label_ico_krakow->pos().x();
			adv_y = ui.label_ico_krakow->pos().y();
			ui.label_ico_krakow->move(adv_x - 5,adv_y);
			break;
		case 6:			//lodz
			adv_x = ui.label_ico_lodz->pos().x();
			adv_y = ui.label_ico_lodz->pos().y();
			ui.label_ico_lodz->move(adv_x - 5,adv_y);
			break;
		case 7:			//lublin
			adv_x = ui.label_ico_lublin->pos().x();
			adv_y = ui.label_ico_lublin->pos().y();
			ui.label_ico_lublin->move(adv_x - 5,adv_y);
			break;
		case 8:			//olsztyn
			adv_x = ui.label_ico_olsztyn->pos().x();
			adv_y = ui.label_ico_olsztyn->pos().y();
			ui.label_ico_olsztyn->move(adv_x - 5,adv_y);
			break;
		case 9:			//poznan
			adv_x = ui.label_ico_poznan->pos().x();
			adv_y = ui.label_ico_poznan->pos().y();
			ui.label_ico_poznan->move(adv_x - 5,adv_y);
			break;
		case 10:		//rzeszow
			adv_x = ui.label_ico_rzeszow->pos().x();
			adv_y = ui.label_ico_rzeszow->pos().y();
			ui.label_ico_rzeszow->move(adv_x - 5,adv_y);
			break;
		case 11:		//suwalki
			adv_x = ui.label_ico_suwalki->pos().x();
			adv_y = ui.label_ico_suwalki->pos().y();
			ui.label_ico_suwalki->move(adv_x - 5,adv_y);
			break;
		case 12:		//szczecin
			adv_x = ui.label_ico_szczecin->pos().x();
			adv_y = ui.label_ico_szczecin->pos().y();
			ui.label_ico_szczecin->move(adv_x - 5,adv_y);
			break;
		case 13:		//warszawa
			adv_x = ui.label_ico_warszawa->pos().x();
			adv_y = ui.label_ico_warszawa->pos().y();
			ui.label_ico_warszawa->move(adv_x - 5,adv_y);
			break;
		case 14:		//wroclaw
			adv_x = ui.label_ico_wroclaw->pos().x();
			adv_y = ui.label_ico_wroclaw->pos().y();
			ui.label_ico_wroclaw->move(adv_x - 5,adv_y);
			break;
		case 15:		//zielona
			adv_x = ui.label_ico_zielona->pos().x();
			adv_y = ui.label_ico_zielona->pos().y();
			ui.label_ico_zielona->move(adv_x - 5,adv_y);
			break;
		}
	}
	if(ui.radioButton_temperatura->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.lineEdit_bialystok->pos().x();
			adv_y = ui.lineEdit_bialystok->pos().y();
			ui.lineEdit_bialystok->move(adv_x - 5,adv_y);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.lineEdit_bydgoszcz->pos().x();
			adv_y = ui.lineEdit_bydgoszcz->pos().y();
			ui.lineEdit_bydgoszcz->move(adv_x - 5,adv_y);
			break;
		case 2:			//gdansk
			adv_x = ui.lineEdit_gdansk->pos().x();
			adv_y = ui.lineEdit_gdansk->pos().y();
			ui.lineEdit_gdansk->move(adv_x - 5,adv_y);
			break;
		case 3:			//gorzow
			adv_x = ui.lineEdit_gorzow->pos().x();
			adv_y = ui.lineEdit_gorzow->pos().y();
			ui.lineEdit_gorzow->move(adv_x - 5,adv_y);
			break;
		case 4:			//katowice
			adv_x = ui.lineEdit_katowice->pos().x();
			adv_y = ui.lineEdit_katowice->pos().y();
			ui.lineEdit_katowice->move(adv_x - 5,adv_y);

			break;
		case 5:			//krakow
			adv_x = ui.lineEdit_krakow->pos().x();
			adv_y = ui.lineEdit_krakow->pos().y();
			ui.lineEdit_krakow->move(adv_x - 5,adv_y);
			break;
		case 6:			//lodz
			adv_x = ui.lineEdit_lodz->pos().x();
			adv_y = ui.lineEdit_lodz->pos().y();
			ui.lineEdit_lodz->move(adv_x - 5,adv_y);
			break;
		case 7:			//lublin
			adv_x = ui.lineEdit_lublin->pos().x();
			adv_y = ui.lineEdit_lublin->pos().y();
			ui.lineEdit_lublin->move(adv_x - 5,adv_y);
			break;
		case 8:			//olsztyn
			adv_x = ui.lineEdit_olsztyn->pos().x();
			adv_y = ui.lineEdit_olsztyn->pos().y();
			ui.lineEdit_olsztyn->move(adv_x - 5,adv_y);
			break;
		case 9:			//poznan
			adv_x = ui.lineEdit_poznan->pos().x();
			adv_y = ui.lineEdit_poznan->pos().y();
			ui.lineEdit_poznan->move(adv_x - 5,adv_y);
			break;
		case 10:		//rzeszow
			adv_x = ui.lineEdit_rzeszow->pos().x();
			adv_y = ui.lineEdit_rzeszow->pos().y();
			ui.lineEdit_rzeszow->move(adv_x - 5,adv_y);
			break;
		case 11:		//suwalki
			adv_x = ui.lineEdit_suwalki->pos().x();
			adv_y = ui.lineEdit_suwalki->pos().y();
			ui.lineEdit_suwalki->move(adv_x - 5,adv_y);
			break;
		case 12:		//szczecin
			adv_x = ui.lineEdit_szczecin->pos().x();
			adv_y = ui.lineEdit_szczecin->pos().y();
			ui.lineEdit_szczecin->move(adv_x - 5,adv_y);
			break;
		case 13:		//warszawa
			adv_x = ui.lineEdit_warszawa->pos().x();
			adv_y = ui.lineEdit_warszawa->pos().y();
			ui.lineEdit_warszawa->move(adv_x - 5,adv_y);
			break;
		case 14:		//wroclaw
			adv_x = ui.lineEdit_wroclaw->pos().x();
			adv_y = ui.lineEdit_wroclaw->pos().y();
			ui.lineEdit_wroclaw->move(adv_x - 5,adv_y);
			break;
		case 15:		//zielona
			adv_x = ui.lineEdit_zielona->pos().x();
			adv_y = ui.lineEdit_zielona->pos().y();
			ui.lineEdit_zielona->move(adv_x - 5,adv_y);
			break;
		}

	}
}
void Pogoda::on_pushButton_itemRight_clicked()
{
	int index = ui.comboBox_adv->currentIndex();
	if(ui.radioButton_pogoda->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.label_ico_bialystok->pos().x();
			adv_y = ui.label_ico_bialystok->pos().y();
			ui.label_ico_bialystok->move(adv_x + 5,adv_y);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.label_ico_bydgoszcz->pos().x();
			adv_y = ui.label_ico_bydgoszcz->pos().y();
			ui.label_ico_bydgoszcz->move(adv_x + 5,adv_y);
			break;
		case 2:			//gdansk
			adv_x = ui.label_ico_gdansk->pos().x();
			adv_y = ui.label_ico_gdansk->pos().y();
			ui.label_ico_gdansk->move(adv_x + 5,adv_y);
			break;
		case 3:			//gorzow
			adv_x = ui.label_ico_gorzow->pos().x();
			adv_y = ui.label_ico_gorzow->pos().y();
			ui.label_ico_gorzow->move(adv_x + 5,adv_y);
			break;
		case 4:			//katowice
			adv_x = ui.label_ico_katowice->pos().x();
			adv_y = ui.label_ico_katowice->pos().y();
			ui.label_ico_katowice->move(adv_x + 5,adv_y);

			break;
		case 5:			//krakow
			adv_x = ui.label_ico_krakow->pos().x();
			adv_y = ui.label_ico_krakow->pos().y();
			ui.label_ico_krakow->move(adv_x + 5,adv_y);
			break;
		case 6:			//lodz
			adv_x = ui.label_ico_lodz->pos().x();
			adv_y = ui.label_ico_lodz->pos().y();
			ui.label_ico_lodz->move(adv_x + 5,adv_y);
			break;
		case 7:			//lublin
			adv_x = ui.label_ico_lublin->pos().x();
			adv_y = ui.label_ico_lublin->pos().y();
			ui.label_ico_lublin->move(adv_x + 5,adv_y);
			break;
		case 8:			//olsztyn
			adv_x = ui.label_ico_olsztyn->pos().x();
			adv_y = ui.label_ico_olsztyn->pos().y();
			ui.label_ico_olsztyn->move(adv_x + 5,adv_y);
			break;
		case 9:			//poznan
			adv_x = ui.label_ico_poznan->pos().x();
			adv_y = ui.label_ico_poznan->pos().y();
			ui.label_ico_poznan->move(adv_x + 5,adv_y);
			break;
		case 10:		//rzeszow
			adv_x = ui.label_ico_rzeszow->pos().x();
			adv_y = ui.label_ico_rzeszow->pos().y();
			ui.label_ico_rzeszow->move(adv_x + 5,adv_y);
			break;
		case 11:		//suwalki
			adv_x = ui.label_ico_suwalki->pos().x();
			adv_y = ui.label_ico_suwalki->pos().y();
			ui.label_ico_suwalki->move(adv_x + 5,adv_y);
			break;
		case 12:		//szczecin
			adv_x = ui.label_ico_szczecin->pos().x();
			adv_y = ui.label_ico_szczecin->pos().y();
			ui.label_ico_szczecin->move(adv_x + 5,adv_y);
			break;
		case 13:		//warszawa
			adv_x = ui.label_ico_warszawa->pos().x();
			adv_y = ui.label_ico_warszawa->pos().y();
			ui.label_ico_warszawa->move(adv_x + 5,adv_y);
			break;
		case 14:		//wroclaw
			adv_x = ui.label_ico_wroclaw->pos().x();
			adv_y = ui.label_ico_wroclaw->pos().y();
			ui.label_ico_wroclaw->move(adv_x + 5,adv_y);
			break;
		case 15:		//zielona
			adv_x = ui.label_ico_zielona->pos().x();
			adv_y = ui.label_ico_zielona->pos().y();
			ui.label_ico_zielona->move(adv_x + 5,adv_y);
			break;
		}
	}
	if(ui.radioButton_temperatura->isChecked())
	{
		switch(index)
		{
		case 0:	        //bialystok
			adv_x = ui.lineEdit_bialystok->pos().x();
			adv_y = ui.lineEdit_bialystok->pos().y();
			ui.lineEdit_bialystok->move(adv_x + 5,adv_y);
			break;
		case 1:			//bydgoszcz
			adv_x = ui.lineEdit_bydgoszcz->pos().x();
			adv_y = ui.lineEdit_bydgoszcz->pos().y();
			ui.lineEdit_bydgoszcz->move(adv_x + 5,adv_y);
			break;
		case 2:			//gdansk
			adv_x = ui.lineEdit_gdansk->pos().x();
			adv_y = ui.lineEdit_gdansk->pos().y();
			ui.lineEdit_gdansk->move(adv_x + 5,adv_y);
			break;
		case 3:			//gorzow
			adv_x = ui.lineEdit_gorzow->pos().x();
			adv_y = ui.lineEdit_gorzow->pos().y();
			ui.lineEdit_gorzow->move(adv_x + 5,adv_y);
			break;
		case 4:			//katowice
			adv_x = ui.lineEdit_katowice->pos().x();
			adv_y = ui.lineEdit_katowice->pos().y();
			ui.lineEdit_katowice->move(adv_x + 5,adv_y);

			break;
		case 5:			//krakow
			adv_x = ui.lineEdit_krakow->pos().x();
			adv_y = ui.lineEdit_krakow->pos().y();
			ui.lineEdit_krakow->move(adv_x + 5,adv_y);
			break;
		case 6:			//lodz
			adv_x = ui.lineEdit_lodz->pos().x();
			adv_y = ui.lineEdit_lodz->pos().y();
			ui.lineEdit_lodz->move(adv_x + 5,adv_y);
			break;
		case 7:			//lublin
			adv_x = ui.lineEdit_lublin->pos().x();
			adv_y = ui.lineEdit_lublin->pos().y();
			ui.lineEdit_lublin->move(adv_x + 5,adv_y);
			break;
		case 8:			//olsztyn
			adv_x = ui.lineEdit_olsztyn->pos().x();
			adv_y = ui.lineEdit_olsztyn->pos().y();
			ui.lineEdit_olsztyn->move(adv_x + 5,adv_y);
			break;
		case 9:			//poznan
			adv_x = ui.lineEdit_poznan->pos().x();
			adv_y = ui.lineEdit_poznan->pos().y();
			ui.lineEdit_poznan->move(adv_x + 5,adv_y);
			break;
		case 10:		//rzeszow
			adv_x = ui.lineEdit_rzeszow->pos().x();
			adv_y = ui.lineEdit_rzeszow->pos().y();
			ui.lineEdit_rzeszow->move(adv_x + 5,adv_y);
			break;
		case 11:		//suwalki
			adv_x = ui.lineEdit_suwalki->pos().x();
			adv_y = ui.lineEdit_suwalki->pos().y();
			ui.lineEdit_suwalki->move(adv_x + 5,adv_y);
			break;
		case 12:		//szczecin
			adv_x = ui.lineEdit_szczecin->pos().x();
			adv_y = ui.lineEdit_szczecin->pos().y();
			ui.lineEdit_szczecin->move(adv_x + 5,adv_y);
			break;
		case 13:		//warszawa
			adv_x = ui.lineEdit_warszawa->pos().x();
			adv_y = ui.lineEdit_warszawa->pos().y();
			ui.lineEdit_warszawa->move(adv_x + 5,adv_y);
			break;
		case 14:		//wroclaw
			adv_x = ui.lineEdit_wroclaw->pos().x();
			adv_y = ui.lineEdit_wroclaw->pos().y();
			ui.lineEdit_wroclaw->move(adv_x + 5,adv_y);
			break;
		case 15:		//zielona
			adv_x = ui.lineEdit_zielona->pos().x();
			adv_y = ui.lineEdit_zielona->pos().y();
			ui.lineEdit_zielona->move(adv_x + 5,adv_y);
			break;
		}

	}
}

void Pogoda::on_pushButton_savepos_clicked()
{
	int temp_x;
	int temp_y;
	QFile filepos("positions.txt");
	filepos.open(QIODevice::WriteOnly | QIODevice::Text);

	QTextStream out(&filepos);


	//bialystok
	temp_x = ui.label_ico_bialystok->pos().x();
	temp_y = ui.label_ico_bialystok->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_bialystok->pos().x();
	temp_y = ui.lineEdit_bialystok->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//bydgoszcz
	temp_x = ui.label_ico_bydgoszcz->pos().x();
	temp_y = ui.label_ico_bydgoszcz->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_bydgoszcz->pos().x();
	temp_y = ui.lineEdit_bydgoszcz->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//gdansk
	temp_x = ui.label_ico_gdansk->pos().x();
	temp_y = ui.label_ico_gdansk->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_gdansk->pos().x();
	temp_y = ui.lineEdit_gdansk->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//gorzow
	temp_x = ui.label_ico_gorzow->pos().x();
	temp_y = ui.label_ico_gorzow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_gorzow->pos().x();
	temp_y = ui.lineEdit_gorzow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//katowice
	temp_x = ui.label_ico_katowice->pos().x();
	temp_y = ui.label_ico_katowice->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_katowice->pos().x();
	temp_y = ui.lineEdit_katowice->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//krakow
	temp_x = ui.label_ico_krakow->pos().x();
	temp_y = ui.label_ico_krakow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_krakow->pos().x();
	temp_y = ui.lineEdit_krakow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//lodz
	temp_x = ui.label_ico_lodz->pos().x();
	temp_y = ui.label_ico_lodz->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_lodz->pos().x();
	temp_y = ui.lineEdit_lodz->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//lublin
	temp_x = ui.label_ico_lublin->pos().x();
	temp_y = ui.label_ico_lublin->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_lublin->pos().x();
	temp_y = ui.lineEdit_lublin->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//olsztyn
	temp_x = ui.label_ico_olsztyn->pos().x();
	temp_y = ui.label_ico_olsztyn->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_olsztyn->pos().x();
	temp_y = ui.lineEdit_olsztyn->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//poznan
	temp_x = ui.label_ico_poznan->pos().x();
	temp_y = ui.label_ico_poznan->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_poznan->pos().x();
	temp_y = ui.lineEdit_poznan->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//rzeszow
	temp_x = ui.label_ico_rzeszow->pos().x();
	temp_y = ui.label_ico_rzeszow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_rzeszow->pos().x();
	temp_y = ui.lineEdit_rzeszow->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//suwalki
	temp_x = ui.label_ico_suwalki->pos().x();
	temp_y = ui.label_ico_suwalki->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_suwalki->pos().x();
	temp_y = ui.lineEdit_suwalki->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//szcecin
	temp_x = ui.label_ico_szczecin->pos().x();
	temp_y = ui.label_ico_szczecin->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_szczecin->pos().x();
	temp_y = ui.lineEdit_szczecin->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//warszawa
	temp_x = ui.label_ico_warszawa->pos().x();
	temp_y = ui.label_ico_warszawa->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_warszawa->pos().x();
	temp_y = ui.lineEdit_warszawa->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//wroclaw
	temp_x = ui.label_ico_wroclaw->pos().x();
	temp_y = ui.label_ico_wroclaw->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_wroclaw->pos().x();
	temp_y = ui.lineEdit_wroclaw->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";

	//zielona
	temp_x = ui.label_ico_zielona->pos().x();
	temp_y = ui.label_ico_zielona->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";
	temp_x = ui.lineEdit_zielona->pos().x();
	temp_y = ui.lineEdit_zielona->pos().y();
	out << QString::number(temp_x) + "\n"; out << QString::number(temp_y) + "\n";


	filepos.flush();
	filepos.close();
}

void Pogoda::wczytaj_pozycje()
{

	int temp_x;
	int temp_y;
	QFile filepos("positions.txt");
	filepos.open(QIODevice::ReadOnly | QIODevice::Text);

	QTextStream in(&filepos);
	QString line;

	//bialystok
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_bialystok->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_bialystok->move(temp_x,temp_y);
	//bydgoszcz
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_bydgoszcz->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_bydgoszcz->move(temp_x,temp_y);
	//gdansk
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_gdansk->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_gdansk->move(temp_x,temp_y);
	//gorzow
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_gorzow->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_gorzow->move(temp_x,temp_y);
	//katowice
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_katowice->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_katowice->move(temp_x,temp_y);
	//krakow
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_krakow->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_krakow->move(temp_x,temp_y);
	//lodz
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_lodz->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_lodz->move(temp_x,temp_y);
	//lublin
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_lublin->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_lublin->move(temp_x,temp_y);
	//olsztyn
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_olsztyn->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_olsztyn->move(temp_x,temp_y);
	//poznan
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_poznan->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_poznan->move(temp_x,temp_y);
	//rzeszow
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_rzeszow->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_rzeszow->move(temp_x,temp_y);
	//suwalki
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_suwalki->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_suwalki->move(temp_x,temp_y);
	//szcecin
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_szczecin->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_szczecin->move(temp_x,temp_y);
	//warszawa
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_warszawa->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_warszawa->move(temp_x,temp_y);
	//wroclaw
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_wroclaw->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_wroclaw->move(temp_x,temp_y);
	//zielona
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.label_ico_zielona->move(temp_x,temp_y);
	line = in.readLine(); temp_x = line.toInt();
	line = in.readLine(); temp_y = line.toInt();
	ui.lineEdit_zielona->move(temp_x,temp_y);


	filepos.close();
}
void Pogoda::mapka()
{
	if(day_flag)
		img.load("images/dzien.png");
	else
		img.load("images/noc.png");

	QPainter rysuj_mapke(&img);
	QPixmap temp_ico;

	int temp_index;
	int temp_ico_x;
	int temp_ico_y;

	QFont font;
	font.setBold(true);
	font.setFamily("Century Gothic");
	font.setPixelSize(76);
	rysuj_mapke.setFont(font);
	rysuj_mapke.setPen(QColor("#ffffff"));

	temp_index = ui.comboBox_bialystok->currentIndex();          //bialystok
	temp_ico_x = ui.label_ico_bialystok->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_bialystok->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_bialystok->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_bialystok->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_bialystok->text());

	temp_index = ui.comboBox_bydgoszcz->currentIndex();          //bydgoszcz
	temp_ico_x = ui.label_ico_bydgoszcz->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_bydgoszcz->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_bydgoszcz->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_bydgoszcz->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_bydgoszcz->text());

	temp_index = ui.comboBox_gdansk->currentIndex();          //gdansk
	temp_ico_x = ui.label_ico_gdansk->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_gdansk->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_gdansk->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_gdansk->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_gdansk->text());

	temp_index = ui.comboBox_gorzow->currentIndex();          //gorzow
	temp_ico_x = ui.label_ico_gorzow->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_gorzow->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_gorzow->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_gorzow->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_gorzow->text());

	temp_index = ui.comboBox_katowice->currentIndex();          //katowice
	temp_ico_x = ui.label_ico_katowice->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_katowice->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_katowice->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_katowice->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_katowice->text());

	temp_index = ui.comboBox_krakow->currentIndex();          //krakow
	temp_ico_x = ui.label_ico_krakow->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_krakow->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_krakow->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_krakow->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_krakow->text());

	temp_index = ui.comboBox_lodz->currentIndex();          //lodz
	temp_ico_x = ui.label_ico_lodz->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_lodz->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_lodz->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_lodz->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_lodz->text());

	temp_index = ui.comboBox_lublin->currentIndex();          //lublin
	temp_ico_x = ui.label_ico_lublin->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_lublin->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_lublin->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_lublin->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_lublin->text());

	temp_index = ui.comboBox_olsztyn->currentIndex();          //olsztyn
	temp_ico_x = ui.label_ico_olsztyn->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_olsztyn->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_olsztyn->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_olsztyn->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_olsztyn->text());

	temp_index = ui.comboBox_poznan->currentIndex();          //poznan
	temp_ico_x = ui.label_ico_poznan->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_poznan->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_poznan->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_poznan->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_poznan->text());

	temp_index = ui.comboBox_rzeszow->currentIndex();          //rzeszow
	temp_ico_x = ui.label_ico_rzeszow->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_rzeszow->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_rzeszow->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_rzeszow->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_rzeszow->text());

	temp_index = ui.comboBox_suwalki->currentIndex();          //suwalki
	temp_ico_x = ui.label_ico_suwalki->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_suwalki->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_suwalki->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_suwalki->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_suwalki->text());

	temp_index = ui.comboBox_szczecin->currentIndex();          //szcecin
	temp_ico_x = ui.label_ico_szczecin->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_szczecin->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_szczecin->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_szczecin->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_szczecin->text());

	temp_index = ui.comboBox_warszawa->currentIndex();          //warszawa
	temp_ico_x = ui.label_ico_warszawa->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_warszawa->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_warszawa->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_warszawa->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_warszawa->text());

	temp_index = ui.comboBox_wroclaw->currentIndex();          //wroclaw
	temp_ico_x = ui.label_ico_wroclaw->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_wroclaw->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_wroclaw->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_wroclaw->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_wroclaw->text());

	temp_index = ui.comboBox_zielona->currentIndex();          //zielona
	temp_ico_x = ui.label_ico_zielona->geometry().topLeft().x();
	temp_ico_y = ui.label_ico_zielona->geometry().topLeft().y();
	rysuj_mapke.drawPixmap((temp_ico_x-10)*2,(temp_ico_y-50)*2,QPixmap(ikonki[temp_index]));
	temp_ico_x = ui.lineEdit_zielona->geometry().topLeft().x();
	temp_ico_y = ui.lineEdit_zielona->geometry().bottomLeft().y();
	rysuj_mapke.drawText((temp_ico_x-10)*2,(temp_ico_y-50)*2,ui.lineEdit_zielona->text());

	if(ui.checkBox_adv_miasta->isChecked())
		rysuj_mapke.drawPixmap(0,0,QPixmap("images/miasta.png"));



}

Pogoda::~Pogoda()
{

}
