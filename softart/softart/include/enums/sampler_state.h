/**************************
NEVER CHANGE THIS FILE MANUALLY!

This File Was Generated By enums_gen.py Automatically.
************************/

#ifndef SOFTART_ENUMS_SAMPLER_STATE_H
#define SOFTART_ENUMS_SAMPLER_STATE_H

#ifdef _DEBUG
#include <set>
#endif

class sampler_state{

#ifdef _DEBUG
	static std::set<int>& get_sampler_state_table();
#endif
	int val;
	explicit sampler_state(int v);
	
public:
	static sampler_state cast(int val);
	
	sampler_state(const sampler_state& rhs):val(rhs.val){}
	
	sampler_state& operator =(const sampler_state& rhs){ val=rhs.val; }
	
	operator int(){ return val; }
	
	friend inline bool operator == (const sampler_state& lhs, const sampler_state& rhs)
	{ return lhs.val == rhs.val; }
	
	friend inline bool operator != (const sampler_state& lhs, const sampler_state& rhs)
	{ return lhs.val != rhs.val; }
	
	static const sampler_state invalid;
	static const sampler_state min;
	static const sampler_state mag;
	static const sampler_state mip;
	static const sampler_state max;
};

template<class T> T enum_cast(int val);

template<> inline sampler_state enum_cast<sampler_state>(int val){
	return sampler_state::cast(val);
}

#endif