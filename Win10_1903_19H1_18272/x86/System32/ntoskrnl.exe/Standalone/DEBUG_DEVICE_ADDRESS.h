struct DEBUG_DEVICE_ADDRESS
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Valid;
  union
  {
    /* 0x0002 */ unsigned char Reserved[2];
    struct
    {
      /* 0x0002 */ unsigned char BitWidth;
      /* 0x0003 */ unsigned char AccessSize;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0004 */ unsigned char* TranslatedAddress;
  /* 0x0008 */ unsigned long Length;
}; /* size: 0x000c */

