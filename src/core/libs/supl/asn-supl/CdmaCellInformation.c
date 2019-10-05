/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 *     found in "../supl-common.asn"
 */

#include "CdmaCellInformation.h"

static int memb_refNID_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                                    asn_app_constraint_failed_f *ctfailcb,
                                    void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 65535))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refSID_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                                    asn_app_constraint_failed_f *ctfailcb,
                                    void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 32767))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refBASEID_constraint_1(asn_TYPE_descriptor_t *td,
                                       const void *sptr,
                                       asn_app_constraint_failed_f *ctfailcb,
                                       void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 65535))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refBASELAT_constraint_1(asn_TYPE_descriptor_t *td,
                                        const void *sptr,
                                        asn_app_constraint_failed_f *ctfailcb,
                                        void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 4194303))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_reBASELONG_constraint_1(asn_TYPE_descriptor_t *td,
                                        const void *sptr,
                                        asn_app_constraint_failed_f *ctfailcb,
                                        void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 8388607))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refREFPN_constraint_1(asn_TYPE_descriptor_t *td,
                                      const void *sptr,
                                      asn_app_constraint_failed_f *ctfailcb,
                                      void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 511))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refWeekNumber_constraint_1(
    asn_TYPE_descriptor_t *td, const void *sptr,
    asn_app_constraint_failed_f *ctfailcb, void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 65535))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static int memb_refSeconds_constraint_1(asn_TYPE_descriptor_t *td,
                                        const void *sptr,
                                        asn_app_constraint_failed_f *ctfailcb,
                                        void *app_key)
{
    long value;

    if (!sptr)
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: value not given (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }

    value = *(const long *)sptr;

    if ((value >= 0 && value <= 4194303))
        {
            /* Constraint check succeeded */
            return 0;
        }
    else
        {
            _ASN_CTFAIL(app_key, td, sptr, "%s: constraint failed (%s:%d)",
                        td->name, __FILE__, __LINE__);
            return -1;
        }
}

static asn_per_constraints_t ASN_PER_MEMB_REF_NID_CONSTR_2 = {
    {APC_CONSTRAINED, 16, 16, 0, 65535} /* (0..65535) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_SID_CONSTR_3 = {
    {APC_CONSTRAINED, 15, 15, 0, 32767} /* (0..32767) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_BASEID_CONSTR_4 = {
    {APC_CONSTRAINED, 16, 16, 0, 65535} /* (0..65535) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_BASELAT_CONSTR_5 = {
    {APC_CONSTRAINED, 22, -1, 0, 4194303} /* (0..4194303) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_RE_BASELONG_CONSTR_6 = {
    {APC_CONSTRAINED, 23, -1, 0, 8388607} /* (0..8388607) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_REFPN_CONSTR_7 = {
    {APC_CONSTRAINED, 9, 9, 0, 511} /* (0..511) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_WEEK_NUMBER_CONSTR_8 = {
    {APC_CONSTRAINED, 16, 16, 0, 65535} /* (0..65535) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_REF_SECONDS_CONSTR_9 = {
    {APC_CONSTRAINED, 22, -1, 0, 4194303} /* (0..4194303) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CdmaCellInformation_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refNID),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refNID_constraint_1,
     &ASN_PER_MEMB_REF_NID_CONSTR_2, 0, "refNID"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refSID),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refSID_constraint_1,
     &ASN_PER_MEMB_REF_SID_CONSTR_3, 0, "refSID"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refBASEID),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refBASEID_constraint_1,
     &ASN_PER_MEMB_REF_BASEID_CONSTR_4, 0, "refBASEID"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refBASELAT),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refBASELAT_constraint_1,
     &ASN_PER_MEMB_REF_BASELAT_CONSTR_5, 0, "refBASELAT"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, reBASELONG),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_reBASELONG_constraint_1,
     &ASN_PER_MEMB_RE_BASELONG_CONSTR_6, 0, "reBASELONG"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refREFPN),
     (ASN_TAG_CLASS_CONTEXT | (5 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refREFPN_constraint_1,
     &ASN_PER_MEMB_REF_REFPN_CONSTR_7, 0, "refREFPN"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refWeekNumber),
     (ASN_TAG_CLASS_CONTEXT | (6 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refWeekNumber_constraint_1,
     &ASN_PER_MEMB_REF_WEEK_NUMBER_CONSTR_8, 0, "refWeekNumber"},
    {ATF_NOFLAGS, 0, offsetof(struct CdmaCellInformation, refSeconds),
     (ASN_TAG_CLASS_CONTEXT | (7 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NativeInteger, memb_refSeconds_constraint_1,
     &ASN_PER_MEMB_REF_SECONDS_CONSTR_9, 0, "refSeconds"},
};
static ber_tlv_tag_t asn_DEF_CdmaCellInformation_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_CdmaCellInformation_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* refNID at 92 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* refSID at 93 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* refBASEID at 94 */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* refBASELAT at 95 */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}, /* reBASELONG at 96 */
    {(ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0}, /* refREFPN at 97 */
    {(ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0}, /* refWeekNumber at 98 */
    {(ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0}  /* refSeconds at 99 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CdmaCellInformation_specs_1 = {
    sizeof(struct CdmaCellInformation),
    offsetof(struct CdmaCellInformation, _asn_ctx),
    asn_MAP_CdmaCellInformation_tag2el_1,
    8, /* Count of tags in the map */
    0,
    0,
    0, /* Optional elements (not needed) */
    7, /* Start extensions */
    9  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CdmaCellInformation = {
    "CdmaCellInformation",
    "CdmaCellInformation",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0, /* Use generic outmost tag fetcher */
    asn_DEF_CdmaCellInformation_tags_1,
    sizeof(asn_DEF_CdmaCellInformation_tags_1) /
        sizeof(asn_DEF_CdmaCellInformation_tags_1[0]), /* 1 */
    asn_DEF_CdmaCellInformation_tags_1,                /* Same as above */
    sizeof(asn_DEF_CdmaCellInformation_tags_1) /
        sizeof(asn_DEF_CdmaCellInformation_tags_1[0]), /* 1 */
    0, /* No PER visible constraints */
    asn_MBR_CdmaCellInformation_1,
    8,                                   /* Elements count */
    &asn_SPC_CdmaCellInformation_specs_1 /* Additional specs */
};
