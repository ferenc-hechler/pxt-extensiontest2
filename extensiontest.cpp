/**
* Andy England @ SparkFun Electronics
* September 6, 2018
* https://github.com/sparkfun/pxt-light-bit
*
* Development environment specifics:
* Written in Microsoft PXT
* Tested with a SparkFun temt6000 sensor and micro:bit
*
* This code is released under the [MIT License](http://opensource.org/licenses/MIT).
* Please review the LICENSE.md file included with this example. If you have any questions
* or concerns with licensing, please contact techsupport@sparkfun.com.
* Distributed as-is; no warranty is given.
*/


#include <pxt.h>
#include <MicroBit.h>
#include <cstdint>
#include <math.h>

using namespace pxt;

namespace extensiontest {

//% blockId=extensiontest_initfcnn
//% block="Init Brain|number %inputs|number[] %hidden|number %outputs"
//% shim=extensiontest::initfcnn
void initfcnn(int inputs, RefCollection &hidden, int outputs) {
	uBit.serial.send("initfcnn-v2");
}


//% blockId=extensiontest_fcnnfromjson
//% block="Json Brain|string %json"
//% shim=extensiontest::fcnnfromjson
void fcnnfromjson(String json) {
	uBit.serial.send("fcnnfromjson-v2");
}




//% blockId=extensiontest_ftrain
//% block="Train with err result|number[] %input|number[] %expected_output"
//% shim=extensiontest::ftrain
float ftrain(RefCollection &input, RefCollection &expected_output) {
	uBit.serial.send("ftrain-v2");
}

//% blockId=extensiontest_train
//% block="Train|number[] %input|number[] %expected_output"
//% shim=extensiontest::train
void train(RefCollection &input, RefCollection &expected_output) {
	uBit.serial.send("train-v2");
}



//% blockId=extensiontest_predict
//% block="Predict|number[] %input|number[] %output"
//% shim=extensiontest::predict
void predict(RefCollection &input, RefCollection &output) {
	uBit.serial.send("predict-v2");
}


}
