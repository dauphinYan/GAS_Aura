#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AuraEffectActor.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class GAS_AURA_API AAuraEffectActor : public AActor
{
	GENERATED_BODY()

public:
	AAuraEffectActor();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Applied Effects")
	TSubclassOf<UGameplayEffect> InstanceGameplayEffectClass;

	UFUNCTION(BlueprintCallable, Category = "Applied Effects")
	void ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass);
};
