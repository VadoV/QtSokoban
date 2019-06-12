#ifndef MAPITEM_H
#define MAPITEM_H

#include <QPoint>
#include "MapItemType.h"

namespace Sokoban {
;

// Declaration
class Map;
class QPainter;

class MapItemBase
{
protected:
    MapItemBase();
public:
    virtual ~MapItemBase();

public:
    static QPoint invalidPoint() { return QPoint(-1,-1); }

public:
/* Map's items kinds methods */

    //
    // Return type of map item
    //
    virtual MapItemType itemType() const = 0;

    //
    // Return none type
    //
    bool noneType() const { return itemType() == MapItemType::None; }

/* Map's methods */
    //
    // Return number of map
    //
    virtual const Map* map() const = 0;

    //
    // Select map
    //
    virtual void setMap(Map* newMap) = 0;

/* Position's methods */
    //
    // Return position throught QPoint
    //
    virtual QPoint position() const
    {
        return m_position;
    }

    //
    // Set position by x and y coordinates
    //
    inline constexpr void setPosition(int x, int y)
    {
        setPosition(QPoint(x, y));
    }

    //
    // Set position by QPoint
    //
    virtual void setPosition(const QPoint& newPosition)
    {

    }

    //
    //  Move Item to required position
    //
    virtual void move(int dx, int dy) = 0;

/* Move check's methods */
    //
    // Check whether the item is moveable
    //
    virtual bool isMoveable() const = 0;
    //? virtual bool canMove(int newX, int newY) const = 0;

/* Visible's methods */
    //
    // Make item visible
    //
    virtual void show() = 0;

    //
    // Make item invisible
    //
    virtual void hide() = 0;

    //
    // Check whether the item is visible
    //
    virtual bool isVisible() = 0;

/* Paint's methods */
    //
    // Draw level items
    //
    virtual void draw(QPainter* const painter) const = 0;

/* Fields */
protected:
    QPoint m_position;

};

} // end of namespace Sokoban
#endif // MAPITEM_H
