#include <redButton.h>
#include <QTimer>


RedButton::RedButton (QWidget *parent) {
    Q_INIT_RESOURCE(button);
    setToolTip("Click");
    setParent (parent);

    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mButton = QPixmap ("://red.png");
    mPressedButton =  QPixmap("://red_push.png");

    mCurrentButton = &mButton;
    setGeometry(mCurrentButton->rect());
    connect (this, &QPushButton::clicked,this,&RedButton::setDown);
}

void RedButton::paintEvent(QPaintEvent *e) {
    QPainter p (this);
    p.drawPixmap(e->rect(),*mCurrentButton);
}

QSize RedButton::minimumSizeHint () const {
    return QSize(100,100);
}

void RedButton::keyPressEvent (QKeyEvent *e)
{
    setDown();
}

void RedButton::setDown()
{

    player.setMedia(QUrl::fromLocalFile("://peg_push.mp3"));
    player.setVolume(100);
    player.play();

    mCurrentButton = &mPressedButton;
    update();
    QTimer::singleShot(100,this,&RedButton::setUp);
}

void RedButton::setUp()
{
    mCurrentButton = &mButton;
    update();
}