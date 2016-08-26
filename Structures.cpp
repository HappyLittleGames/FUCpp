#include "Structures.h"

static Structures* instance = nullptr;

Structures* Structures::GetInstance()
{
	if(instance == nullptr)
	{
		instance = new Structures();
	}
	return instance;
}

void Structures::AddOutCrop(Outcrop * outcrop)
{
	m_outcrops.push_back(outcrop);
}

std::vector<Outcrop*> Structures::GetOutcrops()
{
	return m_outcrops;
}

void Structures::AddLevel(Level* outcrop)
{
	m_levels.push_back(outcrop);
}

std::vector<Level*> Structures::GetLevels()
{
	return m_levels;
}

Structures::Structures()
{
	m_outcrops.clear();
}