#ifndef _ZQ_FACE_RECOGNIZER_ARC_FACE_OPENCV_H_
#define _ZQ_FACE_RECOGNIZER_ARC_FACE_OPENCV_H_
#pragma once

#include "ZQ_FaceRecognizerSphereFaceOpenCV.h"

namespace ZQ
{
	class ZQ_FaceRecognizerArcFaceOpenCV : public ZQ_FaceRecognizerSphereFaceOpenCV
	{
	public:
		virtual int GetCropWidth() const { return 112; }

		virtual int GetCropHeight() const { return 112; }
	};
}

#endif
