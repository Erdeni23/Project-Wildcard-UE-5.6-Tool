// Copyright Erdeni Arsalanov, All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FErdeniWildcardPluginModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
