class barret50_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && HuntingOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
			
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "HuntingOptic" );		
		SpawnAttachedMagazine("M82_Mag");
	}
};