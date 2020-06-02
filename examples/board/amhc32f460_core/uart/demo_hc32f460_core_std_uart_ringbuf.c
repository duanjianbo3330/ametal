/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief UART ���λ��������̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. ������� "UART interrupt mode(Add ring buffer) test:"��
 *   2. ����������յ����ַ�����
 *
 * \note
 *    1. �� PIOE_4 �������� PC ���ڵ� TXD�� PIOE_5 �������� PC ���ڵ� RXD��
 *    2. ������Դ���ʹ���뱾������ͬ����Ӧ�ں�������ʹ�õ�����Ϣ�������
 *      ���磺AM_DBG_INFO()����
 *
 * \par Դ����
 * \snippet demo_hc32f460_std_uart_ringbuf.c src_hc32f460_std_uart_ringbuf
 *
 * \internal
 * \par Modification history
 * - 1.00 20-03-11  cds, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_hc32f460_std_uart_ringbuf
 * \copydoc demo_hc32f460_std_uart_ringbuf.c
 */

/** [src_hc32f460_std_uart_ringbuf] */
#include "ametal.h"
#include "am_hc32f460_inst_init.h"
#include "demo_std_entries.h"
#include "am_vdebug.h"
#include "demo_hc32f460_core_entries.h"
/**
 * \brief �������
 */
void demo_hc32f460_core_std_uart_ringbuf_entry (void)
{
    AM_DBG_INFO("demo hc32f460_core std uart ringbuf!\r\n");

     /* �ȴ������������ */
    am_mdelay(100);

    demo_std_uart_ringbuf_entry(am_hc32f460_uart4_inst_init());
}
/** [src_hc32f460_std_uart_ringbuf] */

/* end of file */