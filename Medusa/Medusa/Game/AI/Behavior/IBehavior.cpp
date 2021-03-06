// Copyright (c) 2015 fjz13. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.
#include "MedusaPreCompiled.h"
#include "IBehavior.h"
#include "CoreLib/Common/pugixml/pugixml.hpp"

MEDUSA_BEGIN;


IBehavior::IBehavior()
{

}

IBehavior::~IBehavior(void)
{
	
}


const IBehavior* IBehavior::Behave(IBrainBody& brainBody, void* sender) const
{
	return this;
}

const IBehavior* IBehavior::ReceiveEvent(IBrainBody& brainBody, void* sender, IEventArg& e) const
{
	return nullptr;
}

bool IBehavior::LoadFromXmlNode(const pugi::xml_node& node)
{
	StringRef paramter = node.attribute("Paramter").value();
	SetParamter(paramter);
	return true;
}





MEDUSA_END;