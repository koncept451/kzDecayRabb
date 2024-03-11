#ifdef MuchStuffPack

modded class Msp_Openable_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_Item
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_Openable_Placeable_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_Greenhouse_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_Planter_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_Storage_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_AmmoStorage_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};
modded class Msp_InventoryStorage_Base
{
      //how many nails per day will it consume | it needs to be higher than 0 to decay (optimization to prevent it from unnecessarily decaying all items)
    override float GetCostToUpkeep()
    {
        return 0.00001;
    }

    // time until it decays full in seconds | default is 24 hours
    override float GetTimeToDecay()
    {
        return 24.0 * 60.0 * 60.0;
    }
};

#endif