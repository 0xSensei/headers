typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long LogTelemetry : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LogInternalEtw : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long LogBlackbox : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS; /* size: 0x0004 */

