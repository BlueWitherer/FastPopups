#include <Geode/Geode.hpp>

#include <alphalaneous.alphas_geode_utils/include/ObjectModify.hpp>

using namespace geode::prelude;

static bool s_noForce = Mod::get()->getSettingValue<bool>("no-force");

$on_mod(Loaded) {
    listenForSettingChanges<bool>(
        "no-force",
        [](bool value) {
            s_noForce = value;  // nanosecond super ultra balls optimization fr
        });
};

class $baseModify(FastMenuFLAlertLayer, FLAlertLayer) {
    void modify() {
        if (m_noElasticity && s_noForce) return;  // if you insist!
        m_noElasticity = GameManager::get()->getGameVariable(GameVar::FastMenu);
    };
};