#ifdef RAG_BASEITEMS

modded class rag_baseitems_container_base
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
modded class rag_baseitems_placeable_base
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
modded class rag_baseitems_statics_base
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