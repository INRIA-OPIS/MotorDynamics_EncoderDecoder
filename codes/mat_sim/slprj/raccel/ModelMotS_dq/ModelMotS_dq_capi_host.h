#include "__cf_ModelMotS_dq.h"
#ifndef RTW_HEADER_ModelMotS_dq_cap_host_h_
#define RTW_HEADER_ModelMotS_dq_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
ModelMotS_dq_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void ModelMotS_dq_host_InitializeDataMapInfo (
ModelMotS_dq_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
