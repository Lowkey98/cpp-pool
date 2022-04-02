# include "Zombie.hpp"
Zombie* newZombie( std::string name)
{
	return (new Zombie(name));
}

void randomChump( std::string name)
{
	Zombie z(name);
	z.announce();
}

int main()
{
	randomChump("malokich");
	Zombie *zombie_ptr = newZombie("maloki");
	zombie_ptr->announce();
	delete zombie_ptr;
}