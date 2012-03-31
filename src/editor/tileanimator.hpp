// This file is part of Dust Racing (DustRAC).
// Copyright (C) 2011 Jussi Lind <jussi.lind@iki.fi>
//
// DustRAC is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// DustRAC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DustRAC. If not, see <http://www.gnu.org/licenses/>.

#ifndef TILEANIMATOR_HPP
#define TILEANIMATOR_HPP

#include <QObject>
#include <QTimeLine>

class TrackTile;

class TileAnimator : public QTimeLine
{
    Q_OBJECT

public:

    explicit TileAnimator(TrackTile * tile);

public slots:

    void rotate90CW();
    void rotate90CCW();

private slots:

    void setTileRotation(int frame);

private:

    TrackTile * m_tile;
    int m_a0, m_a1;
};

#endif // TILEANIMATOR_HPP