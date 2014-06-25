#ifndef ZINTCUBOID_H
#define ZINTCUBOID_H

#include "zintpoint.h"

class ZIntCuboid
{
public:
  ZIntCuboid();
  ZIntCuboid(int x1, int y1, int z1, int x2, int y2, int z2);
  ZIntCuboid(const ZIntCuboid &cuboid);

  inline const ZIntPoint& getFirstCorner() const { return m_firstCorner; }
  inline const ZIntPoint& getLastCorner() const { return m_lastCorner; }

  inline void setFirstCorner(const ZIntPoint &corner) {
    m_firstCorner = corner;
  }

  inline void setFirstCorner(int x, int y, int z) {
    m_firstCorner.set(x, y, z);
  }

  inline void setLastCorner(const ZIntPoint &corner) {
    m_lastCorner = corner;
  }

  inline void setLastCorner(int x, int y, int z) {
    m_lastCorner.set(x, y, z);
  }

  void set(int x1, int y1, int z1, int x2, int y2, int z2);
  void set(const ZIntPoint &firstCorner, const ZIntPoint &lastCorner);
  void set(const int *corner);

  /*!
   * \brief Change the size of the cuboid by fixing the first corner
   */
  void setSize(int width, int height, int depth);

  int getWidth() const;
  int getHeight() const;
  int getDepth() const;

  void joinX(int x);
  void joinY(int y);
  void joinZ(int z);

private:
  ZIntPoint m_firstCorner;
  ZIntPoint m_lastCorner;
};

#endif // ZINTCUBOID_H