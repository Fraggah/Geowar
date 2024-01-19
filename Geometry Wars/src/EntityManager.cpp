#include "EntityManager.h"

EntityManager::EntityManager()
	: m_totalEntities(0)
{
}

void EntityManager::removeDeadEntities(EntityVec& vec)
{
	std::erase_if(vec, [](auto& entity) { return !entity->isActive(); });
}


void EntityManager::update()
{
	for (auto &e : m_toAdd)
	{
		m_entities.push_back(e);
		m_entityMap[e->tag()].push_back(e);
	}

	removeDeadEntities(m_entities);

	for (auto& [tag, entityVec] : m_entityMap)
	{
		removeDeadEntities(entityVec);
	}
	m_toAdd.clear();
}

std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag)
{
	auto e = std::shared_ptr<Entity>(new Entity(m_totalEntities++, tag));
	m_toAdd.push_back(e);
	return e;
}

const EntityVec& EntityManager::getEntities()
{
	return m_entities;
}

const EntityVec& EntityManager::getEntities(const std::string& tag)
{
	return m_entityMap[tag];
}

void EntityManager::gameOver() 
{
	m_entities.clear();
	m_toAdd.clear();
	m_entityMap.clear();
}

