#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#define INCLUDED_flixel_tweens_FlxTweenManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  FlxTweenManager_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxTweenManager_obj OBJ_;
		FlxTweenManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.FlxTweenManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTweenManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTweenManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxTweenManager","\xb4","\xfe","\xba","\x95"); }

		virtual ::flixel::tweens::motion::QuadPath add_flixel_tweens_motion_QuadPath( ::flixel::tweens::motion::QuadPath Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_QuadPath_dyn();

		virtual ::flixel::tweens::motion::LinearPath add_flixel_tweens_motion_LinearPath( ::flixel::tweens::motion::LinearPath Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_LinearPath_dyn();

		virtual ::flixel::tweens::motion::CircularMotion add_flixel_tweens_motion_CircularMotion( ::flixel::tweens::motion::CircularMotion Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_CircularMotion_dyn();

		virtual ::flixel::tweens::motion::CubicMotion add_flixel_tweens_motion_CubicMotion( ::flixel::tweens::motion::CubicMotion Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_CubicMotion_dyn();

		virtual ::flixel::tweens::motion::QuadMotion add_flixel_tweens_motion_QuadMotion( ::flixel::tweens::motion::QuadMotion Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_QuadMotion_dyn();

		virtual ::flixel::tweens::motion::LinearMotion add_flixel_tweens_motion_LinearMotion( ::flixel::tweens::motion::LinearMotion Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_motion_LinearMotion_dyn();

		virtual ::flixel::tweens::misc::ColorTween add_flixel_tweens_misc_ColorTween( ::flixel::tweens::misc::ColorTween Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_misc_ColorTween_dyn();

		virtual ::flixel::tweens::misc::AngleTween add_flixel_tweens_misc_AngleTween( ::flixel::tweens::misc::AngleTween Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_misc_AngleTween_dyn();

		virtual ::flixel::tweens::misc::NumTween add_flixel_tweens_misc_NumTween( ::flixel::tweens::misc::NumTween Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_misc_NumTween_dyn();

		virtual ::flixel::tweens::misc::VarTween add_flixel_tweens_misc_VarTween( ::flixel::tweens::misc::VarTween Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_misc_VarTween_dyn();

		virtual ::flixel::tweens::FlxTween add_flixel_tweens_FlxTween( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  Start);
		Dynamic add_flixel_tweens_FlxTween_dyn();

		Array< ::Dynamic > _tweens;
		virtual ::flixel::tweens::misc::VarTween tween( Dynamic Object,Dynamic Values,hx::Null< Float >  Duration,Dynamic Options);
		Dynamic tween_dyn();

		virtual ::flixel::tweens::misc::NumTween num( Float FromValue,Float ToValue,hx::Null< Float >  Duration,Dynamic Options,Dynamic TweenFunction);
		Dynamic num_dyn();

		virtual ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,hx::Null< Float >  Duration,Dynamic Options);
		Dynamic angle_dyn();

		virtual ::flixel::tweens::misc::ColorTween color( ::flixel::FlxSprite Sprite,hx::Null< Float >  Duration,int FromColor,int ToColor,Dynamic Options);
		Dynamic color_dyn();

		virtual ::flixel::tweens::motion::LinearMotion linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		Dynamic linearMotion_dyn();

		virtual ::flixel::tweens::motion::QuadMotion quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		Dynamic quadMotion_dyn();

		virtual ::flixel::tweens::motion::CubicMotion cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,hx::Null< Float >  Duration,Dynamic Options);
		Dynamic cubicMotion_dyn();

		virtual ::flixel::tweens::motion::CircularMotion circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		Dynamic circularMotion_dyn();

		virtual ::flixel::tweens::motion::LinearPath linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		Dynamic linearPath_dyn();

		virtual ::flixel::tweens::motion::QuadPath quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,hx::Null< Float >  DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		Dynamic quadPath_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual ::flixel::tweens::FlxTween remove( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  Destroy);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void completeAll( );
		Dynamic completeAll_dyn();

		virtual Void forEach( Dynamic Function);
		Dynamic forEach_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTweenManager */ 
