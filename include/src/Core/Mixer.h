#ifndef CTRL_MIXER_H
#define CTRL_MIXER_H
#include <Audio.h>
#include "Globals.h"
#include "../Effects.h"

AudioOutputI2S output;

AudioMixer4 leftMixerOne;
AudioMixer4 rightMixerOne;
AudioMixer4 leftMixerTwo;
AudioMixer4 rightMixerTwo;
AudioMixer4 leftMixerThree;
AudioMixer4 rightMixerThree;
AudioMixer4 leftMixerFour;
AudioMixer4 rightMixerFour;

AudioMixer4 leftMixerMaster;
AudioMixer4 rightMixerMaster;

AudioConnection ch1_left(CHANNELS.channel[0].leftAudio, 0, CHANNELS.channel[0].leftMixer, 0);
AudioConnection ch1_right(CHANNELS.channel[0].rightAudio, 0, CHANNELS.channel[0].rightMixer, 0);
AudioConnection ch1_delay_l(CHANNELS.channel[0].leftAudio, 0, CH1_DELAY_L, 0);
AudioConnection ch1_delay_r(CHANNELS.channel[0].rightAudio, 0, CH1_DELAY_R, 0);
AudioConnection ch1_left_one(CH1_DELAY_L, 0, leftMixerOne, 0);
AudioConnection ch1_right_one(CH1_DELAY_R, 0, rightMixerOne, 0);

AudioConnection ch2_left(CHANNELS.channel[1].leftAudio, 0, CHANNELS.channel[1].leftMixer, 0);
AudioConnection ch2_right(CHANNELS.channel[1].rightAudio, 0, CHANNELS.channel[1].rightMixer, 0);
AudioConnection ch2_left_one(CHANNELS.channel[1].leftMixer, 0, leftMixerOne, 1);
AudioConnection ch2_right_one(CHANNELS.channel[1].rightMixer, 0, rightMixerOne, 1);

AudioConnection ch3_left(CHANNELS.channel[2].leftAudio, 0, CHANNELS.channel[2].leftMixer, 0);
AudioConnection ch3_right(CHANNELS.channel[2].rightAudio, 0, CHANNELS.channel[2].rightMixer, 0);
AudioConnection ch3_left_one(CHANNELS.channel[2].leftMixer, 0, leftMixerOne, 2);
AudioConnection ch3_right_one(CHANNELS.channel[2].rightMixer, 0, rightMixerOne, 2);

AudioConnection ch4_left(CHANNELS.channel[3].leftAudio, 0, CHANNELS.channel[3].leftMixer, 0);
AudioConnection ch4_right(CHANNELS.channel[3].rightAudio, 0, CHANNELS.channel[3].rightMixer, 0);
AudioConnection ch4_left_one(CHANNELS.channel[3].leftMixer, 0, leftMixerOne, 3);
AudioConnection ch4_right_one(CHANNELS.channel[3].rightMixer, 0, rightMixerOne, 3);

AudioConnection left_one(leftMixerOne, 0, leftMixerMaster, 0);
AudioConnection right_one(rightMixerOne, 0, rightMixerMaster, 0);

AudioConnection ch5_left(CHANNELS.channel[4].leftAudio, 0, CHANNELS.channel[4].leftMixer, 0);
AudioConnection ch5_right(CHANNELS.channel[4].rightAudio, 0, CHANNELS.channel[4].rightMixer, 0);
AudioConnection ch5_left_two(CHANNELS.channel[4].leftMixer, 0, leftMixerTwo, 0);
AudioConnection ch5_right_two(CHANNELS.channel[4].rightMixer, 0, rightMixerTwo, 0);

AudioConnection ch6_left(CHANNELS.channel[5].leftAudio, 0, CHANNELS.channel[5].leftMixer, 0);
AudioConnection ch6_right(CHANNELS.channel[5].rightAudio, 0, CHANNELS.channel[5].rightMixer, 0);
AudioConnection ch6_left_two(CHANNELS.channel[5].leftMixer, 0, leftMixerTwo, 1);
AudioConnection ch6_right_two(CHANNELS.channel[5].rightMixer, 0, rightMixerTwo, 1);

AudioConnection ch7_left(CHANNELS.channel[6].leftAudio, 0, CHANNELS.channel[6].leftMixer, 0);
AudioConnection ch7_right(CHANNELS.channel[6].rightAudio, 0, CHANNELS.channel[6].rightMixer, 0);
AudioConnection ch7_left_two(CHANNELS.channel[6].leftMixer, 0, leftMixerTwo, 2);
AudioConnection ch7_right_two(CHANNELS.channel[6].rightMixer, 0, rightMixerTwo, 2);

AudioConnection ch8_left(CHANNELS.channel[7].leftAudio, 0, CHANNELS.channel[7].leftMixer, 0);
AudioConnection ch8_right(CHANNELS.channel[7].rightAudio, 0, CHANNELS.channel[7].rightMixer, 0);
AudioConnection ch8_left_two(CHANNELS.channel[7].leftMixer, 0, leftMixerTwo, 3);
AudioConnection ch8_right_two(CHANNELS.channel[7].rightMixer, 0, rightMixerTwo, 3);

AudioConnection left_two(leftMixerTwo, 0, leftMixerMaster, 1);
AudioConnection right_two(rightMixerTwo, 0, rightMixerMaster, 1);

AudioConnection ch9_left(CHANNELS.channel[8].leftAudio, 0, CHANNELS.channel[8].leftMixer, 0);
AudioConnection ch9_right(CHANNELS.channel[8].rightAudio, 0, CHANNELS.channel[8].rightMixer, 0);
AudioConnection ch9_left_three(CHANNELS.channel[8].leftMixer, 0, leftMixerThree, 0);
AudioConnection ch9_right_three(CHANNELS.channel[8].rightMixer, 0, rightMixerThree, 0);

AudioConnection ch10_left(CHANNELS.channel[9].leftAudio, 0, CHANNELS.channel[9].leftMixer, 0);
AudioConnection ch10_right(CHANNELS.channel[9].rightAudio, 0, CHANNELS.channel[9].rightMixer, 0);
AudioConnection ch10_left_three(CHANNELS.channel[9].leftMixer, 0, leftMixerThree, 1);
AudioConnection ch10_right_three(CHANNELS.channel[9].rightMixer, 0, rightMixerThree, 1);

AudioConnection ch11_left(CHANNELS.channel[10].leftAudio, 0, CHANNELS.channel[10].leftMixer, 0);
AudioConnection ch11_right(CHANNELS.channel[10].rightAudio, 0, CHANNELS.channel[10].rightMixer, 0);
AudioConnection ch11_left_three(CHANNELS.channel[10].leftMixer, 0, leftMixerThree, 2);
AudioConnection ch11_right_three(CHANNELS.channel[10].rightMixer, 0, rightMixerThree, 2);

AudioConnection ch12_left(CHANNELS.channel[11].leftAudio, 0, CHANNELS.channel[11].leftMixer, 0);
AudioConnection ch12_right(CHANNELS.channel[11].rightAudio, 0, CHANNELS.channel[11].rightMixer, 0);
AudioConnection ch12_left_three(CHANNELS.channel[11].leftMixer, 0, leftMixerThree, 3);
AudioConnection ch12_right_three(CHANNELS.channel[11].rightMixer, 0, rightMixerThree, 3);

AudioConnection left_three(leftMixerThree, 0, leftMixerMaster, 2);
AudioConnection right_three(rightMixerThree, 0, rightMixerMaster, 2);

AudioConnection ch13_left(CHANNELS.channel[12].leftAudio, 0, CHANNELS.channel[12].leftMixer, 0);
AudioConnection ch13_right(CHANNELS.channel[12].rightAudio, 0, CHANNELS.channel[12].rightMixer, 0);
AudioConnection ch13_left_four(CHANNELS.channel[12].leftMixer, 0, leftMixerFour, 0);
AudioConnection ch13_right_four(CHANNELS.channel[12].rightMixer, 0, rightMixerFour, 0);

AudioConnection ch14_left(CHANNELS.channel[13].leftAudio, 0, CHANNELS.channel[13].leftMixer, 0);
AudioConnection ch14_right(CHANNELS.channel[13].rightAudio, 0, CHANNELS.channel[13].rightMixer, 0);
AudioConnection ch14_left_four(CHANNELS.channel[13].leftMixer, 0, leftMixerFour, 1);
AudioConnection ch14_right_four(CHANNELS.channel[13].rightMixer, 0, rightMixerFour, 1);

AudioConnection ch15_left(CHANNELS.channel[14].leftAudio, 0, CHANNELS.channel[14].leftMixer, 0);
AudioConnection ch15_right(CHANNELS.channel[14].rightAudio, 0, CHANNELS.channel[14].rightMixer, 0);
AudioConnection ch15_left_four(CHANNELS.channel[14].leftMixer, 0, leftMixerFour, 2);
AudioConnection ch15_right_four(CHANNELS.channel[14].rightMixer, 0, rightMixerFour, 2);

AudioConnection ch16_left(CHANNELS.channel[15].leftAudio, 0, CHANNELS.channel[15].leftMixer, 0);
AudioConnection ch16_right(CHANNELS.channel[15].rightAudio, 0, CHANNELS.channel[15].rightMixer, 0);
AudioConnection ch16_left_four(CHANNELS.channel[15].leftMixer, 0, leftMixerFour, 3);
AudioConnection ch16_right_four(CHANNELS.channel[15].rightMixer, 0, rightMixerFour, 3);

AudioConnection left_four(leftMixerFour, 0, leftMixerMaster, 3);
AudioConnection right_four(rightMixerFour, 0, rightMixerMaster, 3);

AudioConnection outl(leftMixerMaster, 0, output, 0);
AudioConnection outr(rightMixerMaster, 0, output, 1);

void SetMasterVolume(float volume);
#endif
