#ifdef __cplusplus
extern "C" {
#endif
extern SteamAPICall_t cppISteamGameStats_SteamGameStats001_GetNewSession(void *, int8, uint64, int32, RTime32);
extern SteamAPICall_t cppISteamGameStats_SteamGameStats001_EndSession(void *, uint64, RTime32, int);
extern EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt(void *, uint64, const char *, int32);
extern EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeString(void *, uint64, const char *, const char *);
extern EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeFloat(void *, uint64, const char *, float);
extern EResult cppISteamGameStats_SteamGameStats001_AddNewRow(void *, uint64 *, uint64, const char *);
extern EResult cppISteamGameStats_SteamGameStats001_CommitRow(void *, uint64);
extern EResult cppISteamGameStats_SteamGameStats001_CommitOutstandingRows(void *, uint64);
extern EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeInt(void *, uint64, const char *, int32);
extern EResult cppISteamGameStats_SteamGameStats001_AddRowAtributeString(void *, uint64, const char *, const char *);
extern EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeFloat(void *, uint64, const char *, float);
extern EResult cppISteamGameStats_SteamGameStats001_AddSessionAttributeInt64(void *, uint64, const char *, int64);
extern EResult cppISteamGameStats_SteamGameStats001_AddRowAttributeInt64(void *, uint64, const char *, int64);
#ifdef __cplusplus
}
#endif
