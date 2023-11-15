#include "math.h"


float math::vectNorme(sf::Vector2f oVect) {
	return sqrt((oVect.x * oVect.x) + (oVect.y * oVect.y));
}

sf::Vector2f math::vectNormalized(sf::Vector2f oVect) {
	float vectNorme = math::vectNorme(oVect);
	return { oVect.x / vectNorme, oVect.y / vectNorme };
}