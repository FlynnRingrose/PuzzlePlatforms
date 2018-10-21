// Flynn's Rad Copyright

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "MainMenu.generated.h"

UCLASS()
class PUZZLEPLATFORMS_API UMainMenu : public UMenuWidget
{
	GENERATED_BODY()
    
protected:
    virtual bool Initialize();
	
private:
	UPROPERTY(Meta = (BindWidget))
    class UButton* HostButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UButton* JoinButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UButton* QuitButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UButton* CancelJoinMenuButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UButton* ConfirmJoinMenuButton;
    
    UPROPERTY(Meta = (BindWidget))
    class UWidgetSwitcher* MenuSwitcher;
    
    UPROPERTY(Meta = (BindWidget))
    class UWidget* JoinMenu;
    
    UPROPERTY(Meta = (BindWidget))
    class UWidget* MainMenu;
    
    UPROPERTY(Meta = (BindWidget))
    class UEditableTextBox* IPAddressField;
    
    UFUNCTION()
    void HostServer();
    
    UFUNCTION()
    void JoinServer();
    
    UFUNCTION()
    void OpenJoinMenu();
    
    UFUNCTION()
    void OpenMainMenu();
    
    UFUNCTION()
    void QuitPressed();
};
