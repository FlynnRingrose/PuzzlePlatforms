// Flynn's Rad Copyright

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

UCLASS()
class PUZZLEPLATFORMS_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()
    
protected:
    virtual bool Initialize();
	
private:
    UPROPERTY(Meta = (BindWidget))
    class UButton* CancelButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UButton* QuitButton;
	
    UFUNCTION()
    void CancelPressed();
    
    UFUNCTION()
    void QuitPressed();
	
};
