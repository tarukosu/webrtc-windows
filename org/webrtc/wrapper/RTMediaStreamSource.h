
// Copyright (c) 2015 The WebRTC project authors. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS.  All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.

#ifndef WEBRTC_BUILD_WINUWP_GYP_API_RTMEDIASTREAMSOURCE_H_
#define WEBRTC_BUILD_WINUWP_GYP_API_RTMEDIASTREAMSOURCE_H_

#include "Media.h"
#include "MediaSourceHelper.h"
#include "webrtc/api/mediastreaminterface.h"
#include "webrtc/system_wrappers/include/critical_section_wrapper.h"

using Windows::Media::Core::MediaStreamSource;
using Platform::WeakReference;
using Org::WebRtc::MediaVideoTrack;
using Windows::System::Threading::ThreadPoolTimer;
using Windows::Media::Core::MediaStreamSourceSampleRequest;
/*
namespace Org {
	namespace WebRtc {
		namespace Internal {
			ref class RTMediaStreamSource sealed {
			public:
				virtual ~RTMediaStreamSource();
				void Teardown();

				void OnSampleRequested(Windows::Media::Core::MediaStreamSource ^sender,
					Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs ^args);

			internal:
				static MediaStreamSource^ CreateMediaSource(
					MediaVideoTrack^ track, uint32 frameRate, String^ id);
			private:
				class RTCRenderer : public rtc::VideoSinkInterface<cricket::VideoFrame> {
				public:
					explicit RTCRenderer(RTMediaStreamSource^ streamSource);
					virtual ~RTCRenderer();
					virtual void SetSize(uint32 width, uint32 height, uint32 reserved);
					virtual void RenderFrame(const cricket::VideoFrame *frame);
					virtual bool CanApplyRotation() { return true; }
					void OnFrame(const cricket::VideoFrame& frame) override {
						RenderFrame(&frame);
					}
				private:
					// This object is owned by RTMediaStreamSource
					// so _streamSource must be a weak reference
					WeakReference _streamSource;
				};

				RTMediaStreamSource(MediaVideoTrack^ videoTrack, bool isH264);
				void ProcessReceivedFrame(cricket::VideoFrame *frame);
				bool ConvertFrame(IMFMediaBuffer* mediaBuffer, cricket::VideoFrame* frame);
				void ResizeSource(uint32 width, uint32 height);

				HRESULT MakeSampleCallback(cricket::VideoFrame* frame, IMFSample** sample);
				void FpsCallback(int fps);

				MediaVideoTrack^ _videoTrack;
				String^ _id;  // Provided by the calling API.
				std::string _idUtf8; // Provided by the calling API, same as _id

				// Keep a weak reference here.
				// Its _mediaStreamSource that keeps a reference to this object.
				WeakReference _mediaStreamSource;
				std::unique_ptr<RTCRenderer> _rtcRenderer;
				std::unique_ptr<webrtc::CriticalSectionWrapper> _lock;

				std::unique_ptr<MediaSourceHelper> _helper;

				ThreadPoolTimer^ _progressTimer;
				void ProgressTimerElapsedExecute(ThreadPoolTimer^ source);

				ThreadPoolTimer^ _fpsTimer;
				void FPSTimerElapsedExecute(ThreadPoolTimer^ source);
				bool _frameSentThisTime;

				Windows::Media::Core::VideoStreamDescriptor^ _videoDesc;

				void ReplyToSampleRequest();

				MediaStreamSourceSampleRequest^ _request;
				Windows::Media::Core::MediaStreamSourceSampleRequestDeferral^ _deferral;
				Windows::Media::Core::MediaStreamSourceStartingRequestDeferral^ _startingDeferral;

				ULONG _frameBeingQueued;
			};
		}
	}
}  // namespace Org.WebRtc.Internal
*/
#endif  // WEBRTC_BUILD_WINUWP_GYP_API_RTMEDIASTREAMSOURCE_H_
