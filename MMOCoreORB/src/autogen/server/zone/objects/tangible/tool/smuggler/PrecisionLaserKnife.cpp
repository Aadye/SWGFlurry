/*
 *	autogen/server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.cpp generated by engine3 IDL compiler 0.60
 */

#include "PrecisionLaserKnife.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	PrecisionLaserKnifeStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_ = 2447060878,RPC_UPDATECHARGES__INT_,RPC_USECHARGE__CREATUREOBJECT_,RPC_GETCHARGES__};

PrecisionLaserKnife::PrecisionLaserKnife() : SlicingTool(DummyConstructorParameter::instance()) {
	PrecisionLaserKnifeImplementation* _implementation = new PrecisionLaserKnifeImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PrecisionLaserKnife");
}

PrecisionLaserKnife::PrecisionLaserKnife(DummyConstructorParameter* param) : SlicingTool(param) {
	_setClassName("PrecisionLaserKnife");
}

PrecisionLaserKnife::~PrecisionLaserKnife() {
}



int PrecisionLaserKnife::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void PrecisionLaserKnife::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->fillAttributeList(msg, object);
	}
}

void PrecisionLaserKnife::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateCraftingValues(values, firstUpdate);
	}
}

void PrecisionLaserKnife::updateCharges(int val) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECHARGES__INT_);
		method.addSignedIntParameter(val);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateCharges(val);
	}
}

void PrecisionLaserKnife::useCharge(CreatureObject* player) {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_USECHARGE__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->useCharge(player);
	}
}

int PrecisionLaserKnife::getCharges() {
	PrecisionLaserKnifeImplementation* _implementation = static_cast<PrecisionLaserKnifeImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCHARGES__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getCharges();
	}
}

DistributedObjectServant* PrecisionLaserKnife::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PrecisionLaserKnife::_getImplementationForRead() const {
	return _impl;
}

void PrecisionLaserKnife::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PrecisionLaserKnifeImplementation
 */

PrecisionLaserKnifeImplementation::PrecisionLaserKnifeImplementation(DummyConstructorParameter* param) : SlicingToolImplementation(param) {
	_initializeImplementation();
}


PrecisionLaserKnifeImplementation::~PrecisionLaserKnifeImplementation() {
}


void PrecisionLaserKnifeImplementation::finalize() {
}

void PrecisionLaserKnifeImplementation::_initializeImplementation() {
	_setClassHelper(PrecisionLaserKnifeHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PrecisionLaserKnifeImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PrecisionLaserKnife*>(stub);
	SlicingToolImplementation::_setStub(stub);
}

DistributedObjectStub* PrecisionLaserKnifeImplementation::_getStub() {
	return _this.get();
}

PrecisionLaserKnifeImplementation::operator const PrecisionLaserKnife*() {
	return _this.get();
}

void PrecisionLaserKnifeImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PrecisionLaserKnifeImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PrecisionLaserKnifeImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PrecisionLaserKnifeImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PrecisionLaserKnifeImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PrecisionLaserKnifeImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PrecisionLaserKnifeImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PrecisionLaserKnifeImplementation::_serializationHelperMethod() {
	SlicingToolImplementation::_serializationHelperMethod();

	_setClassName("PrecisionLaserKnife");

}

void PrecisionLaserKnifeImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PrecisionLaserKnifeImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PrecisionLaserKnifeImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (SlicingToolImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x3f461f2f: //PrecisionLaserKnife.charges
		TypeInfo<int >::parseFromBinaryStream(&charges, stream);
		return true;

	}

	return false;
}

void PrecisionLaserKnifeImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PrecisionLaserKnifeImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PrecisionLaserKnifeImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SlicingToolImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x3f461f2f; //PrecisionLaserKnife.charges
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&charges, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

PrecisionLaserKnifeImplementation::PrecisionLaserKnifeImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		setLoggingName("SlicingTool");
	setLoggingName("SlicingTool");
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		charges = 10;
	charges = 10;
}

void PrecisionLaserKnifeImplementation::updateCraftingValues(CraftingValues* values, bool firstUpdate) {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		super.setUseCount(charges);
	SlicingToolImplementation::setUseCount(charges);
}

void PrecisionLaserKnifeImplementation::useCharge(CreatureObject* player) {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		decreaseUseCount(
	if (player == NULL)	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			return;
	return;
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		decreaseUseCount();
	decreaseUseCount();
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		updateCharges(getUseCount());
	updateCharges(getUseCount());
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_knife");
	if (charges < 1)	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_up_knife");
	player->sendSystemMessage("@slicing/slicing:used_up_knife");

	else 	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  			player.sendSystemMessage("@slicing/slicing:used_knife");
	player->sendSystemMessage("@slicing/slicing:used_knife");
}

int PrecisionLaserKnifeImplementation::getCharges() {
	// server/zone/objects/tangible/tool/smuggler/PrecisionLaserKnife.idl():  		return charges;
	return charges;
}

/*
 *	PrecisionLaserKnifeAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PrecisionLaserKnifeAdapter::PrecisionLaserKnifeAdapter(PrecisionLaserKnife* obj) : SlicingToolAdapter(obj) {
}

void PrecisionLaserKnifeAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_UPDATECHARGES__INT_:
		{
			int val = inv->getSignedIntParameter();
			
			updateCharges(val);
			
		}
		break;
	case RPC_USECHARGE__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			useCharge(player);
			
		}
		break;
	case RPC_GETCHARGES__:
		{
			
			int _m_res = getCharges();
			resp->insertSignedInt(_m_res);
		}
		break;
	default:
		SlicingToolAdapter::invokeMethod(methid, inv);
	}
}

int PrecisionLaserKnifeAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<PrecisionLaserKnife*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void PrecisionLaserKnifeAdapter::updateCharges(int val) {
	(static_cast<PrecisionLaserKnife*>(stub))->updateCharges(val);
}

void PrecisionLaserKnifeAdapter::useCharge(CreatureObject* player) {
	(static_cast<PrecisionLaserKnife*>(stub))->useCharge(player);
}

int PrecisionLaserKnifeAdapter::getCharges() {
	return (static_cast<PrecisionLaserKnife*>(stub))->getCharges();
}

/*
 *	PrecisionLaserKnifeHelper
 */

PrecisionLaserKnifeHelper* PrecisionLaserKnifeHelper::staticInitializer = PrecisionLaserKnifeHelper::instance();

PrecisionLaserKnifeHelper::PrecisionLaserKnifeHelper() {
	className = "PrecisionLaserKnife";

	Core::getObjectBroker()->registerClass(className, this);
}

void PrecisionLaserKnifeHelper::finalizeHelper() {
	PrecisionLaserKnifeHelper::finalize();
}

DistributedObject* PrecisionLaserKnifeHelper::instantiateObject() {
	return new PrecisionLaserKnife(DummyConstructorParameter::instance());
}

DistributedObjectServant* PrecisionLaserKnifeHelper::instantiateServant() {
	return new PrecisionLaserKnifeImplementation();
}

DistributedObjectAdapter* PrecisionLaserKnifeHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PrecisionLaserKnifeAdapter(static_cast<PrecisionLaserKnife*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
