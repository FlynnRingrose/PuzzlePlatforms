#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformTrigger.generated.h"

UCLASS()
class PUZZLEPLATFORMS_API APlatformTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	APlatformTrigger();
    virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* TriggerVolume;
};
