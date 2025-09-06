// Copyright Erdeni Arsalanov, All Rights Reserved.

#include "ErdeniWildcardPluginBPLibrary.h"
#include "ErdeniWildcardPlugin.h"

UErdeniWildcardPluginBPLibrary::UErdeniWildcardPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UErdeniWildcardPluginBPLibrary::Wildcard(
		UPrimaryDataAsset* TargetDataAsset,
		UDataTable* SourceDataTable,
		FName RowName
		)
{
	if (!TargetDataAsset || !SourceDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("Wildcard: TargetDataAsset или SourceDataTable недействительны."));
		return;
	}


	const UScriptStruct* RowStruct = SourceDataTable->GetRowStruct();
	if (!RowStruct)
	{
		UE_LOG(LogTemp, Error, TEXT("Wildcard: У таблицы '%s' не определена структура."), *SourceDataTable->GetName());
		return;
	}
	
	const uint8* RowDataPtr = SourceDataTable->GetRowMap().FindRef(RowName);
	if (!RowDataPtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Wildcard: Строка '%s' не найдена в таблице '%s'."), *RowName.ToString(), *SourceDataTable->GetName());
		return;
	}

	for (TFieldIterator<FProperty> i(RowStruct); i; ++i)
	{
		FProperty* SourceProperty = *i;
		FString SourcePropertyName = SourceProperty->GetAuthoredName();
		FProperty* TargetProperty = TargetDataAsset->GetClass()->FindPropertyByName(*SourcePropertyName);

		UE_LOG(LogTemp, Log, TEXT("Я нашел в таблице свойство: '%s' !"), *SourcePropertyName);

		if (TargetProperty && TargetProperty->SameType(SourceProperty))
		{
			UE_LOG(LogTemp, Warning, TEXT("У меня получилось ! Копирую данные для свойства '%s'."), *SourcePropertyName);
			
			void* TargetPtr = TargetProperty->ContainerPtrToValuePtr<void>(TargetDataAsset); 
			const void* SourcePtr = SourceProperty->ContainerPtrToValuePtr<void>(RowDataPtr);
			
			TargetProperty->CopyCompleteValue(TargetPtr, SourcePtr);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("ОШИБКА ТИПА для свойства '%s'! Копирование отменено . . . "), *SourcePropertyName);
		}

	}
    
}

