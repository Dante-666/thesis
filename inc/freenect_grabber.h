/**
 * File              : inc/freenect_grabber.h
 * Author            : Siddharth J. Singh <j.singh.logan@gmail.com>
 * Date              : 10.08.2017
 * Last Modified Date: 11.08.2017
 * Last Modified By  : Siddharth J. Singh <j.singh.logan@gmail.com>
 */

/**
 * inc/freenect_grabber.h
 * Copyright (c) 2017 Siddharth J. Singh <j.singh.logan@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __FREENECT_GRABBER_H_
#define __FREENECT_GRABBER_H_
#include <libfreenect/libfreenect.h>
#include "data_grabber.h"

class FreenectGrabber : public DataGrabber {
    public:
       FreenectGrabber();
       void grab_image(cv::Mat& image);
    private:
       bool help;
       void *videoBuf;
};

#endif //__FREENECT_GRABBER_H_
