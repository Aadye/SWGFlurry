/*
 *	autogen/server/zone/objects/tangible/LairObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "LairObject.h"

#include "server/zone/objects/tangible/DespawnLairOnPlayerDisappear.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	LairObjectStub
 */

enum {RPC_GETNUMBEROFPLAYERSINRANGE__ = 764880985,RPC_GETDESPAWNONNOPLAYERSINRANGE__,RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_,RPC_NOTIFYINSERT__QUADTREEENTRY_,RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_,RPC_ACTIVATEDESPAWNEVENT__,RPC_CLEARDESPAWNEVENT__,RPC_ISLAIROBJECT__};

LairObject::LairObject() : TangibleObject(DummyConstructorParameter::instance()) {
	LairObjectImplementation* _implementation = new LairObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("LairObject");
}

LairObject::LairObject(DummyConstructorParameter* param) : TangibleObject(param) {
	_setClassName("LairObject");
}

LairObject::~LairObject() {
}



int LairObject::getNumberOfPlayersInRange() {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNUMBEROFPLAYERSINRANGE__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getNumberOfPlayersInRange();
	}
}

bool LairObject::getDespawnOnNoPlayersInRange() const {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDESPAWNONNOPLAYERSINRANGE__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->getDespawnOnNoPlayersInRange();
	}
}

void LairObject::setDespawnOnNoPlayersInRange(bool b) {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_);
		method.addBooleanParameter(b);

		method.executeWithVoidReturn();
	} else {
		_implementation->setDespawnOnNoPlayersInRange(b);
	}
}

void LairObject::notifyInsert(QuadTreeEntry* entry) {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYINSERT__QUADTREEENTRY_);
		method.addObjectParameter(entry);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyInsert(entry);
	}
}

void LairObject::notifyDissapear(QuadTreeEntry* entry) {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_);
		method.addObjectParameter(entry);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyDissapear(entry);
	}
}

void LairObject::activateDespawnEvent() {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATEDESPAWNEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->activateDespawnEvent();
	}
}

void LairObject::clearDespawnEvent() {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARDESPAWNEVENT__);

		method.executeWithVoidReturn();
	} else {
		_implementation->clearDespawnEvent();
	}
}

bool LairObject::isLairObject() {
	LairObjectImplementation* _implementation = static_cast<LairObjectImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLAIROBJECT__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isLairObject();
	}
}

DistributedObjectServant* LairObject::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* LairObject::_getImplementationForRead() const {
	return _impl;
}

void LairObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LairObjectImplementation
 */

LairObjectImplementation::LairObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}


LairObjectImplementation::~LairObjectImplementation() {
}


void LairObjectImplementation::finalize() {
}

void LairObjectImplementation::_initializeImplementation() {
	_setClassHelper(LairObjectHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LairObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LairObject*>(stub);
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* LairObjectImplementation::_getStub() {
	return _this.get();
}

LairObjectImplementation::operator const LairObject*() {
	return _this.get();
}

void LairObjectImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void LairObjectImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void LairObjectImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void LairObjectImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void LairObjectImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void LairObjectImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void LairObjectImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void LairObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("LairObject");

}

void LairObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(LairObjectImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LairObjectImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TangibleObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x1861ba32: //LairObject.despawnOnNoPlayersInRange
		TypeInfo<bool >::parseFromBinaryStream(&despawnOnNoPlayersInRange, stream);
		return true;

	}

	return false;
}

void LairObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LairObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LairObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TangibleObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x1861ba32; //LairObject.despawnOnNoPlayersInRange
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&despawnOnNoPlayersInRange, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

LairObjectImplementation::LairObjectImplementation() {
	_initializeImplementation();
	Reference<CloseObjectsVector*> _ref0;
	// server/zone/objects/tangible/LairObject.idl():  		Logger.setLoggingName("LairObject");
	Logger::setLoggingName("LairObject");
	// server/zone/objects/tangible/LairObject.idl():  		super.closeobjects = new CloseObjectsVector();
	TangibleObjectImplementation::closeobjects = _ref0 = new CloseObjectsVector();
	// server/zone/objects/tangible/LairObject.idl():  		super.closeobjects.setNoDuplicateInsertPlan();
	TangibleObjectImplementation::closeobjects->setNoDuplicateInsertPlan();
	// server/zone/objects/tangible/LairObject.idl():  		despawnOnNoPlayersInRange = false;
	despawnOnNoPlayersInRange = false;
}

int LairObjectImplementation::getNumberOfPlayersInRange() {
	// server/zone/objects/tangible/LairObject.idl():  		return numberOfPlayersInRange.get();
	return (&numberOfPlayersInRange)->get();
}

bool LairObjectImplementation::getDespawnOnNoPlayersInRange() const{
	// server/zone/objects/tangible/LairObject.idl():  		return despawnOnNoPlayersInRange;
	return despawnOnNoPlayersInRange;
}

void LairObjectImplementation::setDespawnOnNoPlayersInRange(bool b) {
	// server/zone/objects/tangible/LairObject.idl():  		despawnOnNoPlayersInRange = b;
	despawnOnNoPlayersInRange = b;
}

void LairObjectImplementation::notifyInsert(QuadTreeEntry* entry) {
	// server/zone/objects/tangible/LairObject.idl():  		SceneObject obj = (SceneObject) entry;
	ManagedReference<SceneObject* > obj = dynamic_cast<SceneObject*>(entry);
	// server/zone/objects/tangible/LairObject.idl():  		if 
	if (obj == _this.get())	// server/zone/objects/tangible/LairObject.idl():  			return;
	return;
	// server/zone/objects/tangible/LairObject.idl():  	}
	if (obj->isPlayerCreature()){
	// server/zone/objects/tangible/LairObject.idl():  			CreatureObject creo = (CreatureObject) obj;
	ManagedReference<CreatureObject* > creo = dynamic_cast<CreatureObject*>(obj.get());
	// server/zone/objects/tangible/LairObject.idl():  		}
	if (!creo->isInvisible()){
	// server/zone/objects/tangible/LairObject.idl():  				numberOfPlayersInRange.increment();
	(&numberOfPlayersInRange)->increment();
	// server/zone/objects/tangible/LairObject.idl():  				clearDespawnEvent();
	clearDespawnEvent();
}
}
}

void LairObjectImplementation::notifyDissapear(QuadTreeEntry* entry) {
	// server/zone/objects/tangible/LairObject.idl():  		SceneObject obj = (SceneObject) entry;
	ManagedReference<SceneObject* > obj = dynamic_cast<SceneObject*>(entry);
	// server/zone/objects/tangible/LairObject.idl():  		if 
	if (obj == _this.get())	// server/zone/objects/tangible/LairObject.idl():  			return;
	return;
	// server/zone/objects/tangible/LairObject.idl():  	}
	if (obj->isPlayerCreature()){
	// server/zone/objects/tangible/LairObject.idl():  			CreatureObject creo = (CreatureObject) obj;
	ManagedReference<CreatureObject* > creo = dynamic_cast<CreatureObject*>(obj.get());
	// server/zone/objects/tangible/LairObject.idl():  		}
	if (!creo->isInvisible()){
	// server/zone/objects/tangible/LairObject.idl():  				int val = numberOfPlayersInRange.decrement();
	int val = (&numberOfPlayersInRange)->decrement();
	// server/zone/objects/tangible/LairObject.idl():  			}
	if (val <= 0 && despawnOnNoPlayersInRange)	// server/zone/objects/tangible/LairObject.idl():  					activateDespawnEvent();
	activateDespawnEvent();
}
}
}

void LairObjectImplementation::activateDespawnEvent() {
	Reference<DespawnLairOnPlayerDisappear*> _ref0;
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent 
	if (despawnEvent != NULL)	// server/zone/objects/tangible/LairObject.idl():  			return;
	return;
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent = new DespawnLairOnPlayerDisappear(this);
	despawnEvent = _ref0 = new DespawnLairOnPlayerDisappear(_this.get());
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent.schedule(300000);
	despawnEvent->schedule(300000);
}

void LairObjectImplementation::clearDespawnEvent() {
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent.
	if (despawnEvent == NULL)	// server/zone/objects/tangible/LairObject.idl():  			return;
	return;
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent.cancel();
	despawnEvent->cancel();
	// server/zone/objects/tangible/LairObject.idl():  		despawnEvent = null;
	despawnEvent = NULL;
}

bool LairObjectImplementation::isLairObject() {
	// server/zone/objects/tangible/LairObject.idl():  		return true;
	return true;
}

/*
 *	LairObjectAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


LairObjectAdapter::LairObjectAdapter(LairObject* obj) : TangibleObjectAdapter(obj) {
}

void LairObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_GETNUMBEROFPLAYERSINRANGE__:
		{
			
			int _m_res = getNumberOfPlayersInRange();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETDESPAWNONNOPLAYERSINRANGE__:
		{
			
			bool _m_res = getDespawnOnNoPlayersInRange();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_SETDESPAWNONNOPLAYERSINRANGE__BOOL_:
		{
			bool b = inv->getBooleanParameter();
			
			setDespawnOnNoPlayersInRange(b);
			
		}
		break;
	case RPC_NOTIFYINSERT__QUADTREEENTRY_:
		{
			QuadTreeEntry* entry = static_cast<QuadTreeEntry*>(inv->getObjectParameter());
			
			notifyInsert(entry);
			
		}
		break;
	case RPC_NOTIFYDISSAPEAR__QUADTREEENTRY_:
		{
			QuadTreeEntry* entry = static_cast<QuadTreeEntry*>(inv->getObjectParameter());
			
			notifyDissapear(entry);
			
		}
		break;
	case RPC_ACTIVATEDESPAWNEVENT__:
		{
			
			activateDespawnEvent();
			
		}
		break;
	case RPC_CLEARDESPAWNEVENT__:
		{
			
			clearDespawnEvent();
			
		}
		break;
	case RPC_ISLAIROBJECT__:
		{
			
			bool _m_res = isLairObject();
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		TangibleObjectAdapter::invokeMethod(methid, inv);
	}
}

int LairObjectAdapter::getNumberOfPlayersInRange() {
	return (static_cast<LairObject*>(stub))->getNumberOfPlayersInRange();
}

bool LairObjectAdapter::getDespawnOnNoPlayersInRange() const {
	return (static_cast<LairObject*>(stub))->getDespawnOnNoPlayersInRange();
}

void LairObjectAdapter::setDespawnOnNoPlayersInRange(bool b) {
	(static_cast<LairObject*>(stub))->setDespawnOnNoPlayersInRange(b);
}

void LairObjectAdapter::notifyInsert(QuadTreeEntry* entry) {
	(static_cast<LairObject*>(stub))->notifyInsert(entry);
}

void LairObjectAdapter::notifyDissapear(QuadTreeEntry* entry) {
	(static_cast<LairObject*>(stub))->notifyDissapear(entry);
}

void LairObjectAdapter::activateDespawnEvent() {
	(static_cast<LairObject*>(stub))->activateDespawnEvent();
}

void LairObjectAdapter::clearDespawnEvent() {
	(static_cast<LairObject*>(stub))->clearDespawnEvent();
}

bool LairObjectAdapter::isLairObject() {
	return (static_cast<LairObject*>(stub))->isLairObject();
}

/*
 *	LairObjectHelper
 */

LairObjectHelper* LairObjectHelper::staticInitializer = LairObjectHelper::instance();

LairObjectHelper::LairObjectHelper() {
	className = "LairObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void LairObjectHelper::finalizeHelper() {
	LairObjectHelper::finalize();
}

DistributedObject* LairObjectHelper::instantiateObject() {
	return new LairObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* LairObjectHelper::instantiateServant() {
	return new LairObjectImplementation();
}

DistributedObjectAdapter* LairObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LairObjectAdapter(static_cast<LairObject*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

