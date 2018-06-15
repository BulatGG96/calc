#ifndef _Calculator_h_
#define _Calculator_h_
#include <QWidget>
#include <QStack>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QTCore/qmath.h>
#include <QKeyEvent>
#include <Qt>

 class Calculator : public QWidget {
  Q_OBJECT
  private:
   QLabel *firststring; //метка для вывода предыдущего операнда или операции
   QLabel *displaystring;
   QStack <QString> stack;
 protected:
    virtual void keyPressEvent(QKeyEvent *event); //Класс будет обрабатывать нажатия клавиш!
  public:
   Calculator (QWidget* pwgt = 0);
   QPushButton* createButton (const QString& str);
   void clearAll (); //Очистить всё
   void input(QString); //Обработка нажатия кнопки или клавиши
   void calculate (); //Вычисление
  public slots:
   void slotButtonClicked ();
 };
#endif
