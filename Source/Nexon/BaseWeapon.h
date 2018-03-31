// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.h"
#include "MainActorPool.h"
#include "BaseWeapon.generated.h"

UCLASS()
class NEXON_API ABaseWeapon : public AActor
{
	GENERATED_BODY()

//Components
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Mesh;


//Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
		TSubclassOf<ABaseProjectile> Projectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
		FName Name;

private:
	int32 AmmoPoolIndex;
	TArray<FName> SocketNames;

//Functions
public:
	void Fire();










//Engine stuff
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
