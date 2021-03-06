typedef struct _MMWSLENTRY
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Valid : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Spare : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long Hashed : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Direct : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Protection : 5; /* bit position: 4 */
    /* 0x0000 */ unsigned long Age : 3; /* bit position: 9 */
    /* 0x0000 */ unsigned long VirtualPageNumber : 20; /* bit position: 12 */
  }; /* bitfield */
} MMWSLENTRY, *PMMWSLENTRY; /* size: 0x0004 */

