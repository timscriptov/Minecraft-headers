#include <jni.h>
#include "Substrate.h"
#include "mcpe.h"
#include "minecraft/AppPlatform.h"
#include "minecraft/AppPlatformListener.h"
#include "minecraft/AppPlatform_android.h"
#include "minecraft/BlockItem.h"
#include "minecraft/ArmorItem.h"
#include "minecraft/Recipe.h"
#include "minecraft/MinecraftGame.h"
#include "minecraft/ImGui.h"
#include "minecraft/NpcRenderer.h"
#include "minecraft/BlockGraphics.h"
#include "minecraft/ClientInstance.h"
#include "minecraft/Mob.h"
#include "minecraft/RealmsAPI.h"
#include "minecraft/PlayerSkinPacket.h"
#include "minecraft/VanillaClientGameplayEventListener.h"
#include "minecraft/Player.h"
#include "minecraft/PlayerRespawnRandomizerInfo.h"
#include "minecraft/PlayerInventoryProxy.h"
#include "minecraft/PlayerEventListener.h"
#include "minecraft/BlockEventListener.h"
#include "minecraft/CameraManager.h"
#include "minecraft/ClientInputHandler.h"
#include "minecraft/ClientPlayerEventCoordinator.h"
#include "minecraft/GameMode.h"
#include "minecraft/ItemStack.h"
#include "minecraft/MinecraftScreenModel.h"
#include "minecraft/I18n.h"
#include "minecraft/Minecraft.h"
#include "minecraft/ServerInstance.h"
#include "minecraft/LevelStorage.h"
#include "minecraft/Common.h"
#include "minecraft/ExternalFileLevelStorageSource.h"
#include "minecraft/AutomationClient.h"
#include "minecraft/CommandOutputSender.h"
#include "minecraft/CommandOutputMessage.h"
#include "minecraft/CommandOutput.h"
#include "minecraft/ClientCommandOutputSender.h"
#include "minecraft/BlockPos.h"
#include "minecraft/BlockSource.h"
#include "minecraft/Level.h"
#include "minecraft/entity/Monster/Monster.h"
#include "minecraft/entity/Monster/HumanoidMonster.h"
#include "minecraft/entity/Monster/Creeper.h"
#include "minecraft/entity/Monster/Zombie.h"
#include "minecraft/entity/Monster/CaveSpider.h"
#include "minecraft/entity/Animal/Animal.h"
#include "minecraft/entity/Animal/MushroomCow.h"
#include "minecraft/entity/Monster/PigZombie.h"
#include "minecraft/entity/AngryVillagerParticle.h"
#include "minecraft/entity/Bat.h"
#include "minecraft/entity/Ghast.h"
#include "minecraft/entity/HappyVillagerParticle.h"
#include "minecraft/entity/Minecart.h"
#include "minecraft/entity/Shulker.h"
#include "minecraft/entity/SkeletonHeadModel.h"
#include "minecraft/entity/SkeletonHorseTrapGoal.h"
#include "minecraft/entity/Squid.h"
#include "minecraft/entity/ThrownTrident.h"
#include "minecraft/entity/Villager.h"
#include "minecraft/entity/VillagerBase.h"
#include "minecraft/entity/VillagerV2.h"
#include "minecraft/entity/Monster/ZombieVillager.h"
#include "minecraft/entity/WaterAnimal/Dolphin.h"
#include "minecraft/entity/WaterAnimal/Fish.h"
#include "minecraft/entity/WaterAnimal/TropicalFish.h"
#include "minecraft/entity/Animal/Cat.h"
#include "minecraft/entity/Animal/Chicken.h"
#include "minecraft/entity/Animal/Horse.h"
#include "minecraft/entity/Animal/Llama.h"
#include "minecraft/entity/Animal/Panda.h"
#include "minecraft/entity/Animal/Parrot.h"
#include "minecraft/entity/Animal/PolarBear.h"
#include "minecraft/entity/Animal/Rabbit.h"
#include "minecraft/entity/Animal/Sheep.h"
#include "minecraft/entity/Animal/Turtle.h"
#include "minecraft/entity/Animal/Wolf.h"
#include "minecraft/entity/Monster/EnderDragon.h"
#include "minecraft/entity/Monster/EnderMan.h"
#include "minecraft/entity/Monster/Endermite.h"
#include "minecraft/entity/Monster/EvocationIllager.h"
#include "minecraft/entity/Monster/Guardian.h"
#include "minecraft/entity/Monster/LavaSlime.h"
#include "minecraft/entity/Monster/Phantom.h"
#include "minecraft/entity/Monster/Pillager.h"
#include "minecraft/entity/Monster/Skeleton.h"
#include "minecraft/entity/Monster/Slime.h"
#include "minecraft/entity/Monster/Vex.h"
#include "minecraft/entity/Monster/VindicationIllager.h"
#include "minecraft/entity/Monster/Witch.h"
#include "minecraft/entity/Monster/WitherBoss.h"
#include "minecraft/entity/WaterAnimal/WaterAnimal.h"
#include "minecraft/entity/AbstractArrow.h"
#include "minecraft/entity/Goal.h"
#include "minecraft/BinaryStream.h"
#include "minecraft/VanillaBlocks.h"

extern "C"
{
    //Called when the native library is loaded successfully.
    //The game hasn't started yet,you can register hooks here.
    //libminecraftpe.so has already loaded.
    //com.mojang.minecraftpe.MainActivity hasn't created!DO NOT invoke non-static methods in com.mojang.minecraftpe.MainActivity!
    void NMod_OnLoad(JavaVM*vm,JNIEnv*env,const char* minecraft_version_name,const char*nmodapi_version_name,const char*minecraftpe_so_file_path)
    {
        //vm : JavaVM
        //env : JNIEnv.DO NOT cache it!
        //minecraft_version_name : const char*.The version name of minecraft.
        //nmodapi_version_name : const char*.The version name of nmodapi.
        //minecraftpe_so_file_path : const char*.The file path of libminecraftpe.so.Can be used for dlopen.
        
        //Open libminecraftpe.so
        void* imageMCPE = (void*)dlopen(minecraftpe_so_file_path,RTLD_LAZY);
        
        //Use dlsym to get symbol address here.
        
        //Hook methods
        
        //Close libminecraftpe.so
        dlclose(imageMCPE);
    }
    
    //Called when com.mojang.minecraftpe.MainActivity is first created.
    //Activity is created,you can invoke non-static methods here.
    void NMod_OnActivityCreate(JNIEnv*env,jobject thiz,jobject savedInstanceState)
    {
        //env : JNIEnv
        //thiz : jobject.<Lcom/mojang/minecraftpe/MainActivity;>
        //savedInstanceState : jobject.<Landroid/os/Bundle;>
    }
    
    //Called when com.mojang.minecraftpe.MainActivity is finished.
    void NMod_OnActivityFinish(JNIEnv*env,jobject thiz)
    {
        //env : JNIEnv
        //thiz : jobject.<Lcom/mojang/minecraftpe/MainActivity;>
    }
}

JNIEXPORT jint JNI_OnLoad(JavaVM*vm,void*)
{
	return JNI_VERSION_1_6;
}
