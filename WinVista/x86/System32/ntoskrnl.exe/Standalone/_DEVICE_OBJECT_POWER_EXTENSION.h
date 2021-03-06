typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _DEVICE_POWER_STATE
{
  PowerDeviceUnspecified = 0,
  PowerDeviceD0 = 1,
  PowerDeviceD1 = 2,
  PowerDeviceD2 = 3,
  PowerDeviceD3 = 4,
  PowerDeviceMaximum = 5,
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;

typedef struct _POWER_CHANNEL_SUMMARY
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long TotalCount;
  /* 0x0008 */ unsigned long D0Count;
  /* 0x000c */ struct _LIST_ENTRY NotifyList;
} POWER_CHANNEL_SUMMARY, *PPOWER_CHANNEL_SUMMARY; /* size: 0x0014 */

typedef struct _DEVICE_OBJECT_POWER_EXTENSION
{
  /* 0x0000 */ long IdleCount;
  /* 0x0004 */ unsigned long ConservationIdleTime;
  /* 0x0008 */ unsigned long PerformanceIdleTime;
  /* 0x000c */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0010 */ struct _LIST_ENTRY IdleList;
  /* 0x0018 */ unsigned char DeviceType;
  /* 0x001c */ enum _DEVICE_POWER_STATE State;
  /* 0x0020 */ struct _LIST_ENTRY NotifySourceList;
  /* 0x0028 */ struct _LIST_ENTRY NotifyTargetList;
  /* 0x0030 */ struct _POWER_CHANNEL_SUMMARY PowerChannelSummary;
  /* 0x0044 */ struct _LIST_ENTRY Volume;
  /* 0x004c */ unsigned long PreviousIdleCount;
} DEVICE_OBJECT_POWER_EXTENSION, *PDEVICE_OBJECT_POWER_EXTENSION; /* size: 0x0050 */

