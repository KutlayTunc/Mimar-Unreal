#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LookAtRotationLibrary.generated.h"

UCLASS()
class MIMAR_API ULookAtRotationLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Math|Rotation")
    static FQuat FindLookAtQuaternion(
        const FVector& StartLocation,
        const FVector& TargetLocation,
        const FVector& UpVector = FVector::UpVector
    );

    UFUNCTION(BlueprintCallable, Category = "Math|Quaternion")
    static FQuat QuaternionSlerp(const FQuat& A, const FQuat& B, float Alpha);
};