
#ifndef CTRL_HANDLERS
#define CTRL_HANDLERS
void AddRecordStep();
void ChangeBandPass(int channel, int val);
void ChangeBandPassAmount(int channel, int val);
void ChangeBypassVolume(int val);
void ChangeCueMix(int val);
void ChangeCueVolume(int val);
void ChangeCVRecordQuantisation(int val);
void ChangeCVRecordQuantisationAccuracy(int val);
void ChangeEffectParamOne(int channel, int val);
void ChangeEffectParamTwo(int channel, int val);
void ChangeEffectWet(int channel, int val);
void ChangeHighEQ(int channel, int val);
void ChangeHighPass(int channel, int val);
void ChangeHighPassAmount(int channel, int val);
void ChangeLowEQ(int channel, int val);
void ChangeLowPass(int channel, int val);
void ChangeLowPassAmount(int channel, int val);
void ChangeMasterVolume(int val);
void ChangeMidEQ(int channel, int val);
void ChangeVolume(int channel, int val);
void SetOverdubMode();
void SetRecordLength(int val);
void SetRecordQuantisation(int val);
void ToggleBypass();
#endif