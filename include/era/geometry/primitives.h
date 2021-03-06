#ifndef ERA_GEOMETRY_PRIMITIVES_H_
#define ERA_GEOMETRY_PRIMITIVES_H_

#include "era/geometry/math.h"

namespace era
{

namespace geometry
{

class Mesh;

void createBox(const Vec3f& min, const Vec3f& max, Mesh& mesh);

}

}

#endif
