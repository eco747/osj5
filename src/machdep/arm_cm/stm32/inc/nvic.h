

extern void nvic_enable(int irq, int prio);


#define EXCEPTION_NMI        2
#define EXCEPTION_HARDFAULT  3
#define EXCEPTION_MEMMANAGE  4
#define EXCEPTION_BUSFAULT   5
#define EXCEPTION_USAGEFAULT 6
#define EXCEPTION_SVCALL     11
#define EXCEPTION_PENDSV     14
#define EXCEPTION_SYSTICK    15


#define IRQ_WWDG        0
#define IRQ_PVD 1
#define IRQ_TAMPER      2
#define IRQ_RTC 3
#define IRQ_FLASH       4
#define IRQ_RCC 5
#define IRQ_EXTI0       6
#define IRQ_EXTI1       7
#define IRQ_EXTI2       8
#define IRQ_EXTI3       9
#define IRQ_EXTI4       10
#define IRQ_DMA1_CHANNEL1       11
#define IRQ_DMA1_CHANNEL2       12
#define IRQ_DMA1_CHANNEL3       13
#define IRQ_DMA1_CHANNEL4       14
#define IRQ_DMA1_CHANNEL5       15
#define IRQ_DMA1_CHANNEL6       16
#define IRQ_DMA1_CHANNEL7       17

#define IRQ_DMA1_STREAM0        11
#define IRQ_DMA1_STREAM1        12
#define IRQ_DMA1_STREAM2        13
#define IRQ_DMA1_STREAM3        14
#define IRQ_DMA1_STREAM4        15
#define IRQ_DMA1_STREAM5        16
#define IRQ_DMA1_STREAM6        17
#define IRQ_ADC1_2      18
#define IRQ_USB_HP_CAN_TX       19
#define IRQ_USB_LP_CAN_RX0      20
#define IRQ_CAN_RX1     21
#define IRQ_CAN_SCE     22
#define IRQ_EXTI9_5     23
#define IRQ_TIM1_BRK    24
#define IRQ_TIM1_UP     25
#define IRQ_TIM1_TRG_COM        26
#define IRQ_TIM1_CC     27
#define IRQ_TIM2        28
#define IRQ_TIM3        29
#define IRQ_TIM4        30
#define IRQ_I2C1_EV     31
#define IRQ_I2C1_ER     32
#define IRQ_I2C2_EV     33
#define IRQ_I2C2_ER     34
#define IRQ_SPI1        35
#define IRQ_SPI2        36
#define IRQ_USART1      37
#define IRQ_USART2      38
#define IRQ_USART3      39
#define IRQ_EXTI15_10   40
#define IRQ_RTCALARM    41
#define IRQ_USBWAKEUP   42
#define IRQ_TIM8_BRK    43
#define IRQ_TIM8_UP     44
#define IRQ_TIM8_TRG_COM        45
#define IRQ_TIM8_CC     46
#define IRQ_DMA1_CHANNEL8	47
#define IRQ_DMA1_STREAM7	47
#define IRQ_FSMC        48
#define IRQ_SDIO        49
#define IRQ_TIM5        50
#define IRQ_SPI3        51
#define IRQ_UART4       52
#define IRQ_UART5       53
#define IRQ_TIM6        54
#define IRQ_TIM7        55
#define IRQ_DMA2_CHANNEL1       56
#define IRQ_DMA2_CHANNEL2       57
#define IRQ_DMA2_CHANNEL3       58
#define IRQ_DMA2_CHANNEL4    	59
#define IRQ_DMA2_CHANNEL5    	60
#define IRQ_DMA2_STREAM0        56
#define IRQ_DMA2_STREAM1        57
#define IRQ_DMA2_STREAM2        58
#define IRQ_DMA2_STREAM3     	59
#define IRQ_DMA2_STREAM4    	60
#define IRQ_ETH			61
#define IRQ_ETH_WAKE		62
#define IRQ_CAN2_TX		63
#define IRQ_CAN2_RX0		64
#define IRQ_CAN2_RX1		65
#define IRQ_CAN2_SCE		66
#define IRQ_OTG_FS		67
#define IRQ_DMA2_CHANNEL6       68
#define IRQ_DMA2_CHANNEL7       69
#define IRQ_DMA2_CHANNEL8       70
#define IRQ_DMA2_STREAM5        68
#define IRQ_DMA2_STREAM6        69
#define IRQ_DMA2_STREAM7        70
#define IRQ_USART6              71
#define IRQ_I2C3_EV             72
#define IRQ_I2C3_ER             73
#define IRQ_OTG_HS_EP1_OUT      74
#define IRQ_OTG_HS_EP1_IN       75
#define IRQ_OTG_HS_WKUP         76
#define IRQ_OTG_HS              77
#define IRQ_DCMI                78
#define IRQ_CRYP                79
#define IRQ_HASH_RNG            80
#define IRQ_FPU                 81
