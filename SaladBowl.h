
#pragma once

#include "bowls_export.h"

#include "AbstractFruit.h"
#include "AbstractBowl.h"

#include <memory>

class BOWLS_EXPORT SaladBowl : public AbstractBowl
{
public:
	std::unique_ptr<AbstractFruit> add(std::unique_ptr<AbstractFruit> fruit) override;
};
