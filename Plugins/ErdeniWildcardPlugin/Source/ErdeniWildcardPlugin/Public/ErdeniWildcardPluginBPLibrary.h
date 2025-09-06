// Copyright Erdeni Arsalanov, All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ErdeniWildcardPluginBPLibrary.generated.h"

class UPrimaryDataAsset;
class UDataTable;

UCLASS()
class UErdeniWildcardPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Input Prorepries In Data Asset ", Keywords = "Wildcard, Erdeni, Plugin"), Category = "ErdeniWildcardPlugin")
	static void Wildcard(
		UPrimaryDataAsset* TargetDataAsset,
		UDataTable* SourceDataTable,
		FName RowName
		);
};

