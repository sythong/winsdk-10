/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    wdmguid.h

Abstract:

    Defines GUIDs for function device classes and device events used in
    Plug & Play.

Revision History:

--*/
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef FAR
#define FAR
#endif

//
// Device events that can be broadcasted to drivers and user-mode apps.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
DEFINE_GUID( GUID_HWPROFILE_QUERY_CHANGE,          0xcb3a4001L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_HWPROFILE_CHANGE_CANCELLED,      0xcb3a4002L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_HWPROFILE_CHANGE_COMPLETE,       0xcb3a4003L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_DEVICE_INTERFACE_ARRIVAL,        0xcb3a4004L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_DEVICE_INTERFACE_REMOVAL,        0xcb3a4005L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_TARGET_DEVICE_QUERY_REMOVE,      0xcb3a4006L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_TARGET_DEVICE_REMOVE_CANCELLED,  0xcb3a4007L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_TARGET_DEVICE_REMOVE_COMPLETE,   0xcb3a4008L, 0x46f0, 0x11d0, 0xb0, 0x8f, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3f );
DEFINE_GUID( GUID_PNP_CUSTOM_NOTIFICATION,         0xACA73F8EL, 0x8D23, 0x11D1, 0xAC, 0x7D, 0x00, 0x00, 0xF8, 0x75, 0x71, 0xD0 );
DEFINE_GUID( GUID_PNP_POWER_NOTIFICATION,          0xC2CF0660L, 0xEB7A, 0x11D1, 0xBD, 0x7F, 0x00, 0x00, 0xF8, 0x75, 0x71, 0xD0 );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
DEFINE_GUID( GUID_PNP_POWER_SETTING_CHANGE,        0x29C69B3EL, 0xC79A, 0x43BF, 0xBB, 0xDE, 0xA9, 0x32, 0xFA, 0x1B, 0xEA, 0x7E );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
DEFINE_GUID( GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED, 0xfcf528f6, 0xa82f, 0x47b1, 0xad, 0x3a, 0x80, 0x50, 0x59, 0x4c, 0xad, 0x28 );
#endif

//
// Interface GUIDs used for IRP_MN_QUERY_INTERFACE
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
DEFINE_GUID( GUID_BUS_INTERFACE_STANDARD,               0x496B8280L, 0x6F25, 0x11D0, 0xBE, 0xAF, 0x08, 0x00, 0x2B, 0xE2, 0x09, 0x2F );
DEFINE_GUID( GUID_PCI_BUS_INTERFACE_STANDARD,           0x496B8281L, 0x6F25, 0x11D0, 0xBE, 0xAF, 0x08, 0x00, 0x2B, 0xE2, 0x09, 0x2F );
DEFINE_GUID( GUID_PCI_BUS_INTERFACE_STANDARD2,          0xde94e966L, 0xfdff, 0x4c9c, 0x99, 0x98, 0x67, 0x47, 0xb1, 0x50, 0xe7, 0x4c );
DEFINE_GUID( GUID_ARBITER_INTERFACE_STANDARD,           0xe644f185L, 0x8c0e, 0x11d0, 0xbe, 0xcf, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f );
DEFINE_GUID( GUID_TRANSLATOR_INTERFACE_STANDARD,        0x6c154a92L, 0xaacf, 0x11d0, 0x8d, 0x2a, 0x00, 0xa0, 0xc9, 0x06, 0xb2, 0x44 );
DEFINE_GUID( GUID_ACPI_INTERFACE_STANDARD,              0xb091a08aL, 0xba97, 0x11d0, 0xbd, 0x14, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
DEFINE_GUID( GUID_INT_ROUTE_INTERFACE_STANDARD,         0x70941bf4L, 0x0073, 0x11d1, 0xa0, 0x9e, 0x00, 0xc0, 0x4f, 0xc3, 0x40, 0xb1 );
DEFINE_GUID( GUID_PCMCIA_BUS_INTERFACE_STANDARD,        0x76173af0L, 0xc504, 0x11d1, 0x94, 0x7f, 0x00, 0xc0, 0x4f, 0xb9, 0x60, 0xee );
DEFINE_GUID( GUID_ACPI_REGS_INTERFACE_STANDARD,         0x06141966L, 0x7245, 0x6369, 0x46, 0x2e, 0x4e, 0x65, 0x6c, 0x73, 0x6f, 0x6e );
DEFINE_GUID( GUID_LEGACY_DEVICE_DETECTION_STANDARD,     0x50feb0deL, 0x596a, 0x11d2, 0xa5, 0xb8, 0x00, 0x00, 0xf8, 0x1a, 0x46, 0x19 );
DEFINE_GUID( GUID_PCI_DEVICE_PRESENT_INTERFACE,         0xd1b82c26L, 0xbf49, 0x45ef, 0xb2, 0x16, 0x71, 0xcb, 0xd7, 0x88, 0x9b, 0x57 );
DEFINE_GUID( GUID_MF_ENUMERATION_INTERFACE,             0xaeb895f0L, 0x5586, 0x11d1, 0x8d, 0x84, 0x00, 0xa0, 0xc9, 0x06, 0xb2, 0x44 );
DEFINE_GUID( GUID_REENUMERATE_SELF_INTERFACE_STANDARD,  0x2aeb0243,  0x6a6e, 0x486b, 0x82, 0xfc, 0xd8, 0x15, 0xf6, 0xb9, 0x70, 0x06 );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID( GUID_AGP_TARGET_BUS_INTERFACE_STANDARD, 0xB15CFCE8L, 0x06D1, 0x4D37, 0x9D, 0x4C, 0xBE, 0xDD, 0xE0, 0xC2, 0xA6, 0xFF );
DEFINE_GUID( GUID_ACPI_CMOS_INTERFACE_STANDARD,    0x3a8d0384L, 0x6505, 0x40ca, 0xbc, 0x39, 0x56, 0xc1, 0x5f, 0x8c, 0x5f, 0xed );
DEFINE_GUID( GUID_ACPI_PORT_RANGES_INTERFACE_STANDARD, 0xf14f609bL, 0xcbbd, 0x4957, 0xa6, 0x74, 0xbc, 0x0, 0x21, 0x3f, 0x1c, 0x97 );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
DEFINE_GUID( GUID_ACPI_INTERFACE_STANDARD2,             0xe8695f63L, 0x1831, 0x4870, 0xa8, 0xcf, 0x9c, 0x2f, 0x03, 0xf9, 0xdc, 0xb5 );
DEFINE_GUID( GUID_PNP_LOCATION_INTERFACE,               0x70211b0e,  0x0afb, 0x47db, 0xaf, 0xc1, 0x41, 0x0b, 0xf8, 0x42, 0x49, 0x7a );
DEFINE_GUID( GUID_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE, 0x146cd41cL, 0xdae3, 0x4437, 0x8a, 0xff, 0x2a, 0xf3, 0xf0, 0x38, 0x09, 0x9b );
DEFINE_GUID( GUID_PCI_EXPRESS_ROOT_PORT_INTERFACE,      0x83a7734aL, 0x84c7, 0x4161, 0x9a, 0x98, 0x60, 0x00, 0xed, 0x0c, 0x4a, 0x33 );
DEFINE_GUID( GUID_MSIX_TABLE_CONFIG_INTERFACE,          0x1a6a460b, 0x194f, 0x455d, 0xb3, 0x4b, 0xb8, 0x4c, 0x5b, 0x05, 0x71, 0x2b );
DEFINE_GUID( GUID_D3COLD_SUPPORT_INTERFACE,             0xb38290e5, 0x3cd0, 0x4f9d, 0x99, 0x37, 0xf5, 0xfe, 0x2b, 0x44, 0xd4, 0x7a );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
DEFINE_GUID( GUID_PROCESSOR_PCC_INTERFACE_STANDARD, 0x37b17e9a, 0xc21c, 0x4296, 0x97, 0x2d, 0x11, 0xc4, 0xb3, 0x2b, 0x28, 0xf0);
DEFINE_GUID( GUID_PCI_VIRTUALIZATION_INTERFACE, 0x64897b47, 0x3a4a, 0x4d75, 0xbc, 0x74, 0x89, 0xdd, 0x6c, 0x7, 0x82, 0x93);
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
DEFINE_GUID( GUID_PCC_INTERFACE_STANDARD, 0x3ee8ba63, 0x0f59, 0x4a24, 0x8a, 0x45, 0x35, 0x80, 0x8b, 0xdd, 0x12, 0x49);
DEFINE_GUID( GUID_PCC_INTERFACE_INTERNAL, 0x7cce62ce, 0xc189, 0x4814, 0xa6, 0xa7, 0x12, 0x11, 0x20, 0x89, 0xe9, 0x38);
DEFINE_GUID( GUID_THERMAL_COOLING_INTERFACE, 0xecbe47a8L, 0xc498, 0x4bb9, 0xbd, 0x70, 0xe8, 0x67, 0xe0, 0x94, 0x0d, 0x22 );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
DEFINE_GUID( GUID_DMA_CACHE_COHERENCY_INTERFACE, 0xb520f7fa, 0x8a5a, 0x4e40, 0xa3, 0xf6, 0x6b, 0xe1, 0xe1, 0x62, 0xd9, 0x35 );
DEFINE_GUID( GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x649fdf26, 0x3bc0, 0x4813, 0xad, 0x24, 0x7e, 0xc, 0x1e, 0xda, 0x3f, 0xa3 );
DEFINE_GUID( GUID_IOMMU_BUS_INTERFACE, 0x1efee0b2, 0xd278, 0x4ae4, 0xbd, 0xdc, 0x1b, 0x34, 0xdd, 0x64, 0x80, 0x43 );
DEFINE_GUID( GUID_PCI_SECURITY_INTERFACE, 0x6e7f1451, 0x199e, 0x4acc, 0xba, 0x2d, 0x76, 0x2b, 0x4e, 0xdf, 0x46, 0x74);
#endif

//
// Bus type GUIDs
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
DEFINE_GUID( GUID_BUS_TYPE_INTERNAL,               0x1530ea73L, 0x086b, 0x11d1, 0xa0, 0x9f, 0x00, 0xc0, 0x4f, 0xc3, 0x40, 0xb1 );
DEFINE_GUID( GUID_BUS_TYPE_PCMCIA,                 0x09343630L, 0xaf9f, 0x11d0, 0x92, 0xE9, 0x00, 0x00, 0xf8, 0x1e, 0x1b, 0x30 );
DEFINE_GUID( GUID_BUS_TYPE_PCI,                    0xc8ebdfb0L, 0xb510, 0x11d0, 0x80, 0xe5, 0x00, 0xa0, 0xc9, 0x25, 0x42, 0xe3 );
DEFINE_GUID( GUID_BUS_TYPE_ISAPNP,                 0xe676f854L, 0xd87d, 0x11d0, 0x92, 0xb2, 0x00, 0xa0, 0xc9, 0x05, 0x5f, 0xc5 );
DEFINE_GUID( GUID_BUS_TYPE_EISA,                   0xddc35509L, 0xf3fc, 0x11d0, 0xa5, 0x37, 0x00, 0x00, 0xf8, 0x75, 0x3e, 0xd1 );
DEFINE_GUID( GUID_BUS_TYPE_MCA,                    0x1c75997aL, 0xdc33, 0x11d0, 0x92, 0xb2, 0x00, 0xa0, 0xc9, 0x05, 0x5f, 0xc5 );
DEFINE_GUID( GUID_BUS_TYPE_SERENUM,                0x77114a87L, 0x8944, 0x11d1, 0xbd, 0x90, 0x00, 0xa0, 0xc9, 0x06, 0xbe, 0x2d );
DEFINE_GUID( GUID_BUS_TYPE_USB,                    0x9d7debbcL, 0xc85d, 0x11d1, 0x9e, 0xb4, 0x00, 0x60, 0x08, 0xc3, 0xa1, 0x9a );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID( GUID_BUS_TYPE_LPTENUM,                0xc4ca1000L, 0x2ddc, 0x11d5, 0xa1, 0x7a, 0x00, 0xc0, 0x4f, 0x60, 0x52, 0x4d );
DEFINE_GUID( GUID_BUS_TYPE_USBPRINT,               0x441ee000L, 0x4342, 0x11d5, 0xa1, 0x84, 0x00, 0xc0, 0x4f, 0x60, 0x52, 0x4d );
DEFINE_GUID( GUID_BUS_TYPE_DOT4PRT,                0x441ee001L, 0x4342, 0x11d5, 0xa1, 0x84, 0x00, 0xc0, 0x4f, 0x60, 0x52, 0x4d );
DEFINE_GUID( GUID_BUS_TYPE_1394,                   0xf74e73ebL, 0x9ac5, 0x45eb, 0xbe, 0x4d, 0x77, 0x2c, 0xc7, 0x1d, 0xdf, 0xb3 );
DEFINE_GUID( GUID_BUS_TYPE_HID,                    0xeeaf37d0L, 0x1963, 0x47c4, 0xaa, 0x48, 0x72, 0x47, 0x6d, 0xb7, 0xcf, 0x49 );
DEFINE_GUID( GUID_BUS_TYPE_AVC,                    0xc06ff265L, 0xae09, 0x48f0, 0x81, 0x2c, 0x16, 0x75, 0x3d, 0x7c, 0xba, 0x83 );
DEFINE_GUID( GUID_BUS_TYPE_IRDA,                   0x7ae17dc1L, 0xc944, 0x44d6, 0x88, 0x1f, 0x4c, 0x2e, 0x61, 0x05, 0x3b, 0xc1 );
DEFINE_GUID( GUID_BUS_TYPE_SD,                     0xe700cc04L, 0x4036, 0x4e89, 0x95, 0x79, 0x89, 0xeb, 0xf4, 0x5f, 0x00, 0xcd );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
DEFINE_GUID( GUID_BUS_TYPE_ACPI,                   0xd7b46895L, 0x001a, 0x4942, 0x89, 0x1f, 0xa7, 0xd4, 0x66, 0x10, 0xa8, 0x43 );
DEFINE_GUID( GUID_BUS_TYPE_SW_DEVICE,              0x06d10322L, 0x7de0, 0x4cef, 0x8e, 0x25, 0x19, 0x7d, 0x0e, 0x74, 0x42, 0xe2 );
#endif


//
// Power management WMI guids for device control
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
DEFINE_GUID( GUID_POWER_DEVICE_ENABLE,             0x827c0a6fL, 0xfeb0, 0x11d0, 0xbd, 0x26, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
DEFINE_GUID( GUID_POWER_DEVICE_TIMEOUTS,           0xa45da735L, 0xfeb0, 0x11d0, 0xbd, 0x26, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
DEFINE_GUID( GUID_POWER_DEVICE_WAKE_ENABLE,        0xa9546a82L, 0xfeb0, 0x11d0, 0xbd, 0x26, 0x00, 0xaa, 0x00, 0xb7, 0xb3, 0x2a );
#endif

//
// User-Mode Driver Framework device events for detecting driver host crashes.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID( GUID_WUDF_DEVICE_HOST_PROBLEM,        0xc43d25bdL, 0x9346, 0x40ee, 0xa2, 0xd2, 0xd7, 0x0c, 0x15, 0xf8, 0xb7, 0x5b );
#endif

//
// Dynamic partitioning replace interface.
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
DEFINE_GUID(GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x52363f5bL, 0xd891, 0x429b, 0x81, 0x95, 0xae, 0xc5, 0xfe, 0xf6, 0x85, 0x3c);
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE) 
DEFINE_GUID(GUID_QUERY_CRASHDUMP_FUNCTIONS, 0x9cc6b8ff, 0x32e2, 0x4834, 0xb1, 0xde, 0xb3, 0x2e, 0xf8, 0x88, 0x0a, 0x4b);
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
