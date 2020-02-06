#pragma once

struct A {
	virtual void func1() {}
};

struct B : public A {
	void func1() {}
};