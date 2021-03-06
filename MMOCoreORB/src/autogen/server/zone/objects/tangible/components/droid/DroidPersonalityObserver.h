/*
 *	autogen/server/zone/objects/tangible/components/droid/DroidPersonalityObserver.h generated by engine3 IDL compiler 0.60
 */

#ifndef DROIDPERSONALITYOBSERVER_H_
#define DROIDPERSONALITYOBSERVER_H_

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
namespace tangible {
namespace components {
namespace droid {

class DroidPersonalityModuleDataComponent;

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#include "engine/core/ManagedObject.h"

#include "templates/params/ObserverEventType.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/Task.h"

#include "engine/util/Observer.h"

#include "engine/util/Observable.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidPersonalityObserver : public Observer {
public:
	DroidPersonalityObserver(DroidPersonalityModuleDataComponent* m);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DroidPersonalityObserver(DummyConstructorParameter* param);

	virtual ~DroidPersonalityObserver();

	friend class DroidPersonalityObserverHelper;
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class DroidPersonalityObserverImplementation : public ObserverImplementation {
protected:
	WeakReference<DroidPersonalityModuleDataComponent* > module;

public:
	DroidPersonalityObserverImplementation(DroidPersonalityModuleDataComponent* m);

	DroidPersonalityObserverImplementation(DummyConstructorParameter* param);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

	WeakReference<DroidPersonalityObserver*> _this;

	operator const DroidPersonalityObserver*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DroidPersonalityObserverImplementation();

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

	friend class DroidPersonalityObserver;
};

class DroidPersonalityObserverAdapter : public ObserverAdapter {
public:
	DroidPersonalityObserverAdapter(DroidPersonalityObserver* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2);

};

class DroidPersonalityObserverHelper : public DistributedObjectClassHelper, public Singleton<DroidPersonalityObserverHelper> {
	static DroidPersonalityObserverHelper* staticInitializer;

public:
	DroidPersonalityObserverHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DroidPersonalityObserverHelper>;
};

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#endif /*DROIDPERSONALITYOBSERVER_H_*/
