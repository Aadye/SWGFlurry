/*
 *	autogen/server/zone/objects/tangible/pharmaceutical/RangedStimPack.h generated by engine3 IDL compiler 0.60
 */

#ifndef RANGEDSTIMPACK_H_
#define RANGEDSTIMPACK_H_

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
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

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

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "templates/tangible/RangedStimPackTemplate.h"

#include "server/zone/objects/manufactureschematic/craftingvalues/CraftingValues.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/tangible/pharmaceutical/StimPack.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class RangedStimPack : public StimPack {
public:
	RangedStimPack();

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	float getRange(CreatureObject* creature = NULL);

	float getEffectiveness();

	float getArea();

	bool isArea();

	float getRangeMod();

	bool isRangedStimPack();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	RangedStimPack(DummyConstructorParameter* param);

	virtual ~RangedStimPack();

	friend class RangedStimPackHelper;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace pharmaceutical {

class RangedStimPackImplementation : public StimPackImplementation {
protected:
	float range;

	float area;

	float rangeMod;

public:
	RangedStimPackImplementation();

	RangedStimPackImplementation(DummyConstructorParameter* param);

	void updateCraftingValues(CraftingValues* values, bool firstUpdate);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Reads and sets the template data from a SharedTangibleObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { TangibleObject members are initialized }
	 * @param templateData templateData points to the SharedTangibleObjectTemplate LuaObject that is used to initialize the TangibleObject members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue = true);

	float getRange(CreatureObject* creature = NULL);

	float getEffectiveness();

	float getArea();

	bool isArea();

	float getRangeMod();

	bool isRangedStimPack();

	WeakReference<RangedStimPack*> _this;

	operator const RangedStimPack*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~RangedStimPackImplementation();

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

	friend class RangedStimPack;
};

class RangedStimPackAdapter : public StimPackAdapter {
public:
	RangedStimPackAdapter(RangedStimPack* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	unsigned int calculatePower(CreatureObject* healer, CreatureObject* patient, bool applyBattleFatigue);

	float getRange(CreatureObject* creature);

	float getEffectiveness();

	float getArea();

	bool isArea();

	float getRangeMod();

	bool isRangedStimPack();

};

class RangedStimPackHelper : public DistributedObjectClassHelper, public Singleton<RangedStimPackHelper> {
	static RangedStimPackHelper* staticInitializer;

public:
	RangedStimPackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<RangedStimPackHelper>;
};

} // namespace pharmaceutical
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::pharmaceutical;

#endif /*RANGEDSTIMPACK_H_*/