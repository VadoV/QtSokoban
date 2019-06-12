#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>

namespace Sokoban {
;

//*********************************************************
// Forward declaration
//*********************************************************
class Map;


//*********************************************************
// Implements
//*********************************************************

class MapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MapWidget(QWidget *parent = nullptr);

signals:

public slots:

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;

    Map* m_map;

};

} // end of namespace Sokoban

#endif // MAPWIDGET_H
