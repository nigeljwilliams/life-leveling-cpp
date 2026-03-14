#include "LifeLevelingApp.h"
#include <iostream>

Core::LifeLevelingApp* Core::LifeLevelingApp::Instance()
{
    if (!Core::LifeLevelingApp::_instance)
    {
        Core::LifeLevelingApp::_instance = std::unique_ptr<Core::LifeLevelingApp>(new LifeLevelingApp());
    }
    
    return _instance.get();
}

void Core::LifeLevelingApp::Run()
{
    std::cout << "Enter any key to continue..." << std::endl;
    std::cin.get();
}

std::unique_ptr<Core::LifeLevelingApp> Core::LifeLevelingApp::_instance = nullptr;