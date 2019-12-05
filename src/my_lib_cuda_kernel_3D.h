#ifdef __cplusplus
extern "C" {
#endif



int BilinearSamplerBCWHD_updateOutput_cuda_kernel_3D(/*THCudaTensor_size(state,output,2)*/int szw,
                                                 /*THCudaTensor_size(state,output,1)*/int szc,
                                                 /*THCudaTensor_size(state,output,0)*/int szb,
                                                 /*THCudaTensor_size(state, inputImages, 1)*/int ic,
                                                 /*THCudaTensor_size(state, inputImages, 2)*/int iw,
                                                 /*THCudaTensor_size(state, inputImages, 3)*/int ih,
                                                 /*THCudaTensor_size(state, inputImages, 4)*/int id,
                                                 /*THCudaTensor_size(state, inputImages, 2)*/int ow,
                                                 /*THCudaTensor_size(state, inputImages, 3)*/int oh,
                                                 /*THCudaTensor_size(state, inputImages, 4)*/int od,
                                                 /*THCudaTensor *inputImages*/float *inputImages, int isb, int isc, int isw, int ish, int isd, 
                                                 /*THCudaTensor *grids*/float *grids, int gsb, int gsc, int gsw, int gsh, int gsd, 
                                                 /*THCudaTensor *output*/float *output, int osb, int osc, int osw, int osh, int osd, 
                                                 /*THCState_getCurrentStream(state)*/cudaStream_t stream, int zero_boundary);




int BilinearSamplerBCWHD_updateGradInput_cuda_kernel_3D(/*THCudaTensor_size(state,gradOutput,2)*/int szw,
                                                    /*THCudaTensor_size(state,gradOutput,1)*/int szc,
                                                    /*THCudaTensor_size(state,gradOutput,0)*/int szb,
                                                    /*THCudaTensor_size(state, inputImages, 1)*/int ic,
                                                    /*THCudaTensor_size(state, inputImages, 2)*/int iw,
                                                    /*THCudaTensor_size(state, inputImages, 3)*/int ih,
                                                    /*THCudaTensor_size(state, inputImages, 4)*/int id,
                                                     /*THCudaTensor_size(state, inputImages, 2)*/int ow,
                                                    /*THCudaTensor_size(state, inputImages, 3)*/int oh,
                                                    /*THCudaTensor_size(state, inputImages, 4)*/int od,
                                                    /*THCudaTensor *inputImages*/float *inputImages, int isb, int isc, int isw, int ish, int isd, 
                                                    /*THCudaTensor *grids*/float *grids, int gsb, int gsc, int gsw, int gsh,  int gsd,
                                                    /*THCudaTensor *gradInputImages*/float *gradInputImages, int gisb, int gisc, int gisw, int gish, int gisd,
                                                    /*THCudaTensor *gradGrids*/float *gradGrids, int ggsb, int ggsc, int ggsw, int ggsh, int ggsd,
                                                    /*THCudaTensor *gradOutput*/float *gradOutput, int gosb, int gosc, int gosw, int gosh, int gosd,
                                                    /*THCState_getCurrentStream(state)*/cudaStream_t stream, int zero_boundary);

int BilinearSamplerBCWHD_updateGradInputOnlyGrid_cuda_kernel_3D(/*THCudaTensor_size(state,gradOutput,2)*/int szw,
                                                    /*THCudaTensor_size(state,gradOutput,1)*/int szc,
                                                    /*THCudaTensor_size(state,gradOutput,0)*/int szb,
                                                    /*THCudaTensor_size(state, inputImages, 1)*/int ic,
                                                    /*THCudaTensor_size(state, inputImages, 2)*/int iw,
                                                    /*THCudaTensor_size(state, inputImages, 3)*/int ih,
                                                    /*THCudaTensor_size(state, inputImages, 4)*/int id,
                                                     /*THCudaTensor_size(state, inputImages, 2)*/int ow,
                                                    /*THCudaTensor_size(state, inputImages, 3)*/int oh,
                                                    /*THCudaTensor_size(state, inputImages, 4)*/int od,
                                                    /*THCudaTensor *inputImages*/float *inputImages, int isb, int isc, int isw, int ish, int isd, 
                                                    /*THCudaTensor *grids*/float *grids, int gsb, int gsc, int gsw, int gsh,  int gsd,
                                                    /*THCudaTensor *gradGrids*/float *gradGrids, int ggsb, int ggsc, int ggsw, int ggsh, int ggsd,
                                                    /*THCudaTensor *gradOutput*/float *gradOutput, int gosb, int gosc, int gosw, int gosh, int gosd,
                                                    /*THCState_getCurrentStream(state)*/cudaStream_t stream, int zero_boundary);


#ifdef __cplusplus
}
#endif
