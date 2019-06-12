#include "NulledMapItem.h"

namespace Sokoban {
;

NulledMapItem::NulledMapItem()
{

}

NulledMapItem::~NulledMapItem()
{
}

MapItemType NulledMapItem::itemType() const
{
    return MapItemType::Unknown;
}

const Map* NulledMapItem::map() const
{

}

void NulledMapItem::setMap(Map *newMap)
{

}

const QPoint NulledMapItem::position() const
{
    return MapItemBase::invalidPoint();
}

void NulledMapItem::setPosition(int x, int y)
{

}

void NulledMapItem::setPosition(QPoint newPosition)
{
}

void NulledMapItem::move(int dx, int dy)
{
}

bool NulledMapItem::isMoveable() const
{
}

void NulledMapItem::show()
{
}

void NulledMapItem::hide()
{
}

bool NulledMapItem::isVisible()
{
}


void NulledMapItem::draw(Sokoban::QPainter * const painter) const
{
    Q_UNUSED(painter);
}



} // end of namespace Sokoban
