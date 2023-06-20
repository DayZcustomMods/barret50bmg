modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterFireArms( pType, pBehavior);
		
		pType.AddItemInHandsProfileIK("barret50", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
	}
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
	
		//Magazines
		pType.AddItemInHandsProfileIK("M82_Mag", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
	}
};