typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _MDL
{
  /* 0x0000 */ struct _MDL* Next;
  /* 0x0008 */ short Size;
  /* 0x000a */ short MdlFlags;
  /* 0x0010 */ struct _EPROCESS* Process;
  /* 0x0018 */ void* MappedSystemVa;
  /* 0x0020 */ void* StartVa;
  /* 0x0028 */ unsigned long ByteCount;
  /* 0x002c */ unsigned long ByteOffset;
} MDL, *PMDL; /* size: 0x0030 */

typedef struct _MI_PAGEFILE_TRACES
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned char Priority;
  /* 0x0005 */ unsigned char IrpPriority;
  /* 0x0008 */ union _LARGE_INTEGER CurrentTime;
  /* 0x0010 */ unsigned __int64 AvailablePages;
  /* 0x0018 */ unsigned __int64 ModifiedPagesTotal;
  /* 0x0020 */ unsigned __int64 ModifiedPagefilePages;
  /* 0x0028 */ unsigned __int64 ModifiedNoWritePages;
  struct // _TAG_UNNAMED_150
  {
    /* 0x0030 */ struct _MDL Mdl;
    /* 0x0060 */ unsigned __int64 Page[1];
  } /* size: 0x0038 */ MdlHack;
} MI_PAGEFILE_TRACES, *PMI_PAGEFILE_TRACES; /* size: 0x0068 */
