#include <memory>

namespace Core
{
    class LifeLevelingApp
    {
    public:
        static LifeLevelingApp* Instance();
        /**
         * Handles all the logic for running the app.
         */
        void Run();
    private:
        LifeLevelingApp() = default;
        ~LifeLevelingApp() = default;

        static std::unique_ptr<LifeLevelingApp> _instance;

        // Give the default_delete access to my private variables (e.g. _instance) so it can
        //  free resources since my destructor is private
        friend std::default_delete<LifeLevelingApp>;
    };
}
