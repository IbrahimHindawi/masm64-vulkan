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
