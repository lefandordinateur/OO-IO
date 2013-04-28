#ifndef DUMMYPHYSICALINPUT_H_
#define DUMMYPHYSICALINPUT_H_


class DummyPhysicalInput: public Input
{
public:

	DummyPhysicalInput(bool state)
	{
		_physicalState = state;
	}
	virtual bool GetState() const
	{
		return _physicalState;
	}
	void changePhysicalState(bool newState)
	{
		_physicalState = newState;
	}
private:
	bool _physicalState;

};


#endif /* DUMMYPHYSICALINPUT_H_ */
