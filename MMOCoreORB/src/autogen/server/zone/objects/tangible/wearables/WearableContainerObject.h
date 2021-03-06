/*
 *	autogen/server/zone/objects/tangible/wearables/WearableContainerObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WEARABLECONTAINEROBJECT_H_
#define WEARABLECONTAINEROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/tangible/Container.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableContainerObject : public Container {
public:
	WearableContainerObject();

	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	void applySkillModsTo(CreatureObject* creature);

	void removeSkillModsFrom(CreatureObject* creature);

	VectorMap<String, int>* getWearableSkillMods();

	bool isEquipped();

	bool isWearableContainerObject();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	WearableContainerObject(DummyConstructorParameter* param);

	virtual ~WearableContainerObject();

	friend class WearableContainerObjectHelper;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace wearables {

class WearableContainerObjectImplementation : public ContainerImplementation {
protected:
	VectorMap<String, int> wearableSkillMods;

public:
	WearableContainerObjectImplementation();

	WearableContainerObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	virtual void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient = true);

	virtual void applySkillModsTo(CreatureObject* creature);

	virtual void removeSkillModsFrom(CreatureObject* creature);

	VectorMap<String, int>* getWearableSkillMods();

	bool isEquipped();

	bool isWearableContainerObject();

	WeakReference<WearableContainerObject*> _this;

	operator const WearableContainerObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~WearableContainerObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class WearableContainerObject;
};

class WearableContainerObjectAdapter : public ContainerAdapter {
public:
	WearableContainerObjectAdapter(WearableContainerObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void addSkillMod(const int skillType, const String& skillMod, int value, bool notifyClient);

	void applySkillModsTo(CreatureObject* creature);

	void removeSkillModsFrom(CreatureObject* creature);

	bool isEquipped();

	bool isWearableContainerObject();

};

class WearableContainerObjectHelper : public DistributedObjectClassHelper, public Singleton<WearableContainerObjectHelper> {
	static WearableContainerObjectHelper* staticInitializer;

public:
	WearableContainerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WearableContainerObjectHelper>;
};

} // namespace wearables
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::wearables;

#endif /*WEARABLECONTAINEROBJECT_H_*/
