#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

double convertidor_1=1e6;
double convertidor_2=1e-6;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Convertidor de Unidades"); //Cambiar el título de la ventana

    ui->comboBox_2->addItem("Kilómetro cuadrado km²");
    ui->comboBox_2->addItem("Hectarea ha");
    ui->comboBox_2->addItem("Are a");
    ui->comboBox_2->addItem("Metro cuadrado m²");
    ui->comboBox_2->addItem("Decímetro cuadrado dm²");
    ui->comboBox_2->addItem("Centímetro cuadrado cm²");
    ui->comboBox_2->addItem("Milímetro cuadrado mm²");
    ui->comboBox_2->addItem("Micrómetro cuadrado µm²");
    ui->comboBox_2->addItem("Acre ac");
    ui->comboBox_2->addItem("Milla cuadrada milla²");
    ui->comboBox_2->addItem("Yarda cuadrada yd²");
    ui->comboBox_2->addItem("Pie cuadrado ft²");
    ui->comboBox_2->addItem("Pulgada cuadrada in²");
    ui->comboBox_2->addItem("Rod cuadrado rd²");
    ui->comboBox_2->addItem("Qing qing");
    ui->comboBox_2->addItem("Mu mu");
    ui->comboBox_2->addItem("Chi cuadrado chi²");
    ui->comboBox_2->addItem("Cun cuadrado cun²");
    ui->comboBox_2->addItem("Kilómetro cuadrado gongli²");

    ui->comboBox_3->addItem("Kilómetro cuadrado km²");
    ui->comboBox_3->addItem("Hectarea ha");
    ui->comboBox_3->addItem("Are a");
    ui->comboBox_3->addItem("Metro cuadrado m²");
    ui->comboBox_3->addItem("Decímetro cuadrado dm²");
    ui->comboBox_3->addItem("Centímetro cuadrado cm²");
    ui->comboBox_3->addItem("Milímetro cuadrado mm²");
    ui->comboBox_3->addItem("Micrómetro cuadrado µm²");
    ui->comboBox_3->addItem("Acre ac");
    ui->comboBox_3->addItem("Milla cuadrada milla²");
    ui->comboBox_3->addItem("Yarda cuadrada yd²");
    ui->comboBox_3->addItem("Pie cuadrado ft²");
    ui->comboBox_3->addItem("Pulgada cuadrada in²");
    ui->comboBox_3->addItem("Rod cuadrado rd²");
    ui->comboBox_3->addItem("Qing qing");
    ui->comboBox_3->addItem("Mu mu");
    ui->comboBox_3->addItem("Chi cuadrado chi²");
    ui->comboBox_3->addItem("Cun cuadrado cun²");
    ui->comboBox_3->addItem("Kilómetro cuadrado gongli²");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->comboBox_2->clear();
    ui->comboBox_3->clear();

    switch(index){
        case 0: //Área
            //Tienen sus index de 0 a 18
            ui->comboBox_2->addItem("Kilómetro cuadrado km²");
            ui->comboBox_2->addItem("Hectarea ha");
            ui->comboBox_2->addItem("Are a");
            ui->comboBox_2->addItem("Metro cuadrado m²");
            ui->comboBox_2->addItem("Decímetro cuadrado dm²");
            ui->comboBox_2->addItem("Centímetro cuadrado cm²");
            ui->comboBox_2->addItem("Milímetro cuadrado mm²");
            ui->comboBox_2->addItem("Micrómetro cuadrado µm²");
            ui->comboBox_2->addItem("Acre ac");
            ui->comboBox_2->addItem("Milla cuadrada milla²");
            ui->comboBox_2->addItem("Yarda cuadrada yd²");
            ui->comboBox_2->addItem("Pie cuadrado ft²");
            ui->comboBox_2->addItem("Pulgada cuadrada in²");
            ui->comboBox_2->addItem("Rod cuadrado rd²");
            ui->comboBox_2->addItem("Qing qing");
            ui->comboBox_2->addItem("Mu mu");
            ui->comboBox_2->addItem("Chi cuadrado chi²");
            ui->comboBox_2->addItem("Cun cuadrado cun²");
            ui->comboBox_2->addItem("Kilómetro cuadrado gongli²");

            ui->comboBox_3->addItem("Kilómetro cuadrado km²");
            ui->comboBox_3->addItem("Hectarea ha");
            ui->comboBox_3->addItem("Are a");
            ui->comboBox_3->addItem("Metro cuadrado m²");
            ui->comboBox_3->addItem("Decímetro cuadrado dm²");
            ui->comboBox_3->addItem("Centímetro cuadrado cm²");
            ui->comboBox_3->addItem("Milímetro cuadrado mm²");
            ui->comboBox_3->addItem("Micrómetro cuadrado µm²");
            ui->comboBox_3->addItem("Acre ac");
            ui->comboBox_3->addItem("Milla cuadrada milla²");
            ui->comboBox_3->addItem("Yarda cuadrada yd²");
            ui->comboBox_3->addItem("Pie cuadrado ft²");
            ui->comboBox_3->addItem("Pulgada cuadrada in²");
            ui->comboBox_3->addItem("Rod cuadrado rd²");
            ui->comboBox_3->addItem("Qing qing");
            ui->comboBox_3->addItem("Mu mu");
            ui->comboBox_3->addItem("Chi cuadrado chi²");
            ui->comboBox_3->addItem("Cun cuadrado cun²");
            ui->comboBox_3->addItem("Kilómetro cuadrado gongli²");
            break;
        case 1: //Longitud
            //Aquí el index va de 0 a 26
            ui->comboBox_2->addItem("Kilómetro km");
            ui->comboBox_2->addItem("Metro m");
            ui->comboBox_2->addItem("Decímetro dm");
            ui->comboBox_2->addItem("Centímetro cm");
            ui->comboBox_2->addItem("milímetro mm");
            ui->comboBox_2->addItem("Micrómetro µm");
            ui->comboBox_2->addItem("Nanometro nm");
            ui->comboBox_2->addItem("Picómetro pm");
            ui->comboBox_2->addItem("Milla náutica nmi");
            ui->comboBox_2->addItem("Milla mi");
            ui->comboBox_2->addItem("Furlong fur");
            ui->comboBox_2->addItem("Fathom ftm");
            ui->comboBox_2->addItem("Yarda yd");
            ui->comboBox_2->addItem("Pie ft");
            ui->comboBox_2->addItem("Pulgada in");
            ui->comboBox_2->addItem("Gongli gongli");
            ui->comboBox_2->addItem("Li li");
            ui->comboBox_2->addItem("Zhang zhang");
            ui->comboBox_2->addItem("Chi chi");
            ui->comboBox_2->addItem("Cun cun");
            ui->comboBox_2->addItem("Fen fen");
            ui->comboBox_2->addItem("Lii lii");
            ui->comboBox_2->addItem("Hao hao");
            ui->comboBox_2->addItem("Pársec pc");
            ui->comboBox_2->addItem("Distancia lunar ld");
            ui->comboBox_2->addItem("Unidad astronómica ua");
            ui->comboBox_2->addItem("Año luz ly");

            ui->comboBox_3->addItem("Kilómetro km");
            ui->comboBox_3->addItem("Metro m");
            ui->comboBox_3->addItem("Decímetro dm");
            ui->comboBox_3->addItem("Centímetro cm");
            ui->comboBox_3->addItem("milímetro mm");
            ui->comboBox_3->addItem("Micrómetro µm");
            ui->comboBox_3->addItem("Nanometro nm");
            ui->comboBox_3->addItem("Picómetro pm");
            ui->comboBox_3->addItem("Milla náutica nmi");
            ui->comboBox_3->addItem("Milla mi");
            ui->comboBox_3->addItem("Furlong fur");
            ui->comboBox_3->addItem("Fathom ftm");
            ui->comboBox_3->addItem("Yarda yd");
            ui->comboBox_3->addItem("Pie ft");
            ui->comboBox_3->addItem("Pulgada in");
            ui->comboBox_3->addItem("Gongli gongli");
            ui->comboBox_3->addItem("Li li");
            ui->comboBox_3->addItem("Zhang zhang");
            ui->comboBox_3->addItem("Chi chi");
            ui->comboBox_3->addItem("Cun cun");
            ui->comboBox_3->addItem("Fen fen");
            ui->comboBox_3->addItem("Lii lii");
            ui->comboBox_3->addItem("Hao hao");
            ui->comboBox_3->addItem("Pársec pc");
            ui->comboBox_3->addItem("Distancia lunar ld");
            ui->comboBox_3->addItem("Unidad astronómica ua");
            ui->comboBox_3->addItem("Año luz ly");
            break;
        case 2: //Masa
            //Index de 0 a 20
            ui->comboBox_2->addItem("Tonelada t");
            ui->comboBox_2->addItem("Kilogramo kg");
            ui->comboBox_2->addItem("Gramo g");
            ui->comboBox_2->addItem("Miligramo mg");
            ui->comboBox_2->addItem("Microgramo µg");
            ui->comboBox_2->addItem("Quintal q");
            ui->comboBox_2->addItem("Libra lb");
            ui->comboBox_2->addItem("Onza oz");
            ui->comboBox_2->addItem("Carat ct");
            ui->comboBox_2->addItem("Grano gr");
            ui->comboBox_2->addItem("Tonelada larga l.t");
            ui->comboBox_2->addItem("Tonelada corta sh.t");
            ui->comboBox_2->addItem("Centena larga cwt");
            ui->comboBox_2->addItem("Centena corta cwt");
            ui->comboBox_2->addItem("Stone st");
            ui->comboBox_2->addItem("Dram dr");
            ui->comboBox_2->addItem("Dan dan");
            ui->comboBox_2->addItem("Jin jin");
            ui->comboBox_2->addItem("Qian qian");
            ui->comboBox_2->addItem("Liang liang");
            ui->comboBox_2->addItem("Jin (Taiwán) jin(tw)");

            ui->comboBox_3->addItem("Tonelada t");
            ui->comboBox_3->addItem("Kilogramo kg");
            ui->comboBox_3->addItem("Gramo g");
            ui->comboBox_3->addItem("Miligramo mg");
            ui->comboBox_3->addItem("Microgramo µg");
            ui->comboBox_3->addItem("Quintal q");
            ui->comboBox_3->addItem("Libra lb");
            ui->comboBox_3->addItem("Onza oz");
            ui->comboBox_3->addItem("Carat ct");
            ui->comboBox_3->addItem("Grano gr");
            ui->comboBox_3->addItem("Tonelada larga l.t");
            ui->comboBox_3->addItem("Tonelada corta sh.t");
            ui->comboBox_3->addItem("Centena larga cwt");
            ui->comboBox_3->addItem("Centena corta cwt");
            ui->comboBox_3->addItem("Stone st");
            ui->comboBox_3->addItem("Dram dr");
            ui->comboBox_3->addItem("Dan dan");
            ui->comboBox_3->addItem("Jin jin");
            ui->comboBox_3->addItem("Qian qian");
            ui->comboBox_3->addItem("Liang liang");
            ui->comboBox_3->addItem("Jin (Taiwán) jin(tw)");
            break;
        case 3: //Velocidad
            //Index de 0 a 8
            ui->comboBox_2->addItem("Velocidad de la luz c");
            ui->comboBox_2->addItem("Match Ma");
            ui->comboBox_2->addItem("Metros por segundo m/s");
            ui->comboBox_2->addItem("Kilómetros por hora km/h");
            ui->comboBox_2->addItem("Kilómetros por segundo km/s");
            ui->comboBox_2->addItem("Nudo kn");
            ui->comboBox_2->addItem("Millas por hora mph");
            ui->comboBox_2->addItem("Pies por segundo fps");
            ui->comboBox_2->addItem("Pulgadas por segundo ips");

            ui->comboBox_3->addItem("Velocidad de la luz c");
            ui->comboBox_3->addItem("Match Ma");
            ui->comboBox_3->addItem("Metros por segundo m/s");
            ui->comboBox_3->addItem("Kilómetros por hora km/h");
            ui->comboBox_3->addItem("Kilómetros por segundo km/s");
            ui->comboBox_3->addItem("Nudo kn");
            ui->comboBox_3->addItem("Millas por hora mph");
            ui->comboBox_3->addItem("Pies por segundo fps");
            ui->comboBox_3->addItem("Pulgadas por segundo ips");
            break;
        case 4: //Temperatura
            //Index de 0 a 4
            ui->comboBox_2->addItem("Centígrado ºC");
            ui->comboBox_2->addItem("Fahrenheit ºF");
            ui->comboBox_2->addItem("Kelvin ºK");
            ui->comboBox_2->addItem("Rankine ºR");
            ui->comboBox_2->addItem("Réaumur ºRe");

            ui->comboBox_3->addItem("Centígrado ºC");
            ui->comboBox_3->addItem("Fahrenheit ºF");
            ui->comboBox_3->addItem("Kelvin ºK");
            ui->comboBox_3->addItem("Rankine ºR");
            ui->comboBox_3->addItem("Réaumur ºRe");
            break;
        case 5: //Tiempo
            //Index de 0 a 8
            ui->comboBox_2->addItem("Año a");
            ui->comboBox_2->addItem("Semana sem");
            ui->comboBox_2->addItem("Día d");
            ui->comboBox_2->addItem("Hora h");
            ui->comboBox_2->addItem("Minuto min");
            ui->comboBox_2->addItem("Segundo s");
            ui->comboBox_2->addItem("Milisegundo ms");
            ui->comboBox_2->addItem("Microsegundo µs");
            ui->comboBox_2->addItem("Picosegundo ps");

            ui->comboBox_3->addItem("Año a");
            ui->comboBox_3->addItem("Semana sem");
            ui->comboBox_3->addItem("Día d");
            ui->comboBox_3->addItem("Hora h");
            ui->comboBox_3->addItem("Minuto min");
            ui->comboBox_3->addItem("Segundo s");
            ui->comboBox_3->addItem("Milisegundo ms");
            ui->comboBox_3->addItem("Microsegundo µs");
            ui->comboBox_3->addItem("Picosegundo ps");
            break;
        case 6://Volumen
            //Index de 0 a 12
            ui->comboBox_2->addItem("Metro cúbico m³");
            ui->comboBox_2->addItem("Decímetro cúbico dm³");
            ui->comboBox_2->addItem("Centímetro cúbico cm³");
            ui->comboBox_2->addItem("Milímetro cúbico mm³");
            ui->comboBox_2->addItem("Hectolitro hl");
            ui->comboBox_2->addItem("Litro l");
            ui->comboBox_2->addItem("Decilitro dl");
            ui->comboBox_2->addItem("Centilitro cl");
            ui->comboBox_2->addItem("Mililitro ml");
            ui->comboBox_2->addItem("Pie cúbico ft³");
            ui->comboBox_2->addItem("Pulgada cúbica in³");
            ui->comboBox_2->addItem("Yarda cúbica yd³");
            ui->comboBox_2->addItem("Acre-pie af³");

            ui->comboBox_3->addItem("Metro cúbico m³");
            ui->comboBox_3->addItem("Decímetro cúbico dm³");
            ui->comboBox_3->addItem("Centímetro cúbico cm³");
            ui->comboBox_3->addItem("Milímetro cúbico mm³");
            ui->comboBox_3->addItem("Hectolitro hl");
            ui->comboBox_3->addItem("Litro l");
            ui->comboBox_3->addItem("Decilitro dl");
            ui->comboBox_3->addItem("Centilitro cl");
            ui->comboBox_3->addItem("Mililitro ml");
            ui->comboBox_3->addItem("Pie cúbico ft³");
            ui->comboBox_3->addItem("Pulgada cúbica in³");
            ui->comboBox_3->addItem("Yarda cúbica yd³");
            ui->comboBox_3->addItem("Acre-pie af³");
            break;
    }
        int Indice_principal = ui->comboBox->currentIndex();

        if(Indice_principal==4){
            int Temperatura_index_1 = ui->comboBox_2->currentIndex();
            int Temperatura_index_2 = ui->comboBox_3->currentIndex();
            QString text_2;
            QString text = ui->lineEdit->text();
            double conversion;
            bool ok;
            double valor = text.toDouble(&ok);
            switch(Temperatura_index_1){
            case 0://centigrados
                switch(Temperatura_index_2){
                case 0: //centigrados
                    ui->resultado->setText(text);
                    break;
                case 1: //Fahrenheit
                    conversion=valor*9/5+32;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=valor+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3:
                    conversion=valor*9/5+491.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4:
                    conversion=valor*0.8;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 1://Fahrenheit
                switch(Temperatura_index_2){
                case 0: //centigrados
                    conversion=(valor-32)*5/9;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=(valor-32)*5/9+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=valor+459.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=(valor-32)/2.25000002;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 2://Kelvin
                switch(Temperatura_index_2){
                case 0: //centigrados
                    conversion=valor-273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=(valor-273.15)*9/5+32;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=((valor-273.15)*1.8)+491.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=(valor-273.15)/1.25;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 3://Rankine
                switch(Temperatura_index_2){
                case 0: //centigrados
                    conversion=(valor-491.67)/1.8;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=valor-459.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=((valor-491.67)/1.8)+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=(valor-491.67)/2.25000002;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 4://Reaumur
                switch(Temperatura_index_2){
                case 0: //centigrados
                    conversion=valor*1.25;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=(valor*2.25)+32;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=(valor*1.25)+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=(valor*2.25)+491.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            }
        }
        else{
            //#########Actualizar resultado#############
            QString text = ui->lineEdit->text();
            double conversion;
            bool ok;
            double valor = text.toDouble(&ok);
            conversion=valor*convertidor_1;
            conversion=conversion*convertidor_2;
            QString text_2 = QString::number(conversion);
            ui->resultado->setText(text_2);
            //##########################################
        }

}


void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    int Indice_principal = ui->comboBox->currentIndex();
    int Temperatura_index_1 = ui->comboBox_2->currentIndex();
    int Temperatura_index_2 = ui->comboBox_3->currentIndex();

    if(Indice_principal==4){
        QString text_2;
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        switch(Temperatura_index_1){
        case 0://centigrados
            switch(Temperatura_index_2){
            case 0: //centigrados
                ui->resultado->setText(text);
                break;
            case 1: //Fahrenheit
                conversion=valor*9/5+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=valor+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3:
                conversion=valor*9/5+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4:
                conversion=valor*0.8;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 1://Fahrenheit
            switch(Temperatura_index_2){
            case 0: //centigrados
                conversion=(valor-32)*5/9;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=(valor-32)*5/9+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=valor+459.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-32)/2.25000002;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 2://Kelvin
            switch(Temperatura_index_2){
            case 0: //centigrados
                conversion=valor-273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=(valor-273.15)*9/5+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=((valor-273.15)*1.8)+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-273.15)/1.25;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 3://Rankine
            switch(Temperatura_index_2){
            case 0: //centigrados
                conversion=(valor-491.67)/1.8;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=valor-459.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=((valor-491.67)/1.8)+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-491.67)/2.25000002;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 4://Reaumur
            switch(Temperatura_index_2){
            case 0: //centigrados
                conversion=valor*1.25;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=(valor*2.25)+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=(valor*1.25)+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=(valor*2.25)+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        }
    }
    else{
        //#########Actualizar resultado#############
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        conversion=valor*convertidor_1;
        conversion=conversion*convertidor_2;
        QString text_2 = QString::number(conversion);
        ui->resultado->setText(text_2);
        //##########################################
    }
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    int Conversor = ui->comboBox->currentIndex();

    switch(Conversor){
        case 0: //En el primer caso se convertirá el valor a m² //Index 18
            switch(index){
                case 0://kilometro cuadrado
                    convertidor_1=1e6;
                    break;
                case 1://Hectarea
                    convertidor_1=10000;
                    break;
                case 2://Are
                    convertidor_1=100;
                    break;
                case 3://Metro cuadrado
                    convertidor_1=1;
                    break;
                case 4://Decimetro cuadrado
                    convertidor_1=0.01;
                    break;
                case 5://centimetro cuadrado
                    convertidor_1=0.0001;
                    break;
                case 6://milimetro cuadrado
                    convertidor_1=1e-6;
                    break;
                case 7://micrómetro cuadrado
                    convertidor_1=1e-12;
                    break;
                case 8://Acre
                    convertidor_1=4046.856;
                    break;
                case 9://milla cuadrada
                    convertidor_1=2589988.11;
                    break;
                case 10://Yarda cuadrada
                    convertidor_1=0.83612736;
                    break;
                case 11://Pie cuadrado
                    convertidor_1=0.09290304;
                    break;
                case 12://Pulgada cuadrada
                    convertidor_1=0.00064516;
                    break;
                case 13://rod cuadrado
                    convertidor_1=25.2928526;
                    break;
                case 14://Qing
                    convertidor_1=66666.6667;
                    break;
                case 15://mu
                    convertidor_1=666.666667;
                    break;
                case 16://chi cuadrado
                    convertidor_1=0.111111111;
                    break;
                case 17://Cun cuadrado
                    convertidor_1=0.00111111111;
                    break;
                case 18://
                    convertidor_1=1000000;
                    break;
            }
            break;
        case 1: //En el segundo caso se convertirán a m // 26
            switch(index){
                case 0://kilometro
                    convertidor_1=1000;
                    break;
                case 1://metro
                    convertidor_1=1;
                    break;
                case 2://decímetro
                    convertidor_1=0.1;
                    break;
                case 3://centimetro
                    convertidor_1=0.01;
                    break;
                case 4://milimetro
                    convertidor_1=0.001;
                    break;
                case 5://micrómetro
                    convertidor_1=1e-6;
                    break;
                case 6://nanometro
                    convertidor_1=1e-9;
                    break;
                case 7://picometro
                    convertidor_1=1e-12;
                    break;
                case 8://milla nautica
                    convertidor_1=1852;
                    break;
                case 9://milla
                    convertidor_1=1609.344;
                    break;
                case 10://Furlong
                    convertidor_1=201.168;
                    break;
                case 11://Fathom
                    convertidor_1=1.8288;
                    break;
                case 12://Yarda
                    convertidor_1=0.9144;
                    break;
                case 13://Pie
                    convertidor_1=0.3048;
                    break;
                case 14://Pulgada
                    convertidor_1=0.0254;
                    break;
                case 15://Gongli
                    convertidor_1=1000;
                    break;
                case 16://li
                    convertidor_1=500;
                    break;
                case 17://Zhang
                    convertidor_1=3.333333333;
                    break;
                case 18://chi
                    convertidor_1=0.333333333;
                    break;
                case 19://cun
                    convertidor_1=0.0333333333;
                    break;
                case 20://fen
                    convertidor_1=0.00333333333;
                    break;
                case 21://lii
                    convertidor_1=0.000333333333;
                    break;
                case 22://hao
                    convertidor_1=3.333333333e-5;
                    break;
                case 23://Parsec
                    convertidor_1=3.08567758e16;
                    break;
                case 24://Distancia lunar
                    convertidor_1=384401000;
                    break;
                case 25://Unidad astronomica
                    convertidor_1=1.49597871e11;
                    break;
                case 26://año luz
                    convertidor_1=9.46073047e15;
                    break;
                }
            break;
        case 2: //En el tercer caso se convertirá a kg // 20
            switch(index){
                case 0://tonelada
                    convertidor_1=1000;
                    break;
                case 1://Kilogramo
                    convertidor_1=1;
                    break;
                case 2://gramo
                    convertidor_1=0.001;
                    break;
                case 3://miligramo
                    convertidor_1=1e-6;
                    break;
                case 4://microgramo
                    convertidor_1=1e-9;
                    break;
                case 5://quintal
                    convertidor_1=100;
                    break;
                case 6://Libra
                    convertidor_1=0.45359237;
                    break;
                case 7://Onza
                    convertidor_1=0.0283495231;
                    break;
                case 8://Carat
                    convertidor_1=0.0002;
                    break;
                case 9://Grano
                    convertidor_1=6.479891e-5;
                    break;
                case 10://Tonelada larga
                    convertidor_1=1016.04691;
                    break;
                case 11://tonelada corta
                    convertidor_1=907.18474;
                    break;
                case 12://centena larga
                    convertidor_1=50.8023454;
                    break;
                case 13://centena corta
                    convertidor_1=45.359237;
                    break;
                case 14://stone
                    convertidor_1=6.35029318;
                    break;
                case 15://dram
                    convertidor_1=0.0017718452;
                    break;
                case 16://dan
                    convertidor_1=50;
                    break;
                case 17://Jin
                    convertidor_1=0.5;
                    break;
                case 18://qian
                    convertidor_1=0.005;
                    break;
                case 19://liang
                    convertidor_1=0.05;
                    break;
                case 20://jin (taiwan)
                    convertidor_1=0.6;
                    break;
            }
            break;
        case 3: //En el caurto caso se convertirá a m/s //8
            switch(index){
                case 0://velocidad de la luz
                    convertidor_1=299792458;
                    break;
                case 1://Mach
                    convertidor_1=340.3;
                    break;
                case 2://metros por segundo
                    convertidor_1=1;
                    break;
                case 3://kilometros por hora
                    convertidor_1=0.277777778;
                    break;
                case 4://kilometros por segundo
                    convertidor_1=1000;
                    break;
                case 5://Nudo
                    convertidor_1=0.514444444;
                    break;
                case 6://Millas por hora
                    convertidor_1=0.44704;
                    break;
                case 7://pies por segundo
                    convertidor_1=0.3048;
                    break;
                case 8://pulgadas por segundo
                    convertidor_1=0.0254;
                    break;
            }
            break;
        case 5: //En el sexto caso se convertirá a s // 8
            switch(index){
                case 0://años
                    convertidor_1=31536000;
                    break;
                case 1://semanas
                    convertidor_1=604800;
                    break;
                case 2://dia
                    convertidor_1=86400;
                    break;
                case 3://Hora
                    convertidor_1=3600;
                    break;
                case 4://Minuto
                    convertidor_1=60;
                    break;
                case 5://segundo
                    convertidor_1=1;
                    break;
                case 6://milisegundo
                    convertidor_1=0.001;
                    break;
                case 7://microsegundo
                    convertidor_1=1e-6;
                    break;
                case 8://picosegundo
                    convertidor_1=1e-12;
                    break;
            }
            break;
        case 6: //En el septimo caso se convertirán a m³ // 12
            switch(index){
                case 0://metros cubicos
                    convertidor_1=1;
                    break;
                case 1://decimetro cúbico
                    convertidor_1=0.001;
                    break;
                case 2://centimetro cúbico
                    convertidor_1=1e-6;
                    break;
                case 3://milimetro cúbico
                    convertidor_1=1e-9;
                    break;
                case 4://hectolitro
                    convertidor_1=0.1;
                    break;
                case 5://litro
                    convertidor_1=0.001;
                    break;
                case 6://decilitro
                    convertidor_1=0.0001;
                    break;
                case 7://centilitro
                    convertidor_1=1e-5;
                    break;
                case 8://Mililitro
                    convertidor_1=1e-6;
                    break;
                case 9://pie cubico
                    convertidor_1=0.0283168466;
                    break;
                case 10://pulgada cubica
                    convertidor_1=1.6387064e-5;
                    break;
                case 11://yarda cúbica
                    convertidor_1=0.764554858;
                    break;
                case 12://Acre-pie
                    convertidor_1=1234;
                    break;
            }
            break;
    }
    if(Conversor==4){
        int opcion_2 = ui->comboBox_3->currentIndex();
        QString text_2;
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        switch(index){
            case 0://centigrados
                switch(opcion_2){
                    case 0: //centigrados
                        ui->resultado->setText(text);
                        break;
                    case 1: //Fahrenheit
                        conversion=valor*9/5+32;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 2: //Kelvin
                        conversion=valor+273.15;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 3:
                        conversion=valor*9/5+491.67;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 4:
                        conversion=valor*0.8;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                }
                break;
            case 1://Fahrenheit
                switch(opcion_2){
                    case 0: //centigrados
                        conversion=(valor-32)*5/9;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 1: //Fahrenheit
                        conversion=valor;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 2: //Kelvin
                        conversion=(valor-32)*5/9+273.15;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 3: //Rankine
                        conversion=valor+459.67;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                    case 4: //Reaumur
                        conversion=(valor-32)/2.25000002;
                        text_2 = QString::number(conversion);
                        ui->resultado->setText(text_2);
                        break;
                }
                break;
            case 2://Kelvin
                switch(opcion_2){
                case 0: //centigrados
                    conversion=valor-273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=(valor-273.15)*9/5+32;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=((valor-273.15)*1.8)+491.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=(valor-273.15)/1.25;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 3://Rankine
                switch(opcion_2){
                case 0: //centigrados
                    conversion=(valor-491.67)/1.8;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=valor-459.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=((valor-491.67)/1.8)+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=(valor-491.67)/2.25000002;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
            case 4://Reaumur
                switch(opcion_2){
                case 0: //centigrados
                    conversion=valor*1.25;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 1: //Fahrenheit
                    conversion=(valor*2.25)+32;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 2: //Kelvin
                    conversion=(valor*1.25)+273.15;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 3: //Rankine
                    conversion=(valor*2.25)+491.67;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                case 4: //Reaumur
                    conversion=valor;
                    text_2 = QString::number(conversion);
                    ui->resultado->setText(text_2);
                    break;
                }
                break;
        }
    }
    else{
        //#########Actualizar resultado#############
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        conversion=valor*convertidor_1;
        conversion=conversion*convertidor_2;
        QString text_2 = QString::number(conversion);
        ui->resultado->setText(text_2);
        //##########################################
    }

}


void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    int Conversor = ui->comboBox->currentIndex();

    switch(Conversor){
    case 0: //En el primer caso se convertirá el valor a m² //Index 18
        switch(index){
        case 0://kilometro cuadrado
            convertidor_2=1e-6;
            break;
        case 1://Hectarea
            convertidor_2=pow(10000,-1);
            break;
        case 2://Are
            convertidor_2=pow(100,-1);
            break;
        case 3://Metro cuadrado
            convertidor_2=1;
            break;
        case 4://Decimetro cuadrado
            convertidor_2=pow(0.01,-1);
            break;
        case 5://centimetro cuadrado
            convertidor_2=pow(0.0001,-1);
            break;
        case 6://milimetro cuadrado
            convertidor_2=1e6;
            break;
        case 7://micrómetro cuadrado
            convertidor_2=1e12;
            break;
        case 8://Acre
            convertidor_2=pow(4046.856,-1);
            break;
        case 9://milla cuadrada
            convertidor_2=pow(2589988.11,-1);
            break;
        case 10://Yarda cuadrada
            convertidor_2=pow(0.83612736,-1);
            break;
        case 11://Pie cuadrado
            convertidor_2=pow(0.09290304,-1);
            break;
        case 12://Pulgada cuadrada
            convertidor_2=pow(0.00064516,-1);
            break;
        case 13://rod cuadrado
            convertidor_2=pow(25.2928526,-1);
            break;
        case 14://Qing
            convertidor_2=pow(66666.6667,-1);
            break;
        case 15://mu
            convertidor_2=pow(666.666667,-1);
            break;
        case 16://chi cuadrado
            convertidor_2=pow(0.111111111,-1);
            break;
        case 17://Cun cuadrado
            convertidor_2=pow(0.00111111111,-1);
            break;
        case 18://
            convertidor_2=pow(1000000,-1);
            break;
        }
        break;
    case 1: //En el segundo caso se convertirán a m // 26
        switch(index){
        case 0://kilometro
            convertidor_2=pow(1000,-1);
            break;
        case 1://metro
            convertidor_2=1;
            break;
        case 2://decímetro
            convertidor_2=pow(0.1,-1);
            break;
        case 3://centimetro
            convertidor_2=pow(0.01,-1);
            break;
        case 4://milimetro
            convertidor_2=pow(0.001,-1);
            break;
        case 5://micrómetro
            convertidor_2=1e6;
            break;
        case 6://nanometro
            convertidor_2=1e9;
            break;
        case 7://picometro
            convertidor_2=1e12;
            break;
        case 8://milla nautica
            convertidor_2=pow(1852,-1);
            break;
        case 9://milla
            convertidor_2=pow(1609.344,-1);
            break;
        case 10://Furlong
            convertidor_2=pow(201.168,-1);
            break;
        case 11://Fathom
            convertidor_2=pow(1.8288,-1);
            break;
        case 12://Yarda
            convertidor_2=pow(0.9144,-1);
            break;
        case 13://Pie
            convertidor_2=pow(0.3048,-1);
            break;
        case 14://Pulgada
            convertidor_2=pow(0.0254,-1);
            break;
        case 15://Gongli
            convertidor_2=pow(1000,-1);
            break;
        case 16://li
            convertidor_2=pow(500,-1);
            break;
        case 17://Zhang
            convertidor_2=pow(3.333333333,-1);
            break;
        case 18://chi
            convertidor_2=pow(0.333333333,-1);
            break;
        case 19://cun
            convertidor_2=pow(0.0333333333,-1);
            break;
        case 20://fen
            convertidor_2=pow(0.00333333333,-1);
            break;
        case 21://lii
            convertidor_2=pow(0.000333333333,-1);
            break;
        case 22://hao
            convertidor_2=pow(3.333333333e-5,-1);
            break;
        case 23://Parsec
            convertidor_2=pow(3.08567758e16,-1);
            break;
        case 24://Distancia lunar
            convertidor_2=pow(384401000,-1);
            break;
        case 25://Unidad astronomica
            convertidor_2=pow(1.49597871e11,-1);
            break;
        case 26://año luz
            convertidor_2=pow(9.46073047e15,-1);
            break;
        }
        break;
    case 2: //En el tercer caso se convertirá a kg // 20
        switch(index){
        case 0://tonelada
            convertidor_2=pow(1000,-1);
            break;
        case 1://Kilogramo
            convertidor_2=1;
            break;
        case 2://gramo
            convertidor_2=pow(0.001,-1);
            break;
        case 3://miligramo
            convertidor_2=1e6;
            break;
        case 4://microgramo
            convertidor_2=1e9;
            break;
        case 5://quintal
            convertidor_2=pow(100,-1);
            break;
        case 6://Libra
            convertidor_2=pow(0.45359237,-1);
            break;
        case 7://Onza
            convertidor_2=pow(0.0283495231,-1);
            break;
        case 8://Carat
            convertidor_2=pow(0.0002,-1);
            break;
        case 9://Grano
            convertidor_2=pow(6.479891e-5,-1);
            break;
        case 10://Tonelada larga
            convertidor_2=pow(1016.04691,-1);
            break;
        case 11://tonelada corta
            convertidor_2=pow(907.18474,-1);
            break;
        case 12://centena larga
            convertidor_2=pow(50.8023454,-1);
            break;
        case 13://centena corta
            convertidor_2=pow(45.359237,-1);
            break;
        case 14://stone
            convertidor_2=pow(6.35029318,-1);
            break;
        case 15://dram
            convertidor_2=pow(0.0017718452,-1);
            break;
        case 16://dan
            convertidor_2=pow(50,-1);
            break;
        case 17://Jin
            convertidor_2=pow(0.5,-1);
            break;
        case 18://qian
            convertidor_2=pow(0.005,-1);
            break;
        case 19://liang
            convertidor_2=pow(0.05,-1);
            break;
        case 20://jin (taiwan)
            convertidor_2=pow(0.6,-1);
            break;
        }
        break;
    case 3: //En el caurto caso se convertirá a m/s //8
        switch(index){
        case 0://velocidad de la luz
            convertidor_2=pow(299792458,-1);
            break;
        case 1://Mach
            convertidor_2=pow(340.3,-1);
            break;
        case 2://metros por segundo
            convertidor_2=1;
            break;
        case 3://kilometros por hora
            convertidor_2=pow(0.277777778,-1);
            break;
        case 4://kilometros por segundo
            convertidor_2=pow(1000,-1);
            break;
        case 5://Nudo
            convertidor_2=pow(0.514444444,-1);
            break;
        case 6://Millas por hora
            convertidor_2=pow(0.44704,-1);
            break;
        case 7://pies por segundo
            convertidor_2=pow(0.3048,-1);
            break;
        case 8://pulgadas por segundo
            convertidor_2=pow(0.0254,-1);
            break;
        }
        break;
    case 5: //En el sexto caso se convertirá a s // 8
        switch(index){
        case 0://años
            convertidor_2=pow(31536000,-1);
            break;
        case 1://semanas
            convertidor_2=pow(604800,-1);
            break;
        case 2://dia
            convertidor_2=pow(86400,-1);
            break;
        case 3://Hora
            convertidor_2=pow(3600,-1);
            break;
        case 4://Minuto
            convertidor_2=pow(60,-1);
            break;
        case 5://segundo
            convertidor_2=1;
            break;
        case 6://milisegundo
            convertidor_2=pow(0.001,-1);
            break;
        case 7://microsegundo
            convertidor_2=1e6;
            break;
        case 8://picosegundo
            convertidor_2=1e12;
            break;
        }
        break;
    case 6: //En el septimo caso se convertirán a m³ // 12
        switch(index){
        case 0://metros cubicos
            convertidor_2=1;
            break;
        case 1://decimetro cúbico
            convertidor_2=pow(0.001,-1);
            break;
        case 2://centimetro cúbico
            convertidor_2=1e6;
            break;
        case 3://milimetro cúbico
            convertidor_2=1e9;
            break;
        case 4://hectolitro
            convertidor_2=pow(0.1,-1);
            break;
        case 5://litro
            convertidor_2=pow(0.001,-1);
            break;
        case 6://decilitro
            convertidor_2=pow(0.0001,-1);
            break;
        case 7://centilitro
            convertidor_2=1e5;
            break;
        case 8://Mililitro
            convertidor_2=1e6;
            break;
        case 9://pie cubico
            convertidor_2=pow(0.0283168466,-1);
            break;
        case 10://pulgada cubica
            convertidor_2=pow(1.6387064e-5,-1);
            break;
        case 11://yarda cúbica
            convertidor_2=pow(0.764554858,-1);
            break;
        case 12://Acre-pie
            convertidor_2=pow(1234,-1);
            break;
        }
        break;
    }
    if(Conversor==4){
        int opcion_1 = ui->comboBox_2->currentIndex();
        QString text_2;
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        switch(opcion_1){
        case 0://centigrados
            switch(index){
            case 0: //centigrados
                ui->resultado->setText(text);
                break;
            case 1: //Fahrenheit
                conversion=valor*9/5+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=valor+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3:
                conversion=valor*9/5+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4:
                conversion=valor*0.8;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 1://Fahrenheit
            switch(index){
            case 0: //centigrados
                conversion=(valor-32)*5/9;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=(valor-32)*5/9+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=valor+459.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-32)/2.25000002;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 2://Kelvin
            switch(index){
            case 0: //centigrados
                conversion=valor-273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=(valor-273.15)*9/5+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=((valor-273.15)*1.8)+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-273.15)/1.25;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 3://Rankine
            switch(index){
            case 0: //centigrados
                conversion=(valor-491.67)/1.8;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=valor-459.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=((valor-491.67)/1.8)+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=(valor-491.67)/2.25000002;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        case 4://Reaumur
            switch(index){
            case 0: //centigrados
                conversion=valor*1.25;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 1: //Fahrenheit
                conversion=(valor*2.25)+32;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 2: //Kelvin
                conversion=(valor*1.25)+273.15;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 3: //Rankine
                conversion=(valor*2.25)+491.67;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            case 4: //Reaumur
                conversion=valor;
                text_2 = QString::number(conversion);
                ui->resultado->setText(text_2);
                break;
            }
            break;
        }
    }
    else{
        //#########Actualizar resultado#############
        QString text = ui->lineEdit->text();
        double conversion;
        bool ok;
        double valor = text.toDouble(&ok);
        conversion=valor*convertidor_1;
        conversion=conversion*convertidor_2;
        QString text_2 = QString::number(conversion);
        ui->resultado->setText(text_2);
        //##########################################
    }

}

