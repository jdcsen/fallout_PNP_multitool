///@file character.h The header file for the character class.

#include <I_Item.h>
#include <I_Weapon.h>
#include <I_Armor.h>

///Represents the race of a character.
enum Race = {
  human,
  ghoul,
  super_mutant;
  deathclaw,
  dog,
  robot
};

///Represents the SPECIAL attributes of some character.
struct SPECIAL
{
  int strength;
  int perception;
  int endurance;
  int charisma;
  int intelligence;
  int agility;
  int luck;
};

///Represents the skill attributes of some character
struct Skills
{
  ///Creates a Skills struct with no set attributes.
  Skills()
  {

  }
  ///Creates a Skills struct with values derived from the passed SPECIAL.
  Skills(SPECIAL s)
  {
    small_guns = 5+(4*s.agility);
    big_guns = (2*s.agility);
    energy_weapons = (2*s.agility);
    unarmed = 30+(2*(s.agility+s.strength));
    melee_weapons = 20+(2*(s.agility+s.strength));
    throwing = (4*s.agility);
    first_aid = (2*(s.perception+s.agility));
    doctor = 5+(s.perception+s.endurance);
    sneak = 5+(3*s.agility);
    lockpick = 10+(s.perception+s.agility);
    steal = (3*s.agility);
    traps = 10+(s.perception+s.agility);
    science = (4*s.intelligence);
    repair = (3*s.intelligence);
    pilot = (2*(s.agility+s.perception));
    speech = (5*s.charisma);
    barter = (4*s.charisma);
    gambling = (4*s.luck);
    outdoorsma = (2*(s.endurance+s.intelligence));
  }
  
  int small_guns;
  int big_guns;
  int energy_weapons;
  int unarmed;
  int melee_weapons;
  int throwing;
  int first_aid;
  int doctor;
  int sneak;
  int lockpick;
  int steal;
  int traps;
  int science;
  int repair;
  int pilot;
  int speech;
  int barter;
  int gambling;
  int outdoorsman;
};

///Represents the defensive characteristics of a character.
///
/// @note: Damage Resistance values range between 0 and 1.
struct Defense
{
  int AC;
  int normal_dt;
  float normal_dr;
  int laser_dt;
  float laser_dr;
  int fire_dt;
  float fire_dr;
  int plasma_dt;
  float plasma_dr;
  int explode_dt;
  float explode_dr;

  float poison_dr;
  float gas_inhale_dr;
  float gas_contact_dr;
  float electricity_dr;
};

///Represents the current state of a character.
struct State
{
  int current_hp;
  int current_ap;
  int level;
  int XP;
};

///Represents uncategorized character attributes.
struct Character_attributes
{
  Race race;
  int max_hp;
  int hp_per_level;
  int healing_rate;
  int max_ap;
  int melee_damage;
  int crit_chance;
  int skill_pt_per_level;
  int level_per_perk;
}

///Represents a character and their attributes, including possessions and clothing. 
class I_Character
{
  /// Called when a character is destroyed.
  virtual ~I_Character()
  {

  }

  /// Returns a const copy of the base SPECIAL struct that applies to this character.
  virtual const SPECIAL get_base_special() = 0;
  /// Returns a const copy of the overall SPECIAL struct that applies to this character.
  virtual const SPECIAL get_special() = 0;
  /// Returns a const copy of the base skills struct that applies to this character.
  virtual const Skills get_base_skills() = 0;
  /// Returns a const copy of the overall skills struct that applies to this character.
  virtual const Skills get_skills() = 0;
  /// Returns a const copy of the base Defense struct that applies to this character.
  virtual const Defense get_base_defense() = 0;
  /// Returns a const copy of the overall Defense struct that applies to this character.
  virtual const Defense get_defense() = 0;
  /// Returns a const copy of the State struct that applies to this character.
  virtual const State get_state() = 0;
  ///Returns a const copy of the base character attribute struct for this character.
  virtual const Character_attributes get_base_derived_attributes() = 0;
  ///Returns a const copy of the overall character attribute struct for this character.
  virtual const Character_attributes get_derived_attributes() = 0;
  /// Returns the weapon the character is holding in their left hand.
  virtual const I_Weapon get_left_hand() = 0;
  /// Returns the weapon the character is holding in their right hand.
  virtual const I_Weapon get_right_hand() = 0;
  /// Fills the passed list with all of the armor the character currently has equiped.
  virtual const I_Armor get_armor(std::list<I_Armor> armor_list) = 0;
  /// Fills the passed list with all of the items that this character currently possesses.
  virtual void get_items(std::list<I_Item>* item_list) = 0;
};
