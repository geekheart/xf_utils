/**
 * @file xf_utils.h
 * @author catcatBlue (catcatblue@qq.com)
 * @brief xf_utils 模块用户总头文件。
 * @version 1.0
 * @date 2024-06-25
 *
 * Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

/**
 * @defgroup group_xf_utils xf_utils
 * @brief 提供多平台通用工具（功能）。
 */

/**
 * @ingroup group_xf_utils
 * @defgroup group_xf_utils_user 用户接口
 * @brief 调用具体功能的接口。如通用宏、日志、锁等。
 *
 * xfusion 用户使用 xf_utils 时只需 `#include "xf_utils.h"` 即可。
 *
 */

/**
 * @ingroup group_xf_utils_user
 * @defgroup group_xf_utils_user_std xf_std
 * @brief 标准库封装。
 */

/**
 * @ingroup group_xf_utils
 * @defgroup group_xf_utils_port 移植接口
 * @brief 用于对接 xf_utils 的接口。
 *
 * 对接 xf_utils 时只需 `#include "xf_utils_port.h"` 即可。
 *
 */

/**
 * @ingroup group_xf_utils
 * @defgroup group_xf_utils_internal 内部接口
 * @brief 组件内部实现某些功能时定义的接口。用户不一定需要。
 */

#ifndef __XF_UTILS_H__
#define __XF_UTILS_H__

/* ==================== [Includes] ========================================== */

#include "xf_common/xf_common.h"

#include "xf_lock/xf_lock.h"
#include "xf_utils_log/xf_utils_log.h"
#include "xf_check/xf_check.h"

#include "xf_std/xf_stdbool.h"
#include "xf_std/xf_stddef.h"
#include "xf_std/xf_stdint.h"
#include "xf_std/xf_stdlib.h"
#include "xf_std/xf_string.h"
#include "xf_std/xf_stdio.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

/* ==================== [Typedefs] ========================================== */

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /* __XF_UTILS_H__ */
