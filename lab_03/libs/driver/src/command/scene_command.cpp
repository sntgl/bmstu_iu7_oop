#include <commands/scene_command.h>

#include <utility>

DrawScene::DrawScene(std::shared_ptr<BaseDrawer> drawer) : _drawer(std::move(drawer)) {
}

void DrawScene::execute(std::shared_ptr<AbstractController> &facade) {
    facade->draw_scene(_drawer);
}