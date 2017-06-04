#ifndef I_WEAPON_H
#define I_WEAPON_H
namespace Fallout_PnP
{
    namespace Model
    {

        enum Damage_type{
            normal,
            laser,
            fire,
            plasma,
            explode
        };

        ///A weapon is anything that inflicts damage.
        class I_weapon
        {
            virtual ~I_weapon()
            {

            }
            ///Returns the damage type that this weapon applies.
            virtual Damage_type get_damage_type() = 0;
        };
    }
}

#endif // I_WEAPON_H
