/**
 * @file xf_stdio.h
 * @author cangyu (sky.kirto@qq.com)
 * @brief
 * @version 0.1
 * @date 2024-10-31
 *
 * @copyright Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

#ifndef __XF_STDIO_H__
#define __XF_STDIO_H__

/* ==================== [Includes] ========================================== */

#include "xf_std_config.h"

#if XF_STDIO_IS_ENABLE
#include <stdio.h>
#endif

/**
 * @cond XFAPI_USER
 * @ingroup group_xf_utils_std
 * @defgroup group_xf_utils_std_stdio xf_stdio
 * @brief 对标准库 stdio.h 的封装。
 * @endcond
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

#define xf_sprintf(dest, format, ...)           xf_user_sprintf(dest, format, ##__VA_ARGS__)
#define xf_snprintf(dest, size, format, ...)    xf_user_snprintf(dest, size, format, ##__VA_ARGS__)
#define xf_vsprintf(dest, format, va)           xf_user_vsprintf(dest, format, va)
#define xf_vsnprintf(dest, size, format, va)    xf_user_vsnprintf(dest, size, format, va)
#define xf_sscanf(source, format, ...)          xf_user_sscanf(source, format, ##__VA_ARGS__)

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

/**
 * End of group_xf_utils_std_stdio
 * @}
 */

#endif // __XF_STDIO_H__
