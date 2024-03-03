// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"


UCLASS()
class GALAGA_USFX_L01_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* NaveEnemigaMesh;
private:
	
	float stamina;
	float speed;
	float damage;
	FString name;
	float shutTime;
	float posicionX;
	float posicionY;
	float posicionZ;
	//FVector posicion;
	//reemplazo a posicones XYZ
	
	public:
	//Para leer valores
		FORCEINLINE float GetStamina() const { return stamina; }
		FORCEINLINE float GetSpeed() const { return speed; }
		FORCEINLINE float GetDamage() const { return damage; }
		FORCEINLINE FString GetName() const { return name; }
		FORCEINLINE float GetShutTime()const { return shutTime; }
		FORCEINLINE float GetPosicionX() const { return posicionX; }
		FORCEINLINE float GetPosicionY() const { return posicionY; }
		FORCEINLINE float GetPosicionZ() const { return posicionZ; }

	//Para reescribir valores
	FORCEINLINE void SetStamina(float _stamina){stamina=_stamina;}
	FORCEINLINE void SetSpeed(float _speed) { speed = _speed; }
	FORCEINLINE void SetDamage(float _damage) { damage = _damage; }
	FORCEINLINE void SetName(FString _name) { name = _name; }
	FORCEINLINE void SetShutTime(float _shutTime) { shutTime = _shutTime; }
	FORCEINLINE void SetPosicionX(float _posicionX) { posicionX = _posicionX; }
	FORCEINLINE void SetPosicionY(float _posicionY) { posicionY = _posicionY; }
	FORCEINLINE void SetPosicionZ(float _posicionZ) { posicionZ = _posicionZ; }

		
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
