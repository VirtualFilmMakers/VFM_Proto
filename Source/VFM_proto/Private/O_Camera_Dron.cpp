// Fill out your copyright notice in the Description page of Project Settings.


#include "O_Camera_Dron.h"
#include "O_CameraBase.h"
#include "Camera/CameraComponent.h"
#include "../Plugins/EnhancedInput/Source/EnhancedInput/Public/EnhancedInputSubsystems.h"
#include "GameFramework/SpringArmComponent.h"

AO_Camera_Dron::AO_Camera_Dron()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBase_SpringArmComp->bEnableCameraLag = false;
	CameraBase_SpringArmComp->bEnableCameraRotationLag = false;




	//d4_Drone1--------------------------------------
	d4_Drone1= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("d4_Drone1"));
	d4_Drone1->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempd4_Drone1(TEXT("/Script/Engine.StaticMesh'/Game/DKW/Asset/Camera/Drone/Resource/d4_Drone1.d4_Drone1'"));
	if (tempd4_Drone1.Succeeded())
	{
		d4_Drone1->SetStaticMesh(tempd4_Drone1.Object);
	}
	//d4_Object001--------------------------------------
	d4_Object001 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("d4_Object001"));
	d4_Object001->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempd4_Object001(TEXT("/Script/Engine.StaticMesh'/Game/DKW/Asset/Camera/Drone/Resource/d4_Object001.d4_Object001'"));
	if (tempd4_Object001.Succeeded())
	{
		d4_Object001->SetStaticMesh(tempd4_Object001.Object);
	}

	//d4_Object002--------------------------------------
	d4_Object002 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("d4_Object002"));
	d4_Object002->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempd4_Object002(TEXT("/Script/Engine.StaticMesh'/Game/DKW/Asset/Camera/Drone/Resource/d4_Object002.d4_Object002'"));
	if (tempd4_Object002.Succeeded())
	{
		d4_Object002->SetStaticMesh(tempd4_Object002.Object);
	}
	//d4_Object003--------------------------------------
	d4_Object003 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("d4_Object003"));
	d4_Object003->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempd4_Object003(TEXT("/Script/Engine.StaticMesh'/Game/DKW/Asset/Camera/Drone/Resource/d4_Object003.d4_Object003'"));
	if (tempd4_Object003.Succeeded())
	{
		d4_Object003->SetStaticMesh(tempd4_Object003.Object);
	}

	//d4_Object004--------------------------------------
	d4_Object004 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("d4_Object004"));
	d4_Object004->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempd4_Object004(TEXT("/Script/Engine.StaticMesh'/Game/DKW/Asset/Camera/Drone/Resource/d4_Object004.d4_Object004'"));
	if (tempd4_Object004.Succeeded())
	{
		d4_Object004->SetStaticMesh(tempd4_Object004.Object);
	}

	
}

void AO_Camera_Dron::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DronInputMapping, 0);
		}
	}
}

void AO_Camera_Dron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AO_Camera_Dron::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
