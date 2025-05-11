externdef __imp_CMP_GetBlockedDriverInfo:PPROC
CMP_GetBlockedDriverInfo equ <__imp_CMP_GetBlockedDriverInfo>

externdef __imp_CMP_GetServerSideDeviceInstallFlags:PPROC
CMP_GetServerSideDeviceInstallFlags equ <__imp_CMP_GetServerSideDeviceInstallFlags>

externdef __imp_CMP_Init_Detection:PPROC
CMP_Init_Detection equ <__imp_CMP_Init_Detection>

externdef __imp_CMP_RegisterNotification:PPROC
CMP_RegisterNotification equ <__imp_CMP_RegisterNotification>

externdef __imp_CMP_Report_LogOn:PPROC
CMP_Report_LogOn equ <__imp_CMP_Report_LogOn>

externdef __imp_CMP_UnregisterNotification:PPROC
CMP_UnregisterNotification equ <__imp_CMP_UnregisterNotification>

externdef __imp_CMP_WaitNoPendingInstallEvents:PPROC
CMP_WaitNoPendingInstallEvents equ <__imp_CMP_WaitNoPendingInstallEvents>

externdef __imp_CMP_WaitServicesAvailable:PPROC
CMP_WaitServicesAvailable equ <__imp_CMP_WaitServicesAvailable>

externdef __imp_CM_Add_Empty_Log_Conf:PPROC
CM_Add_Empty_Log_Conf equ <__imp_CM_Add_Empty_Log_Conf>

externdef __imp_CM_Add_Empty_Log_Conf_Ex:PPROC
CM_Add_Empty_Log_Conf_Ex equ <__imp_CM_Add_Empty_Log_Conf_Ex>

externdef __imp_CM_Add_IDA:PPROC
CM_Add_IDA equ <__imp_CM_Add_IDA>
  IFNDEF __UNICODE__
    CM_Add_ID equ <__imp_CM_Add_IDA>
  ENDIF

externdef __imp_CM_Add_IDW:PPROC
CM_Add_IDW equ <__imp_CM_Add_IDW>
  IFDEF __UNICODE__
    CM_Add_ID equ <__imp_CM_Add_IDW>
  ENDIF

externdef __imp_CM_Add_ID_ExA:PPROC
CM_Add_ID_ExA equ <__imp_CM_Add_ID_ExA>
  IFNDEF __UNICODE__
    CM_Add_ID_Ex equ <__imp_CM_Add_ID_ExA>
  ENDIF

externdef __imp_CM_Add_ID_ExW:PPROC
CM_Add_ID_ExW equ <__imp_CM_Add_ID_ExW>
  IFDEF __UNICODE__
    CM_Add_ID_Ex equ <__imp_CM_Add_ID_ExW>
  ENDIF

externdef __imp_CM_Add_Range:PPROC
CM_Add_Range equ <__imp_CM_Add_Range>

externdef __imp_CM_Add_Res_Des:PPROC
CM_Add_Res_Des equ <__imp_CM_Add_Res_Des>

externdef __imp_CM_Add_Res_Des_Ex:PPROC
CM_Add_Res_Des_Ex equ <__imp_CM_Add_Res_Des_Ex>

externdef __imp_CM_Connect_MachineA:PPROC
CM_Connect_MachineA equ <__imp_CM_Connect_MachineA>
  IFNDEF __UNICODE__
    CM_Connect_Machine equ <__imp_CM_Connect_MachineA>
  ENDIF

externdef __imp_CM_Connect_MachineW:PPROC
CM_Connect_MachineW equ <__imp_CM_Connect_MachineW>
  IFDEF __UNICODE__
    CM_Connect_Machine equ <__imp_CM_Connect_MachineW>
  ENDIF

externdef __imp_CM_Create_DevNodeA:PPROC
CM_Create_DevNodeA equ <__imp_CM_Create_DevNodeA>
  IFNDEF __UNICODE__
    CM_Create_DevNode equ <__imp_CM_Create_DevNodeA>
  ENDIF

externdef __imp_CM_Create_DevNodeW:PPROC
CM_Create_DevNodeW equ <__imp_CM_Create_DevNodeW>
  IFDEF __UNICODE__
    CM_Create_DevNode equ <__imp_CM_Create_DevNodeW>
  ENDIF

externdef __imp_CM_Create_DevNode_ExA:PPROC
CM_Create_DevNode_ExA equ <__imp_CM_Create_DevNode_ExA>
  IFNDEF __UNICODE__
    CM_Create_DevNode_Ex equ <__imp_CM_Create_DevNode_ExA>
  ENDIF

externdef __imp_CM_Create_DevNode_ExW:PPROC
CM_Create_DevNode_ExW equ <__imp_CM_Create_DevNode_ExW>
  IFDEF __UNICODE__
    CM_Create_DevNode_Ex equ <__imp_CM_Create_DevNode_ExW>
  ENDIF

externdef __imp_CM_Create_Range_List:PPROC
CM_Create_Range_List equ <__imp_CM_Create_Range_List>

externdef __imp_CM_Delete_Class_Key:PPROC
CM_Delete_Class_Key equ <__imp_CM_Delete_Class_Key>

externdef __imp_CM_Delete_Class_Key_Ex:PPROC
CM_Delete_Class_Key_Ex equ <__imp_CM_Delete_Class_Key_Ex>

externdef __imp_CM_Delete_DevNode_Key:PPROC
CM_Delete_DevNode_Key equ <__imp_CM_Delete_DevNode_Key>

externdef __imp_CM_Delete_DevNode_Key_Ex:PPROC
CM_Delete_DevNode_Key_Ex equ <__imp_CM_Delete_DevNode_Key_Ex>

externdef __imp_CM_Delete_Range:PPROC
CM_Delete_Range equ <__imp_CM_Delete_Range>

externdef __imp_CM_Detect_Resource_Conflict:PPROC
CM_Detect_Resource_Conflict equ <__imp_CM_Detect_Resource_Conflict>

externdef __imp_CM_Detect_Resource_Conflict_Ex:PPROC
CM_Detect_Resource_Conflict_Ex equ <__imp_CM_Detect_Resource_Conflict_Ex>

externdef __imp_CM_Disable_DevNode:PPROC
CM_Disable_DevNode equ <__imp_CM_Disable_DevNode>

externdef __imp_CM_Disable_DevNode_Ex:PPROC
CM_Disable_DevNode_Ex equ <__imp_CM_Disable_DevNode_Ex>

externdef __imp_CM_Disconnect_Machine:PPROC
CM_Disconnect_Machine equ <__imp_CM_Disconnect_Machine>

externdef __imp_CM_Dup_Range_List:PPROC
CM_Dup_Range_List equ <__imp_CM_Dup_Range_List>

externdef __imp_CM_Enable_DevNode:PPROC
CM_Enable_DevNode equ <__imp_CM_Enable_DevNode>

externdef __imp_CM_Enable_DevNode_Ex:PPROC
CM_Enable_DevNode_Ex equ <__imp_CM_Enable_DevNode_Ex>

externdef __imp_CM_Enumerate_Classes:PPROC
CM_Enumerate_Classes equ <__imp_CM_Enumerate_Classes>

externdef __imp_CM_Enumerate_Classes_Ex:PPROC
CM_Enumerate_Classes_Ex equ <__imp_CM_Enumerate_Classes_Ex>

externdef __imp_CM_Enumerate_EnumeratorsA:PPROC
CM_Enumerate_EnumeratorsA equ <__imp_CM_Enumerate_EnumeratorsA>
  IFNDEF __UNICODE__
    CM_Enumerate_Enumerators equ <__imp_CM_Enumerate_EnumeratorsA>
  ENDIF

externdef __imp_CM_Enumerate_EnumeratorsW:PPROC
CM_Enumerate_EnumeratorsW equ <__imp_CM_Enumerate_EnumeratorsW>
  IFDEF __UNICODE__
    CM_Enumerate_Enumerators equ <__imp_CM_Enumerate_EnumeratorsW>
  ENDIF

externdef __imp_CM_Enumerate_Enumerators_ExA:PPROC
CM_Enumerate_Enumerators_ExA equ <__imp_CM_Enumerate_Enumerators_ExA>
  IFNDEF __UNICODE__
    CM_Enumerate_Enumerators_Ex equ <__imp_CM_Enumerate_Enumerators_ExA>
  ENDIF

externdef __imp_CM_Enumerate_Enumerators_ExW:PPROC
CM_Enumerate_Enumerators_ExW equ <__imp_CM_Enumerate_Enumerators_ExW>
  IFDEF __UNICODE__
    CM_Enumerate_Enumerators_Ex equ <__imp_CM_Enumerate_Enumerators_ExW>
  ENDIF

externdef __imp_CM_Find_Range:PPROC
CM_Find_Range equ <__imp_CM_Find_Range>

externdef __imp_CM_First_Range:PPROC
CM_First_Range equ <__imp_CM_First_Range>

externdef __imp_CM_Free_Log_Conf:PPROC
CM_Free_Log_Conf equ <__imp_CM_Free_Log_Conf>

externdef __imp_CM_Free_Log_Conf_Ex:PPROC
CM_Free_Log_Conf_Ex equ <__imp_CM_Free_Log_Conf_Ex>

externdef __imp_CM_Free_Log_Conf_Handle:PPROC
CM_Free_Log_Conf_Handle equ <__imp_CM_Free_Log_Conf_Handle>

externdef __imp_CM_Free_Range_List:PPROC
CM_Free_Range_List equ <__imp_CM_Free_Range_List>

externdef __imp_CM_Free_Res_Des:PPROC
CM_Free_Res_Des equ <__imp_CM_Free_Res_Des>

externdef __imp_CM_Free_Res_Des_Ex:PPROC
CM_Free_Res_Des_Ex equ <__imp_CM_Free_Res_Des_Ex>

externdef __imp_CM_Free_Res_Des_Handle:PPROC
CM_Free_Res_Des_Handle equ <__imp_CM_Free_Res_Des_Handle>

externdef __imp_CM_Free_Resource_Conflict_Handle:PPROC
CM_Free_Resource_Conflict_Handle equ <__imp_CM_Free_Resource_Conflict_Handle>

externdef __imp_CM_Get_Child:PPROC
CM_Get_Child equ <__imp_CM_Get_Child>

externdef __imp_CM_Get_Child_Ex:PPROC
CM_Get_Child_Ex equ <__imp_CM_Get_Child_Ex>

externdef __imp_CM_Get_Class_Key_NameA:PPROC
CM_Get_Class_Key_NameA equ <__imp_CM_Get_Class_Key_NameA>
  IFNDEF __UNICODE__
    CM_Get_Class_Key_Name equ <__imp_CM_Get_Class_Key_NameA>
  ENDIF

externdef __imp_CM_Get_Class_Key_NameW:PPROC
CM_Get_Class_Key_NameW equ <__imp_CM_Get_Class_Key_NameW>
  IFDEF __UNICODE__
    CM_Get_Class_Key_Name equ <__imp_CM_Get_Class_Key_NameW>
  ENDIF

externdef __imp_CM_Get_Class_Key_Name_ExA:PPROC
CM_Get_Class_Key_Name_ExA equ <__imp_CM_Get_Class_Key_Name_ExA>
  IFNDEF __UNICODE__
    CM_Get_Class_Key_Name_Ex equ <__imp_CM_Get_Class_Key_Name_ExA>
  ENDIF

externdef __imp_CM_Get_Class_Key_Name_ExW:PPROC
CM_Get_Class_Key_Name_ExW equ <__imp_CM_Get_Class_Key_Name_ExW>
  IFDEF __UNICODE__
    CM_Get_Class_Key_Name_Ex equ <__imp_CM_Get_Class_Key_Name_ExW>
  ENDIF

externdef __imp_CM_Get_Class_NameA:PPROC
CM_Get_Class_NameA equ <__imp_CM_Get_Class_NameA>
  IFNDEF __UNICODE__
    CM_Get_Class_Name equ <__imp_CM_Get_Class_NameA>
  ENDIF

externdef __imp_CM_Get_Class_NameW:PPROC
CM_Get_Class_NameW equ <__imp_CM_Get_Class_NameW>
  IFDEF __UNICODE__
    CM_Get_Class_Name equ <__imp_CM_Get_Class_NameW>
  ENDIF

externdef __imp_CM_Get_Class_Name_ExA:PPROC
CM_Get_Class_Name_ExA equ <__imp_CM_Get_Class_Name_ExA>
  IFNDEF __UNICODE__
    CM_Get_Class_Name_Ex equ <__imp_CM_Get_Class_Name_ExA>
  ENDIF

externdef __imp_CM_Get_Class_Name_ExW:PPROC
CM_Get_Class_Name_ExW equ <__imp_CM_Get_Class_Name_ExW>
  IFDEF __UNICODE__
    CM_Get_Class_Name_Ex equ <__imp_CM_Get_Class_Name_ExW>
  ENDIF

externdef __imp_CM_Get_Class_Registry_PropertyA:PPROC
CM_Get_Class_Registry_PropertyA equ <__imp_CM_Get_Class_Registry_PropertyA>
  IFNDEF __UNICODE__
    CM_Get_Class_Registry_Property equ <__imp_CM_Get_Class_Registry_PropertyA>
  ENDIF

externdef __imp_CM_Get_Class_Registry_PropertyW:PPROC
CM_Get_Class_Registry_PropertyW equ <__imp_CM_Get_Class_Registry_PropertyW>
  IFDEF __UNICODE__
    CM_Get_Class_Registry_Property equ <__imp_CM_Get_Class_Registry_PropertyW>
  ENDIF

externdef __imp_CM_Get_Depth:PPROC
CM_Get_Depth equ <__imp_CM_Get_Depth>

externdef __imp_CM_Get_Depth_Ex:PPROC
CM_Get_Depth_Ex equ <__imp_CM_Get_Depth_Ex>

externdef __imp_CM_Get_DevNode_Custom_PropertyA:PPROC
CM_Get_DevNode_Custom_PropertyA equ <__imp_CM_Get_DevNode_Custom_PropertyA>
  IFNDEF __UNICODE__
    CM_Get_DevNode_Custom_Property equ <__imp_CM_Get_DevNode_Custom_PropertyA>
  ENDIF

externdef __imp_CM_Get_DevNode_Custom_PropertyW:PPROC
CM_Get_DevNode_Custom_PropertyW equ <__imp_CM_Get_DevNode_Custom_PropertyW>
  IFDEF __UNICODE__
    CM_Get_DevNode_Custom_Property equ <__imp_CM_Get_DevNode_Custom_PropertyW>
  ENDIF

externdef __imp_CM_Get_DevNode_Custom_Property_ExA:PPROC
CM_Get_DevNode_Custom_Property_ExA equ <__imp_CM_Get_DevNode_Custom_Property_ExA>
  IFNDEF __UNICODE__
    CM_Get_DevNode_Custom_Property_Ex equ <__imp_CM_Get_DevNode_Custom_Property_ExA>
  ENDIF

externdef __imp_CM_Get_DevNode_Custom_Property_ExW:PPROC
CM_Get_DevNode_Custom_Property_ExW equ <__imp_CM_Get_DevNode_Custom_Property_ExW>
  IFDEF __UNICODE__
    CM_Get_DevNode_Custom_Property_Ex equ <__imp_CM_Get_DevNode_Custom_Property_ExW>
  ENDIF

externdef __imp_CM_Get_DevNode_Registry_PropertyA:PPROC
CM_Get_DevNode_Registry_PropertyA equ <__imp_CM_Get_DevNode_Registry_PropertyA>
  IFNDEF __UNICODE__
    CM_Get_DevNode_Registry_Property equ <__imp_CM_Get_DevNode_Registry_PropertyA>
  ENDIF

externdef __imp_CM_Get_DevNode_Registry_PropertyW:PPROC
CM_Get_DevNode_Registry_PropertyW equ <__imp_CM_Get_DevNode_Registry_PropertyW>
  IFDEF __UNICODE__
    CM_Get_DevNode_Registry_Property equ <__imp_CM_Get_DevNode_Registry_PropertyW>
  ENDIF

externdef __imp_CM_Get_DevNode_Registry_Property_ExA:PPROC
CM_Get_DevNode_Registry_Property_ExA equ <__imp_CM_Get_DevNode_Registry_Property_ExA>
  IFNDEF __UNICODE__
    CM_Get_DevNode_Registry_Property_Ex equ <__imp_CM_Get_DevNode_Registry_Property_ExA>
  ENDIF

externdef __imp_CM_Get_DevNode_Registry_Property_ExW:PPROC
CM_Get_DevNode_Registry_Property_ExW equ <__imp_CM_Get_DevNode_Registry_Property_ExW>
  IFDEF __UNICODE__
    CM_Get_DevNode_Registry_Property_Ex equ <__imp_CM_Get_DevNode_Registry_Property_ExW>
  ENDIF

externdef __imp_CM_Get_DevNode_Status:PPROC
CM_Get_DevNode_Status equ <__imp_CM_Get_DevNode_Status>

externdef __imp_CM_Get_DevNode_Status_Ex:PPROC
CM_Get_DevNode_Status_Ex equ <__imp_CM_Get_DevNode_Status_Ex>

externdef __imp_CM_Get_Device_IDA:PPROC
CM_Get_Device_IDA equ <__imp_CM_Get_Device_IDA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID equ <__imp_CM_Get_Device_IDA>
  ENDIF

externdef __imp_CM_Get_Device_IDW:PPROC
CM_Get_Device_IDW equ <__imp_CM_Get_Device_IDW>
  IFDEF __UNICODE__
    CM_Get_Device_ID equ <__imp_CM_Get_Device_IDW>
  ENDIF

externdef __imp_CM_Get_Device_ID_ExA:PPROC
CM_Get_Device_ID_ExA equ <__imp_CM_Get_Device_ID_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID_Ex equ <__imp_CM_Get_Device_ID_ExA>
  ENDIF

externdef __imp_CM_Get_Device_ID_ExW:PPROC
CM_Get_Device_ID_ExW equ <__imp_CM_Get_Device_ID_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_ID_Ex equ <__imp_CM_Get_Device_ID_ExW>
  ENDIF

externdef __imp_CM_Get_Device_ID_ListA:PPROC
CM_Get_Device_ID_ListA equ <__imp_CM_Get_Device_ID_ListA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID_List equ <__imp_CM_Get_Device_ID_ListA>
  ENDIF

externdef __imp_CM_Get_Device_ID_ListW:PPROC
CM_Get_Device_ID_ListW equ <__imp_CM_Get_Device_ID_ListW>
  IFDEF __UNICODE__
    CM_Get_Device_ID_List equ <__imp_CM_Get_Device_ID_ListW>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_ExA:PPROC
CM_Get_Device_ID_List_ExA equ <__imp_CM_Get_Device_ID_List_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID_List_Ex equ <__imp_CM_Get_Device_ID_List_ExA>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_ExW:PPROC
CM_Get_Device_ID_List_ExW equ <__imp_CM_Get_Device_ID_List_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_ID_List_Ex equ <__imp_CM_Get_Device_ID_List_ExW>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_SizeA:PPROC
CM_Get_Device_ID_List_SizeA equ <__imp_CM_Get_Device_ID_List_SizeA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID_List_Size equ <__imp_CM_Get_Device_ID_List_SizeA>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_SizeW:PPROC
CM_Get_Device_ID_List_SizeW equ <__imp_CM_Get_Device_ID_List_SizeW>
  IFDEF __UNICODE__
    CM_Get_Device_ID_List_Size equ <__imp_CM_Get_Device_ID_List_SizeW>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_Size_ExA:PPROC
CM_Get_Device_ID_List_Size_ExA equ <__imp_CM_Get_Device_ID_List_Size_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_ID_List_Size_Ex equ <__imp_CM_Get_Device_ID_List_Size_ExA>
  ENDIF

externdef __imp_CM_Get_Device_ID_List_Size_ExW:PPROC
CM_Get_Device_ID_List_Size_ExW equ <__imp_CM_Get_Device_ID_List_Size_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_ID_List_Size_Ex equ <__imp_CM_Get_Device_ID_List_Size_ExW>
  ENDIF

externdef __imp_CM_Get_Device_ID_Size:PPROC
CM_Get_Device_ID_Size equ <__imp_CM_Get_Device_ID_Size>

externdef __imp_CM_Get_Device_ID_Size_Ex:PPROC
CM_Get_Device_ID_Size_Ex equ <__imp_CM_Get_Device_ID_Size_Ex>

externdef __imp_CM_Get_Device_Interface_AliasA:PPROC
CM_Get_Device_Interface_AliasA equ <__imp_CM_Get_Device_Interface_AliasA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_Alias equ <__imp_CM_Get_Device_Interface_AliasA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_AliasW:PPROC
CM_Get_Device_Interface_AliasW equ <__imp_CM_Get_Device_Interface_AliasW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_Alias equ <__imp_CM_Get_Device_Interface_AliasW>
  ENDIF

externdef __imp_CM_Get_Device_Interface_Alias_ExA:PPROC
CM_Get_Device_Interface_Alias_ExA equ <__imp_CM_Get_Device_Interface_Alias_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_Alias_Ex equ <__imp_CM_Get_Device_Interface_Alias_ExA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_Alias_ExW:PPROC
CM_Get_Device_Interface_Alias_ExW equ <__imp_CM_Get_Device_Interface_Alias_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_Alias_Ex equ <__imp_CM_Get_Device_Interface_Alias_ExW>
  ENDIF

externdef __imp_CM_Get_Device_Interface_ListA:PPROC
CM_Get_Device_Interface_ListA equ <__imp_CM_Get_Device_Interface_ListA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_List equ <__imp_CM_Get_Device_Interface_ListA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_ListW:PPROC
CM_Get_Device_Interface_ListW equ <__imp_CM_Get_Device_Interface_ListW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_List equ <__imp_CM_Get_Device_Interface_ListW>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_ExA:PPROC
CM_Get_Device_Interface_List_ExA equ <__imp_CM_Get_Device_Interface_List_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_List_Ex equ <__imp_CM_Get_Device_Interface_List_ExA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_ExW:PPROC
CM_Get_Device_Interface_List_ExW equ <__imp_CM_Get_Device_Interface_List_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_List_Ex equ <__imp_CM_Get_Device_Interface_List_ExW>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_SizeA:PPROC
CM_Get_Device_Interface_List_SizeA equ <__imp_CM_Get_Device_Interface_List_SizeA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_List_Size equ <__imp_CM_Get_Device_Interface_List_SizeA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_SizeW:PPROC
CM_Get_Device_Interface_List_SizeW equ <__imp_CM_Get_Device_Interface_List_SizeW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_List_Size equ <__imp_CM_Get_Device_Interface_List_SizeW>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_Size_ExA:PPROC
CM_Get_Device_Interface_List_Size_ExA equ <__imp_CM_Get_Device_Interface_List_Size_ExA>
  IFNDEF __UNICODE__
    CM_Get_Device_Interface_List_Size_Ex equ <__imp_CM_Get_Device_Interface_List_Size_ExA>
  ENDIF

externdef __imp_CM_Get_Device_Interface_List_Size_ExW:PPROC
CM_Get_Device_Interface_List_Size_ExW equ <__imp_CM_Get_Device_Interface_List_Size_ExW>
  IFDEF __UNICODE__
    CM_Get_Device_Interface_List_Size_Ex equ <__imp_CM_Get_Device_Interface_List_Size_ExW>
  ENDIF

externdef __imp_CM_Get_First_Log_Conf:PPROC
CM_Get_First_Log_Conf equ <__imp_CM_Get_First_Log_Conf>

externdef __imp_CM_Get_First_Log_Conf_Ex:PPROC
CM_Get_First_Log_Conf_Ex equ <__imp_CM_Get_First_Log_Conf_Ex>

externdef __imp_CM_Get_Global_State:PPROC
CM_Get_Global_State equ <__imp_CM_Get_Global_State>

externdef __imp_CM_Get_Global_State_Ex:PPROC
CM_Get_Global_State_Ex equ <__imp_CM_Get_Global_State_Ex>

externdef __imp_CM_Get_HW_Prof_FlagsA:PPROC
CM_Get_HW_Prof_FlagsA equ <__imp_CM_Get_HW_Prof_FlagsA>
  IFNDEF __UNICODE__
    CM_Get_HW_Prof_Flags equ <__imp_CM_Get_HW_Prof_FlagsA>
  ENDIF

externdef __imp_CM_Get_HW_Prof_FlagsW:PPROC
CM_Get_HW_Prof_FlagsW equ <__imp_CM_Get_HW_Prof_FlagsW>
  IFDEF __UNICODE__
    CM_Get_HW_Prof_Flags equ <__imp_CM_Get_HW_Prof_FlagsW>
  ENDIF

externdef __imp_CM_Get_HW_Prof_Flags_ExA:PPROC
CM_Get_HW_Prof_Flags_ExA equ <__imp_CM_Get_HW_Prof_Flags_ExA>
  IFNDEF __UNICODE__
    CM_Get_HW_Prof_Flags_Ex equ <__imp_CM_Get_HW_Prof_Flags_ExA>
  ENDIF

externdef __imp_CM_Get_HW_Prof_Flags_ExW:PPROC
CM_Get_HW_Prof_Flags_ExW equ <__imp_CM_Get_HW_Prof_Flags_ExW>
  IFDEF __UNICODE__
    CM_Get_HW_Prof_Flags_Ex equ <__imp_CM_Get_HW_Prof_Flags_ExW>
  ENDIF

externdef __imp_CM_Get_Hardware_Profile_InfoA:PPROC
CM_Get_Hardware_Profile_InfoA equ <__imp_CM_Get_Hardware_Profile_InfoA>
  IFNDEF __UNICODE__
    CM_Get_Hardware_Profile_Info equ <__imp_CM_Get_Hardware_Profile_InfoA>
  ENDIF

externdef __imp_CM_Get_Hardware_Profile_InfoW:PPROC
CM_Get_Hardware_Profile_InfoW equ <__imp_CM_Get_Hardware_Profile_InfoW>
  IFDEF __UNICODE__
    CM_Get_Hardware_Profile_Info equ <__imp_CM_Get_Hardware_Profile_InfoW>
  ENDIF

externdef __imp_CM_Get_Hardware_Profile_Info_ExA:PPROC
CM_Get_Hardware_Profile_Info_ExA equ <__imp_CM_Get_Hardware_Profile_Info_ExA>
  IFNDEF __UNICODE__
    CM_Get_Hardware_Profile_Info_Ex equ <__imp_CM_Get_Hardware_Profile_Info_ExA>
  ENDIF

externdef __imp_CM_Get_Hardware_Profile_Info_ExW:PPROC
CM_Get_Hardware_Profile_Info_ExW equ <__imp_CM_Get_Hardware_Profile_Info_ExW>
  IFDEF __UNICODE__
    CM_Get_Hardware_Profile_Info_Ex equ <__imp_CM_Get_Hardware_Profile_Info_ExW>
  ENDIF

externdef __imp_CM_Get_Log_Conf_Priority:PPROC
CM_Get_Log_Conf_Priority equ <__imp_CM_Get_Log_Conf_Priority>

externdef __imp_CM_Get_Log_Conf_Priority_Ex:PPROC
CM_Get_Log_Conf_Priority_Ex equ <__imp_CM_Get_Log_Conf_Priority_Ex>

externdef __imp_CM_Get_Next_Log_Conf:PPROC
CM_Get_Next_Log_Conf equ <__imp_CM_Get_Next_Log_Conf>

externdef __imp_CM_Get_Next_Log_Conf_Ex:PPROC
CM_Get_Next_Log_Conf_Ex equ <__imp_CM_Get_Next_Log_Conf_Ex>

externdef __imp_CM_Get_Next_Res_Des:PPROC
CM_Get_Next_Res_Des equ <__imp_CM_Get_Next_Res_Des>

externdef __imp_CM_Get_Next_Res_Des_Ex:PPROC
CM_Get_Next_Res_Des_Ex equ <__imp_CM_Get_Next_Res_Des_Ex>

externdef __imp_CM_Get_Parent:PPROC
CM_Get_Parent equ <__imp_CM_Get_Parent>

externdef __imp_CM_Get_Parent_Ex:PPROC
CM_Get_Parent_Ex equ <__imp_CM_Get_Parent_Ex>

externdef __imp_CM_Get_Res_Des_Data:PPROC
CM_Get_Res_Des_Data equ <__imp_CM_Get_Res_Des_Data>

externdef __imp_CM_Get_Res_Des_Data_Ex:PPROC
CM_Get_Res_Des_Data_Ex equ <__imp_CM_Get_Res_Des_Data_Ex>

externdef __imp_CM_Get_Res_Des_Data_Size:PPROC
CM_Get_Res_Des_Data_Size equ <__imp_CM_Get_Res_Des_Data_Size>

externdef __imp_CM_Get_Res_Des_Data_Size_Ex:PPROC
CM_Get_Res_Des_Data_Size_Ex equ <__imp_CM_Get_Res_Des_Data_Size_Ex>

externdef __imp_CM_Get_Resource_Conflict_Count:PPROC
CM_Get_Resource_Conflict_Count equ <__imp_CM_Get_Resource_Conflict_Count>

externdef __imp_CM_Get_Resource_Conflict_DetailsA:PPROC
CM_Get_Resource_Conflict_DetailsA equ <__imp_CM_Get_Resource_Conflict_DetailsA>
  IFNDEF __UNICODE__
    CM_Get_Resource_Conflict_Details equ <__imp_CM_Get_Resource_Conflict_DetailsA>
  ENDIF

externdef __imp_CM_Get_Resource_Conflict_DetailsW:PPROC
CM_Get_Resource_Conflict_DetailsW equ <__imp_CM_Get_Resource_Conflict_DetailsW>
  IFDEF __UNICODE__
    CM_Get_Resource_Conflict_Details equ <__imp_CM_Get_Resource_Conflict_DetailsW>
  ENDIF

externdef __imp_CM_Get_Sibling:PPROC
CM_Get_Sibling equ <__imp_CM_Get_Sibling>

externdef __imp_CM_Get_Sibling_Ex:PPROC
CM_Get_Sibling_Ex equ <__imp_CM_Get_Sibling_Ex>

externdef __imp_CM_Get_Version:PPROC
CM_Get_Version equ <__imp_CM_Get_Version>

externdef __imp_CM_Get_Version_Ex:PPROC
CM_Get_Version_Ex equ <__imp_CM_Get_Version_Ex>

externdef __imp_CM_Intersect_Range_List:PPROC
CM_Intersect_Range_List equ <__imp_CM_Intersect_Range_List>

externdef __imp_CM_Invert_Range_List:PPROC
CM_Invert_Range_List equ <__imp_CM_Invert_Range_List>

externdef __imp_CM_Is_Dock_Station_Present:PPROC
CM_Is_Dock_Station_Present equ <__imp_CM_Is_Dock_Station_Present>

externdef __imp_CM_Is_Dock_Station_Present_Ex:PPROC
CM_Is_Dock_Station_Present_Ex equ <__imp_CM_Is_Dock_Station_Present_Ex>

externdef __imp_CM_Is_Version_Available:PPROC
CM_Is_Version_Available equ <__imp_CM_Is_Version_Available>

externdef __imp_CM_Is_Version_Available_Ex:PPROC
CM_Is_Version_Available_Ex equ <__imp_CM_Is_Version_Available_Ex>

externdef __imp_CM_Locate_DevNodeA:PPROC
CM_Locate_DevNodeA equ <__imp_CM_Locate_DevNodeA>
  IFNDEF __UNICODE__
    CM_Locate_DevNode equ <__imp_CM_Locate_DevNodeA>
  ENDIF

externdef __imp_CM_Locate_DevNodeW:PPROC
CM_Locate_DevNodeW equ <__imp_CM_Locate_DevNodeW>
  IFDEF __UNICODE__
    CM_Locate_DevNode equ <__imp_CM_Locate_DevNodeW>
  ENDIF

externdef __imp_CM_Locate_DevNode_ExA:PPROC
CM_Locate_DevNode_ExA equ <__imp_CM_Locate_DevNode_ExA>
  IFNDEF __UNICODE__
    CM_Locate_DevNode_Ex equ <__imp_CM_Locate_DevNode_ExA>
  ENDIF

externdef __imp_CM_Locate_DevNode_ExW:PPROC
CM_Locate_DevNode_ExW equ <__imp_CM_Locate_DevNode_ExW>
  IFDEF __UNICODE__
    CM_Locate_DevNode_Ex equ <__imp_CM_Locate_DevNode_ExW>
  ENDIF

externdef __imp_CM_Merge_Range_List:PPROC
CM_Merge_Range_List equ <__imp_CM_Merge_Range_List>

externdef __imp_CM_Modify_Res_Des:PPROC
CM_Modify_Res_Des equ <__imp_CM_Modify_Res_Des>

externdef __imp_CM_Modify_Res_Des_Ex:PPROC
CM_Modify_Res_Des_Ex equ <__imp_CM_Modify_Res_Des_Ex>

externdef __imp_CM_Move_DevNode:PPROC
CM_Move_DevNode equ <__imp_CM_Move_DevNode>

externdef __imp_CM_Move_DevNode_Ex:PPROC
CM_Move_DevNode_Ex equ <__imp_CM_Move_DevNode_Ex>

externdef __imp_CM_Next_Range:PPROC
CM_Next_Range equ <__imp_CM_Next_Range>

externdef __imp_CM_Open_Class_KeyA:PPROC
CM_Open_Class_KeyA equ <__imp_CM_Open_Class_KeyA>
  IFNDEF __UNICODE__
    CM_Open_Class_Key equ <__imp_CM_Open_Class_KeyA>
  ENDIF

externdef __imp_CM_Open_Class_KeyW:PPROC
CM_Open_Class_KeyW equ <__imp_CM_Open_Class_KeyW>
  IFDEF __UNICODE__
    CM_Open_Class_Key equ <__imp_CM_Open_Class_KeyW>
  ENDIF

externdef __imp_CM_Open_Class_Key_ExA:PPROC
CM_Open_Class_Key_ExA equ <__imp_CM_Open_Class_Key_ExA>
  IFNDEF __UNICODE__
    CM_Open_Class_Key_Ex equ <__imp_CM_Open_Class_Key_ExA>
  ENDIF

externdef __imp_CM_Open_Class_Key_ExW:PPROC
CM_Open_Class_Key_ExW equ <__imp_CM_Open_Class_Key_ExW>
  IFDEF __UNICODE__
    CM_Open_Class_Key_Ex equ <__imp_CM_Open_Class_Key_ExW>
  ENDIF

externdef __imp_CM_Open_DevNode_Key:PPROC
CM_Open_DevNode_Key equ <__imp_CM_Open_DevNode_Key>

externdef __imp_CM_Open_DevNode_Key_Ex:PPROC
CM_Open_DevNode_Key_Ex equ <__imp_CM_Open_DevNode_Key_Ex>

externdef __imp_CM_Query_And_Remove_SubTreeA:PPROC
CM_Query_And_Remove_SubTreeA equ <__imp_CM_Query_And_Remove_SubTreeA>
  IFNDEF __UNICODE__
    CM_Query_And_Remove_SubTree equ <__imp_CM_Query_And_Remove_SubTreeA>
  ENDIF

externdef __imp_CM_Query_And_Remove_SubTreeW:PPROC
CM_Query_And_Remove_SubTreeW equ <__imp_CM_Query_And_Remove_SubTreeW>
  IFDEF __UNICODE__
    CM_Query_And_Remove_SubTree equ <__imp_CM_Query_And_Remove_SubTreeW>
  ENDIF

externdef __imp_CM_Query_And_Remove_SubTree_ExA:PPROC
CM_Query_And_Remove_SubTree_ExA equ <__imp_CM_Query_And_Remove_SubTree_ExA>
  IFNDEF __UNICODE__
    CM_Query_And_Remove_SubTree_Ex equ <__imp_CM_Query_And_Remove_SubTree_ExA>
  ENDIF

externdef __imp_CM_Query_And_Remove_SubTree_ExW:PPROC
CM_Query_And_Remove_SubTree_ExW equ <__imp_CM_Query_And_Remove_SubTree_ExW>
  IFDEF __UNICODE__
    CM_Query_And_Remove_SubTree_Ex equ <__imp_CM_Query_And_Remove_SubTree_ExW>
  ENDIF

externdef __imp_CM_Query_Arbitrator_Free_Data:PPROC
CM_Query_Arbitrator_Free_Data equ <__imp_CM_Query_Arbitrator_Free_Data>

externdef __imp_CM_Query_Arbitrator_Free_Data_Ex:PPROC
CM_Query_Arbitrator_Free_Data_Ex equ <__imp_CM_Query_Arbitrator_Free_Data_Ex>

externdef __imp_CM_Query_Arbitrator_Free_Size:PPROC
CM_Query_Arbitrator_Free_Size equ <__imp_CM_Query_Arbitrator_Free_Size>

externdef __imp_CM_Query_Arbitrator_Free_Size_Ex:PPROC
CM_Query_Arbitrator_Free_Size_Ex equ <__imp_CM_Query_Arbitrator_Free_Size_Ex>

externdef __imp_CM_Query_Remove_SubTree:PPROC
CM_Query_Remove_SubTree equ <__imp_CM_Query_Remove_SubTree>

externdef __imp_CM_Query_Remove_SubTree_Ex:PPROC
CM_Query_Remove_SubTree_Ex equ <__imp_CM_Query_Remove_SubTree_Ex>

externdef __imp_CM_Query_Resource_Conflict_List:PPROC
CM_Query_Resource_Conflict_List equ <__imp_CM_Query_Resource_Conflict_List>

externdef __imp_CM_Reenumerate_DevNode:PPROC
CM_Reenumerate_DevNode equ <__imp_CM_Reenumerate_DevNode>

externdef __imp_CM_Reenumerate_DevNode_Ex:PPROC
CM_Reenumerate_DevNode_Ex equ <__imp_CM_Reenumerate_DevNode_Ex>

externdef __imp_CM_Register_Device_Driver:PPROC
CM_Register_Device_Driver equ <__imp_CM_Register_Device_Driver>

externdef __imp_CM_Register_Device_Driver_Ex:PPROC
CM_Register_Device_Driver_Ex equ <__imp_CM_Register_Device_Driver_Ex>

externdef __imp_CM_Register_Device_InterfaceA:PPROC
CM_Register_Device_InterfaceA equ <__imp_CM_Register_Device_InterfaceA>
  IFNDEF __UNICODE__
    CM_Register_Device_Interface equ <__imp_CM_Register_Device_InterfaceA>
  ENDIF

externdef __imp_CM_Register_Device_InterfaceW:PPROC
CM_Register_Device_InterfaceW equ <__imp_CM_Register_Device_InterfaceW>
  IFDEF __UNICODE__
    CM_Register_Device_Interface equ <__imp_CM_Register_Device_InterfaceW>
  ENDIF

externdef __imp_CM_Register_Device_Interface_ExA:PPROC
CM_Register_Device_Interface_ExA equ <__imp_CM_Register_Device_Interface_ExA>
  IFNDEF __UNICODE__
    CM_Register_Device_Interface_Ex equ <__imp_CM_Register_Device_Interface_ExA>
  ENDIF

externdef __imp_CM_Register_Device_Interface_ExW:PPROC
CM_Register_Device_Interface_ExW equ <__imp_CM_Register_Device_Interface_ExW>
  IFDEF __UNICODE__
    CM_Register_Device_Interface_Ex equ <__imp_CM_Register_Device_Interface_ExW>
  ENDIF

externdef __imp_CM_Remove_SubTree:PPROC
CM_Remove_SubTree equ <__imp_CM_Remove_SubTree>

externdef __imp_CM_Remove_SubTree_Ex:PPROC
CM_Remove_SubTree_Ex equ <__imp_CM_Remove_SubTree_Ex>

externdef __imp_CM_Request_Device_EjectA:PPROC
CM_Request_Device_EjectA equ <__imp_CM_Request_Device_EjectA>
  IFNDEF __UNICODE__
    CM_Request_Device_Eject equ <__imp_CM_Request_Device_EjectA>
  ENDIF

externdef __imp_CM_Request_Device_EjectW:PPROC
CM_Request_Device_EjectW equ <__imp_CM_Request_Device_EjectW>
  IFDEF __UNICODE__
    CM_Request_Device_Eject equ <__imp_CM_Request_Device_EjectW>
  ENDIF

externdef __imp_CM_Request_Device_Eject_ExA:PPROC
CM_Request_Device_Eject_ExA equ <__imp_CM_Request_Device_Eject_ExA>
  IFNDEF __UNICODE__
    CM_Request_Device_Eject_Ex equ <__imp_CM_Request_Device_Eject_ExA>
  ENDIF

externdef __imp_CM_Request_Device_Eject_ExW:PPROC
CM_Request_Device_Eject_ExW equ <__imp_CM_Request_Device_Eject_ExW>
  IFDEF __UNICODE__
    CM_Request_Device_Eject_Ex equ <__imp_CM_Request_Device_Eject_ExW>
  ENDIF

externdef __imp_CM_Request_Eject_PC:PPROC
CM_Request_Eject_PC equ <__imp_CM_Request_Eject_PC>

externdef __imp_CM_Request_Eject_PC_Ex:PPROC
CM_Request_Eject_PC_Ex equ <__imp_CM_Request_Eject_PC_Ex>

externdef __imp_CM_Run_Detection:PPROC
CM_Run_Detection equ <__imp_CM_Run_Detection>

externdef __imp_CM_Run_Detection_Ex:PPROC
CM_Run_Detection_Ex equ <__imp_CM_Run_Detection_Ex>

externdef __imp_CM_Set_Class_Registry_PropertyA:PPROC
CM_Set_Class_Registry_PropertyA equ <__imp_CM_Set_Class_Registry_PropertyA>
  IFNDEF __UNICODE__
    CM_Set_Class_Registry_Property equ <__imp_CM_Set_Class_Registry_PropertyA>
  ENDIF

externdef __imp_CM_Set_Class_Registry_PropertyW:PPROC
CM_Set_Class_Registry_PropertyW equ <__imp_CM_Set_Class_Registry_PropertyW>
  IFDEF __UNICODE__
    CM_Set_Class_Registry_Property equ <__imp_CM_Set_Class_Registry_PropertyW>
  ENDIF

externdef __imp_CM_Set_DevNode_Problem:PPROC
CM_Set_DevNode_Problem equ <__imp_CM_Set_DevNode_Problem>

externdef __imp_CM_Set_DevNode_Problem_Ex:PPROC
CM_Set_DevNode_Problem_Ex equ <__imp_CM_Set_DevNode_Problem_Ex>

externdef __imp_CM_Set_DevNode_Registry_PropertyA:PPROC
CM_Set_DevNode_Registry_PropertyA equ <__imp_CM_Set_DevNode_Registry_PropertyA>
  IFNDEF __UNICODE__
    CM_Set_DevNode_Registry_Property equ <__imp_CM_Set_DevNode_Registry_PropertyA>
  ENDIF

externdef __imp_CM_Set_DevNode_Registry_PropertyW:PPROC
CM_Set_DevNode_Registry_PropertyW equ <__imp_CM_Set_DevNode_Registry_PropertyW>
  IFDEF __UNICODE__
    CM_Set_DevNode_Registry_Property equ <__imp_CM_Set_DevNode_Registry_PropertyW>
  ENDIF

externdef __imp_CM_Set_DevNode_Registry_Property_ExA:PPROC
CM_Set_DevNode_Registry_Property_ExA equ <__imp_CM_Set_DevNode_Registry_Property_ExA>
  IFNDEF __UNICODE__
    CM_Set_DevNode_Registry_Property_Ex equ <__imp_CM_Set_DevNode_Registry_Property_ExA>
  ENDIF

externdef __imp_CM_Set_DevNode_Registry_Property_ExW:PPROC
CM_Set_DevNode_Registry_Property_ExW equ <__imp_CM_Set_DevNode_Registry_Property_ExW>
  IFDEF __UNICODE__
    CM_Set_DevNode_Registry_Property_Ex equ <__imp_CM_Set_DevNode_Registry_Property_ExW>
  ENDIF

externdef __imp_CM_Set_HW_Prof:PPROC
CM_Set_HW_Prof equ <__imp_CM_Set_HW_Prof>

externdef __imp_CM_Set_HW_Prof_Ex:PPROC
CM_Set_HW_Prof_Ex equ <__imp_CM_Set_HW_Prof_Ex>

externdef __imp_CM_Set_HW_Prof_FlagsA:PPROC
CM_Set_HW_Prof_FlagsA equ <__imp_CM_Set_HW_Prof_FlagsA>
  IFNDEF __UNICODE__
    CM_Set_HW_Prof_Flags equ <__imp_CM_Set_HW_Prof_FlagsA>
  ENDIF

externdef __imp_CM_Set_HW_Prof_FlagsW:PPROC
CM_Set_HW_Prof_FlagsW equ <__imp_CM_Set_HW_Prof_FlagsW>
  IFDEF __UNICODE__
    CM_Set_HW_Prof_Flags equ <__imp_CM_Set_HW_Prof_FlagsW>
  ENDIF

externdef __imp_CM_Set_HW_Prof_Flags_ExA:PPROC
CM_Set_HW_Prof_Flags_ExA equ <__imp_CM_Set_HW_Prof_Flags_ExA>
  IFNDEF __UNICODE__
    CM_Set_HW_Prof_Flags_Ex equ <__imp_CM_Set_HW_Prof_Flags_ExA>
  ENDIF

externdef __imp_CM_Set_HW_Prof_Flags_ExW:PPROC
CM_Set_HW_Prof_Flags_ExW equ <__imp_CM_Set_HW_Prof_Flags_ExW>
  IFDEF __UNICODE__
    CM_Set_HW_Prof_Flags_Ex equ <__imp_CM_Set_HW_Prof_Flags_ExW>
  ENDIF

externdef __imp_CM_Setup_DevNode:PPROC
CM_Setup_DevNode equ <__imp_CM_Setup_DevNode>

externdef __imp_CM_Setup_DevNode_Ex:PPROC
CM_Setup_DevNode_Ex equ <__imp_CM_Setup_DevNode_Ex>

externdef __imp_CM_Test_Range_Available:PPROC
CM_Test_Range_Available equ <__imp_CM_Test_Range_Available>

externdef __imp_CM_Uninstall_DevNode:PPROC
CM_Uninstall_DevNode equ <__imp_CM_Uninstall_DevNode>

externdef __imp_CM_Uninstall_DevNode_Ex:PPROC
CM_Uninstall_DevNode_Ex equ <__imp_CM_Uninstall_DevNode_Ex>

externdef __imp_CM_Unregister_Device_InterfaceA:PPROC
CM_Unregister_Device_InterfaceA equ <__imp_CM_Unregister_Device_InterfaceA>
  IFNDEF __UNICODE__
    CM_Unregister_Device_Interface equ <__imp_CM_Unregister_Device_InterfaceA>
  ENDIF

externdef __imp_CM_Unregister_Device_InterfaceW:PPROC
CM_Unregister_Device_InterfaceW equ <__imp_CM_Unregister_Device_InterfaceW>
  IFDEF __UNICODE__
    CM_Unregister_Device_Interface equ <__imp_CM_Unregister_Device_InterfaceW>
  ENDIF

externdef __imp_CM_Unregister_Device_Interface_ExA:PPROC
CM_Unregister_Device_Interface_ExA equ <__imp_CM_Unregister_Device_Interface_ExA>
  IFNDEF __UNICODE__
    CM_Unregister_Device_Interface_Ex equ <__imp_CM_Unregister_Device_Interface_ExA>
  ENDIF

externdef __imp_CM_Unregister_Device_Interface_ExW:PPROC
CM_Unregister_Device_Interface_ExW equ <__imp_CM_Unregister_Device_Interface_ExW>
  IFDEF __UNICODE__
    CM_Unregister_Device_Interface_Ex equ <__imp_CM_Unregister_Device_Interface_ExW>
  ENDIF

externdef __imp_DoesUserHavePrivilege:PPROC
DoesUserHavePrivilege equ <__imp_DoesUserHavePrivilege>

externdef __imp_ExtensionPropSheetPageProc:PPROC
ExtensionPropSheetPageProc equ <__imp_ExtensionPropSheetPageProc>

externdef __imp_InstallCatalog:PPROC
InstallCatalog equ <__imp_InstallCatalog>

externdef __imp_InstallHinfSection:PPROC
InstallHinfSection equ <__imp_InstallHinfSection>

externdef __imp_InstallHinfSectionA:PPROC
InstallHinfSectionA equ <__imp_InstallHinfSectionA>
  IFNDEF __UNICODE__
    InstallHinfSection equ <__imp_InstallHinfSectionA>
  ENDIF

externdef __imp_InstallHinfSectionW:PPROC
InstallHinfSectionW equ <__imp_InstallHinfSectionW>
  IFDEF __UNICODE__
    InstallHinfSection equ <__imp_InstallHinfSectionW>
  ENDIF

externdef __imp_IsUserAdmin:PPROC
IsUserAdmin equ <__imp_IsUserAdmin>

externdef __imp_MyFree:PPROC
MyFree equ <__imp_MyFree>

externdef __imp_MyMalloc:PPROC
MyMalloc equ <__imp_MyMalloc>

externdef __imp_MyRealloc:PPROC
MyRealloc equ <__imp_MyRealloc>

externdef __imp_SetupAddInstallSectionToDiskSpaceListA:PPROC
SetupAddInstallSectionToDiskSpaceListA equ <__imp_SetupAddInstallSectionToDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupAddInstallSectionToDiskSpaceList equ <__imp_SetupAddInstallSectionToDiskSpaceListA>
  ENDIF

externdef __imp_SetupAddInstallSectionToDiskSpaceListW:PPROC
SetupAddInstallSectionToDiskSpaceListW equ <__imp_SetupAddInstallSectionToDiskSpaceListW>
  IFDEF __UNICODE__
    SetupAddInstallSectionToDiskSpaceList equ <__imp_SetupAddInstallSectionToDiskSpaceListW>
  ENDIF

externdef __imp_SetupAddSectionToDiskSpaceListA:PPROC
SetupAddSectionToDiskSpaceListA equ <__imp_SetupAddSectionToDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupAddSectionToDiskSpaceList equ <__imp_SetupAddSectionToDiskSpaceListA>
  ENDIF

externdef __imp_SetupAddSectionToDiskSpaceListW:PPROC
SetupAddSectionToDiskSpaceListW equ <__imp_SetupAddSectionToDiskSpaceListW>
  IFDEF __UNICODE__
    SetupAddSectionToDiskSpaceList equ <__imp_SetupAddSectionToDiskSpaceListW>
  ENDIF

externdef __imp_SetupAddToDiskSpaceListA:PPROC
SetupAddToDiskSpaceListA equ <__imp_SetupAddToDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupAddToDiskSpaceList equ <__imp_SetupAddToDiskSpaceListA>
  ENDIF

externdef __imp_SetupAddToDiskSpaceListW:PPROC
SetupAddToDiskSpaceListW equ <__imp_SetupAddToDiskSpaceListW>
  IFDEF __UNICODE__
    SetupAddToDiskSpaceList equ <__imp_SetupAddToDiskSpaceListW>
  ENDIF

externdef __imp_SetupAddToSourceListA:PPROC
SetupAddToSourceListA equ <__imp_SetupAddToSourceListA>
  IFNDEF __UNICODE__
    SetupAddToSourceList equ <__imp_SetupAddToSourceListA>
  ENDIF

externdef __imp_SetupAddToSourceListW:PPROC
SetupAddToSourceListW equ <__imp_SetupAddToSourceListW>
  IFDEF __UNICODE__
    SetupAddToSourceList equ <__imp_SetupAddToSourceListW>
  ENDIF

externdef __imp_SetupAdjustDiskSpaceListA:PPROC
SetupAdjustDiskSpaceListA equ <__imp_SetupAdjustDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupAdjustDiskSpaceList equ <__imp_SetupAdjustDiskSpaceListA>
  ENDIF

externdef __imp_SetupAdjustDiskSpaceListW:PPROC
SetupAdjustDiskSpaceListW equ <__imp_SetupAdjustDiskSpaceListW>
  IFDEF __UNICODE__
    SetupAdjustDiskSpaceList equ <__imp_SetupAdjustDiskSpaceListW>
  ENDIF

externdef __imp_SetupBackupErrorA:PPROC
SetupBackupErrorA equ <__imp_SetupBackupErrorA>
  IFNDEF __UNICODE__
    SetupBackupError equ <__imp_SetupBackupErrorA>
  ENDIF

externdef __imp_SetupBackupErrorW:PPROC
SetupBackupErrorW equ <__imp_SetupBackupErrorW>
  IFDEF __UNICODE__
    SetupBackupError equ <__imp_SetupBackupErrorW>
  ENDIF

externdef __imp_SetupCancelTemporarySourceList:PPROC
SetupCancelTemporarySourceList equ <__imp_SetupCancelTemporarySourceList>

externdef __imp_SetupCloseFileQueue:PPROC
SetupCloseFileQueue equ <__imp_SetupCloseFileQueue>

externdef __imp_SetupCloseInfFile:PPROC
SetupCloseInfFile equ <__imp_SetupCloseInfFile>

externdef __imp_SetupCloseLog:PPROC
SetupCloseLog equ <__imp_SetupCloseLog>

externdef __imp_SetupCommitFileQueue:PPROC
SetupCommitFileQueue equ <__imp_SetupCommitFileQueue>

externdef __imp_SetupCommitFileQueueA:PPROC
SetupCommitFileQueueA equ <__imp_SetupCommitFileQueueA>
  IFNDEF __UNICODE__
    SetupCommitFileQueue equ <__imp_SetupCommitFileQueueA>
  ENDIF

externdef __imp_SetupCommitFileQueueW:PPROC
SetupCommitFileQueueW equ <__imp_SetupCommitFileQueueW>
  IFDEF __UNICODE__
    SetupCommitFileQueue equ <__imp_SetupCommitFileQueueW>
  ENDIF

externdef __imp_SetupConfigureWmiFromInfSectionA:PPROC
SetupConfigureWmiFromInfSectionA equ <__imp_SetupConfigureWmiFromInfSectionA>
  IFNDEF __UNICODE__
    SetupConfigureWmiFromInfSection equ <__imp_SetupConfigureWmiFromInfSectionA>
  ENDIF

externdef __imp_SetupConfigureWmiFromInfSectionW:PPROC
SetupConfigureWmiFromInfSectionW equ <__imp_SetupConfigureWmiFromInfSectionW>
  IFDEF __UNICODE__
    SetupConfigureWmiFromInfSection equ <__imp_SetupConfigureWmiFromInfSectionW>
  ENDIF

externdef __imp_SetupCopyErrorA:PPROC
SetupCopyErrorA equ <__imp_SetupCopyErrorA>
  IFNDEF __UNICODE__
    SetupCopyError equ <__imp_SetupCopyErrorA>
  ENDIF

externdef __imp_SetupCopyErrorW:PPROC
SetupCopyErrorW equ <__imp_SetupCopyErrorW>
  IFDEF __UNICODE__
    SetupCopyError equ <__imp_SetupCopyErrorW>
  ENDIF

externdef __imp_SetupCopyOEMInfA:PPROC
SetupCopyOEMInfA equ <__imp_SetupCopyOEMInfA>
  IFNDEF __UNICODE__
    SetupCopyOEMInf equ <__imp_SetupCopyOEMInfA>
  ENDIF

externdef __imp_SetupCopyOEMInfW:PPROC
SetupCopyOEMInfW equ <__imp_SetupCopyOEMInfW>
  IFDEF __UNICODE__
    SetupCopyOEMInf equ <__imp_SetupCopyOEMInfW>
  ENDIF

externdef __imp_SetupCreateDiskSpaceListA:PPROC
SetupCreateDiskSpaceListA equ <__imp_SetupCreateDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupCreateDiskSpaceList equ <__imp_SetupCreateDiskSpaceListA>
  ENDIF

externdef __imp_SetupCreateDiskSpaceListW:PPROC
SetupCreateDiskSpaceListW equ <__imp_SetupCreateDiskSpaceListW>
  IFDEF __UNICODE__
    SetupCreateDiskSpaceList equ <__imp_SetupCreateDiskSpaceListW>
  ENDIF

externdef __imp_SetupDecompressOrCopyFileA:PPROC
SetupDecompressOrCopyFileA equ <__imp_SetupDecompressOrCopyFileA>
  IFNDEF __UNICODE__
    SetupDecompressOrCopyFile equ <__imp_SetupDecompressOrCopyFileA>
  ENDIF

externdef __imp_SetupDecompressOrCopyFileW:PPROC
SetupDecompressOrCopyFileW equ <__imp_SetupDecompressOrCopyFileW>
  IFDEF __UNICODE__
    SetupDecompressOrCopyFile equ <__imp_SetupDecompressOrCopyFileW>
  ENDIF

externdef __imp_SetupDefaultQueueCallback:PPROC
SetupDefaultQueueCallback equ <__imp_SetupDefaultQueueCallback>

externdef __imp_SetupDefaultQueueCallbackA:PPROC
SetupDefaultQueueCallbackA equ <__imp_SetupDefaultQueueCallbackA>
  IFNDEF __UNICODE__
    SetupDefaultQueueCallback equ <__imp_SetupDefaultQueueCallbackA>
  ENDIF

externdef __imp_SetupDefaultQueueCallbackW:PPROC
SetupDefaultQueueCallbackW equ <__imp_SetupDefaultQueueCallbackW>
  IFDEF __UNICODE__
    SetupDefaultQueueCallback equ <__imp_SetupDefaultQueueCallbackW>
  ENDIF

externdef __imp_SetupDeleteErrorA:PPROC
SetupDeleteErrorA equ <__imp_SetupDeleteErrorA>
  IFNDEF __UNICODE__
    SetupDeleteError equ <__imp_SetupDeleteErrorA>
  ENDIF

externdef __imp_SetupDeleteErrorW:PPROC
SetupDeleteErrorW equ <__imp_SetupDeleteErrorW>
  IFDEF __UNICODE__
    SetupDeleteError equ <__imp_SetupDeleteErrorW>
  ENDIF

externdef __imp_SetupDestroyDiskSpaceList:PPROC
SetupDestroyDiskSpaceList equ <__imp_SetupDestroyDiskSpaceList>

externdef __imp_SetupDiAskForOEMDisk:PPROC
SetupDiAskForOEMDisk equ <__imp_SetupDiAskForOEMDisk>

externdef __imp_SetupDiBuildClassInfoList:PPROC
SetupDiBuildClassInfoList equ <__imp_SetupDiBuildClassInfoList>

externdef __imp_SetupDiBuildClassInfoListExA:PPROC
SetupDiBuildClassInfoListExA equ <__imp_SetupDiBuildClassInfoListExA>
  IFNDEF __UNICODE__
    SetupDiBuildClassInfoListEx equ <__imp_SetupDiBuildClassInfoListExA>
  ENDIF

externdef __imp_SetupDiBuildClassInfoListExW:PPROC
SetupDiBuildClassInfoListExW equ <__imp_SetupDiBuildClassInfoListExW>
  IFDEF __UNICODE__
    SetupDiBuildClassInfoListEx equ <__imp_SetupDiBuildClassInfoListExW>
  ENDIF

externdef __imp_SetupDiBuildDriverInfoList:PPROC
SetupDiBuildDriverInfoList equ <__imp_SetupDiBuildDriverInfoList>

externdef __imp_SetupDiCallClassInstaller:PPROC
SetupDiCallClassInstaller equ <__imp_SetupDiCallClassInstaller>

externdef __imp_SetupDiCancelDriverInfoSearch:PPROC
SetupDiCancelDriverInfoSearch equ <__imp_SetupDiCancelDriverInfoSearch>

externdef __imp_SetupDiChangeState:PPROC
SetupDiChangeState equ <__imp_SetupDiChangeState>

externdef __imp_SetupDiClassGuidsFromNameA:PPROC
SetupDiClassGuidsFromNameA equ <__imp_SetupDiClassGuidsFromNameA>
  IFNDEF __UNICODE__
    SetupDiClassGuidsFromName equ <__imp_SetupDiClassGuidsFromNameA>
  ENDIF

externdef __imp_SetupDiClassGuidsFromNameExA:PPROC
SetupDiClassGuidsFromNameExA equ <__imp_SetupDiClassGuidsFromNameExA>
  IFNDEF __UNICODE__
    SetupDiClassGuidsFromNameEx equ <__imp_SetupDiClassGuidsFromNameExA>
  ENDIF

externdef __imp_SetupDiClassGuidsFromNameExW:PPROC
SetupDiClassGuidsFromNameExW equ <__imp_SetupDiClassGuidsFromNameExW>
  IFDEF __UNICODE__
    SetupDiClassGuidsFromNameEx equ <__imp_SetupDiClassGuidsFromNameExW>
  ENDIF

externdef __imp_SetupDiClassGuidsFromNameW:PPROC
SetupDiClassGuidsFromNameW equ <__imp_SetupDiClassGuidsFromNameW>
  IFDEF __UNICODE__
    SetupDiClassGuidsFromName equ <__imp_SetupDiClassGuidsFromNameW>
  ENDIF

externdef __imp_SetupDiClassNameFromGuidA:PPROC
SetupDiClassNameFromGuidA equ <__imp_SetupDiClassNameFromGuidA>
  IFNDEF __UNICODE__
    SetupDiClassNameFromGuid equ <__imp_SetupDiClassNameFromGuidA>
  ENDIF

externdef __imp_SetupDiClassNameFromGuidExA:PPROC
SetupDiClassNameFromGuidExA equ <__imp_SetupDiClassNameFromGuidExA>
  IFNDEF __UNICODE__
    SetupDiClassNameFromGuidEx equ <__imp_SetupDiClassNameFromGuidExA>
  ENDIF

externdef __imp_SetupDiClassNameFromGuidExW:PPROC
SetupDiClassNameFromGuidExW equ <__imp_SetupDiClassNameFromGuidExW>
  IFDEF __UNICODE__
    SetupDiClassNameFromGuidEx equ <__imp_SetupDiClassNameFromGuidExW>
  ENDIF

externdef __imp_SetupDiClassNameFromGuidW:PPROC
SetupDiClassNameFromGuidW equ <__imp_SetupDiClassNameFromGuidW>
  IFDEF __UNICODE__
    SetupDiClassNameFromGuid equ <__imp_SetupDiClassNameFromGuidW>
  ENDIF

externdef __imp_SetupDiCreateDevRegKeyA:PPROC
SetupDiCreateDevRegKeyA equ <__imp_SetupDiCreateDevRegKeyA>
  IFNDEF __UNICODE__
    SetupDiCreateDevRegKey equ <__imp_SetupDiCreateDevRegKeyA>
  ENDIF

externdef __imp_SetupDiCreateDevRegKeyW:PPROC
SetupDiCreateDevRegKeyW equ <__imp_SetupDiCreateDevRegKeyW>
  IFDEF __UNICODE__
    SetupDiCreateDevRegKey equ <__imp_SetupDiCreateDevRegKeyW>
  ENDIF

externdef __imp_SetupDiCreateDeviceInfoA:PPROC
SetupDiCreateDeviceInfoA equ <__imp_SetupDiCreateDeviceInfoA>
  IFNDEF __UNICODE__
    SetupDiCreateDeviceInfo equ <__imp_SetupDiCreateDeviceInfoA>
  ENDIF

externdef __imp_SetupDiCreateDeviceInfoList:PPROC
SetupDiCreateDeviceInfoList equ <__imp_SetupDiCreateDeviceInfoList>

externdef __imp_SetupDiCreateDeviceInfoListExA:PPROC
SetupDiCreateDeviceInfoListExA equ <__imp_SetupDiCreateDeviceInfoListExA>
  IFNDEF __UNICODE__
    SetupDiCreateDeviceInfoListEx equ <__imp_SetupDiCreateDeviceInfoListExA>
  ENDIF

externdef __imp_SetupDiCreateDeviceInfoListExW:PPROC
SetupDiCreateDeviceInfoListExW equ <__imp_SetupDiCreateDeviceInfoListExW>
  IFDEF __UNICODE__
    SetupDiCreateDeviceInfoListEx equ <__imp_SetupDiCreateDeviceInfoListExW>
  ENDIF

externdef __imp_SetupDiCreateDeviceInfoW:PPROC
SetupDiCreateDeviceInfoW equ <__imp_SetupDiCreateDeviceInfoW>
  IFDEF __UNICODE__
    SetupDiCreateDeviceInfo equ <__imp_SetupDiCreateDeviceInfoW>
  ENDIF

externdef __imp_SetupDiCreateDeviceInterfaceA:PPROC
SetupDiCreateDeviceInterfaceA equ <__imp_SetupDiCreateDeviceInterfaceA>
  IFNDEF __UNICODE__
    SetupDiCreateDeviceInterface equ <__imp_SetupDiCreateDeviceInterfaceA>
  ENDIF

externdef __imp_SetupDiCreateDeviceInterfaceRegKeyA:PPROC
SetupDiCreateDeviceInterfaceRegKeyA equ <__imp_SetupDiCreateDeviceInterfaceRegKeyA>
  IFNDEF __UNICODE__
    SetupDiCreateDeviceInterfaceRegKey equ <__imp_SetupDiCreateDeviceInterfaceRegKeyA>
  ENDIF

externdef __imp_SetupDiCreateDeviceInterfaceRegKeyW:PPROC
SetupDiCreateDeviceInterfaceRegKeyW equ <__imp_SetupDiCreateDeviceInterfaceRegKeyW>
  IFDEF __UNICODE__
    SetupDiCreateDeviceInterfaceRegKey equ <__imp_SetupDiCreateDeviceInterfaceRegKeyW>
  ENDIF

externdef __imp_SetupDiCreateDeviceInterfaceW:PPROC
SetupDiCreateDeviceInterfaceW equ <__imp_SetupDiCreateDeviceInterfaceW>
  IFDEF __UNICODE__
    SetupDiCreateDeviceInterface equ <__imp_SetupDiCreateDeviceInterfaceW>
  ENDIF

externdef __imp_SetupDiDeleteDevRegKey:PPROC
SetupDiDeleteDevRegKey equ <__imp_SetupDiDeleteDevRegKey>

externdef __imp_SetupDiDeleteDeviceInfo:PPROC
SetupDiDeleteDeviceInfo equ <__imp_SetupDiDeleteDeviceInfo>

externdef __imp_SetupDiDeleteDeviceInterfaceData:PPROC
SetupDiDeleteDeviceInterfaceData equ <__imp_SetupDiDeleteDeviceInterfaceData>

externdef __imp_SetupDiDeleteDeviceInterfaceRegKey:PPROC
SetupDiDeleteDeviceInterfaceRegKey equ <__imp_SetupDiDeleteDeviceInterfaceRegKey>

externdef __imp_SetupDiDestroyClassImageList:PPROC
SetupDiDestroyClassImageList equ <__imp_SetupDiDestroyClassImageList>

externdef __imp_SetupDiDestroyDeviceInfoList:PPROC
SetupDiDestroyDeviceInfoList equ <__imp_SetupDiDestroyDeviceInfoList>

externdef __imp_SetupDiDestroyDriverInfoList:PPROC
SetupDiDestroyDriverInfoList equ <__imp_SetupDiDestroyDriverInfoList>

externdef __imp_SetupDiDrawMiniIcon:PPROC
SetupDiDrawMiniIcon equ <__imp_SetupDiDrawMiniIcon>

externdef __imp_SetupDiEnumDeviceInfo:PPROC
SetupDiEnumDeviceInfo equ <__imp_SetupDiEnumDeviceInfo>

externdef __imp_SetupDiEnumDeviceInterfaces:PPROC
SetupDiEnumDeviceInterfaces equ <__imp_SetupDiEnumDeviceInterfaces>

externdef __imp_SetupDiEnumDriverInfoA:PPROC
SetupDiEnumDriverInfoA equ <__imp_SetupDiEnumDriverInfoA>
  IFNDEF __UNICODE__
    SetupDiEnumDriverInfo equ <__imp_SetupDiEnumDriverInfoA>
  ENDIF

externdef __imp_SetupDiEnumDriverInfoW:PPROC
SetupDiEnumDriverInfoW equ <__imp_SetupDiEnumDriverInfoW>
  IFDEF __UNICODE__
    SetupDiEnumDriverInfo equ <__imp_SetupDiEnumDriverInfoW>
  ENDIF

externdef __imp_SetupDiGetActualModelsSectionA:PPROC
SetupDiGetActualModelsSectionA equ <__imp_SetupDiGetActualModelsSectionA>
  IFNDEF __UNICODE__
    SetupDiGetActualModelsSection equ <__imp_SetupDiGetActualModelsSectionA>
  ENDIF

externdef __imp_SetupDiGetActualModelsSectionW:PPROC
SetupDiGetActualModelsSectionW equ <__imp_SetupDiGetActualModelsSectionW>
  IFDEF __UNICODE__
    SetupDiGetActualModelsSection equ <__imp_SetupDiGetActualModelsSectionW>
  ENDIF

externdef __imp_SetupDiGetActualSectionToInstallA:PPROC
SetupDiGetActualSectionToInstallA equ <__imp_SetupDiGetActualSectionToInstallA>
  IFNDEF __UNICODE__
    SetupDiGetActualSectionToInstall equ <__imp_SetupDiGetActualSectionToInstallA>
  ENDIF

externdef __imp_SetupDiGetActualSectionToInstallExA:PPROC
SetupDiGetActualSectionToInstallExA equ <__imp_SetupDiGetActualSectionToInstallExA>
  IFNDEF __UNICODE__
    SetupDiGetActualSectionToInstallEx equ <__imp_SetupDiGetActualSectionToInstallExA>
  ENDIF

externdef __imp_SetupDiGetActualSectionToInstallExW:PPROC
SetupDiGetActualSectionToInstallExW equ <__imp_SetupDiGetActualSectionToInstallExW>
  IFDEF __UNICODE__
    SetupDiGetActualSectionToInstallEx equ <__imp_SetupDiGetActualSectionToInstallExW>
  ENDIF

externdef __imp_SetupDiGetActualSectionToInstallW:PPROC
SetupDiGetActualSectionToInstallW equ <__imp_SetupDiGetActualSectionToInstallW>
  IFDEF __UNICODE__
    SetupDiGetActualSectionToInstall equ <__imp_SetupDiGetActualSectionToInstallW>
  ENDIF

externdef __imp_SetupDiGetClassBitmapIndex:PPROC
SetupDiGetClassBitmapIndex equ <__imp_SetupDiGetClassBitmapIndex>

externdef __imp_SetupDiGetClassDescriptionA:PPROC
SetupDiGetClassDescriptionA equ <__imp_SetupDiGetClassDescriptionA>
  IFNDEF __UNICODE__
    SetupDiGetClassDescription equ <__imp_SetupDiGetClassDescriptionA>
  ENDIF

externdef __imp_SetupDiGetClassDescriptionExA:PPROC
SetupDiGetClassDescriptionExA equ <__imp_SetupDiGetClassDescriptionExA>
  IFNDEF __UNICODE__
    SetupDiGetClassDescriptionEx equ <__imp_SetupDiGetClassDescriptionExA>
  ENDIF

externdef __imp_SetupDiGetClassDescriptionExW:PPROC
SetupDiGetClassDescriptionExW equ <__imp_SetupDiGetClassDescriptionExW>
  IFDEF __UNICODE__
    SetupDiGetClassDescriptionEx equ <__imp_SetupDiGetClassDescriptionExW>
  ENDIF

externdef __imp_SetupDiGetClassDescriptionW:PPROC
SetupDiGetClassDescriptionW equ <__imp_SetupDiGetClassDescriptionW>
  IFDEF __UNICODE__
    SetupDiGetClassDescription equ <__imp_SetupDiGetClassDescriptionW>
  ENDIF

externdef __imp_SetupDiGetClassDevPropertySheetsA:PPROC
SetupDiGetClassDevPropertySheetsA equ <__imp_SetupDiGetClassDevPropertySheetsA>
  IFNDEF __UNICODE__
    SetupDiGetClassDevPropertySheets equ <__imp_SetupDiGetClassDevPropertySheetsA>
  ENDIF

externdef __imp_SetupDiGetClassDevPropertySheetsW:PPROC
SetupDiGetClassDevPropertySheetsW equ <__imp_SetupDiGetClassDevPropertySheetsW>
  IFDEF __UNICODE__
    SetupDiGetClassDevPropertySheets equ <__imp_SetupDiGetClassDevPropertySheetsW>
  ENDIF

externdef __imp_SetupDiGetClassDevsA:PPROC
SetupDiGetClassDevsA equ <__imp_SetupDiGetClassDevsA>
  IFNDEF __UNICODE__
    SetupDiGetClassDevs equ <__imp_SetupDiGetClassDevsA>
  ENDIF

externdef __imp_SetupDiGetClassDevsExA:PPROC
SetupDiGetClassDevsExA equ <__imp_SetupDiGetClassDevsExA>
  IFNDEF __UNICODE__
    SetupDiGetClassDevsEx equ <__imp_SetupDiGetClassDevsExA>
  ENDIF

externdef __imp_SetupDiGetClassDevsExW:PPROC
SetupDiGetClassDevsExW equ <__imp_SetupDiGetClassDevsExW>
  IFDEF __UNICODE__
    SetupDiGetClassDevsEx equ <__imp_SetupDiGetClassDevsExW>
  ENDIF

externdef __imp_SetupDiGetClassDevsW:PPROC
SetupDiGetClassDevsW equ <__imp_SetupDiGetClassDevsW>
  IFDEF __UNICODE__
    SetupDiGetClassDevs equ <__imp_SetupDiGetClassDevsW>
  ENDIF

externdef __imp_SetupDiGetClassImageIndex:PPROC
SetupDiGetClassImageIndex equ <__imp_SetupDiGetClassImageIndex>

externdef __imp_SetupDiGetClassImageList:PPROC
SetupDiGetClassImageList equ <__imp_SetupDiGetClassImageList>

externdef __imp_SetupDiGetClassImageListExA:PPROC
SetupDiGetClassImageListExA equ <__imp_SetupDiGetClassImageListExA>
  IFNDEF __UNICODE__
    SetupDiGetClassImageListEx equ <__imp_SetupDiGetClassImageListExA>
  ENDIF

externdef __imp_SetupDiGetClassImageListExW:PPROC
SetupDiGetClassImageListExW equ <__imp_SetupDiGetClassImageListExW>
  IFDEF __UNICODE__
    SetupDiGetClassImageListEx equ <__imp_SetupDiGetClassImageListExW>
  ENDIF

externdef __imp_SetupDiGetClassInstallParamsA:PPROC
SetupDiGetClassInstallParamsA equ <__imp_SetupDiGetClassInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiGetClassInstallParams equ <__imp_SetupDiGetClassInstallParamsA>
  ENDIF

externdef __imp_SetupDiGetClassInstallParamsW:PPROC
SetupDiGetClassInstallParamsW equ <__imp_SetupDiGetClassInstallParamsW>
  IFDEF __UNICODE__
    SetupDiGetClassInstallParams equ <__imp_SetupDiGetClassInstallParamsW>
  ENDIF

externdef __imp_SetupDiGetClassRegistryPropertyA:PPROC
SetupDiGetClassRegistryPropertyA equ <__imp_SetupDiGetClassRegistryPropertyA>
  IFNDEF __UNICODE__
    SetupDiGetClassRegistryProperty equ <__imp_SetupDiGetClassRegistryPropertyA>
  ENDIF

externdef __imp_SetupDiGetClassRegistryPropertyW:PPROC
SetupDiGetClassRegistryPropertyW equ <__imp_SetupDiGetClassRegistryPropertyW>
  IFDEF __UNICODE__
    SetupDiGetClassRegistryProperty equ <__imp_SetupDiGetClassRegistryPropertyW>
  ENDIF

externdef __imp_SetupDiGetCustomDevicePropertyA:PPROC
SetupDiGetCustomDevicePropertyA equ <__imp_SetupDiGetCustomDevicePropertyA>
  IFNDEF __UNICODE__
    SetupDiGetCustomDeviceProperty equ <__imp_SetupDiGetCustomDevicePropertyA>
  ENDIF

externdef __imp_SetupDiGetCustomDevicePropertyW:PPROC
SetupDiGetCustomDevicePropertyW equ <__imp_SetupDiGetCustomDevicePropertyW>
  IFDEF __UNICODE__
    SetupDiGetCustomDeviceProperty equ <__imp_SetupDiGetCustomDevicePropertyW>
  ENDIF

externdef __imp_SetupDiGetDeviceInfoListClass:PPROC
SetupDiGetDeviceInfoListClass equ <__imp_SetupDiGetDeviceInfoListClass>

externdef __imp_SetupDiGetDeviceInfoListDetailA:PPROC
SetupDiGetDeviceInfoListDetailA equ <__imp_SetupDiGetDeviceInfoListDetailA>
  IFNDEF __UNICODE__
    SetupDiGetDeviceInfoListDetail equ <__imp_SetupDiGetDeviceInfoListDetailA>
  ENDIF

externdef __imp_SetupDiGetDeviceInfoListDetailW:PPROC
SetupDiGetDeviceInfoListDetailW equ <__imp_SetupDiGetDeviceInfoListDetailW>
  IFDEF __UNICODE__
    SetupDiGetDeviceInfoListDetail equ <__imp_SetupDiGetDeviceInfoListDetailW>
  ENDIF

externdef __imp_SetupDiGetDeviceInstallParamsA:PPROC
SetupDiGetDeviceInstallParamsA equ <__imp_SetupDiGetDeviceInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiGetDeviceInstallParams equ <__imp_SetupDiGetDeviceInstallParamsA>
  ENDIF

externdef __imp_SetupDiGetDeviceInstallParamsW:PPROC
SetupDiGetDeviceInstallParamsW equ <__imp_SetupDiGetDeviceInstallParamsW>
  IFDEF __UNICODE__
    SetupDiGetDeviceInstallParams equ <__imp_SetupDiGetDeviceInstallParamsW>
  ENDIF

externdef __imp_SetupDiGetDeviceInstanceIdA:PPROC
SetupDiGetDeviceInstanceIdA equ <__imp_SetupDiGetDeviceInstanceIdA>
  IFNDEF __UNICODE__
    SetupDiGetDeviceInstanceId equ <__imp_SetupDiGetDeviceInstanceIdA>
  ENDIF

externdef __imp_SetupDiGetDeviceInstanceIdW:PPROC
SetupDiGetDeviceInstanceIdW equ <__imp_SetupDiGetDeviceInstanceIdW>
  IFDEF __UNICODE__
    SetupDiGetDeviceInstanceId equ <__imp_SetupDiGetDeviceInstanceIdW>
  ENDIF

externdef __imp_SetupDiGetDeviceInterfaceAlias:PPROC
SetupDiGetDeviceInterfaceAlias equ <__imp_SetupDiGetDeviceInterfaceAlias>

externdef __imp_SetupDiGetDeviceInterfaceDetailA:PPROC
SetupDiGetDeviceInterfaceDetailA equ <__imp_SetupDiGetDeviceInterfaceDetailA>
  IFNDEF __UNICODE__
    SetupDiGetDeviceInterfaceDetail equ <__imp_SetupDiGetDeviceInterfaceDetailA>
  ENDIF

externdef __imp_SetupDiGetDeviceInterfaceDetailW:PPROC
SetupDiGetDeviceInterfaceDetailW equ <__imp_SetupDiGetDeviceInterfaceDetailW>
  IFDEF __UNICODE__
    SetupDiGetDeviceInterfaceDetail equ <__imp_SetupDiGetDeviceInterfaceDetailW>
  ENDIF

externdef __imp_SetupDiGetDeviceRegistryPropertyA:PPROC
SetupDiGetDeviceRegistryPropertyA equ <__imp_SetupDiGetDeviceRegistryPropertyA>
  IFNDEF __UNICODE__
    SetupDiGetDeviceRegistryProperty equ <__imp_SetupDiGetDeviceRegistryPropertyA>
  ENDIF

externdef __imp_SetupDiGetDeviceRegistryPropertyW:PPROC
SetupDiGetDeviceRegistryPropertyW equ <__imp_SetupDiGetDeviceRegistryPropertyW>
  IFDEF __UNICODE__
    SetupDiGetDeviceRegistryProperty equ <__imp_SetupDiGetDeviceRegistryPropertyW>
  ENDIF

externdef __imp_SetupDiGetDriverInfoDetailA:PPROC
SetupDiGetDriverInfoDetailA equ <__imp_SetupDiGetDriverInfoDetailA>
  IFNDEF __UNICODE__
    SetupDiGetDriverInfoDetail equ <__imp_SetupDiGetDriverInfoDetailA>
  ENDIF

externdef __imp_SetupDiGetDriverInfoDetailW:PPROC
SetupDiGetDriverInfoDetailW equ <__imp_SetupDiGetDriverInfoDetailW>
  IFDEF __UNICODE__
    SetupDiGetDriverInfoDetail equ <__imp_SetupDiGetDriverInfoDetailW>
  ENDIF

externdef __imp_SetupDiGetDriverInstallParamsA:PPROC
SetupDiGetDriverInstallParamsA equ <__imp_SetupDiGetDriverInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiGetDriverInstallParams equ <__imp_SetupDiGetDriverInstallParamsA>
  ENDIF

externdef __imp_SetupDiGetDriverInstallParamsW:PPROC
SetupDiGetDriverInstallParamsW equ <__imp_SetupDiGetDriverInstallParamsW>
  IFDEF __UNICODE__
    SetupDiGetDriverInstallParams equ <__imp_SetupDiGetDriverInstallParamsW>
  ENDIF

externdef __imp_SetupDiGetHwProfileFriendlyNameA:PPROC
SetupDiGetHwProfileFriendlyNameA equ <__imp_SetupDiGetHwProfileFriendlyNameA>
  IFNDEF __UNICODE__
    SetupDiGetHwProfileFriendlyName equ <__imp_SetupDiGetHwProfileFriendlyNameA>
  ENDIF

externdef __imp_SetupDiGetHwProfileFriendlyNameExA:PPROC
SetupDiGetHwProfileFriendlyNameExA equ <__imp_SetupDiGetHwProfileFriendlyNameExA>
  IFNDEF __UNICODE__
    SetupDiGetHwProfileFriendlyNameEx equ <__imp_SetupDiGetHwProfileFriendlyNameExA>
  ENDIF

externdef __imp_SetupDiGetHwProfileFriendlyNameExW:PPROC
SetupDiGetHwProfileFriendlyNameExW equ <__imp_SetupDiGetHwProfileFriendlyNameExW>
  IFDEF __UNICODE__
    SetupDiGetHwProfileFriendlyNameEx equ <__imp_SetupDiGetHwProfileFriendlyNameExW>
  ENDIF

externdef __imp_SetupDiGetHwProfileFriendlyNameW:PPROC
SetupDiGetHwProfileFriendlyNameW equ <__imp_SetupDiGetHwProfileFriendlyNameW>
  IFDEF __UNICODE__
    SetupDiGetHwProfileFriendlyName equ <__imp_SetupDiGetHwProfileFriendlyNameW>
  ENDIF

externdef __imp_SetupDiGetHwProfileList:PPROC
SetupDiGetHwProfileList equ <__imp_SetupDiGetHwProfileList>

externdef __imp_SetupDiGetHwProfileListExA:PPROC
SetupDiGetHwProfileListExA equ <__imp_SetupDiGetHwProfileListExA>
  IFNDEF __UNICODE__
    SetupDiGetHwProfileListEx equ <__imp_SetupDiGetHwProfileListExA>
  ENDIF

externdef __imp_SetupDiGetHwProfileListExW:PPROC
SetupDiGetHwProfileListExW equ <__imp_SetupDiGetHwProfileListExW>
  IFDEF __UNICODE__
    SetupDiGetHwProfileListEx equ <__imp_SetupDiGetHwProfileListExW>
  ENDIF

externdef __imp_SetupDiGetINFClassA:PPROC
SetupDiGetINFClassA equ <__imp_SetupDiGetINFClassA>
  IFNDEF __UNICODE__
    SetupDiGetINFClass equ <__imp_SetupDiGetINFClassA>
  ENDIF

externdef __imp_SetupDiGetINFClassW:PPROC
SetupDiGetINFClassW equ <__imp_SetupDiGetINFClassW>
  IFDEF __UNICODE__
    SetupDiGetINFClass equ <__imp_SetupDiGetINFClassW>
  ENDIF

externdef __imp_SetupDiGetSelectedDevice:PPROC
SetupDiGetSelectedDevice equ <__imp_SetupDiGetSelectedDevice>

externdef __imp_SetupDiGetSelectedDriverA:PPROC
SetupDiGetSelectedDriverA equ <__imp_SetupDiGetSelectedDriverA>
  IFNDEF __UNICODE__
    SetupDiGetSelectedDriver equ <__imp_SetupDiGetSelectedDriverA>
  ENDIF

externdef __imp_SetupDiGetSelectedDriverW:PPROC
SetupDiGetSelectedDriverW equ <__imp_SetupDiGetSelectedDriverW>
  IFDEF __UNICODE__
    SetupDiGetSelectedDriver equ <__imp_SetupDiGetSelectedDriverW>
  ENDIF

externdef __imp_SetupDiGetWizardPage:PPROC
SetupDiGetWizardPage equ <__imp_SetupDiGetWizardPage>

externdef __imp_SetupDiInstallClassA:PPROC
SetupDiInstallClassA equ <__imp_SetupDiInstallClassA>
  IFNDEF __UNICODE__
    SetupDiInstallClass equ <__imp_SetupDiInstallClassA>
  ENDIF

externdef __imp_SetupDiInstallClassExA:PPROC
SetupDiInstallClassExA equ <__imp_SetupDiInstallClassExA>
  IFNDEF __UNICODE__
    SetupDiInstallClassEx equ <__imp_SetupDiInstallClassExA>
  ENDIF

externdef __imp_SetupDiInstallClassExW:PPROC
SetupDiInstallClassExW equ <__imp_SetupDiInstallClassExW>
  IFDEF __UNICODE__
    SetupDiInstallClassEx equ <__imp_SetupDiInstallClassExW>
  ENDIF

externdef __imp_SetupDiInstallClassW:PPROC
SetupDiInstallClassW equ <__imp_SetupDiInstallClassW>
  IFDEF __UNICODE__
    SetupDiInstallClass equ <__imp_SetupDiInstallClassW>
  ENDIF

externdef __imp_SetupDiInstallDevice:PPROC
SetupDiInstallDevice equ <__imp_SetupDiInstallDevice>

externdef __imp_SetupDiInstallDeviceInterfaces:PPROC
SetupDiInstallDeviceInterfaces equ <__imp_SetupDiInstallDeviceInterfaces>

externdef __imp_SetupDiInstallDriverFiles:PPROC
SetupDiInstallDriverFiles equ <__imp_SetupDiInstallDriverFiles>

externdef __imp_SetupDiLoadClassIcon:PPROC
SetupDiLoadClassIcon equ <__imp_SetupDiLoadClassIcon>

externdef __imp_SetupDiMoveDuplicateDevice:PPROC
SetupDiMoveDuplicateDevice equ <__imp_SetupDiMoveDuplicateDevice>

externdef __imp_SetupDiOpenClassRegKey:PPROC
SetupDiOpenClassRegKey equ <__imp_SetupDiOpenClassRegKey>

externdef __imp_SetupDiOpenClassRegKeyExA:PPROC
SetupDiOpenClassRegKeyExA equ <__imp_SetupDiOpenClassRegKeyExA>
  IFNDEF __UNICODE__
    SetupDiOpenClassRegKeyEx equ <__imp_SetupDiOpenClassRegKeyExA>
  ENDIF

externdef __imp_SetupDiOpenClassRegKeyExW:PPROC
SetupDiOpenClassRegKeyExW equ <__imp_SetupDiOpenClassRegKeyExW>
  IFDEF __UNICODE__
    SetupDiOpenClassRegKeyEx equ <__imp_SetupDiOpenClassRegKeyExW>
  ENDIF

externdef __imp_SetupDiOpenDevRegKey:PPROC
SetupDiOpenDevRegKey equ <__imp_SetupDiOpenDevRegKey>

externdef __imp_SetupDiOpenDeviceInfoA:PPROC
SetupDiOpenDeviceInfoA equ <__imp_SetupDiOpenDeviceInfoA>
  IFNDEF __UNICODE__
    SetupDiOpenDeviceInfo equ <__imp_SetupDiOpenDeviceInfoA>
  ENDIF

externdef __imp_SetupDiOpenDeviceInfoW:PPROC
SetupDiOpenDeviceInfoW equ <__imp_SetupDiOpenDeviceInfoW>
  IFDEF __UNICODE__
    SetupDiOpenDeviceInfo equ <__imp_SetupDiOpenDeviceInfoW>
  ENDIF

externdef __imp_SetupDiOpenDeviceInterfaceA:PPROC
SetupDiOpenDeviceInterfaceA equ <__imp_SetupDiOpenDeviceInterfaceA>
  IFNDEF __UNICODE__
    SetupDiOpenDeviceInterface equ <__imp_SetupDiOpenDeviceInterfaceA>
  ENDIF

externdef __imp_SetupDiOpenDeviceInterfaceRegKey:PPROC
SetupDiOpenDeviceInterfaceRegKey equ <__imp_SetupDiOpenDeviceInterfaceRegKey>

externdef __imp_SetupDiOpenDeviceInterfaceW:PPROC
SetupDiOpenDeviceInterfaceW equ <__imp_SetupDiOpenDeviceInterfaceW>
  IFDEF __UNICODE__
    SetupDiOpenDeviceInterface equ <__imp_SetupDiOpenDeviceInterfaceW>
  ENDIF

externdef __imp_SetupDiRegisterCoDeviceInstallers:PPROC
SetupDiRegisterCoDeviceInstallers equ <__imp_SetupDiRegisterCoDeviceInstallers>

externdef __imp_SetupDiRegisterDeviceInfo:PPROC
SetupDiRegisterDeviceInfo equ <__imp_SetupDiRegisterDeviceInfo>

externdef __imp_SetupDiRemoveDevice:PPROC
SetupDiRemoveDevice equ <__imp_SetupDiRemoveDevice>

externdef __imp_SetupDiRemoveDeviceInterface:PPROC
SetupDiRemoveDeviceInterface equ <__imp_SetupDiRemoveDeviceInterface>

externdef __imp_SetupDiRestartDevices:PPROC
SetupDiRestartDevices equ <__imp_SetupDiRestartDevices>

externdef __imp_SetupDiSelectBestCompatDrv:PPROC
SetupDiSelectBestCompatDrv equ <__imp_SetupDiSelectBestCompatDrv>

externdef __imp_SetupDiSelectDevice:PPROC
SetupDiSelectDevice equ <__imp_SetupDiSelectDevice>

externdef __imp_SetupDiSelectOEMDrv:PPROC
SetupDiSelectOEMDrv equ <__imp_SetupDiSelectOEMDrv>

externdef __imp_SetupDiSetClassInstallParamsA:PPROC
SetupDiSetClassInstallParamsA equ <__imp_SetupDiSetClassInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiSetClassInstallParams equ <__imp_SetupDiSetClassInstallParamsA>
  ENDIF

externdef __imp_SetupDiSetClassInstallParamsW:PPROC
SetupDiSetClassInstallParamsW equ <__imp_SetupDiSetClassInstallParamsW>
  IFDEF __UNICODE__
    SetupDiSetClassInstallParams equ <__imp_SetupDiSetClassInstallParamsW>
  ENDIF

externdef __imp_SetupDiSetClassRegistryPropertyA:PPROC
SetupDiSetClassRegistryPropertyA equ <__imp_SetupDiSetClassRegistryPropertyA>
  IFNDEF __UNICODE__
    SetupDiSetClassRegistryProperty equ <__imp_SetupDiSetClassRegistryPropertyA>
  ENDIF

externdef __imp_SetupDiSetClassRegistryPropertyW:PPROC
SetupDiSetClassRegistryPropertyW equ <__imp_SetupDiSetClassRegistryPropertyW>
  IFDEF __UNICODE__
    SetupDiSetClassRegistryProperty equ <__imp_SetupDiSetClassRegistryPropertyW>
  ENDIF

externdef __imp_SetupDiSetDeviceInstallParamsA:PPROC
SetupDiSetDeviceInstallParamsA equ <__imp_SetupDiSetDeviceInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiSetDeviceInstallParams equ <__imp_SetupDiSetDeviceInstallParamsA>
  ENDIF

externdef __imp_SetupDiSetDeviceInstallParamsW:PPROC
SetupDiSetDeviceInstallParamsW equ <__imp_SetupDiSetDeviceInstallParamsW>
  IFDEF __UNICODE__
    SetupDiSetDeviceInstallParams equ <__imp_SetupDiSetDeviceInstallParamsW>
  ENDIF

externdef __imp_SetupDiSetDeviceInterfaceDefault:PPROC
SetupDiSetDeviceInterfaceDefault equ <__imp_SetupDiSetDeviceInterfaceDefault>

externdef __imp_SetupDiSetDeviceRegistryPropertyA:PPROC
SetupDiSetDeviceRegistryPropertyA equ <__imp_SetupDiSetDeviceRegistryPropertyA>
  IFNDEF __UNICODE__
    SetupDiSetDeviceRegistryProperty equ <__imp_SetupDiSetDeviceRegistryPropertyA>
  ENDIF

externdef __imp_SetupDiSetDeviceRegistryPropertyW:PPROC
SetupDiSetDeviceRegistryPropertyW equ <__imp_SetupDiSetDeviceRegistryPropertyW>
  IFDEF __UNICODE__
    SetupDiSetDeviceRegistryProperty equ <__imp_SetupDiSetDeviceRegistryPropertyW>
  ENDIF

externdef __imp_SetupDiSetDriverInstallParamsA:PPROC
SetupDiSetDriverInstallParamsA equ <__imp_SetupDiSetDriverInstallParamsA>
  IFNDEF __UNICODE__
    SetupDiSetDriverInstallParams equ <__imp_SetupDiSetDriverInstallParamsA>
  ENDIF

externdef __imp_SetupDiSetDriverInstallParamsW:PPROC
SetupDiSetDriverInstallParamsW equ <__imp_SetupDiSetDriverInstallParamsW>
  IFDEF __UNICODE__
    SetupDiSetDriverInstallParams equ <__imp_SetupDiSetDriverInstallParamsW>
  ENDIF

externdef __imp_SetupDiSetSelectedDevice:PPROC
SetupDiSetSelectedDevice equ <__imp_SetupDiSetSelectedDevice>

externdef __imp_SetupDiSetSelectedDriverA:PPROC
SetupDiSetSelectedDriverA equ <__imp_SetupDiSetSelectedDriverA>
  IFNDEF __UNICODE__
    SetupDiSetSelectedDriver equ <__imp_SetupDiSetSelectedDriverA>
  ENDIF

externdef __imp_SetupDiSetSelectedDriverW:PPROC
SetupDiSetSelectedDriverW equ <__imp_SetupDiSetSelectedDriverW>
  IFDEF __UNICODE__
    SetupDiSetSelectedDriver equ <__imp_SetupDiSetSelectedDriverW>
  ENDIF

externdef __imp_SetupDiUnremoveDevice:PPROC
SetupDiUnremoveDevice equ <__imp_SetupDiUnremoveDevice>

externdef __imp_SetupDuplicateDiskSpaceListA:PPROC
SetupDuplicateDiskSpaceListA equ <__imp_SetupDuplicateDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupDuplicateDiskSpaceList equ <__imp_SetupDuplicateDiskSpaceListA>
  ENDIF

externdef __imp_SetupDuplicateDiskSpaceListW:PPROC
SetupDuplicateDiskSpaceListW equ <__imp_SetupDuplicateDiskSpaceListW>
  IFDEF __UNICODE__
    SetupDuplicateDiskSpaceList equ <__imp_SetupDuplicateDiskSpaceListW>
  ENDIF

externdef __imp_SetupEnumInfSectionsA:PPROC
SetupEnumInfSectionsA equ <__imp_SetupEnumInfSectionsA>
  IFNDEF __UNICODE__
    SetupEnumInfSections equ <__imp_SetupEnumInfSectionsA>
  ENDIF

externdef __imp_SetupEnumInfSectionsW:PPROC
SetupEnumInfSectionsW equ <__imp_SetupEnumInfSectionsW>
  IFDEF __UNICODE__
    SetupEnumInfSections equ <__imp_SetupEnumInfSectionsW>
  ENDIF

externdef __imp_SetupFindFirstLineA:PPROC
SetupFindFirstLineA equ <__imp_SetupFindFirstLineA>
  IFNDEF __UNICODE__
    SetupFindFirstLine equ <__imp_SetupFindFirstLineA>
  ENDIF

externdef __imp_SetupFindFirstLineW:PPROC
SetupFindFirstLineW equ <__imp_SetupFindFirstLineW>
  IFDEF __UNICODE__
    SetupFindFirstLine equ <__imp_SetupFindFirstLineW>
  ENDIF

externdef __imp_SetupFindNextLine:PPROC
SetupFindNextLine equ <__imp_SetupFindNextLine>

externdef __imp_SetupFindNextMatchLineA:PPROC
SetupFindNextMatchLineA equ <__imp_SetupFindNextMatchLineA>
  IFNDEF __UNICODE__
    SetupFindNextMatchLine equ <__imp_SetupFindNextMatchLineA>
  ENDIF

externdef __imp_SetupFindNextMatchLineW:PPROC
SetupFindNextMatchLineW equ <__imp_SetupFindNextMatchLineW>
  IFDEF __UNICODE__
    SetupFindNextMatchLine equ <__imp_SetupFindNextMatchLineW>
  ENDIF

externdef __imp_SetupFreeSourceListA:PPROC
SetupFreeSourceListA equ <__imp_SetupFreeSourceListA>
  IFNDEF __UNICODE__
    SetupFreeSourceList equ <__imp_SetupFreeSourceListA>
  ENDIF

externdef __imp_SetupFreeSourceListW:PPROC
SetupFreeSourceListW equ <__imp_SetupFreeSourceListW>
  IFDEF __UNICODE__
    SetupFreeSourceList equ <__imp_SetupFreeSourceListW>
  ENDIF

externdef __imp_SetupGetBackupInformationA:PPROC
SetupGetBackupInformationA equ <__imp_SetupGetBackupInformationA>
  IFNDEF __UNICODE__
    SetupGetBackupInformation equ <__imp_SetupGetBackupInformationA>
  ENDIF

externdef __imp_SetupGetBackupInformationW:PPROC
SetupGetBackupInformationW equ <__imp_SetupGetBackupInformationW>
  IFDEF __UNICODE__
    SetupGetBackupInformation equ <__imp_SetupGetBackupInformationW>
  ENDIF

externdef __imp_SetupGetBinaryField:PPROC
SetupGetBinaryField equ <__imp_SetupGetBinaryField>

externdef __imp_SetupGetFieldCount:PPROC
SetupGetFieldCount equ <__imp_SetupGetFieldCount>

externdef __imp_SetupGetFileCompressionInfoA:PPROC
SetupGetFileCompressionInfoA equ <__imp_SetupGetFileCompressionInfoA>
  IFNDEF __UNICODE__
    SetupGetFileCompressionInfo equ <__imp_SetupGetFileCompressionInfoA>
  ENDIF

externdef __imp_SetupGetFileCompressionInfoExA:PPROC
SetupGetFileCompressionInfoExA equ <__imp_SetupGetFileCompressionInfoExA>
  IFNDEF __UNICODE__
    SetupGetFileCompressionInfoEx equ <__imp_SetupGetFileCompressionInfoExA>
  ENDIF

externdef __imp_SetupGetFileCompressionInfoExW:PPROC
SetupGetFileCompressionInfoExW equ <__imp_SetupGetFileCompressionInfoExW>
  IFDEF __UNICODE__
    SetupGetFileCompressionInfoEx equ <__imp_SetupGetFileCompressionInfoExW>
  ENDIF

externdef __imp_SetupGetFileCompressionInfoW:PPROC
SetupGetFileCompressionInfoW equ <__imp_SetupGetFileCompressionInfoW>
  IFDEF __UNICODE__
    SetupGetFileCompressionInfo equ <__imp_SetupGetFileCompressionInfoW>
  ENDIF

externdef __imp_SetupGetFileQueueCount:PPROC
SetupGetFileQueueCount equ <__imp_SetupGetFileQueueCount>

externdef __imp_SetupGetFileQueueFlags:PPROC
SetupGetFileQueueFlags equ <__imp_SetupGetFileQueueFlags>

externdef __imp_SetupGetInfFileListA:PPROC
SetupGetInfFileListA equ <__imp_SetupGetInfFileListA>
  IFNDEF __UNICODE__
    SetupGetInfFileList equ <__imp_SetupGetInfFileListA>
  ENDIF

externdef __imp_SetupGetInfFileListW:PPROC
SetupGetInfFileListW equ <__imp_SetupGetInfFileListW>
  IFDEF __UNICODE__
    SetupGetInfFileList equ <__imp_SetupGetInfFileListW>
  ENDIF

externdef __imp_SetupGetInfInformationA:PPROC
SetupGetInfInformationA equ <__imp_SetupGetInfInformationA>
  IFNDEF __UNICODE__
    SetupGetInfInformation equ <__imp_SetupGetInfInformationA>
  ENDIF

externdef __imp_SetupGetInfInformationW:PPROC
SetupGetInfInformationW equ <__imp_SetupGetInfInformationW>
  IFDEF __UNICODE__
    SetupGetInfInformation equ <__imp_SetupGetInfInformationW>
  ENDIF

externdef __imp_SetupGetInfSections:PPROC
SetupGetInfSections equ <__imp_SetupGetInfSections>

externdef __imp_SetupGetIntField:PPROC
SetupGetIntField equ <__imp_SetupGetIntField>

externdef __imp_SetupGetLineByIndexA:PPROC
SetupGetLineByIndexA equ <__imp_SetupGetLineByIndexA>
  IFNDEF __UNICODE__
    SetupGetLineByIndex equ <__imp_SetupGetLineByIndexA>
  ENDIF

externdef __imp_SetupGetLineByIndexW:PPROC
SetupGetLineByIndexW equ <__imp_SetupGetLineByIndexW>
  IFDEF __UNICODE__
    SetupGetLineByIndex equ <__imp_SetupGetLineByIndexW>
  ENDIF

externdef __imp_SetupGetLineCountA:PPROC
SetupGetLineCountA equ <__imp_SetupGetLineCountA>
  IFNDEF __UNICODE__
    SetupGetLineCount equ <__imp_SetupGetLineCountA>
  ENDIF

externdef __imp_SetupGetLineCountW:PPROC
SetupGetLineCountW equ <__imp_SetupGetLineCountW>
  IFDEF __UNICODE__
    SetupGetLineCount equ <__imp_SetupGetLineCountW>
  ENDIF

externdef __imp_SetupGetLineTextA:PPROC
SetupGetLineTextA equ <__imp_SetupGetLineTextA>
  IFNDEF __UNICODE__
    SetupGetLineText equ <__imp_SetupGetLineTextA>
  ENDIF

externdef __imp_SetupGetLineTextW:PPROC
SetupGetLineTextW equ <__imp_SetupGetLineTextW>
  IFDEF __UNICODE__
    SetupGetLineText equ <__imp_SetupGetLineTextW>
  ENDIF

externdef __imp_SetupGetMultiSzFieldA:PPROC
SetupGetMultiSzFieldA equ <__imp_SetupGetMultiSzFieldA>
  IFNDEF __UNICODE__
    SetupGetMultiSzField equ <__imp_SetupGetMultiSzFieldA>
  ENDIF

externdef __imp_SetupGetMultiSzFieldW:PPROC
SetupGetMultiSzFieldW equ <__imp_SetupGetMultiSzFieldW>
  IFDEF __UNICODE__
    SetupGetMultiSzField equ <__imp_SetupGetMultiSzFieldW>
  ENDIF

externdef __imp_SetupGetNonInteractiveMode:PPROC
SetupGetNonInteractiveMode equ <__imp_SetupGetNonInteractiveMode>

externdef __imp_SetupGetSourceFileLocationA:PPROC
SetupGetSourceFileLocationA equ <__imp_SetupGetSourceFileLocationA>
  IFNDEF __UNICODE__
    SetupGetSourceFileLocation equ <__imp_SetupGetSourceFileLocationA>
  ENDIF

externdef __imp_SetupGetSourceFileLocationW:PPROC
SetupGetSourceFileLocationW equ <__imp_SetupGetSourceFileLocationW>
  IFDEF __UNICODE__
    SetupGetSourceFileLocation equ <__imp_SetupGetSourceFileLocationW>
  ENDIF

externdef __imp_SetupGetSourceFileSizeA:PPROC
SetupGetSourceFileSizeA equ <__imp_SetupGetSourceFileSizeA>
  IFNDEF __UNICODE__
    SetupGetSourceFileSize equ <__imp_SetupGetSourceFileSizeA>
  ENDIF

externdef __imp_SetupGetSourceFileSizeW:PPROC
SetupGetSourceFileSizeW equ <__imp_SetupGetSourceFileSizeW>
  IFDEF __UNICODE__
    SetupGetSourceFileSize equ <__imp_SetupGetSourceFileSizeW>
  ENDIF

externdef __imp_SetupGetSourceInfoA:PPROC
SetupGetSourceInfoA equ <__imp_SetupGetSourceInfoA>
  IFNDEF __UNICODE__
    SetupGetSourceInfo equ <__imp_SetupGetSourceInfoA>
  ENDIF

externdef __imp_SetupGetSourceInfoW:PPROC
SetupGetSourceInfoW equ <__imp_SetupGetSourceInfoW>
  IFDEF __UNICODE__
    SetupGetSourceInfo equ <__imp_SetupGetSourceInfoW>
  ENDIF

externdef __imp_SetupGetStringFieldA:PPROC
SetupGetStringFieldA equ <__imp_SetupGetStringFieldA>
  IFNDEF __UNICODE__
    SetupGetStringField equ <__imp_SetupGetStringFieldA>
  ENDIF

externdef __imp_SetupGetStringFieldW:PPROC
SetupGetStringFieldW equ <__imp_SetupGetStringFieldW>
  IFDEF __UNICODE__
    SetupGetStringField equ <__imp_SetupGetStringFieldW>
  ENDIF

externdef __imp_SetupGetTargetPathA:PPROC
SetupGetTargetPathA equ <__imp_SetupGetTargetPathA>
  IFNDEF __UNICODE__
    SetupGetTargetPath equ <__imp_SetupGetTargetPathA>
  ENDIF

externdef __imp_SetupGetTargetPathW:PPROC
SetupGetTargetPathW equ <__imp_SetupGetTargetPathW>
  IFDEF __UNICODE__
    SetupGetTargetPath equ <__imp_SetupGetTargetPathW>
  ENDIF

externdef __imp_SetupInitDefaultQueueCallback:PPROC
SetupInitDefaultQueueCallback equ <__imp_SetupInitDefaultQueueCallback>

externdef __imp_SetupInitDefaultQueueCallbackEx:PPROC
SetupInitDefaultQueueCallbackEx equ <__imp_SetupInitDefaultQueueCallbackEx>

externdef __imp_SetupInitializeFileLogA:PPROC
SetupInitializeFileLogA equ <__imp_SetupInitializeFileLogA>
  IFNDEF __UNICODE__
    SetupInitializeFileLog equ <__imp_SetupInitializeFileLogA>
  ENDIF

externdef __imp_SetupInitializeFileLogW:PPROC
SetupInitializeFileLogW equ <__imp_SetupInitializeFileLogW>
  IFDEF __UNICODE__
    SetupInitializeFileLog equ <__imp_SetupInitializeFileLogW>
  ENDIF

externdef __imp_SetupInstallFileA:PPROC
SetupInstallFileA equ <__imp_SetupInstallFileA>
  IFNDEF __UNICODE__
    SetupInstallFile equ <__imp_SetupInstallFileA>
  ENDIF

externdef __imp_SetupInstallFileExA:PPROC
SetupInstallFileExA equ <__imp_SetupInstallFileExA>
  IFNDEF __UNICODE__
    SetupInstallFileEx equ <__imp_SetupInstallFileExA>
  ENDIF

externdef __imp_SetupInstallFileExW:PPROC
SetupInstallFileExW equ <__imp_SetupInstallFileExW>
  IFDEF __UNICODE__
    SetupInstallFileEx equ <__imp_SetupInstallFileExW>
  ENDIF

externdef __imp_SetupInstallFileW:PPROC
SetupInstallFileW equ <__imp_SetupInstallFileW>
  IFDEF __UNICODE__
    SetupInstallFile equ <__imp_SetupInstallFileW>
  ENDIF

externdef __imp_SetupInstallFilesFromInfSectionA:PPROC
SetupInstallFilesFromInfSectionA equ <__imp_SetupInstallFilesFromInfSectionA>
  IFNDEF __UNICODE__
    SetupInstallFilesFromInfSection equ <__imp_SetupInstallFilesFromInfSectionA>
  ENDIF

externdef __imp_SetupInstallFilesFromInfSectionW:PPROC
SetupInstallFilesFromInfSectionW equ <__imp_SetupInstallFilesFromInfSectionW>
  IFDEF __UNICODE__
    SetupInstallFilesFromInfSection equ <__imp_SetupInstallFilesFromInfSectionW>
  ENDIF

externdef __imp_SetupInstallFromInfSectionA:PPROC
SetupInstallFromInfSectionA equ <__imp_SetupInstallFromInfSectionA>
  IFNDEF __UNICODE__
    SetupInstallFromInfSection equ <__imp_SetupInstallFromInfSectionA>
  ENDIF

externdef __imp_SetupInstallFromInfSectionW:PPROC
SetupInstallFromInfSectionW equ <__imp_SetupInstallFromInfSectionW>
  IFDEF __UNICODE__
    SetupInstallFromInfSection equ <__imp_SetupInstallFromInfSectionW>
  ENDIF

externdef __imp_SetupInstallServicesFromInfSectionA:PPROC
SetupInstallServicesFromInfSectionA equ <__imp_SetupInstallServicesFromInfSectionA>
  IFNDEF __UNICODE__
    SetupInstallServicesFromInfSection equ <__imp_SetupInstallServicesFromInfSectionA>
  ENDIF

externdef __imp_SetupInstallServicesFromInfSectionExA:PPROC
SetupInstallServicesFromInfSectionExA equ <__imp_SetupInstallServicesFromInfSectionExA>
  IFNDEF __UNICODE__
    SetupInstallServicesFromInfSectionEx equ <__imp_SetupInstallServicesFromInfSectionExA>
  ENDIF

externdef __imp_SetupInstallServicesFromInfSectionExW:PPROC
SetupInstallServicesFromInfSectionExW equ <__imp_SetupInstallServicesFromInfSectionExW>
  IFDEF __UNICODE__
    SetupInstallServicesFromInfSectionEx equ <__imp_SetupInstallServicesFromInfSectionExW>
  ENDIF

externdef __imp_SetupInstallServicesFromInfSectionW:PPROC
SetupInstallServicesFromInfSectionW equ <__imp_SetupInstallServicesFromInfSectionW>
  IFDEF __UNICODE__
    SetupInstallServicesFromInfSection equ <__imp_SetupInstallServicesFromInfSectionW>
  ENDIF

externdef __imp_SetupIterateCabinetA:PPROC
SetupIterateCabinetA equ <__imp_SetupIterateCabinetA>
  IFNDEF __UNICODE__
    SetupIterateCabinet equ <__imp_SetupIterateCabinetA>
  ENDIF

externdef __imp_SetupIterateCabinetW:PPROC
SetupIterateCabinetW equ <__imp_SetupIterateCabinetW>
  IFDEF __UNICODE__
    SetupIterateCabinet equ <__imp_SetupIterateCabinetW>
  ENDIF

externdef __imp_SetupLogErrorA:PPROC
SetupLogErrorA equ <__imp_SetupLogErrorA>
  IFNDEF __UNICODE__
    SetupLogError equ <__imp_SetupLogErrorA>
  ENDIF

externdef __imp_SetupLogErrorW:PPROC
SetupLogErrorW equ <__imp_SetupLogErrorW>
  IFDEF __UNICODE__
    SetupLogError equ <__imp_SetupLogErrorW>
  ENDIF

externdef __imp_SetupLogFileA:PPROC
SetupLogFileA equ <__imp_SetupLogFileA>
  IFNDEF __UNICODE__
    SetupLogFile equ <__imp_SetupLogFileA>
  ENDIF

externdef __imp_SetupLogFileW:PPROC
SetupLogFileW equ <__imp_SetupLogFileW>
  IFDEF __UNICODE__
    SetupLogFile equ <__imp_SetupLogFileW>
  ENDIF

externdef __imp_SetupOpenAppendInfFileA:PPROC
SetupOpenAppendInfFileA equ <__imp_SetupOpenAppendInfFileA>
  IFNDEF __UNICODE__
    SetupOpenAppendInfFile equ <__imp_SetupOpenAppendInfFileA>
  ENDIF

externdef __imp_SetupOpenAppendInfFileW:PPROC
SetupOpenAppendInfFileW equ <__imp_SetupOpenAppendInfFileW>
  IFDEF __UNICODE__
    SetupOpenAppendInfFile equ <__imp_SetupOpenAppendInfFileW>
  ENDIF

externdef __imp_SetupOpenFileQueue:PPROC
SetupOpenFileQueue equ <__imp_SetupOpenFileQueue>

externdef __imp_SetupOpenInfFileA:PPROC
SetupOpenInfFileA equ <__imp_SetupOpenInfFileA>
  IFNDEF __UNICODE__
    SetupOpenInfFile equ <__imp_SetupOpenInfFileA>
  ENDIF

externdef __imp_SetupOpenInfFileW:PPROC
SetupOpenInfFileW equ <__imp_SetupOpenInfFileW>
  IFDEF __UNICODE__
    SetupOpenInfFile equ <__imp_SetupOpenInfFileW>
  ENDIF

externdef __imp_SetupOpenLog:PPROC
SetupOpenLog equ <__imp_SetupOpenLog>

externdef __imp_SetupOpenMasterInf:PPROC
SetupOpenMasterInf equ <__imp_SetupOpenMasterInf>

externdef __imp_SetupPrepareQueueForRestoreA:PPROC
SetupPrepareQueueForRestoreA equ <__imp_SetupPrepareQueueForRestoreA>
  IFNDEF __UNICODE__
    SetupPrepareQueueForRestore equ <__imp_SetupPrepareQueueForRestoreA>
  ENDIF

externdef __imp_SetupPrepareQueueForRestoreW:PPROC
SetupPrepareQueueForRestoreW equ <__imp_SetupPrepareQueueForRestoreW>
  IFDEF __UNICODE__
    SetupPrepareQueueForRestore equ <__imp_SetupPrepareQueueForRestoreW>
  ENDIF

externdef __imp_SetupPromptForDiskA:PPROC
SetupPromptForDiskA equ <__imp_SetupPromptForDiskA>
  IFNDEF __UNICODE__
    SetupPromptForDisk equ <__imp_SetupPromptForDiskA>
  ENDIF

externdef __imp_SetupPromptForDiskW:PPROC
SetupPromptForDiskW equ <__imp_SetupPromptForDiskW>
  IFDEF __UNICODE__
    SetupPromptForDisk equ <__imp_SetupPromptForDiskW>
  ENDIF

externdef __imp_SetupPromptReboot:PPROC
SetupPromptReboot equ <__imp_SetupPromptReboot>

externdef __imp_SetupQueryDrivesInDiskSpaceListA:PPROC
SetupQueryDrivesInDiskSpaceListA equ <__imp_SetupQueryDrivesInDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupQueryDrivesInDiskSpaceList equ <__imp_SetupQueryDrivesInDiskSpaceListA>
  ENDIF

externdef __imp_SetupQueryDrivesInDiskSpaceListW:PPROC
SetupQueryDrivesInDiskSpaceListW equ <__imp_SetupQueryDrivesInDiskSpaceListW>
  IFDEF __UNICODE__
    SetupQueryDrivesInDiskSpaceList equ <__imp_SetupQueryDrivesInDiskSpaceListW>
  ENDIF

externdef __imp_SetupQueryFileLogA:PPROC
SetupQueryFileLogA equ <__imp_SetupQueryFileLogA>
  IFNDEF __UNICODE__
    SetupQueryFileLog equ <__imp_SetupQueryFileLogA>
  ENDIF

externdef __imp_SetupQueryFileLogW:PPROC
SetupQueryFileLogW equ <__imp_SetupQueryFileLogW>
  IFDEF __UNICODE__
    SetupQueryFileLog equ <__imp_SetupQueryFileLogW>
  ENDIF

externdef __imp_SetupQueryInfFileInformationA:PPROC
SetupQueryInfFileInformationA equ <__imp_SetupQueryInfFileInformationA>
  IFNDEF __UNICODE__
    SetupQueryInfFileInformation equ <__imp_SetupQueryInfFileInformationA>
  ENDIF

externdef __imp_SetupQueryInfFileInformationW:PPROC
SetupQueryInfFileInformationW equ <__imp_SetupQueryInfFileInformationW>
  IFDEF __UNICODE__
    SetupQueryInfFileInformation equ <__imp_SetupQueryInfFileInformationW>
  ENDIF

externdef __imp_SetupQueryInfOriginalFileInformationA:PPROC
SetupQueryInfOriginalFileInformationA equ <__imp_SetupQueryInfOriginalFileInformationA>
  IFNDEF __UNICODE__
    SetupQueryInfOriginalFileInformation equ <__imp_SetupQueryInfOriginalFileInformationA>
  ENDIF

externdef __imp_SetupQueryInfOriginalFileInformationW:PPROC
SetupQueryInfOriginalFileInformationW equ <__imp_SetupQueryInfOriginalFileInformationW>
  IFDEF __UNICODE__
    SetupQueryInfOriginalFileInformation equ <__imp_SetupQueryInfOriginalFileInformationW>
  ENDIF

externdef __imp_SetupQueryInfVersionInformationA:PPROC
SetupQueryInfVersionInformationA equ <__imp_SetupQueryInfVersionInformationA>
  IFNDEF __UNICODE__
    SetupQueryInfVersionInformation equ <__imp_SetupQueryInfVersionInformationA>
  ENDIF

externdef __imp_SetupQueryInfVersionInformationW:PPROC
SetupQueryInfVersionInformationW equ <__imp_SetupQueryInfVersionInformationW>
  IFDEF __UNICODE__
    SetupQueryInfVersionInformation equ <__imp_SetupQueryInfVersionInformationW>
  ENDIF

externdef __imp_SetupQuerySourceListA:PPROC
SetupQuerySourceListA equ <__imp_SetupQuerySourceListA>
  IFNDEF __UNICODE__
    SetupQuerySourceList equ <__imp_SetupQuerySourceListA>
  ENDIF

externdef __imp_SetupQuerySourceListW:PPROC
SetupQuerySourceListW equ <__imp_SetupQuerySourceListW>
  IFDEF __UNICODE__
    SetupQuerySourceList equ <__imp_SetupQuerySourceListW>
  ENDIF

externdef __imp_SetupQuerySpaceRequiredOnDriveA:PPROC
SetupQuerySpaceRequiredOnDriveA equ <__imp_SetupQuerySpaceRequiredOnDriveA>
  IFNDEF __UNICODE__
    SetupQuerySpaceRequiredOnDrive equ <__imp_SetupQuerySpaceRequiredOnDriveA>
  ENDIF

externdef __imp_SetupQuerySpaceRequiredOnDriveW:PPROC
SetupQuerySpaceRequiredOnDriveW equ <__imp_SetupQuerySpaceRequiredOnDriveW>
  IFDEF __UNICODE__
    SetupQuerySpaceRequiredOnDrive equ <__imp_SetupQuerySpaceRequiredOnDriveW>
  ENDIF

externdef __imp_SetupQueueCopyA:PPROC
SetupQueueCopyA equ <__imp_SetupQueueCopyA>
  IFNDEF __UNICODE__
    SetupQueueCopy equ <__imp_SetupQueueCopyA>
  ENDIF

externdef __imp_SetupQueueCopyIndirectA:PPROC
SetupQueueCopyIndirectA equ <__imp_SetupQueueCopyIndirectA>
  IFNDEF __UNICODE__
    SetupQueueCopyIndirect equ <__imp_SetupQueueCopyIndirectA>
  ENDIF

externdef __imp_SetupQueueCopyIndirectW:PPROC
SetupQueueCopyIndirectW equ <__imp_SetupQueueCopyIndirectW>
  IFDEF __UNICODE__
    SetupQueueCopyIndirect equ <__imp_SetupQueueCopyIndirectW>
  ENDIF

externdef __imp_SetupQueueCopySectionA:PPROC
SetupQueueCopySectionA equ <__imp_SetupQueueCopySectionA>
  IFNDEF __UNICODE__
    SetupQueueCopySection equ <__imp_SetupQueueCopySectionA>
  ENDIF

externdef __imp_SetupQueueCopySectionW:PPROC
SetupQueueCopySectionW equ <__imp_SetupQueueCopySectionW>
  IFDEF __UNICODE__
    SetupQueueCopySection equ <__imp_SetupQueueCopySectionW>
  ENDIF

externdef __imp_SetupQueueCopyW:PPROC
SetupQueueCopyW equ <__imp_SetupQueueCopyW>
  IFDEF __UNICODE__
    SetupQueueCopy equ <__imp_SetupQueueCopyW>
  ENDIF

externdef __imp_SetupQueueDefaultCopyA:PPROC
SetupQueueDefaultCopyA equ <__imp_SetupQueueDefaultCopyA>
  IFNDEF __UNICODE__
    SetupQueueDefaultCopy equ <__imp_SetupQueueDefaultCopyA>
  ENDIF

externdef __imp_SetupQueueDefaultCopyW:PPROC
SetupQueueDefaultCopyW equ <__imp_SetupQueueDefaultCopyW>
  IFDEF __UNICODE__
    SetupQueueDefaultCopy equ <__imp_SetupQueueDefaultCopyW>
  ENDIF

externdef __imp_SetupQueueDeleteA:PPROC
SetupQueueDeleteA equ <__imp_SetupQueueDeleteA>
  IFNDEF __UNICODE__
    SetupQueueDelete equ <__imp_SetupQueueDeleteA>
  ENDIF

externdef __imp_SetupQueueDeleteSectionA:PPROC
SetupQueueDeleteSectionA equ <__imp_SetupQueueDeleteSectionA>
  IFNDEF __UNICODE__
    SetupQueueDeleteSection equ <__imp_SetupQueueDeleteSectionA>
  ENDIF

externdef __imp_SetupQueueDeleteSectionW:PPROC
SetupQueueDeleteSectionW equ <__imp_SetupQueueDeleteSectionW>
  IFDEF __UNICODE__
    SetupQueueDeleteSection equ <__imp_SetupQueueDeleteSectionW>
  ENDIF

externdef __imp_SetupQueueDeleteW:PPROC
SetupQueueDeleteW equ <__imp_SetupQueueDeleteW>
  IFDEF __UNICODE__
    SetupQueueDelete equ <__imp_SetupQueueDeleteW>
  ENDIF

externdef __imp_SetupQueueRenameA:PPROC
SetupQueueRenameA equ <__imp_SetupQueueRenameA>
  IFNDEF __UNICODE__
    SetupQueueRename equ <__imp_SetupQueueRenameA>
  ENDIF

externdef __imp_SetupQueueRenameSectionA:PPROC
SetupQueueRenameSectionA equ <__imp_SetupQueueRenameSectionA>
  IFNDEF __UNICODE__
    SetupQueueRenameSection equ <__imp_SetupQueueRenameSectionA>
  ENDIF

externdef __imp_SetupQueueRenameSectionW:PPROC
SetupQueueRenameSectionW equ <__imp_SetupQueueRenameSectionW>
  IFDEF __UNICODE__
    SetupQueueRenameSection equ <__imp_SetupQueueRenameSectionW>
  ENDIF

externdef __imp_SetupQueueRenameW:PPROC
SetupQueueRenameW equ <__imp_SetupQueueRenameW>
  IFDEF __UNICODE__
    SetupQueueRename equ <__imp_SetupQueueRenameW>
  ENDIF

externdef __imp_SetupRemoveFileLogEntryA:PPROC
SetupRemoveFileLogEntryA equ <__imp_SetupRemoveFileLogEntryA>
  IFNDEF __UNICODE__
    SetupRemoveFileLogEntry equ <__imp_SetupRemoveFileLogEntryA>
  ENDIF

externdef __imp_SetupRemoveFileLogEntryW:PPROC
SetupRemoveFileLogEntryW equ <__imp_SetupRemoveFileLogEntryW>
  IFDEF __UNICODE__
    SetupRemoveFileLogEntry equ <__imp_SetupRemoveFileLogEntryW>
  ENDIF

externdef __imp_SetupRemoveFromDiskSpaceListA:PPROC
SetupRemoveFromDiskSpaceListA equ <__imp_SetupRemoveFromDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupRemoveFromDiskSpaceList equ <__imp_SetupRemoveFromDiskSpaceListA>
  ENDIF

externdef __imp_SetupRemoveFromDiskSpaceListW:PPROC
SetupRemoveFromDiskSpaceListW equ <__imp_SetupRemoveFromDiskSpaceListW>
  IFDEF __UNICODE__
    SetupRemoveFromDiskSpaceList equ <__imp_SetupRemoveFromDiskSpaceListW>
  ENDIF

externdef __imp_SetupRemoveFromSourceListA:PPROC
SetupRemoveFromSourceListA equ <__imp_SetupRemoveFromSourceListA>
  IFNDEF __UNICODE__
    SetupRemoveFromSourceList equ <__imp_SetupRemoveFromSourceListA>
  ENDIF

externdef __imp_SetupRemoveFromSourceListW:PPROC
SetupRemoveFromSourceListW equ <__imp_SetupRemoveFromSourceListW>
  IFDEF __UNICODE__
    SetupRemoveFromSourceList equ <__imp_SetupRemoveFromSourceListW>
  ENDIF

externdef __imp_SetupRemoveInstallSectionFromDiskSpaceListA:PPROC
SetupRemoveInstallSectionFromDiskSpaceListA equ <__imp_SetupRemoveInstallSectionFromDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupRemoveInstallSectionFromDiskSpaceList equ <__imp_SetupRemoveInstallSectionFromDiskSpaceListA>
  ENDIF

externdef __imp_SetupRemoveInstallSectionFromDiskSpaceListW:PPROC
SetupRemoveInstallSectionFromDiskSpaceListW equ <__imp_SetupRemoveInstallSectionFromDiskSpaceListW>
  IFDEF __UNICODE__
    SetupRemoveInstallSectionFromDiskSpaceList equ <__imp_SetupRemoveInstallSectionFromDiskSpaceListW>
  ENDIF

externdef __imp_SetupRemoveSectionFromDiskSpaceListA:PPROC
SetupRemoveSectionFromDiskSpaceListA equ <__imp_SetupRemoveSectionFromDiskSpaceListA>
  IFNDEF __UNICODE__
    SetupRemoveSectionFromDiskSpaceList equ <__imp_SetupRemoveSectionFromDiskSpaceListA>
  ENDIF

externdef __imp_SetupRemoveSectionFromDiskSpaceListW:PPROC
SetupRemoveSectionFromDiskSpaceListW equ <__imp_SetupRemoveSectionFromDiskSpaceListW>
  IFDEF __UNICODE__
    SetupRemoveSectionFromDiskSpaceList equ <__imp_SetupRemoveSectionFromDiskSpaceListW>
  ENDIF

externdef __imp_SetupRenameErrorA:PPROC
SetupRenameErrorA equ <__imp_SetupRenameErrorA>
  IFNDEF __UNICODE__
    SetupRenameError equ <__imp_SetupRenameErrorA>
  ENDIF

externdef __imp_SetupRenameErrorW:PPROC
SetupRenameErrorW equ <__imp_SetupRenameErrorW>
  IFDEF __UNICODE__
    SetupRenameError equ <__imp_SetupRenameErrorW>
  ENDIF

externdef __imp_SetupScanFileQueue:PPROC
SetupScanFileQueue equ <__imp_SetupScanFileQueue>

externdef __imp_SetupScanFileQueueA:PPROC
SetupScanFileQueueA equ <__imp_SetupScanFileQueueA>
  IFNDEF __UNICODE__
    SetupScanFileQueue equ <__imp_SetupScanFileQueueA>
  ENDIF

externdef __imp_SetupScanFileQueueW:PPROC
SetupScanFileQueueW equ <__imp_SetupScanFileQueueW>
  IFDEF __UNICODE__
    SetupScanFileQueue equ <__imp_SetupScanFileQueueW>
  ENDIF

externdef __imp_SetupSetDirectoryIdA:PPROC
SetupSetDirectoryIdA equ <__imp_SetupSetDirectoryIdA>
  IFNDEF __UNICODE__
    SetupSetDirectoryId equ <__imp_SetupSetDirectoryIdA>
  ENDIF

externdef __imp_SetupSetDirectoryIdExA:PPROC
SetupSetDirectoryIdExA equ <__imp_SetupSetDirectoryIdExA>
  IFNDEF __UNICODE__
    SetupSetDirectoryIdEx equ <__imp_SetupSetDirectoryIdExA>
  ENDIF

externdef __imp_SetupSetDirectoryIdExW:PPROC
SetupSetDirectoryIdExW equ <__imp_SetupSetDirectoryIdExW>
  IFDEF __UNICODE__
    SetupSetDirectoryIdEx equ <__imp_SetupSetDirectoryIdExW>
  ENDIF

externdef __imp_SetupSetDirectoryIdW:PPROC
SetupSetDirectoryIdW equ <__imp_SetupSetDirectoryIdW>
  IFDEF __UNICODE__
    SetupSetDirectoryId equ <__imp_SetupSetDirectoryIdW>
  ENDIF

externdef __imp_SetupSetFileQueueAlternatePlatformA:PPROC
SetupSetFileQueueAlternatePlatformA equ <__imp_SetupSetFileQueueAlternatePlatformA>
  IFNDEF __UNICODE__
    SetupSetFileQueueAlternatePlatform equ <__imp_SetupSetFileQueueAlternatePlatformA>
  ENDIF

externdef __imp_SetupSetFileQueueAlternatePlatformW:PPROC
SetupSetFileQueueAlternatePlatformW equ <__imp_SetupSetFileQueueAlternatePlatformW>
  IFDEF __UNICODE__
    SetupSetFileQueueAlternatePlatform equ <__imp_SetupSetFileQueueAlternatePlatformW>
  ENDIF

externdef __imp_SetupSetFileQueueFlags:PPROC
SetupSetFileQueueFlags equ <__imp_SetupSetFileQueueFlags>

externdef __imp_SetupSetNonInteractiveMode:PPROC
SetupSetNonInteractiveMode equ <__imp_SetupSetNonInteractiveMode>

externdef __imp_SetupSetPlatformPathOverrideA:PPROC
SetupSetPlatformPathOverrideA equ <__imp_SetupSetPlatformPathOverrideA>
  IFNDEF __UNICODE__
    SetupSetPlatformPathOverride equ <__imp_SetupSetPlatformPathOverrideA>
  ENDIF

externdef __imp_SetupSetPlatformPathOverrideW:PPROC
SetupSetPlatformPathOverrideW equ <__imp_SetupSetPlatformPathOverrideW>
  IFDEF __UNICODE__
    SetupSetPlatformPathOverride equ <__imp_SetupSetPlatformPathOverrideW>
  ENDIF

externdef __imp_SetupSetSourceListA:PPROC
SetupSetSourceListA equ <__imp_SetupSetSourceListA>
  IFNDEF __UNICODE__
    SetupSetSourceList equ <__imp_SetupSetSourceListA>
  ENDIF

externdef __imp_SetupSetSourceListW:PPROC
SetupSetSourceListW equ <__imp_SetupSetSourceListW>
  IFDEF __UNICODE__
    SetupSetSourceList equ <__imp_SetupSetSourceListW>
  ENDIF

externdef __imp_SetupTermDefaultQueueCallback:PPROC
SetupTermDefaultQueueCallback equ <__imp_SetupTermDefaultQueueCallback>

externdef __imp_SetupTerminateFileLog:PPROC
SetupTerminateFileLog equ <__imp_SetupTerminateFileLog>

externdef __imp_SetupUninstallNewlyCopiedInfs:PPROC
SetupUninstallNewlyCopiedInfs equ <__imp_SetupUninstallNewlyCopiedInfs>

externdef __imp_SetupUninstallOEMInfA:PPROC
SetupUninstallOEMInfA equ <__imp_SetupUninstallOEMInfA>
  IFNDEF __UNICODE__
    SetupUninstallOEMInf equ <__imp_SetupUninstallOEMInfA>
  ENDIF

externdef __imp_SetupUninstallOEMInfW:PPROC
SetupUninstallOEMInfW equ <__imp_SetupUninstallOEMInfW>
  IFDEF __UNICODE__
    SetupUninstallOEMInf equ <__imp_SetupUninstallOEMInfW>
  ENDIF

externdef __imp_SetupVerifyInfFileA:PPROC
SetupVerifyInfFileA equ <__imp_SetupVerifyInfFileA>
  IFNDEF __UNICODE__
    SetupVerifyInfFile equ <__imp_SetupVerifyInfFileA>
  ENDIF

externdef __imp_SetupVerifyInfFileW:PPROC
SetupVerifyInfFileW equ <__imp_SetupVerifyInfFileW>
  IFDEF __UNICODE__
    SetupVerifyInfFile equ <__imp_SetupVerifyInfFileW>
  ENDIF

externdef __imp_UnicodeToMultiByte:PPROC
UnicodeToMultiByte equ <__imp_UnicodeToMultiByte>

externdef __imp_VerifyCatalogFile:PPROC
VerifyCatalogFile equ <__imp_VerifyCatalogFile>

externdef __imp_pSetupAccessRunOnceNodeList:PPROC
pSetupAccessRunOnceNodeList equ <__imp_pSetupAccessRunOnceNodeList>

externdef __imp_pSetupAcquireSCMLock:PPROC
pSetupAcquireSCMLock equ <__imp_pSetupAcquireSCMLock>

externdef __imp_pSetupAddMiniIconToList:PPROC
pSetupAddMiniIconToList equ <__imp_pSetupAddMiniIconToList>

externdef __imp_pSetupAddTagToGroupOrderListEntry:PPROC
pSetupAddTagToGroupOrderListEntry equ <__imp_pSetupAddTagToGroupOrderListEntry>

externdef __imp_pSetupAppendStringToMultiSz:PPROC
pSetupAppendStringToMultiSz equ <__imp_pSetupAppendStringToMultiSz>

externdef __imp_pSetupCaptureAndConvertAnsiArg:PPROC
pSetupCaptureAndConvertAnsiArg equ <__imp_pSetupCaptureAndConvertAnsiArg>

externdef __imp_pSetupCenterWindowRelativeToParent:PPROC
pSetupCenterWindowRelativeToParent equ <__imp_pSetupCenterWindowRelativeToParent>

externdef __imp_pSetupConcatenatePaths:PPROC
pSetupConcatenatePaths equ <__imp_pSetupConcatenatePaths>

externdef __imp_pSetupDestroyRunOnceNodeList:PPROC
pSetupDestroyRunOnceNodeList equ <__imp_pSetupDestroyRunOnceNodeList>

externdef __imp_pSetupDiGetDeviceInfoContext:PPROC
pSetupDiGetDeviceInfoContext equ <__imp_pSetupDiGetDeviceInfoContext>

externdef __imp_pSetupDiSetDeviceInfoContext:PPROC
pSetupDiSetDeviceInfoContext equ <__imp_pSetupDiSetDeviceInfoContext>

externdef __imp_pSetupDoesUserHavePrivilege:PPROC
pSetupDoesUserHavePrivilege equ <__imp_pSetupDoesUserHavePrivilege>

externdef __imp_pSetupDuplicateString:PPROC
pSetupDuplicateString equ <__imp_pSetupDuplicateString>

externdef __imp_pSetupEnablePrivilege:PPROC
pSetupEnablePrivilege equ <__imp_pSetupEnablePrivilege>

externdef __imp_pSetupFree:PPROC
pSetupFree equ <__imp_pSetupFree>

externdef __imp_pSetupFreeStringArray:PPROC
pSetupFreeStringArray equ <__imp_pSetupFreeStringArray>

externdef __imp_pSetupGetCurrentDriverSigningPolicy:PPROC
pSetupGetCurrentDriverSigningPolicy equ <__imp_pSetupGetCurrentDriverSigningPolicy>

externdef __imp_pSetupGetField:PPROC
pSetupGetField equ <__imp_pSetupGetField>

externdef __imp_pSetupGetFileTitle:PPROC
pSetupGetFileTitle equ <__imp_pSetupGetFileTitle>

externdef __imp_pSetupGetGlobalFlags:PPROC
pSetupGetGlobalFlags equ <__imp_pSetupGetGlobalFlags>

externdef __imp_pSetupGetInfSections:PPROC
pSetupGetInfSections equ <__imp_pSetupGetInfSections>

externdef __imp_pSetupGetQueueFlags:PPROC
pSetupGetQueueFlags equ <__imp_pSetupGetQueueFlags>

externdef __imp_pSetupGetRealSystemTime:PPROC
pSetupGetRealSystemTime equ <__imp_pSetupGetRealSystemTime>

externdef __imp_pSetupGetVersionInfoFromImage:PPROC
pSetupGetVersionInfoFromImage equ <__imp_pSetupGetVersionInfoFromImage>

externdef __imp_pSetupGuidFromString:PPROC
pSetupGuidFromString equ <__imp_pSetupGuidFromString>

externdef __imp_pSetupHandleFailedVerification:PPROC
pSetupHandleFailedVerification equ <__imp_pSetupHandleFailedVerification>

externdef __imp_pSetupInfCacheBuild:PPROC
pSetupInfCacheBuild equ <__imp_pSetupInfCacheBuild>

externdef __imp_pSetupInfIsFromOemLocation:PPROC
pSetupInfIsFromOemLocation equ <__imp_pSetupInfIsFromOemLocation>

externdef __imp_pSetupInstallCatalog:PPROC
pSetupInstallCatalog equ <__imp_pSetupInstallCatalog>

externdef __imp_pSetupInstallStopEx:PPROC
pSetupInstallStopEx equ <__imp_pSetupInstallStopEx>

externdef __imp_pSetupIsGuidNull:PPROC
pSetupIsGuidNull equ <__imp_pSetupIsGuidNull>

externdef __imp_pSetupIsLocalSystem:PPROC
pSetupIsLocalSystem equ <__imp_pSetupIsLocalSystem>

externdef __imp_pSetupIsUserAdmin:PPROC
pSetupIsUserAdmin equ <__imp_pSetupIsUserAdmin>

externdef __imp_pSetupMakeSurePathExists:PPROC
pSetupMakeSurePathExists equ <__imp_pSetupMakeSurePathExists>

externdef __imp_pSetupMalloc:PPROC
pSetupMalloc equ <__imp_pSetupMalloc>

externdef __imp_pSetupModifyGlobalFlags:PPROC
pSetupModifyGlobalFlags equ <__imp_pSetupModifyGlobalFlags>

externdef __imp_pSetupMultiByteToUnicode:PPROC
pSetupMultiByteToUnicode equ <__imp_pSetupMultiByteToUnicode>

externdef __imp_pSetupOpenAndMapFileForRead:PPROC
pSetupOpenAndMapFileForRead equ <__imp_pSetupOpenAndMapFileForRead>

externdef __imp_pSetupOutOfMemory:PPROC
pSetupOutOfMemory equ <__imp_pSetupOutOfMemory>

externdef __imp_pSetupQueryMultiSzValueToArray:PPROC
pSetupQueryMultiSzValueToArray equ <__imp_pSetupQueryMultiSzValueToArray>

externdef __imp_pSetupRealloc:PPROC
pSetupRealloc equ <__imp_pSetupRealloc>

externdef __imp_pSetupRegistryDelnode:PPROC
pSetupRegistryDelnode equ <__imp_pSetupRegistryDelnode>

externdef __imp_pSetupRetrieveServiceConfig:PPROC
pSetupRetrieveServiceConfig equ <__imp_pSetupRetrieveServiceConfig>

externdef __imp_pSetupSetArrayToMultiSzValue:PPROC
pSetupSetArrayToMultiSzValue equ <__imp_pSetupSetArrayToMultiSzValue>

externdef __imp_pSetupSetGlobalFlags:PPROC
pSetupSetGlobalFlags equ <__imp_pSetupSetGlobalFlags>

externdef __imp_pSetupSetNoDriverPrompts:PPROC
pSetupSetNoDriverPrompts equ <__imp_pSetupSetNoDriverPrompts>

externdef __imp_pSetupSetQueueFlags:PPROC
pSetupSetQueueFlags equ <__imp_pSetupSetQueueFlags>

externdef __imp_pSetupSetSystemSourcePath:PPROC
pSetupSetSystemSourcePath equ <__imp_pSetupSetSystemSourcePath>

externdef __imp_pSetupShouldDeviceBeExcluded:PPROC
pSetupShouldDeviceBeExcluded equ <__imp_pSetupShouldDeviceBeExcluded>

externdef __imp_pSetupStringFromGuid:PPROC
pSetupStringFromGuid equ <__imp_pSetupStringFromGuid>

externdef __imp_pSetupStringTableAddString:PPROC
pSetupStringTableAddString equ <__imp_pSetupStringTableAddString>

externdef __imp_pSetupStringTableAddStringEx:PPROC
pSetupStringTableAddStringEx equ <__imp_pSetupStringTableAddStringEx>

externdef __imp_pSetupStringTableDestroy:PPROC
pSetupStringTableDestroy equ <__imp_pSetupStringTableDestroy>

externdef __imp_pSetupStringTableDuplicate:PPROC
pSetupStringTableDuplicate equ <__imp_pSetupStringTableDuplicate>

externdef __imp_pSetupStringTableEnum:PPROC
pSetupStringTableEnum equ <__imp_pSetupStringTableEnum>

externdef __imp_pSetupStringTableGetExtraData:PPROC
pSetupStringTableGetExtraData equ <__imp_pSetupStringTableGetExtraData>

externdef __imp_pSetupStringTableInitialize:PPROC
pSetupStringTableInitialize equ <__imp_pSetupStringTableInitialize>

externdef __imp_pSetupStringTableInitializeEx:PPROC
pSetupStringTableInitializeEx equ <__imp_pSetupStringTableInitializeEx>

externdef __imp_pSetupStringTableLookUpString:PPROC
pSetupStringTableLookUpString equ <__imp_pSetupStringTableLookUpString>

externdef __imp_pSetupStringTableLookUpStringEx:PPROC
pSetupStringTableLookUpStringEx equ <__imp_pSetupStringTableLookUpStringEx>

externdef __imp_pSetupStringTableSetExtraData:PPROC
pSetupStringTableSetExtraData equ <__imp_pSetupStringTableSetExtraData>

externdef __imp_pSetupStringTableStringFromId:PPROC
pSetupStringTableStringFromId equ <__imp_pSetupStringTableStringFromId>

externdef __imp_pSetupStringTableStringFromIdEx:PPROC
pSetupStringTableStringFromIdEx equ <__imp_pSetupStringTableStringFromIdEx>

externdef __imp_pSetupUnicodeToMultiByte:PPROC
pSetupUnicodeToMultiByte equ <__imp_pSetupUnicodeToMultiByte>

externdef __imp_pSetupUnmapAndCloseFile:PPROC
pSetupUnmapAndCloseFile equ <__imp_pSetupUnmapAndCloseFile>

externdef __imp_pSetupVerifyCatalogFile:PPROC
pSetupVerifyCatalogFile equ <__imp_pSetupVerifyCatalogFile>

externdef __imp_pSetupVerifyFile:PPROC
pSetupVerifyFile equ <__imp_pSetupVerifyFile>

externdef __imp_pSetupVerifyQueuedCatalogs:PPROC
pSetupVerifyQueuedCatalogs equ <__imp_pSetupVerifyQueuedCatalogs>

externdef __imp_pSetupWriteLogEntry:PPROC
pSetupWriteLogEntry equ <__imp_pSetupWriteLogEntry>

externdef __imp_pSetupWriteLogError:PPROC
pSetupWriteLogError equ <__imp_pSetupWriteLogError>
