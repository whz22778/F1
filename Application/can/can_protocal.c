/**
 * @file        can_potocol.c
 * @author      RobotPilots@2020
 * @Version     V1.0
 * @date        9-September-2020
 * @brief       CAN Potocol.
 */
 
/* Includes ------------------------------------------------------------------*/
#include "can_protocal.h"
#include "main.h"

Big_Fu_info_t Big_Fu_info[5];
uint8_t can_Dafu_data[8];

/************** ��Ϣ���մ��� ***************/
/**
 *	@brief	CAN1 �������� ���ݴ���
 */

void CAN1_rxDataHandler(uint32_t canId, uint8_t *rxBuf)
{	
  Board_RX(canId,can1_rx_data);	
}
/************** ��Ϣ���ʹ��� ***************/
/**
 *	@brief	CAN1 �������� ���ݴ���
     ����Ҷ���أ����Ŀ�ȡ���Ŀ��ע��
 */


void Board_Info_Tx()
{

//   memcpy(can_Dafu_data, &Big_Fu_info[0], 8);
//	 Board_Tx(CAN_BOARD_ID_1,can_Dafu_data,1,0x08);

//	 memcpy(can_Dafu_data, &Big_Fu_info[1], 8);
//	 Board_Tx(CAN_BOARD_ID_2,can_Dafu_data,1,0x08);	
//
//	 memcpy(can_Dafu_data, &Big_Fu_info[2], 8);
//	 Board_Tx(CAN_BOARD_ID_3,can_Dafu_data,1,0x08);
//	
//	 memcpy(can_Dafu_data, &Big_Fu_info[3], 8);
//	 Board_Tx(CAN_BOARD_ID_4,can_Dafu_data,1,0x08);	
//	
	 memcpy(can_Dafu_data, &Big_Fu_info[4], 8);
	 Board_Tx(CAN_BOARD_ID_5,can_Dafu_data,1,0x08);
	
	
}

