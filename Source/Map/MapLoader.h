#ifndef MAPLOADER_H
#define MAPLOADER_H

#include <QString>
#include "Error.h"

namespace Sokoban{
;

class Map;

class MapLoader
{
public:
    MapLoader();
    MapLoader(const QString& mapFileName);
    virtual ~MapLoader();

public:
    Error load(const QString& mapFileName);
    MapLevel getLevel(int levelNum) const;
    Map* map() const;

protected:
    QString  m_mapFileName;
    Map*     m_map;


protected:
    Error checkMapFileStructure(const QString& mapFileName);
};

}

#endif // MAPLOADER_H
