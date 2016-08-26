#pragma once
#include <vector>
#include <string>

struct Socket
{
public:
	int points;
	float diameter;
};

struct Outcrop
{
public:
	std::vector<Socket*> sockets;
};

struct Level
{
public:
	std::vector<Socket*> sockets;
	std::string name = "level #";
};

class Structures
{
	// Singleton container for structure components

public:
	static Structures* GetInstance();
	void AddOutCrop(Outcrop* outcrop);
	std::vector<Outcrop*> GetOutcrops();
	void AddLevel(Level* level);
	std::vector<Level*> GetLevels();

private:
	std::vector<Outcrop*> m_outcrops;
	std::vector<Level*> m_levels;
	Structures();
};

