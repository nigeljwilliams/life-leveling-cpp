#include "ActivityUtil.h"
#include "../enums/ActivityType.h"
#include <iostream>

Core::Enums::ActivityType Core::Utils::ActivityUtil::FromActivityCode(char activityCode)
{
    if (activityCode >= 'A' && activityCode <= 'E')
    {
        return static_cast<Core::Enums::ActivityType>(activityCode);
    }

    return Core::Enums::ActivityType::NONE;
}

Core::Enums::ActivityType PromptAndReturnActivity()
{
    std::cout << std::endl << "What activity do you want to record?" << std::endl
        << "[A] CLEANING, [B] EXERCISE, [C] FOOD PREP, [D] HYGIENE, "
        << "[E] YARD WORK" << std::endl << "[Q] Quit/Exit Program" << std::endl;

    std::string line;
    if (std::getline(std::cin, line))
    {
        if (line.length() == 1)
        {
            char activityCode = line.at(0);

            return Core::Utils::ActivityUtil::FromActivityCode(activityCode);
        }
        
        std::cerr << std::endl << "You entered an invalid value..." << std::endl;
    }

    return Core::Enums::ActivityType::NONE;
}