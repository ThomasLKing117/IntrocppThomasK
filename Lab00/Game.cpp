#include "Game.h"

Hero Game::Battle(Hero &hero1, Hero &hero2)
{
	hero1.Fight(&hero2);

	/*based on what just happened return a dude...
	may need a while loop here*/
	return Hero();
}