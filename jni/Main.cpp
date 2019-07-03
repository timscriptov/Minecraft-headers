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
