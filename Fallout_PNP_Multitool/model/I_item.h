#ifndef I_ITEM_H
#define I_ITEM_H
namespace Fallout_PnP
{
    namespace Model {
        /// An item is any object that can exist in a character's inventory.
        ///
        /// Items have globally unique ID's, human readable names, and weights.
        class I_item
        {
            ///Cleans up the item.
           virtual ~I_item()
            {

            }

            /// Returns the globally unique ID for this object.
            virtual int get_unique_id() = 0;

            /// Returns the mass of this item.
            virtual double get_weight() = 0;

            /// Returns the human readable name for this item.
            virtual std::String get_name() = 0;
        };
    }
}
#endif // I_ITEM_H
