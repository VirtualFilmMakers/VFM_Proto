// Fill out your copyright notice in the Description page of Project Settings.


#include "D_GameInstance.h"
#include "D_SideToolWidget.h"


UD_GameInstance::UD_GameInstance()
{
    ConstructorHelpers::FClassFinder<UD_SideToolWidget> TempWidget(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/DKW/UI/SideTool/BP_SideToolWidget.BP_SideToolWidget_C'"));

    if (TempWidget.Succeeded()) {
        sideToolPanel = TempWidget.Class;
    }
}

void UD_GameInstance::OpenSideToolPanel()
{
    if (sideToolPanel)
    {
        UD_SideToolWidget* WidgetInstance = CreateWidget<UD_SideToolWidget>(GetWorld(), sideToolPanel);
        if (WidgetInstance)
        {
            WidgetInstance->AddToViewport();
        }
    }
}

void UD_GameInstance::CloseSideToolPanel()
{

}
