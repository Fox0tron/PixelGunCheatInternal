﻿#pragma once
#include <chrono>
#include <stdbool.h>
#include <thread>

#include "../ModuleBase.h"
#include "../../Data/Armor.h"
#include "../../Hooks/Hooks.h"
#include "../../Internal/Functions.h"

static inline std::vector<std::wstring> armors = {L""};
static BKCDropdown __add_armor_dropdown = {"Wear Select", armor_names[0].id, armors, "", true};
static BKCCheckbox __add_armor_all = { "Add All", false, "WARNING, THIS MAY TAKE A WHILE" };
static BKCModule __add_armor = { "Add Wear", EXPLOIT, 0x0, false, {&__add_armor_dropdown, &__add_armor_all} };

static bool adding_all = false;
static int add_all_progress = 0;

class ModuleAddArmor : ModuleBase
{
public:
    ModuleAddArmor() : ModuleBase(&__add_armor)
    {
        bool flag = false;
        for (auto armor_name : armor_names)
        {
            if (!flag)
            {
                __add_armor_dropdown.values[0] = armor_name.id;
            }
            else
            {
                __add_armor_dropdown.add_value(armor_name.id);
            }
            flag = true;
        }
    }
    
    void do_module(void* arg) override
    {
        if (Hooks::tick % 20 != 0) return;
        if (__add_armor_all.enabled)
        {
            if (!adding_all)
            {
                Logger::log_info("Adding All Wears");
            }
            adding_all = true;
            int count = -1;
            Logger::log_info("Adding Progress: " + std::to_string(add_all_progress));
            for (auto armor_name : armor_names)
            {
                count++;
                if (count < add_all_progress) continue;
                if (count > add_all_progress + 25)
                {
                    add_all_progress = add_all_progress + 25;
                    break;
                }
                Functions::GiveWear(Hooks::create_system_string_w(armor_name.id));
            }
            if (count >= armor_names.size() - 1)
            {
                Logger::log_info("Done Adding");
                adding_all = false;
                add_all_progress = 0;
            }
        }
        else
        {
            Functions::GiveWear(Hooks::create_system_string_w(__add_armor_dropdown.current_value));
        }

        if (!adding_all) this->toggle();
    }
};
