		class RenderTargets
		{
			class DriverCamera
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition		= "pip1_pos";
					pointDirection		= "pip1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 4;
					fov 				= 0.7;					
				}; 			
			};			
			class RemoteWeaponCamera
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition		= "Gun_Camera";
					pointDirection		= "Gun_Camera_Dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};			
		};
