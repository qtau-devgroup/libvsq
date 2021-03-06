/**
 * DynamicsMode.hpp
 * Copyright © 2012 kbinani
 *
 * This file is part of libvsq.
 *
 * libvsq is free software; you can redistribute it and/or
 * modify it under the terms of the BSD License.
 *
 * libvsq is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */
#ifndef __DynamicsMode_h__
#define __DynamicsMode_h__

#include "vsqglobal.hpp"

VSQ_BEGIN_NAMESPACE

/**
 * @brief VOCALOID1における、ダイナミクスモードを表す定数を格納するための列挙子
 */
class DynamicsMode{
public:
    enum DynamicsModeEnum{
        /**
         * @brief DYNカーブが非表示になるモード(デフォルト)
         */
        STANDARD = 0,

        /**
         * @brief DYNカーブが表示されるモード(エキスパートモード)
         */
        EXPERT = 1
    };
};

VSQ_END_NAMESPACE

#endif
