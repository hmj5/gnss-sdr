/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _CellIDAndLAC_H_
#define _CellIDAndLAC_H_

#include <asn_application.h>

/* Including external dependencies */
#include "LAC.h"
#include "CellID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* CellIDAndLAC */
    typedef struct CellIDAndLAC
    {
        LAC_t referenceLAC;
        CellID_t referenceCI;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } CellIDAndLAC_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_CellIDAndLAC;

#ifdef __cplusplus
}
#endif

#endif /* _CellIDAndLAC_H_ */
#include <asn_internal.h>
