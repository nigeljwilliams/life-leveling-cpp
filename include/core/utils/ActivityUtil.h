// Forward declare the enum to avoid #including the enum in this file
namespace Core::Enums
{
    enum class ActivityType : char;
}

namespace Core::Utils
{
    class ActivityUtil
    {
    public:
        static Enums::ActivityType FromActivityCode(char activityCode);
        static Enums::ActivityType PromptAndReturnActivity();
    };
}