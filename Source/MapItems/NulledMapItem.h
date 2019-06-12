#ifndef NULLEDMAPITEM_H
#define NULLEDMAPITEM_H

#include "MapItemBase.h"

namespace Sokoban {
;


class NulledMapItem : public MapItemBase
{
public:
    NulledMapItem();
    ~NulledMapItem() override;

    // MapItemBase interface
public:
    virtual MapItemType  itemType() const override;
    virtual const Map    *map() const override;
    virtual void         setMap(Map *newMap) override;
    virtual const QPoint position() const override;
    virtual void         setPosition(int x, int y) override;
    virtual void         setPosition(QPoint newPosition) override;
    virtual void         move(int dx, int dy) override;
    virtual bool         isMoveable() const override;
    virtual void         show() override;
    virtual void         hide() override;
    virtual bool         isVisible() override;
    virtual void         draw(QPainter * const painter) const override;
};

} // end of namespace Sokoban

#endif // NULLEDMAPITEM_H
