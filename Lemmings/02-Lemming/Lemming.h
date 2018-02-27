#ifndef _LEMMING_INCLUDE
#define _LEMMING_INCLUDE


#include "Sprite.h"
#include "VariableTexture.h"


// Lemming is basically a Sprite that represents one lemming. As such it has
// all properties it needs to track its movement and collisions.


class Lemming
{

public:
	void init(const glm::vec2 &initialPosition, ShaderProgram &shaderProgram);
	void update(int deltaTime);
	void render();
	
	void setMapMask(VariableTexture *mapMask);
	
private:
	int collisionFloor(int maxFall);
	bool collision();
	
private:
	Texture spritesheet;
	Sprite *sprite;
	VariableTexture *mask;

};


#endif // _LEMMING_INCLUDE

