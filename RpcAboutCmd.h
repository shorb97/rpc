#pragma once
#include "RpcCommand.h"

class CRpcAboutCmd : public CRpcTestCommand
{
public:
	CRhinoCommand::result RunRpcCommand(const CRhinoCommandContext& context) override;
	const wchar_t * EnglishCommandName() override;
	UUID CommandUUID() override;
};

