#include <Geode/Geode.hpp>

#include <alphalaneous.alphas_geode_utils/include/ObjectModify.hpp>

using namespace geode::prelude;

class $baseModify(FLAlertLayer) {
    void modify() {
        if (m_noElasticity && Mod::get()->getSettingValue<bool>("no-force")) return; // if you insist!
        m_noElasticity = GameManager::get()->getGameVariable("0168");
    };
};