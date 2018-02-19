#define _USE_MATH_DEFINES
//helpotus ettei tarvii tehdä include listaa joka paikkaan (rivi 4-8)
#include <math.h>
#include "vec2.h"
#include "vec3.h"
#include "vec4.h"
#include "mat4.h"
//eroaa videosta, mutta ajaa saman asian ja ei pitäisi vaikuttaa jatkossa koodiin tai sen kirjoittamiseen.
//asteet radiaaneiksi
namespace Engine 
{
		inline float toRadians(float degrees) 
		{
			return degrees * M_PI / 180.0f;
		}
}
