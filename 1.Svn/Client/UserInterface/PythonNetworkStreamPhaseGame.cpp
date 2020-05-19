//Find in bool CPythonNetworkStream::RecvDeadPacket()
		pkChrInstSel->Die();
		
///Add
#if defined(SKILL_COOLTIME_UPDATE)
		CPythonPlayer::Instance().ResetSkillCoolTimes();
#endif