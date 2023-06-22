// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

// C++에서 Reflection 기능을 사용하기 위해 사용.
// 언리얼 클래스임을 컴파일러에게 알려줌.
// Reflection : 컴파일러가 읽을 수 있는 주석.
UCLASS()
class UNREAL_BASIC_API AMyActor : public AActor
{
	// UCLASS()와 세트.
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh = nullptr;

	UPROPERTY(EditAnywhere, Category = Status)
	int32 Hp;

	UPROPERTY(VisibleAnywhere, Category = Status)
	int32 Mp = 100;

	UPROPERTY(EditAnywhere, Category = Status)
	float RotateSpeed = 30.f;
};

int32 iCount = 0;