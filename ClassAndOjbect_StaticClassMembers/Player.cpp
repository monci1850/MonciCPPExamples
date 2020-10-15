#include "Player.h"

int Player::num_players{ 0 };

Player::Player(std::string name_val /*= "None"*/, int health_val /*= 0*/, int xp_val /*= 0*/)
	:name{name_val}, health{health_val}, xp{xp_val}
{
	++num_players;
}

Player::Player(const Player& source)
	:Player(source.name, source.health, source.xp)
{

}

Player::~Player()
{
	--num_players;
}

int Player::get_num_players()
{
	//Now one thing to remember because this function is static.
	//It only has access to static variables.
	//return health;
	return num_players;
}

