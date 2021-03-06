extern void cppISteamGameServer_SteamGameServer004_LogOn(void *);
extern void cppISteamGameServer_SteamGameServer004_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer004_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer004_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer004_GetSteamID(void *);
extern void cppISteamGameServer_SteamGameServer004_SendUserConnectAndAuthenticate(void *, CSteamID, uint32, void *, uint32);
extern CSteamID cppISteamGameServer_SteamGameServer004_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer004_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer004_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern bool cppISteamGameServer_SteamGameServer004_BSetServerType(void *, int32, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool);
extern void cppISteamGameServer_SteamGameServer004_UpdateServerStatus(void *, int, int, int, const char *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer004_UpdateSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer004_SetGameType(void *, const char *);
extern bool cppISteamGameServer_SteamGameServer004_BGetUserAchievementStatus(void *, CSteamID, const char *);
