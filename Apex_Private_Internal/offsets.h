#pragma once
#include <iostream>
#include <Windows.h>
namespace OffsetsT1 {
	DWORD Entity = 0x1ef7c38; //cl_entitylist0x0216f7b0 
	DWORD LocalPlayer = 0x22b0328;
	DWORD ViewRender = 0x7542b80;
	DWORD viewAngles = 0x2544 - 0x14;
	DWORD in_duck = 0x07542e98;
	DWORD PunchAngle = 0x2448; ////[DataMap.C_Player]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
	DWORD OFF_GLOW_ENABLE = 0x028c;                       //Script_Highlight_GetCurrentContext
	DWORD OFF_GLOW_THROUGH_WALL = 0x26c;                 //Script_Highlight_SetVisibilityType
	DWORD OFF_GLOW_FIX = 0x278;
	DWORD OFF_GLOW_HIGHLIGHT_ID = 0x29C;                 //[DT_HighlightSettings].m_highlightServerActiveStates    
	DWORD OFF_GLOW_HIGHLIGHTS = 0xb0d8f70;      //HighlightSettings
	DWORD OFFSET_TEAM = 0x0338; //[RecvTable.DT_BaseEntity]->m_iTeamNum
	DWORD showfps_enabled = 0x01884650;
	DWORD Bones = 0x0db0 + 0x48; //m_nForceBone
	DWORD m_grapple = 0x2cd0;
	DWORD shadow_enable = 0x0171cdc0;
	DWORD CPlayer_camera_origin = 0x1ee0; //CPlayer!camera_origin
	DWORD ViewModule = 0x2da8; //m_hViewModels
	DWORD IN_JUMP = 0x07542da8;
	DWORD TimeBase = 0x2098;
	DWORD m_traversalProgress = 0x2b7c;
	DWORD m_traversalStartTime = 0x2b80;
	DWORD ss_viewmodelfov = 0x02282c20;
	DWORD m_iObserverMode = 0x3534;
	DWORD m_xp = 0x3734;
	DWORD m_iSignifierName = 0x0478;
	DWORD m_ModelName = 0x0030;
	DWORD NameList = 0xd2e21e0;
	DWORD ViewMatrix = 0x11a350;
	DWORD M_VecAbsOrigin = 0x017c;
	DWORD m_localOrigin = 0x0188;
	DWORD m_localAngles = 0x0194;
	DWORD m_Health = 0x0328; //m_iHealth
	DWORD m_Shield = 0x01a0; //m_shieldHealth
	DWORD m_MaxShield = 0x01a4; //m_shieldHealthMax
	DWORD m_Shield_type = 0x46d4; // [RecvTable.DT_Player] m_armorType
	DWORD m_lastUCmdSimulationTicks = 0x1c64;
	DWORD m_lastUCmdSimulationRemainderTime = 0x1c68;
}
