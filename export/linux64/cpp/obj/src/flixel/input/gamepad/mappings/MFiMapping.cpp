#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MFiID
#include <flixel/input/gamepad/id/MFiID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MFiMapping
#include <flixel/input/gamepad/mappings/MFiMapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void MFiMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.MFiMapping","new",0xf534e7d6,"flixel.input.gamepad.mappings.MFiMapping.new","flixel/input/gamepad/mappings/MFiMapping.hx",6,0xaa96aabc)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(6)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	super::__construct(tmp);
}
;
	return null();
}

//MFiMapping_obj::~MFiMapping_obj() { }

Dynamic MFiMapping_obj::__CreateEmpty() { return  new MFiMapping_obj; }
hx::ObjectPtr< MFiMapping_obj > MFiMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< MFiMapping_obj > _result_ = new MFiMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic MFiMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MFiMapping_obj > _result_ = new MFiMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MFiMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.MFiMapping","initValues",0x12bcc25c,"flixel.input.gamepad.mappings.MFiMapping.initValues","flixel/input/gamepad/mappings/MFiMapping.hx",9,0xaa96aabc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(10)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp = ::flixel::input::gamepad::id::MFiID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		this->leftStick = tmp;
		HX_STACK_LINE(11)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp1 = ::flixel::input::gamepad::id::MFiID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(11)
		this->rightStick = tmp1;
	}
return null();
}


int MFiMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MFiMapping","getID",0x524ef2e7,"flixel.input.gamepad.mappings.MFiMapping.getID","flixel/input/gamepad/mappings/MFiMapping.hx",15,0xaa96aabc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(16)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		int id = rawID;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(16)
		int id1 = rawID;		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(16)
		int id2 = rawID;		HX_STACK_VAR(id2,"id2");
		HX_STACK_LINE(16)
		int id3 = rawID;		HX_STACK_VAR(id3,"id3");
		HX_STACK_LINE(16)
		int id4 = rawID;		HX_STACK_VAR(id4,"id4");
		HX_STACK_LINE(16)
		int id5 = rawID;		HX_STACK_VAR(id5,"id5");
		HX_STACK_LINE(16)
		int id6 = rawID;		HX_STACK_VAR(id6,"id6");
		HX_STACK_LINE(16)
		int id7 = rawID;		HX_STACK_VAR(id7,"id7");
		HX_STACK_LINE(16)
		int tmp1 = rawID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		switch( (int)(tmp1)){
			case (int)6: {
				HX_STACK_LINE(18)
				tmp = (int)0;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(19)
				tmp = (int)1;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(20)
				tmp = (int)2;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(21)
				tmp = (int)3;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(22)
				tmp = (int)6;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(23)
				tmp = (int)10;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(24)
				tmp = (int)7;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(25)
				tmp = (int)8;
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(26)
				tmp = (int)9;
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(27)
				tmp = (int)4;
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(28)
				tmp = (int)5;
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(29)
				tmp = (int)11;
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(30)
				tmp = (int)12;
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(31)
				tmp = (int)13;
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(32)
				tmp = (int)14;
			}
			;break;
			default: {
				HX_STACK_LINE(33)
				int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(33)
				::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = this->leftStick;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(33)
				int tmp4 = tmp3->rawUp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				bool tmp5 = (tmp2 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				if ((tmp5)){
					HX_STACK_LINE(33)
					tmp = (int)34;
				}
				else{
					HX_STACK_LINE(34)
					int tmp6 = id1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					::flixel::input::gamepad::FlxGamepadAnalogStick tmp7 = this->leftStick;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					int tmp8 = tmp7->rawDown;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(34)
					bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(34)
					if ((tmp9)){
						HX_STACK_LINE(34)
						tmp = (int)36;
					}
					else{
						HX_STACK_LINE(35)
						int tmp10 = id2;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(35)
						::flixel::input::gamepad::FlxGamepadAnalogStick tmp11 = this->leftStick;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(35)
						int tmp12 = tmp11->rawLeft;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(35)
						bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(35)
						if ((tmp13)){
							HX_STACK_LINE(35)
							tmp = (int)37;
						}
						else{
							HX_STACK_LINE(36)
							int tmp14 = id3;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(36)
							::flixel::input::gamepad::FlxGamepadAnalogStick tmp15 = this->leftStick;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(36)
							int tmp16 = tmp15->rawRight;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(36)
							bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(36)
							if ((tmp17)){
								HX_STACK_LINE(36)
								tmp = (int)35;
							}
							else{
								HX_STACK_LINE(37)
								int tmp18 = id4;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(37)
								::flixel::input::gamepad::FlxGamepadAnalogStick tmp19 = this->rightStick;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(37)
								int tmp20 = tmp19->rawUp;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(37)
								bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(37)
								if ((tmp21)){
									HX_STACK_LINE(37)
									tmp = (int)38;
								}
								else{
									HX_STACK_LINE(38)
									int tmp22 = id5;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(38)
									::flixel::input::gamepad::FlxGamepadAnalogStick tmp23 = this->rightStick;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(38)
									int tmp24 = tmp23->rawDown;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(38)
									bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(38)
									if ((tmp25)){
										HX_STACK_LINE(38)
										tmp = (int)40;
									}
									else{
										HX_STACK_LINE(39)
										int tmp26 = id6;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(39)
										::flixel::input::gamepad::FlxGamepadAnalogStick tmp27 = this->rightStick;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(39)
										int tmp28 = tmp27->rawLeft;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(39)
										bool tmp29 = (tmp26 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(39)
										if ((tmp29)){
											HX_STACK_LINE(39)
											tmp = (int)41;
										}
										else{
											HX_STACK_LINE(40)
											int tmp30 = id7;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(40)
											::flixel::input::gamepad::FlxGamepadAnalogStick tmp31 = this->rightStick;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(40)
											int tmp32 = tmp31->rawRight;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(40)
											bool tmp33 = (tmp30 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(40)
											if ((tmp33)){
												HX_STACK_LINE(40)
												tmp = (int)39;
											}
											else{
												HX_STACK_LINE(41)
												tmp = (int)-1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(16)
	return tmp;
}


int MFiMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MFiMapping","getRawID",0x62e58c17,"flixel.input.gamepad.mappings.MFiMapping.getRawID","flixel/input/gamepad/mappings/MFiMapping.hx",46,0xaa96aabc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(47)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(49)
			tmp1 = (int)6;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(50)
			tmp1 = (int)7;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(51)
			tmp1 = (int)8;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(52)
			tmp1 = (int)9;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(53)
			tmp1 = (int)10;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(54)
			tmp1 = (int)11;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(55)
			tmp1 = (int)12;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(56)
			tmp1 = (int)13;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(57)
			tmp1 = (int)14;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(58)
			tmp1 = (int)15;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(59)
			tmp1 = (int)16;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(60)
			tmp1 = (int)17;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(61)
			tmp1 = (int)18;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(62)
			tmp1 = (int)19;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(63)
			tmp1 = (int)20;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(64)
			tmp1 = (int)4;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(65)
			tmp1 = (int)5;
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(66)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(67)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)37: {
			HX_STACK_LINE(68)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(68)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(69)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::LEFT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			tmp1 = tmp2->rawRight;
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(70)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			tmp1 = tmp2->rawUp;
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(71)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			tmp1 = tmp2->rawDown;
		}
		;break;
		case (int)41: {
			HX_STACK_LINE(72)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			tmp1 = tmp2->rawLeft;
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(73)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = ::flixel::input::gamepad::id::MFiID_obj::RIGHT_ANALOG_STICK;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			tmp1 = tmp2->rawRight;
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(75)
			tmp1 = (int)4;
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(76)
			tmp1 = (int)5;
		}
		;break;
		default: {
			HX_STACK_LINE(78)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(47)
	return tmp1;
}


int MFiMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.MFiMapping","axisIndexToRawID",0x61c1ec61,"flixel.input.gamepad.mappings.MFiMapping.axisIndexToRawID","flixel/input/gamepad/mappings/MFiMapping.hx",84,0xaa96aabc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(86)
	int tmp = axisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}



MFiMapping_obj::MFiMapping_obj()
{
}

Dynamic MFiMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return getRawID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return initValues_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MFiMapping_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MFiMapping_obj::__mClass,"__mClass");
};

#endif

hx::Class MFiMapping_obj::__mClass;

void MFiMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.MFiMapping","\xe4","\x04","\x4b","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MFiMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
