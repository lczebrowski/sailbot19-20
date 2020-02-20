/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Wed Feb 19 23:54:49 2020. */

#ifndef PB_TRIMTABMESSAGES_PB_H_INCLUDED
#define PB_TRIMTABMESSAGES_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _TrimAngle_TRIM_STATE {
    TrimAngle_TRIM_STATE_MAX_LIFT_PORT = 0,
    TrimAngle_TRIM_STATE_MAX_LIFT_STBD = 1,
    TrimAngle_TRIM_STATE_MAX_DRAG_PORT = 2,
    TrimAngle_TRIM_STATE_MAX_DRAG_STBD = 3,
    TrimAngle_TRIM_STATE_MIN_LIFT = 4,
    TrimAngle_TRIM_STATE_MANUAL = 5
} TrimAngle_TRIM_STATE;
#define _TrimAngle_TRIM_STATE_MIN TrimAngle_TRIM_STATE_MAX_LIFT_PORT
#define _TrimAngle_TRIM_STATE_MAX TrimAngle_TRIM_STATE_MANUAL
#define _TrimAngle_TRIM_STATE_ARRAYSIZE ((TrimAngle_TRIM_STATE)(TrimAngle_TRIM_STATE_MANUAL+1))

/* Struct definitions */
typedef struct _ApparentWind {
    float apparent_wind;
/* @@protoc_insertion_point(struct:ApparentWind) */
} ApparentWind;

typedef struct _TrimAngle {
    uint32_t control_angle;
    TrimAngle_TRIM_STATE state;
/* @@protoc_insertion_point(struct:TrimAngle) */
} TrimAngle;

/* Default values for struct fields */

/* Initializer values for message structs */
#define TrimAngle_init_default                   {0, _TrimAngle_TRIM_STATE_MIN}
#define ApparentWind_init_default                {0}
#define TrimAngle_init_zero                      {0, _TrimAngle_TRIM_STATE_MIN}
#define ApparentWind_init_zero                   {0}

/* Field tags (for use in manual encoding/decoding) */
#define ApparentWind_apparent_wind_tag           1
#define TrimAngle_control_angle_tag              1
#define TrimAngle_state_tag                      2

/* Struct field encoding specification for nanopb */
extern const pb_field_t TrimAngle_fields[3];
extern const pb_field_t ApparentWind_fields[2];

/* Maximum encoded size of messages (where known) */
#define TrimAngle_size                           8
#define ApparentWind_size                        5

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TRIMTABMESSAGES_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
