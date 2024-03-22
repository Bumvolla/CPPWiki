#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FilePickerPluginBPLibrary.generated.h"



UENUM()
enum class EDialogResult : uint8
{
	Successful, Cancelled
};

UCLASS()
class UFilePickerPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin", meta = (ExpandEnumAsExecs = "OutputPin"))
	static void SaveFile(EDialogResult& OutputPin,
		TArray<FString>& OutFilename,
		const FString& DialogTitle = TEXT("Save the file"),
		const FString& DefaultPath = TEXT("/path/path"),
		const FString& DefaultFile = TEXT(""),
		const FString& FileType = TEXT("GUESS (GUESS Files)|*.guess"),
		bool IsMultiple = false
	);		

	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenFileDialog(EDialogResult& OutputPin,
			TArray<FString>& FilePath,
			const FString& DialogTitle = TEXT("Open File Dialog"),
			const FString& DefaultPath = TEXT("/path/path"),
			const FString& DefaultFile = TEXT(""),
			const FString& FileType = TEXT("GUESS (GUESS Files)|*.guess"),
			bool IsMultiple = false
		);

	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void OpenDirectoryDialog(
			EDialogResult& OutputPin, 
			FString& FolderPath,
			const FString& DialogTitle = TEXT("Open Directory Dialog"),
			const FString& DefaultPath = TEXT("")
		);

/*	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin | OpenDirectoryDialog", meta = (ExpandEnumAsExecs = "OutputPin"))
		static void PrintData(
			EDialogResult& OutputPin,
			const FString& File = TEXT("File")
		);*/

	UFUNCTION(BlueprintCallable, Category = "FilePickerPlugin")
		static bool CreateDirectory(
			const FString& Directory
		);

protected:

	static void* GetWindowHandle();
};