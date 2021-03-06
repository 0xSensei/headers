typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long HeadersPresent;
  /* 0x0010 */ unsigned __int64 MatchFields;
} NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE, *PNDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE; /* size: 0x0018 */

