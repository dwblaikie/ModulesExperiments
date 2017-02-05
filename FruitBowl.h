
#pragma once

#include "bowls_export.h"

#include "AbstractFruit.h"
#include "AbstractBowl.h"

class BOWLS_EXPORT FruitBowl : public AbstractBowl
{
public:
	FruitBowl();

	std::unique_ptr<AbstractFruit> add(std::unique_ptr<AbstractFruit> fruit) override;
};
