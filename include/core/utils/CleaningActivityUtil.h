// Forward declare the enum to avoid #including the enum in this file
namespace Core::Enums
{
    enum class CleaningActivityType : char;
}

namespace Core::Utils
{
    class CleaningActivityUtil
    {
    public:
        static Enums::CleaningActivityType FromActivityCode(char activityCode);
        static Enums::CleaningActivityType PromptAndReturnActivity();
    };
}