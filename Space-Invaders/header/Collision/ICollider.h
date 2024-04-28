#pragma once
#include <SFML/Graphics.hpp>

namespace Collision
{
    enum class CollisionState
    {
        ENABLED,
        DISABLED,
    };

    class ICollider
    {
    private:
        CollisionState collision_state;

    public:
        ICollider();
        virtual ~ICollider();

        virtual const sf::Sprite& getColliderSprite();
        virtual void onCollision(ICollider* other_collider);

        void enableCollision();
        void disableCollision();
        CollisionState getCollisionState();
    };
}
