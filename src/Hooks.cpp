#include "Hooks.h"
namespace plugin {
    void Hooks::install() {
        QuitGameHook::install();
        QuitGameDetoursHook::install();
    }

    void Hooks::quitGame() {
        logger::info("Game quitting");
    }
}  // namespace plugin
