#pragma once
#include <stdio.h>
#include <string>
#include <iostream>

namespace Cheat::Features
{
	class DamageHack : public Singleton<DamageHack>
	{
	public:
		DamageHack();

	private:
		static void PIPHNBOBFEF_KBCIIEFLPGB_Hook(app::PIPHNBOBFEF* __this, app::ESpecialState__Enum specialState, int64_t someInt1, int64_t someInt2, int64_t someInt3, app::String* buffName, MethodInfo* method);
	};
}
