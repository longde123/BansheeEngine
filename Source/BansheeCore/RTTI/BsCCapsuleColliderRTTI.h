//********************************** Banshee Engine (www.banshee3d.com) **************************************************//
//**************** Copyright (c) 2016 Marko Pintera (marko.pintera@gmail.com). All rights reserved. **********************//
#pragma once

#include "BsCorePrerequisites.h"
#include "Reflection/BsRTTIType.h"
#include "Components/BsCCapsuleCollider.h"
#include "RTTI/BsGameObjectRTTI.h"

namespace bs
{
	/** @cond RTTI */
	/** @addtogroup RTTI-Impl-Core
	 *  @{
	 */

	class BS_CORE_EXPORT CCapsuleColliderRTTI : public RTTIType<CCapsuleCollider, CCollider, CCapsuleColliderRTTI>
	{
	private:
		BS_BEGIN_RTTI_MEMBERS
			BS_RTTI_MEMBER_PLAIN(mNormal, 0)
			BS_RTTI_MEMBER_PLAIN(mRadius, 1)
			BS_RTTI_MEMBER_PLAIN(mHalfHeight, 2)
		BS_END_RTTI_MEMBERS
	public:
		CCapsuleColliderRTTI()
			:mInitMembers(this)
		{ }

		const String& getRTTIName() override
		{
			static String name = "CCapsuleCollider";
			return name;
		}

		UINT32 getRTTIId() override
		{
			return TID_CCapsuleCollider;
		}

		SPtr<IReflectable> newRTTIObject() override
		{
			return GameObjectRTTI::createGameObject<CCapsuleCollider>();
		}
	};

	/** @} */
	/** @endcond */
}