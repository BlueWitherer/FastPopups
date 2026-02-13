#include <Geode/Geode.hpp>

#include <alphalaneous.alphas_geode_utils/include/ObjectModify.hpp>

using namespace geode::prelude;

class $baseModify(FLAlertLayer) {
    void modify() {
        if (auto gm = GameManager::get()) m_noElasticity = gm->getGameVariable("0168");
    };
};