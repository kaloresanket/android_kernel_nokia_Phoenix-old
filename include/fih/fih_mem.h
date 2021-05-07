#ifdef CONFIG_FIH

#ifndef __FIH_MEM_H__
#define __FIH_MEM_H__

/* NV */
#define FIH_MEM_NV_MDM_ADDR      0xAF000000
#define FIH_MEM_NV_MDM_SIZE      0x00800000

#define FIH_MEM_NV_RF_ADDR       0xAF000000
#define FIH_MEM_NV_RF_SIZE       0x00200000

#define FIH_MEM_NV_CUST_ADDR     0xAF200000
#define FIH_MEM_NV_CUST_SIZE     0x00200000

#define FIH_MEM_NV_DEF_ADDR      0xAF400000
#define FIH_MEM_NV_DEF_SIZE      0x00400000

/* PSTORE */
#define FIH_MEM_PSTORE_ADDR      0xAF800000
#define FIH_MEM_PSTORE_SIZE      0x00200000

#define FIH_MEM_LAST_KLOG_ADDR   (FIH_MEM_PSTORE_ADDR + 0x100000)
#define FIH_MEM_LAST_KLOG_SIZE   0x40000

#define FIH_MEM_LAST_ALOG_ADDR   (FIH_MEM_PSTORE_ADDR + 0x180000)
#define FIH_MEM_LAST_ALOG_SIZE   0x80000

/* BLOG */
#define FIH_MEM_LAST_BLOG_ADDR   0xAFA00000
#define FIH_MEM_LAST_BLOG_SIZE   0x00010000

#define FIH_MEM_THIS_BLOG_ADDR   0xAFA10000
#define FIH_MEM_THIS_BLOG_SIZE   0x00010000

/* XLOG */
#define FIH_MEM_LAST_XLOG_ADDR   0xAFA20000
#define FIH_MEM_LAST_XLOG_SIZE   0x00010000

#define FIH_MEM_THIS_XLOG_ADDR   0xAFA30000
#define FIH_MEM_THIS_XLOG_SIZE   0x00010000

/* ULOG */
#define FIH_MEM_LAST_ULOG_ADDR   0xAFA40000
#define FIH_MEM_LAST_ULOG_SIZE   0x00020000

#define FIH_MEM_THIS_ULOG_ADDR   0xAFA60000
#define FIH_MEM_THIS_ULOG_SIZE   0x00020000

/* SUT */
#define FIH_MEM_SUT_ADDR         0xAFA80000
#define FIH_MEM_SUT_SIZE         0x00001000

/* SAMP */
#define FIH_MEM_SAMP_ADDR        0xAFA81000
#define FIH_MEM_SAMP_SIZE        0x00001000

/* SENSOR:ALS */
#define FIH_MEM_SENSOR_ALS_ADDR  0xAFA82000
#define FIH_MEM_SENSOR_ALS_SIZE  0x00001000

/* FVER */
#define FIH_MEM_FVER_ADDR        0xAFAC0000
#define FIH_MEM_FVER_SIZE        0x00040000

/* TEST */
#define FIH_MEM_DDR_TEST_ADDR    0xB0000000
#define FIH_MEM_DDR_TEST_SIZE    0x10000000

#endif

#endif