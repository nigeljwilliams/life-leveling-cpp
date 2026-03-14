#include "CleaningActivityUtil.h"
#include "../enums/CleaningActivityType.h"
#include <iostream>

Core::Enums::CleaningActivityType
Core::Utils::CleaningActivityUtil::FromActivityCode(char activityCode)
{
    if (activityCode >= 'A' && activityCode <= 'H')
    {
        return static_cast<Core::Enums::CleaningActivityType>(activityCode);
    }

    return Core::Enums::CleaningActivityType::NONE;
}

Core::Enums::CleaningActivityType
Core::Utils::CleaningActivityUtil::PromptAndReturnActivity()
{
    std::cout << std::endl << "What cleaning activity do you want to record?"
        << std::endl << "[A] DISHES, [B] LAUNDRY, [C] MOPPING, [D] SWEEPING, "
        << "[E] TOILET, [F] STOVE, [G] ROOM, [H] DUSTING" << std::endl
        << "[Q] GO BACK" << std::endl;

    std::string line;
    if (std::getline(std::cin, line))
    {
        if (line.length() == 1)
        {
            char activityCode = line.at(0);

            return Core::Utils::CleaningActivityUtil::FromActivityCode(activityCode);
        }
        
        std::cerr << std::endl << "You entered an invalid value..." << std::endl;
    }

    return Core::Enums::CleaningActivityType::NONE;
}