// Flynn's Rad Copyright

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzlePlatformsGameInstance.generated.h"

UCLASS()
class PUZZLEPLATFORMS_API UPuzzlePlatformsGameInstance : public UGameInstance
{
	GENERATED_BODY()
    
public:
    UPuzzlePlatformsGameInstance(const FObjectInitializer & ObjectInitializer);
    
    virtual void Init();
    
    UFUNCTION(BlueprintCallable)
    void LoadMenu();
    
    UFUNCTION(Exec)
    void Host();
    
    UFUNCTION(Exec)
    void Join(const FString& Address);
    
private:
    TSubclassOf<class UUserWidget> MenuClass;
};
