#pragma once

#include <scene/scene.h>
#include <managers/base_manager.h>

class SceneManager : public BaseManager
{
public:
    SceneManager(const SceneManager&) = default;
    SceneManager& operator=(const SceneManager&) = delete;
    ~SceneManager() = default;

    static std::shared_ptr<SceneManager> instance();

    [[nodiscard]] std::shared_ptr<Scene> get_scene() const;
    [[nodiscard]] std::shared_ptr<Camera> get_cam() const;

    void set_scene(std::shared_ptr<Scene> scene_);
    void set_cam(const size_t &cam_numb);

private:
    SceneManager();

    std::shared_ptr<Scene> _scene;
    std::shared_ptr<Camera> current_cam;
};
