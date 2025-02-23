#include "LookAtRotationLibrary.h"
#include "Math/Matrix.h"

FQuat ULookAtRotationLibrary::FindLookAtQuaternion(
    const FVector& StartLocation,
    const FVector& TargetLocation,
    const FVector& UpVector)
{
    const FVector ToTarget = TargetLocation - StartLocation;
    if (ToTarget.IsNearlyZero(0.001f)) return FQuat::Identity; // Hedef çok yakınsa
    
    const FVector Direction = ToTarget.GetSafeNormal();
    const FVector CurrentUp = UpVector.GetSafeNormal();

    // Up vektörü ile hedef yönü paralelse alternatif up kullan
    if (FMath::Abs(FVector::DotProduct(Direction, CurrentUp)) > 0.99f)
    {
        // Alternatif up (örn: Sağ vektör)
        const FVector AlternativeUp = FVector::CrossProduct(Direction, FVector::RightVector);
        return FindLookAtQuaternion(StartLocation, TargetLocation, AlternativeUp);
    }

    const FVector Right = FVector::CrossProduct(CurrentUp, Direction).GetSafeNormal();
    const FVector AdjustedUp = FVector::CrossProduct(Direction, Right);

    FMatrix RotMat(Direction, Right, AdjustedUp, FVector::ZeroVector);
    return RotMat.ToQuat();
}

FQuat ULookAtRotationLibrary::QuaternionSlerp(const FQuat& A, const FQuat& B, float Alpha)
{
    return FQuat::Slerp(A, B, FMath::Clamp(Alpha, 0.0f, 1.0f));
}