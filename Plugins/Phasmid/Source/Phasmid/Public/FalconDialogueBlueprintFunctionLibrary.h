#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EFalconDialogueRowResult.h"
#include "FalconDialogueBlueprintFunctionLibrary.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class UFalconDialogueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFalconDialogueBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void GetDialogueTableRow(const FDataTableRowHandle& RowHandle, UAkAudioEvent*& VoicedLine, FText& Text, EFalconDialogueRowResult& Result);
    
};

