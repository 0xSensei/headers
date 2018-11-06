typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned __int64 Mask;
  /* 0x0008 */ unsigned short Group;
  /* 0x000a */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x0010 */

typedef struct _flags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Removable : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char GroupAssigned : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char GroupCommitted : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char GroupAssignmentFixed : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned char Fill : 4; /* bit position: 4 */
  }; /* bitfield */
} flags, *Pflags; /* size: 0x0001 */

typedef struct _KHETERO_PROCESSOR_SET
{
  /* 0x0000 */ unsigned __int64 IdealMask;
  /* 0x0008 */ unsigned __int64 PreferredMask;
  /* 0x0010 */ unsigned __int64 AvailableMask;
} KHETERO_PROCESSOR_SET, *PKHETERO_PROCESSOR_SET; /* size: 0x0018 */

typedef struct _KNODE
{
  /* 0x0000 */ unsigned __int64 IdleNonParkedCpuSet;
  /* 0x0008 */ unsigned __int64 IdleSmtSet;
  /* 0x0010 */ unsigned __int64 IdleCpuSet;
  /* 0x0080 */ unsigned __int64 DeepIdleSet;
  /* 0x0088 */ unsigned __int64 IdleConstrainedSet;
  /* 0x0090 */ unsigned __int64 NonParkedSet;
  /* 0x0098 */ unsigned __int64 NonIsrTargetedSet;
  /* 0x00a0 */ long ParkLock;
  /* 0x00a4 */ unsigned long Seed;
  /* 0x0100 */ unsigned long SiblingMask;
  union
  {
    /* 0x0108 */ struct _GROUP_AFFINITY Affinity;
    struct
    {
      /* 0x0108 */ unsigned char AffinityFill[10];
      /* 0x0112 */ unsigned short NodeNumber;
      /* 0x0114 */ unsigned short PrimaryNodeNumber;
      /* 0x0116 */ unsigned char Stride;
      /* 0x0117 */ unsigned char Spare0;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0118 */ unsigned __int64 SharedReadyQueueLeaders;
  /* 0x0120 */ unsigned long ProximityId;
  /* 0x0124 */ unsigned long Lowest;
  /* 0x0128 */ unsigned long Highest;
  /* 0x012c */ unsigned char MaximumProcessors;
  /* 0x012d */ struct _flags Flags;
  /* 0x012e */ unsigned char Spare10;
  /* 0x0130 */ struct _KHETERO_PROCESSOR_SET HeteroSets[5];
  /* 0x01a8 */ unsigned __int64 PpmConfiguredQosSets[4];
  /* 0x01c8 */ long __PADDING__[14];
} KNODE, *PKNODE; /* size: 0x0200 */

