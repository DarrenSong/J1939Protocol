#ifndef _J1939_H
#define _J1939_H

typedef unsigned char ui8;
typedef unsigned short int ui16;
typedef unsigned int ui32;

typedef char si8;
typedef short int si16;
typedef int si32;

typedef float f16;
typedef double d32;

#define J1939_TRUE        1
#define J1939_FALSE       0



typedef struct sJ1939CANBasicMessage
{
      ui16 Timeout;
      ui8  Status;
      ui8  AlignmentFillbyte1;
      ui32 Id;
      ui16 Dlc;
      ui8  IdFormat;
      ui8  AlignmentFillbyte2;
      ui8 const * ptr_Data;
} J1939_MP_Message;

typedef ui8  J1939_PduFormatType;
typedef J1939_PduFormatType J1939_PF;
typedef ui8  J1939_AddressType;
typedef J1939_AddressType J1939_Address;

#define J1939_NULL_ADDRESS          ((J1939_Address)0xFE) 
#define J1939_GLOBAL_ADDRESS        ((J1939_Address)0xFF) 
#define J1939_MAX_DATA_LENGTH       1785 

#define J1939_DEFAULT_PRIO          0x06 
#define J1939_FIRST_DATA_PAGE       0x00


#define J1939_PDU_FORMAT_ACKNOWLEDGMENT          ((J1939_PF)232)
#define J1939_PDU_FORMAT_REQUEST                 ((J1939_PF)234)
#define J1939_PDU_FORMAT_DATA_TRANSFER           ((J1939_PF)235)
#define J1939_PDU_FORMAT_CONNECTION_MANAGEMENT   ((J1939_PF)236)
#define J1939_PDU_FORMAT_NETWORK_LAYER           ((J1939_PF)237)
#define J1939_PDU_FORMAT_NET_MGR_ADDR            ((J1939_PF)238)
#define J1939_PDU_FORMAT2_START                  ((J1939_PF)240)
#define J1939_CA_NET_MGR_ADDR_DEFAULT_ID         0x18EE0000UL
#define J1939_RESERVED_DATA_BYTE                 0xFFU




#endif