//
// Created by Андрей on 18.02.2023.
//

#ifndef BUTTON_SOUND_REDBUTTON_H
#define BUTTON_SOUND_REDBUTTON_H

#include <QPushButton>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>
#include <QtCore>
#include <QtGui>

class RedButton : public QPushButton {
Q_OBJECT
public:
    RedButton() = default;
    RedButton (QWidget *parent);

    void paintEvent (QPaintEvent *e) override;
    QSize minimumSizeHint () const override;
    void keyPressEvent (QKeyEvent *e) override;

public slots:
    void setUp();
    void setDown();

private :
    QPixmap *mCurrentButton;
    QPixmap mButton;
    QPixmap mPressedButton;
};

#endif //BUTTON_SOUND_REDBUTTON_H
