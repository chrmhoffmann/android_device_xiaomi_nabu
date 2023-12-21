/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

#define FINGERPRINT "Xiaomi/nabu_global/nabu:13/RKQ1.200826.002/V14.0.6.0.TKXMIXM:user/release-keys"

static const variant_info_t nabu_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "nabu",
    .marketname = "Xiaomi Pad 5",
    .model = "21051182G",
    .build_fingerprint = FINGERPRINT,

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    nabu_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);
}
