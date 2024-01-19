#pragma once

#include "EntityManager.h"
#include "Entity.h"
#include <fstream>

#define PI 3.14159265359

struct PlayerConfig { int SR, CR, FR, FG, FB, OR, OG, OB, OT, V; float S; };
struct EnemyConfig { int SR, CR, OR, OG, OB, OT, VMIN, VMAX, L, SI; float SMIN, SMAX; };
struct BulletConfig { int SR, CR, FR, FG, FB, OR, OG, OB, OT, V, L, SB; float S; };

class Game
{
private:
	sf::RenderWindow	m_window;						
	EntityManager		m_manager;						
	sf::Font			m_font;							
	sf::Text			m_scoreText;					
	sf::Text			m_lifeText;
	sf::Text			m_pauseText;
	sf::Text			m_title;
	PlayerConfig		m_playerConfig;				
	EnemyConfig			m_enemyConfig;					
	BulletConfig		m_bulletConfig;					
	int					m_score              = 0;
	int					m_lifes              = 3;
	int					m_currentFrame       = 0;
	int					m_lastEnemySpawnTime = 0;
	bool				m_paused             = false;				
	bool				m_running            = true;
	bool				m_menu	             = true;
	bool				m_gameOver           = false;

	std::shared_ptr<Entity> m_player;

	void init(const std::string& config);			
	void setPaused(bool paused);					

	void sMovement();							
	void sUserInput();							
	void sLifeSpan();								
	void sRender();								
	void sSpawner();							
	void sCollision();
	
	sf::RectangleShape rect;
	sf::RectangleShape rectp;

	void spawnPlayer();
	void spawnEnemy();
	void spawnSmallEnemies(std::shared_ptr<Entity> entity);
	void spawnBullet(std::shared_ptr<Entity> entity, const Vec2& mousePos);
	void spawnSpecialWeapon(std::shared_ptr<Entity> entity);

public:

	Game(const std::string& configFile);

	void run();
};

