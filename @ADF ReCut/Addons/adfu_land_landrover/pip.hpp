class RenderTargets /// class for all Picture-in-Picture
{
	class RightMirror
	{
		renderTarget = "rendertarget0"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
		class CameraView1
		{
			pointPosition		= "PIP0_pos"; 	/// memory point of PiP origin
			pointDirection		= "PIP0_dir"; 	/// memory point of PiP direction
			renderQuality 		= 2;			/// what quality should the PiP be
			renderVisionMode 	= 0;			/// zero means standard vision
			fov 				= 0.7;			/// what is the angle of the PiP field of view
		};
	};
	class LeftMirror
	{
		renderTarget = "rendertarget1"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
		class CameraView1
		{
			pointPosition		= "PIP1_pos"; 	/// memory point of PiP origin
			pointDirection		= "PIP1_dir"; 	/// memory point of PiP direction
			renderQuality 		= 2;			/// what quality should the PiP be
			renderVisionMode 	= 0;			/// zero means standard vision
			fov 				= 0.7;			/// what is the angle of the PiP field of view
		};
	};
	class MiddleMirror
	{
		renderTarget = "rendertarget2"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
		class CameraView1
		{
			pointPosition		= "PIP2_pos"; 	/// memory point of PiP origin
			pointDirection		= "PIP2_dir"; 	/// memory point of PiP direction
			renderQuality 		= 2;			/// what quality should the PiP be
			renderVisionMode 	= 0;			/// zero means standard vision
			fov 				= 0.7;			/// what is the angle of the PiP field of view
		};
	};
};
