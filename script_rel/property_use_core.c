#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = NULL;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 1;
	var uLocal_44 = 0;
	var uLocal_45[1] = { 0 };
	int iLocal_47 = 0;
	struct<2280> Local_48 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 16, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, -1, -1, -1, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1110441984, 1036831949, 1092616192, 1084227584, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -207551571, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1036831949, 0, 1110704128, 1073741824, 1080033280, 1080033280, -1038090240, 1101004800, -1020002304, 1127481344, 0, 0, 0, 1080033280, 1, 2, 0, 0, -1, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 0, 1110704128, 1073741824, 1080033280, 1080033280, -1038090240, 1101004800, -1020002304, 1127481344, 0, 0, 0, 1080033280, 1, 2, 0, 0, -1, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 1103626240, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = -1;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	int iLocal_2466 = 0;
	int iLocal_2467 = 0;
	int iLocal_2468 = 0;
	bool bLocal_2469 = false;
	int iLocal_2470 = 0;
	int iLocal_2471 = 0;
	int iLocal_2472 = 0;
	int iLocal_2473 = 0;
	vector3 vLocal_2474 = { 0f, 0f, 0f };
	int iLocal_2477 = 0;
	int iLocal_2478 = 0;
	struct<69> ScriptParam_0 = { 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<332> Var1;
	int iVar337;
	int iVar338;
	bool bVar339;
	int iVar340;
	vector3 vVar341;
	vector3 vVar344;
	int iVar347;
	int iVar348;
	
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	ScriptParam_0 = func_2(func_1());
	Var1.f_7 = 40;
	Var1.f_288 = 10;
	Var1.f_331 = 2;
	func_3(&Var1, ScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&Var1);
		func_5(ScriptParam_0);
	}
	func_6(&ScriptParam_0, 0);
	iVar338 = 0;
	while (iVar338 < 95)
	{
		iVar337 = (iVar337 + func_8(func_7(iVar338), 1, 0));
		iVar338++;
	}
	StringCopy(&(ScriptParam_0.f_35), "face_human@p_m_zero@base", 32);
	StringCopy(&(ScriptParam_0.f_39), "mood_sleeping", 32);
	ScriptParam_0.f_1 = 0;
	ScriptParam_0.f_17 = func_9(ScriptParam_0);
	if (func_10(&Global_1935630, 131072))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	ScriptParam_0.f_16 = 0;
	if (func_11() != 2)
	{
	}
	else
	{
		ScriptParam_0.f_16 = 1;
	}
	func_12(&ScriptParam_0);
	func_13(&sLocal_14);
	while (true)
	{
		if ((!func_14(ScriptParam_0, 65536) && !func_10(&Global_1935630, 16384)) && !STREAMING::_0x99F92061EFE908BA())
		{
			if (func_15(256))
			{
				func_16(ScriptParam_0, 65536);
				func_6(&ScriptParam_0, 22);
			}
		}
		func_17(&ScriptParam_0, uLocal_45[0], &iLocal_2468, &bLocal_2469, &iLocal_2470);
		if (VOLUME::_0x92A78D0BEDB332A3(ScriptParam_0.f_2))
		{
			if (!func_18(Global_35, ScriptParam_0.f_2, 0, 1))
			{
				if (ScriptParam_0.f_1 > 5 && ScriptParam_0.f_1 < 17)
				{
					if (ScriptParam_0.f_1 != 8 && !func_19())
					{
						if (!func_20(&ScriptParam_0))
						{
							func_21(&ScriptParam_0);
							if (ScriptParam_0.f_1 != 6)
							{
							}
							else
							{
								func_22(&Local_48);
							}
							func_6(&ScriptParam_0, 5);
						}
					}
				}
			}
			else
			{
				func_23(ScriptParam_0);
			}
		}
		func_24(&Var1);
		switch (ScriptParam_0.f_1)
		{
			case 0:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				HUD::_0xF66090013DE648D5("CAMP");
				STREAMING::REQUEST_ANIM_DICT(&(ScriptParam_0.f_35));
				func_6(&ScriptParam_0, 1);
				break;
			
			case 1:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if (HUD::_0xD0976CC34002DB57("CAMP") && STREAMING::HAS_ANIM_DICT_LOADED(&(ScriptParam_0.f_35)))
				{
					func_6(&ScriptParam_0, 2);
				}
				break;
			
			case 2:
				if (func_20(&ScriptParam_0))
				{
					switch (func_26(func_1()))
					{
						case 3:
						case 4:
							Global_40.f_9 = 1;
							break;
						
						default:
							Global_40.f_9 = 2;
							break;
					}
					func_27(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (ScriptParam_0.f_15)
				{
					if (iVar0 <= 0)
					{
						iVar0 = MISC::GET_GAME_TIMER();
					}
					ScriptParam_0.f_29 = TASK::_0xF533D68FF970D190(ScriptParam_0.f_24, func_28(), ScriptParam_0.f_27, 0, 0);
					if (TASK::_0x841475AC96E794D1(ScriptParam_0.f_29))
					{
						func_29(&(ScriptParam_0.f_18), 1);
						func_6(&ScriptParam_0, 21);
					}
					else if (MISC::GET_GAME_TIMER() > iVar0 + 8000)
					{
						CAM::DO_SCREEN_FADE_IN(500);
						func_6(&ScriptParam_0, 22);
					}
				}
				else
				{
					func_6(&ScriptParam_0, 5);
				}
				break;
			
			case 5:
				if (func_20(&ScriptParam_0) || func_14(ScriptParam_0, 262144))
				{
					func_30(ScriptParam_0, 524288);
					func_21(&ScriptParam_0);
					if (!func_31())
					{
						func_32(1);
					}
					func_33(1);
					func_25(&ScriptParam_0);
					func_30(ScriptParam_0, 262144);
				}
				if (!func_34(&(ScriptParam_0.f_5[6])))
				{
					if (func_35(ScriptParam_0))
					{
						if (MISC::IS_BIT_SET(Var1.f_330, 3))
						{
							ScriptParam_0.f_5[6] = func_37("CAMP_FT_PROMPT", -719620017, func_36(ScriptParam_0), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						}
						else
						{
							ScriptParam_0.f_5[6] = func_37("CAMP_FT_PROMPT", -719620017, func_38(ScriptParam_0), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
						}
						func_39(&(ScriptParam_0.f_5[6]), 1616332288, 0, 1);
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[5])))
				{
					if ((func_40(12) && !func_14(ScriptParam_0, 2048)) && func_41())
					{
						if (!func_43(func_42(&ScriptParam_0)))
						{
							ScriptParam_0.f_5[5] = func_37("CAMP_CLOTHING", -719620017, func_42(&ScriptParam_0), 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_39(&(ScriptParam_0.f_5[5]), -484761727, 0, 1);
							if (iVar337 <= 1)
							{
								func_44(&(ScriptParam_0.f_5[5]), 0, 1);
							}
						}
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[1])))
				{
					if ((ScriptParam_0.f_17 && !ScriptParam_0.f_16) && !func_14(ScriptParam_0, 2097152))
					{
						if (!func_43(func_45(&ScriptParam_0, -1773308460)))
						{
							ScriptParam_0.f_5[1] = func_37("PROPERTY_SHAVE", -719620017, func_45(&ScriptParam_0, -1773308460), 1.5f, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_46(&(ScriptParam_0.f_5[1]), 1, 1);
							func_39(&(ScriptParam_0.f_5[1]), 242595732, 0, 1);
							STREAMING::_0x19A6BE7D9C6884D3(-1773308460, 15, 0, 0);
							STREAMING::REQUEST_MODEL(1661492172, false);
							STREAMING::REQUEST_MODEL(949441562, false);
							GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
							if (!ANIMSCENE::_0x25557E324489393C(iLocal_2467))
							{
								iLocal_2467 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@PLAYER_SHAVING@SHAVE_ALL_CAMP", 0, "PB_IDLE", false, true);
							}
							if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_2467, 1, 0) && !ANIMSCENE::_0x59606519FF9D3EC2(iLocal_2467, 1))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(iLocal_2467);
							}
						}
					}
				}
				if (!func_34(&(ScriptParam_0.f_5[7])))
				{
					if (!func_14(ScriptParam_0, 16777216) && func_47())
					{
						vVar341 = { func_42(&ScriptParam_0) };
						if (ScriptParam_0 != 7)
						{
						}
						else
						{
							vVar341 = { func_48() };
						}
						if (!func_43(vVar341))
						{
							ScriptParam_0.f_5[7] = func_37("CAMP_WEAPON_LOCKER", -473983589, vVar341, 1.5f, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
							func_39(&(ScriptParam_0.f_5[7]), -484761727, 0, 1);
							SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(1937840514);
						}
					}
				}
				if (func_34(&(ScriptParam_0.f_5[6])))
				{
					if (MISC::IS_BIT_SET(Var1.f_330, 3))
					{
						vVar344 = { func_36(ScriptParam_0) };
					}
					else
					{
						vVar344 = { func_38(ScriptParam_0) };
					}
					if (func_49(Global_35, vVar344, 1) < 1.5f)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1616332288, "FTRAVEL_GRP", 2);
					}
				}
				if (func_34(&(ScriptParam_0.f_5[1])))
				{
					if (func_49(Global_35, func_45(&ScriptParam_0, -1773308460), 1) < 1.5f)
					{
						if (!func_14(ScriptParam_0, 8388608) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, ScriptParam_0.f_2, true, 0))
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 242595732, "SHAVE_GRP", 2);
						}
					}
				}
				if (func_34(&(ScriptParam_0.f_5[5])))
				{
					if (func_49(Global_35, func_42(&ScriptParam_0), 1) < 1.5f)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, -484761727, "WARDROBE", 2);
					}
				}
				else if (ScriptParam_0 == 7 && func_34(&(ScriptParam_0.f_5[7])))
				{
					if (func_49(Global_35, func_48(), 1) < 1.5f)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, -484761727, "WARDROBE", 2);
					}
				}
				iVar347 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar347, true, 0, false);
				if ((((((((func_50(PLAYER::PLAYER_ID(), 1, 0, 1) || func_51(Global_35, 0)) || PED::IS_PED_ON_MOUNT(Global_35)) || func_52()) || UIAPPS::_IS_ANY_APP_RUNNING()) || iVar347 == -1016714371) || LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID())) || TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					if (!func_14(ScriptParam_0, 4096))
					{
						func_53(&ScriptParam_0, 0);
						func_16(ScriptParam_0, 4096);
					}
				}
				else if (func_14(ScriptParam_0, 4096))
				{
					func_53(&ScriptParam_0, 1);
					func_30(ScriptParam_0, 4096);
				}
				if ((PED::_0x34D6AC1157C8226C(Global_35, -1054012177) || PED::_0x34D6AC1157C8226C(Global_35, -2016812721)) || PED::_0x34D6AC1157C8226C(Global_35, 1690225020))
				{
					if (!func_14(ScriptParam_0, 4194304))
					{
						func_54(&ScriptParam_0, 0);
						func_16(ScriptParam_0, 4194304);
					}
				}
				else if (func_14(ScriptParam_0, 4194304))
				{
					func_54(&ScriptParam_0, 1);
					func_30(ScriptParam_0, 4194304);
				}
				if (!func_14(ScriptParam_0, 4096))
				{
					if (func_19())
					{
						func_55(1, 0, 0);
						func_56(&ScriptParam_0, 0, &Var1);
					}
				}
				if (!func_14(ScriptParam_0, 4096) && !func_14(ScriptParam_0, 4194304))
				{
					func_57(&ScriptParam_0);
					if (func_58(&(ScriptParam_0.f_5[6]), 1))
					{
						if (func_59(&Var1, ScriptParam_0))
						{
							func_56(&ScriptParam_0, 1, &Var1);
						}
					}
					else if (func_58(&(ScriptParam_0.f_5[0]), 1))
					{
						func_56(&ScriptParam_0, 2, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[1]), 1))
					{
						if (ANIMSCENE::_0x25557E324489393C(iLocal_2467))
						{
							iVar348 = TASK::_0xF533D68FF970D190(ScriptParam_0.f_24, -1773308460, 20f, 0, 0);
							if (TASK::_0x841475AC96E794D1(iVar348))
							{
								ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_2467, TASK::_0xA8452DD321607029(iVar348, 1), 0f, 0f, TASK::_0xB93EA7184BAA85C3(iVar348, 1), 2);
							}
							else
							{
								ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_2467, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35), 2);
							}
						}
						func_13(&sLocal_14);
						func_60(&ScriptParam_0, 0);
						func_56(&ScriptParam_0, 3, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[5]), 1))
					{
						func_60(&ScriptParam_0, 0);
						func_56(&ScriptParam_0, 4, &Var1);
					}
					else if (func_58(&(ScriptParam_0.f_5[7]), 1))
					{
						func_56(&ScriptParam_0, 5, &Var1);
					}
					func_61(&ScriptParam_0);
				}
				break;
			
			case 3:
				if (func_20(&ScriptParam_0))
				{
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (CAM::DOES_CAM_EXIST(ScriptParam_0.f_21) && !CAM::IS_CAM_ACTIVE(ScriptParam_0.f_21))
				{
					func_62(&ScriptParam_0, 1);
				}
				if (ScriptParam_0.f_23 != 4)
				{
					if (ScriptParam_0.f_23 != 5)
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (ScriptParam_0.f_23 == 1 && MISC::IS_BIT_SET(Var1.f_330, 3)))
						{
							func_63(&ScriptParam_0);
						}
						else
						{
							if (!func_64(Global_35, -76381094))
							{
								func_56(&ScriptParam_0, ScriptParam_0.f_23, &Var1);
							}
							if (ScriptParam_0.f_23 == 3 || ScriptParam_0.f_23 == 2)
							{
								CAM::_0x05AB44D906738426();
							}
						}
					}
					else
					{
						func_63(&ScriptParam_0);
					}
				}
				else
				{
					func_63(&ScriptParam_0);
				}
				break;
			
			case 6:
				if (func_20(&ScriptParam_0))
				{
					func_65(&ScriptParam_0);
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (!func_66(&Local_48))
				{
					if (ScriptParam_0.f_23 == -1)
					{
						func_67();
						func_68(&ScriptParam_0, 0);
						func_6(&ScriptParam_0, 5);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						func_69(&ScriptParam_0);
					}
				}
				func_60(&ScriptParam_0, 1);
				break;
			
			case 23:
				HUD::_0xC9CAEAEEC1256E54(474191950);
				if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(1937840514))
				{
					BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH(1937840514, 1024);
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(1937840514);
					func_6(&ScriptParam_0, 24);
				}
				else
				{
					SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(1937840514);
				}
				break;
			
			case 24:
				HUD::_0xC9CAEAEEC1256E54(474191950);
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1937840514) <= 0)
				{
					func_6(&ScriptParam_0, 5);
				}
				break;
			
			case 7:
				if (func_20(&ScriptParam_0))
				{
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				func_6(&ScriptParam_0, 8);
				break;
			
			case 8:
				if (func_20(&ScriptParam_0))
				{
					func_70(&Var1);
					func_25(&ScriptParam_0);
				}
				if (func_71(&Var1))
				{
					if (ScriptParam_0.f_23 == -1)
					{
						func_67();
						func_6(&ScriptParam_0, 5);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
					else
					{
						func_69(&ScriptParam_0);
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
				}
				else if (func_72(&Var1))
				{
					func_16(ScriptParam_0, 131072);
					func_6(&ScriptParam_0, 17);
				}
				break;
			
			case 9:
				if (func_20(&ScriptParam_0))
				{
					func_73(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (!func_19())
				{
					func_74(0);
					func_75(0, 0);
					func_76(1);
					func_67();
					func_77();
					func_78(1);
					func_79();
					if (ScriptParam_0.f_23 == -1)
					{
						func_6(&ScriptParam_0, 5);
					}
					else
					{
						func_69(&ScriptParam_0);
					}
				}
				break;
			
			case 11:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
					func_21(&ScriptParam_0);
				}
				iVar340 = func_80(ScriptParam_0);
				if (func_81(iVar340))
				{
					STREAMING::_REQUEST_IMAP(iVar340);
				}
				Global_1395601 = 1;
				func_69(&ScriptParam_0);
				break;
			
			case 12:
				ScriptParam_0.f_68 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
				if (ScriptParam_0.f_68)
				{
					CAM::_0x05AB44D906738426();
					CAM::_0x8910C24B7E0046EC();
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransition01") || ScriptParam_0.f_68)
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_2467, "player", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_2467);
					PED::_0x2208438012482A1A(Global_35, false, false);
					func_6(&ScriptParam_0, 4);
				}
				break;
			
			case 4:
				if (func_20(&ScriptParam_0))
				{
					Local_48.f_2 = 25;
					Local_48.f_19 = 0;
					Local_48.f_3 = 151;
					Local_48.f_18 = 76;
					if (!iLocal_2466)
					{
						iLocal_2466 = func_83(&Local_48, func_82(25), -1, 1);
						func_84(1);
					}
					func_85();
					if (iLocal_2466)
					{
						func_87(&Local_48, 15319/*func_86*/);
						func_89(&Local_48, 15361/*func_88*/);
						if (func_90(&Local_48))
						{
							func_25(&ScriptParam_0);
						}
					}
				}
				func_60(&ScriptParam_0, 1);
				bVar339 = func_91(&Local_48);
				if (!bVar339)
				{
					func_92(&Local_48);
					iLocal_2466 = 0;
					if (!ScriptParam_0.f_68)
					{
						ScriptParam_0.f_68 = 0;
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					func_6(&ScriptParam_0, 13);
				}
				else
				{
					CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_0x8910C24B7E0046EC();
					func_93(&sLocal_14);
				}
				break;
			
			case 13:
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				func_94(10, 0, 0, 0, 0);
				func_95(Global_35, -1801499084, 1);
				func_96(&sLocal_14);
				func_97();
				func_67();
				func_84(0);
				PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
				func_69(&ScriptParam_0);
				break;
			
			case 21:
				if (func_20(&ScriptParam_0))
				{
					ScriptParam_0.f_23 = 0;
					if (TASK::_0x0CC36D4156006509(ScriptParam_0.f_29))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, ScriptParam_0.f_29, 0, 0, 0, 1, 0, 0, -1082130432, 0);
						func_25(&ScriptParam_0);
					}
				}
				if ((((!Global_1935630->f_12 && !func_98()) && !func_99()) || func_100(&(ScriptParam_0.f_18)) > 8000) && Global_1310720->f_5 < (MISC::GET_GAME_TIMER() - 2000))
				{
					if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || func_100(&(ScriptParam_0.f_18)) > 8000) || !TASK::_0x0CC36D4156006509(ScriptParam_0.f_29))
					{
						if (func_10(&Global_1935630, 131072))
						{
							func_101(Global_1935630, 131072);
						}
						func_62(&ScriptParam_0, 0);
						MISC::_0xA565FAC215CBC77D();
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
						func_102(1024);
						func_103();
						AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
						CAM::DO_SCREEN_FADE_OUT(0);
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
						func_104(0);
						func_105();
						func_106(&(ScriptParam_0.f_18));
						func_6(&ScriptParam_0, 16);
					}
				}
				break;
			
			case 10:
				if (func_20(&ScriptParam_0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 256, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					func_21(&ScriptParam_0);
					func_25(&ScriptParam_0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630->f_12)
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						HUD::_0x8BC7C1F929D07BF3(-1347445791);
						ScriptParam_0.f_4 = 0;
						func_68(&ScriptParam_0, 1);
						func_67();
						func_6(&ScriptParam_0, 5);
					}
				}
				break;
			
			case 16:
				if (func_20(&ScriptParam_0))
				{
					func_107(1);
					func_108(28, 1);
					if (!func_109())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_25(&ScriptParam_0);
				}
				if ((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
				{
					func_101(Global_1935630, 16384);
					func_68(&ScriptParam_0, 1);
					if (ScriptParam_0.f_23 != -1)
					{
						func_69(&ScriptParam_0);
					}
					else
					{
						func_6(&ScriptParam_0, 5);
					}
				}
				break;
			
			case 17:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				func_6(&ScriptParam_0, 18);
				break;
			
			case 18:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if ((func_110(&Var1) && !func_10(&Global_1935630, 16384)) && !STREAMING::_0x99F92061EFE908BA())
				{
					func_6(&ScriptParam_0, 20);
				}
				break;
			
			case 20:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				func_4(&Var1);
				func_6(&ScriptParam_0, 22);
				break;
			
			case 22:
				if (func_20(&ScriptParam_0))
				{
					func_25(&ScriptParam_0);
				}
				if (!func_10(&Global_1935630, 16384) && !STREAMING::_0x99F92061EFE908BA())
				{
					func_4(&Var1);
				}
				func_5(ScriptParam_0);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1()
{
	return Global_1894899->f_2;
}

int func_2(int iParam0)
{
	int iVar0;
	
	if (!func_111(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_3(var uParam0, int iParam1)
{
	if (func_112(iParam1))
	{
		MISC::SET_BIT(&(uParam0->f_330), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_330), 3);
	}
}

void func_4(var uParam0)
{
	func_113(uParam0);
	func_114(uParam0);
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_332))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_332);
	}
	MISC::CLEAR_BIT(&(uParam0->f_330), 1);
	GRAPHICS::_0xD9EDB2E4512D563E(0, false, 0f, 0f, 0f, 1f, false, 0f);
}

void func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	func_115(&uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0->f_1 != iParam1)
	{
		iParam0->f_1 = iParam1;
		func_116(iParam0);
	}
}

int func_7(int iParam0)
{
	if (!func_117(iParam0))
	{
		return 0;
	}
	if (func_118(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_8(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_9(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
			return 1;
		
		case 15:
			if (func_120(((*Global_1347702)[2 /*49*/])->f_15, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_11()
{
	return Global_40.f_4283.f_4;
}

void func_12(var uParam0)
{
	if (*uParam0 == 9)
	{
		iLocal_47 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2638.082f, -1222.836f, 60.329f, 0f, 0f, 0f, 6.465f, 5.838f, 3.552f, "SaintDenis-volRentalRoomPedBlocking");
		if (VOLUME::_0x92A78D0BEDB332A3(iLocal_47))
		{
			func_121(iLocal_47, 0);
			POPULATION::_0xB56D41A694E42E86(iLocal_47, 10208, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_47, 10208, 0, 0, -1, -1, 0);
		}
	}
}

void func_13(char* sParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(sParam0))
	{
		if (func_122() == 7 || func_122() == 8)
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_PRONGHORN_REQUEST", 64);
		}
		else if (func_122() == 3)
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_SHADY_REQUEST", 64);
		}
		else
		{
			StringCopy(&(sParam0->f_8), "SHAVE_ORBIT_REQUEST", 64);
		}
		StringCopy(sParam0, "shave_orbit_cam", 64);
		CAM::_0x6A4D224FC7643941(sParam0);
	}
}

bool func_14(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return false;
	}
	return (Global_40.f_9384[iParam0 /*2*/] && iParam1) != 0;
}

bool func_15(int iParam0)
{
	return (Global_1395601->f_4 && iParam0) != 0;
}

void func_16(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (Global_40.f_9384[iParam0 /*2*/] || iParam1);
}

void func_17(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	vector3 vVar0;
	
	if (func_43(iParam0->f_24))
	{
		return;
	}
	iParam0->f_29 = TASK::_0xF533D68FF970D190(iParam0->f_24, -1773308460, 10f, 0, 0);
	if (!TASK::_0x841475AC96E794D1(iParam0->f_29))
	{
		return;
	}
	vVar0 = { TASK::_0xA8452DD321607029(iParam0->f_29, 1) };
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (*iParam4 == 0)
		{
			*iParam4 = ENTITY::_0x6F3068258A499E52(1661492172, vVar0, 15);
		}
		else if (ENTITY::_0x1FF441D7954F8709(*iParam4))
		{
			*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*iParam4));
		}
	}
	else
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1)))
		{
			return;
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			return;
		}
		if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(*iParam2))
		{
			*iParam2 = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(*iParam2, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f);
		}
		if (!*bParam3 && GRAPHICS::IS_TRACKED_POINT_VISIBLE(*iParam2))
		{
			GRAPHICS::_0xA04EF43030593ABC(*uParam1, 2);
			*bParam3 = 1;
		}
		else if (*bParam3 && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(*iParam2))
		{
			GRAPHICS::_0xA21AF60C9F99CCC5();
			*bParam3 = 0;
		}
	}
}

bool func_18(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

bool func_19()
{
	return Global_1392040->f_6;
}

bool func_20(int iParam0)
{
	return iParam0->f_3;
}

void func_21(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam0->f_5)
	{
		if (func_34(&(iParam0->f_5[iVar0])))
		{
			func_123(iParam0->f_5[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_22(var uParam0)
{
	if (func_124(uParam0))
	{
		func_92(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 10))
	{
		Global_1949598->f_1 = 0;
		if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		HUD::_0x8BC7C1F929D07BF3(-252438768);
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_2279.f_1))
		{
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_2279.f_1);
			PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_2279.f_1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2279.f_3, false);
			VOLUME::_0x43F867EF5C463A53(uParam0->f_2279.f_1);
		}
		switch (func_125())
		{
			case -1:
				func_126(&(uParam0->f_2279));
				break;
		}
		func_127(uParam0->f_2279, 1);
		func_94(31, 0, 0, 0, 0);
		func_128(0);
		func_129(0, 1);
		func_130();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_2279, 0, 1);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_2279, uParam0->f_2279.f_15, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_2279, uParam0->f_2279.f_18);
		ENTITY::_0x9587913B9E772D29(uParam0->f_2279, 0);
		func_131(1, uParam0->f_2279);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam0->f_2279.f_19, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		PED::_0x2208438012482A1A(uParam0->f_2279, false, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_132(uParam0);
		func_133(&(uParam0->f_2279.f_2));
		func_134();
	}
	func_135(&(uParam0->f_2279));
	uParam0->f_2279.f_5 = 0;
}

int func_23(int iParam0)
{
	if (!func_136() && iParam0 != 6)
	{
		return 0;
	}
	if (!func_137(Global_35, 0))
	{
		return 0;
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	PAD::DISABLE_CONTROL_ACTION(0, -455946723, false);
	PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	return 1;
}

void func_24(var uParam0)
{
	var uVar0;
	int iVar1;
	
	func_138(uParam0);
	switch (uParam0->f_331)
	{
		case 2:
			break;
		
		case 0:
			func_139(uParam0, 1);
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_330, 2))
			{
				func_140(uParam0);
				func_16(uParam0->f_333, 256);
				func_139(uParam0, 3);
				if (func_1() == 71)
				{
					GRAPHICS::_0xD9EDB2E4512D563E(0, true, -122.5f, -40.094f, 96f, 0.9f, false, 0f);
				}
			}
			break;
		
		case 3:
			switch (func_141(uParam0))
			{
				case 1:
					break;
				
				case 2:
					if (func_143(uParam0, func_142(uParam0)))
					{
						uParam0->f_335 = 0;
						uVar0 = func_144();
						if (!func_145(uParam0, &uVar0))
						{
						}
						else
						{
							iVar1 = func_146(uParam0);
							if (func_137(Global_35, 0))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(func_147(Global_35), true);
							}
							if (func_137(iVar1, 0))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(func_147(iVar1), true);
							}
							if (!func_148(iVar1))
							{
								func_149(iVar1, 1);
								uParam0->f_335 = 1;
							}
							if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_332))
							{
								func_139(uParam0, 5);
							}
							else
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_332, "player", PLAYER::PLAYER_PED_ID(), 0);
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_332, "HORSE", func_146(uParam0), 0);
								CAM::DO_SCREEN_FADE_OUT(1000);
								func_150(0);
								func_139(uParam0, 4);
							}
							func_113(uParam0);
						}
					}
					break;
				
				case 0:
					if (MISC::IS_BIT_SET(uParam0->f_330, 3))
					{
						func_151(uParam0);
					}
					GRAPHICS::_0xD9EDB2E4512D563E(0, false, 0f, 0f, 0f, 1f, false, 0f);
					func_139(uParam0, 9);
					break;
			}
			break;
		
		case 4:
			if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_332, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_332);
				AUDIO::_0x6339C1EA3979B5F7("fast_travel_active", "Fast_Travel_Scenes");
				MAP::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
			}
			if (!ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_332, 0))
			{
				if (CAM::IS_SCREEN_FADED_OUT() && ((((ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "Loop", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "s_EXIT", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "s_EXIT_Left", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "s_EXIT_Right", 1)) || ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_332) >= 0.5f))
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if ((ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "Loop", 1) || (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "s_EXIT", 1) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_332) >= 0.65f)) || (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_332, "s_EXIT_Left", 1) && ANIMSCENE::_0x3FBC3F51BF12DFBF(uParam0->f_332) >= 0.3f))
				{
					func_139(uParam0, 5);
				}
			}
			else
			{
				func_139(uParam0, 5);
			}
			break;
		
		case 5:
			if (func_152(uParam0) == 6)
			{
				func_139(uParam0, 6);
			}
			else
			{
				func_139(uParam0, 3);
			}
			break;
		
		case 6:
			if (!MISC::IS_BIT_SET(uParam0->f_330, 4))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					MISC::SET_BIT(&(uParam0->f_330), 4);
					GRAPHICS::_0xD9EDB2E4512D563E(0, false, 0f, 0f, 0f, 1f, false, 0f);
				}
			}
			else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && uParam0->f_335)
			{
				uParam0->f_335 = 0;
				func_153(func_146(uParam0), 1);
				PED::_0x1902C4CFCC5BE57C(func_146(uParam0), 1758465023);
			}
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_332) && CAM::IS_SCREEN_FADED_OUT())
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_332);
			}
			if (func_154(uParam0))
			{
				if (MISC::IS_BIT_SET(uParam0->f_330, 3))
				{
					func_151(uParam0);
				}
				if (func_137(Global_35, 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_147(Global_35), false);
				}
				if (func_137(func_146(uParam0), 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_147(func_146(uParam0)), false);
				}
				func_139(uParam0, 7);
			}
			break;
		
		case 7:
			MISC::CLEAR_BIT(&(uParam0->f_330), 4);
			func_30(uParam0->f_333, 256);
			AUDIO::_0x9428447DED71FC7E("Fast_Travel_Scenes");
			func_139(uParam0, 8);
			break;
		
		case 8:
			break;
		
		case 9:
			func_30(uParam0->f_333, 256);
			func_113(uParam0);
			MISC::CLEAR_BIT(&(uParam0->f_330), 2);
			func_139(uParam0, 10);
			break;
		
		case 10:
			break;
	}
}

void func_25(int iParam0)
{
	iParam0->f_3 = 0;
}

int func_26(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

void func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0->f_2))
	{
		return;
	}
	vVar3 = { VOLUME::_0xF70F00013A62F866(iParam0->f_2) };
	vVar0 = { VOLUME::_0x3E2A25B2416DD67E(iParam0->f_2) };
	if (!func_43(vVar0))
	{
		if (vVar0.x >= vVar0.y)
		{
			fVar6 = vVar0.x;
		}
		else
		{
			fVar6 = vVar0.y;
		}
	}
	else
	{
		fVar6 = 20f;
	}
	iParam0->f_24 = { vVar3 };
	iParam0->f_27 = fVar6;
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1();
	iVar1 = func_2(iVar0);
	if (!func_119(iVar1))
	{
		return 0;
	}
	switch (iVar1)
	{
		case 1:
			return -1054012177;
		
		case 5:
			return 1097070152;
		
		case 15:
			if (!func_155(70))
			{
				return 1097070152;
			}
			else
			{
				return -1054012177;
			}
			break;
		
		default:
			return -1054012177;
	}
	return 0;
}

void func_29(var uParam0, int iParam1)
{
	if (iParam1 || !func_156(uParam0))
	{
		func_157(uParam0);
	}
}

void func_30(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = (&Global_40.f_9384[iParam0 /*2*/] - (Global_40.f_9384[iParam0 /*2*/] && iParam1));
}

bool func_31()
{
	return Global_1905944->f_5694;
}

void func_32(int iParam0)
{
	Global_1905944->f_5694 = iParam0;
}

void func_33(bool bParam0)
{
	if (func_158())
	{
		if (func_159() == 0)
		{
			bParam0 = false;
		}
		if (func_159() == 7)
		{
			if ((((((func_160(61) || func_160(62)) || func_160(63)) || func_160(64)) || func_160(65)) || func_160(66)) || func_160(67))
			{
				bParam0 = false;
			}
		}
	}
	if (bParam0)
	{
		func_161(1073741824);
	}
	else
	{
		func_162(1073741824);
	}
}

bool func_34(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_35(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	if (func_163(9, 0))
	{
		return 0;
	}
	if (func_164(Param0))
	{
		return 0;
	}
	if (func_14(Param0, 128))
	{
		return 0;
	}
	if (!func_14(Param0, 64))
	{
		return 0;
	}
	if (Param0.f_16)
	{
	}
	if (func_43(func_45(&Param0, 1452327073)))
	{
		return 0;
	}
	if (func_122() == 7)
	{
		return 0;
	}
	if (func_122() == 8 && !func_155(73))
	{
		return 0;
	}
	return 1;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -121.9283f, -40.1821f, 94.5436f;
		
		case 2:
			return 650.6963f, -1247.359f, 42.6926f;
		
		case 0:
			return 2340.41f, 1354.968f, 105.3518f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_37(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_43(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_165(iVar0, 2))
		{
			if (func_166(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_167(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

Vector3 func_38(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 1905.507f, -1860.987f, 46.3492f;
		
		case 15:
			if (func_155(70))
			{
				return -1633.542f, -1356.915f, 83.4029f;
			}
			else if (func_155(73))
			{
				return -1667.943f, -1342.911f, 82.8886f;
			}
			else
			{
				return 0f, 0f, 0f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

int func_40(int iParam0)
{
	if (!func_169(iParam0))
	{
		return 0;
	}
	return func_170(iParam0);
}

bool func_41()
{
	return &Global_1949598;
}

Vector3 func_42(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return -326.2195f, 759.3564f, 120.6335f;
		
		case 0:
			return 2342.574f, 1358.693f, 105.4513f;
		
		case 1:
			return func_45(iParam0, 429473903);
		
		case 3:
			return func_45(iParam0, 429473903);
		
		case 4:
			return -124.7364f, -37.98547f, 94.63575f;
		
		case 2:
			return 654.4426f, -1245.271f, 42.6708f;
		
		case 5:
			return 2224.406f, -770.556f, 42.5253f;
		
		case 6:
			return 1904.4f, -1859.5f, 47.4f;
		
		case 7:
			return 0f, 0f, 0f;
		
		case 9:
			return 2638.767f, -1221.976f, 58.6005f;
		
		case 12:
			return 2976.987f, 575.8724f, 46.8771f;
		
		case 14:
			return -1811.204f, -369.914f, 165.4986f;
		
		case 15:
			if (func_155(70))
			{
				return -1649.888f, -1363.463f, 83.4029f;
			}
			else if (func_155(73))
			{
				return -1673.013f, -1338.766f, 83.14853f;
			}
			else
			{
				return 0f, 0f, 0f;
			}
			break;
	}
	return func_45(iParam0, 429473903);
}

int func_43(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (bParam1)
	{
		func_171(iParam0, 4);
		func_172(iVar0, 1);
		func_173(iVar0, 1);
	}
	else
	{
		func_174(iParam0, 4);
		func_173(iVar0, 0);
	}
}

Vector3 func_45(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 == 15)
	{
		return -1649.097f, -1361.309f, 84.4029f;
	}
	else
	{
		iVar0 = TASK::_0xF533D68FF970D190(iParam0->f_24, iParam1, 10f, 0, 0);
	}
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return TASK::_0xA8452DD321607029(iVar0, 1);
	}
	return 0f, 0f, 0f;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

int func_47()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-45404688))
	{
		return 0;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(1937840514))
	{
		return 0;
	}
	return 1;
}

Vector3 func_48()
{
	return -2594.96f, 453.46f, 146f;
}

float func_49(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_175(bParam1, iParam2, iParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_176(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 2)
		{
			if (func_34(&(iParam0->f_5[iVar0])))
			{
				func_44(&(iParam0->f_5[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
	func_33(bParam1);
}

void func_54(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 2)
		{
			if (func_34(&(iParam0->f_5[iVar0])))
			{
				func_44(&(iParam0->f_5[iVar0]), bParam1, 1);
				func_177(&(iParam0->f_5[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
	func_33(bParam1);
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_178(iVar1, iParam0, iParam1, iParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (!func_179(iParam1))
	{
		return;
	}
	if (func_137(Global_35, 0))
	{
		func_180();
	}
	if (iParam0->f_14 > 0)
	{
		iParam0->f_14 = -1;
	}
	func_32(0);
	iVar2 = 0;
	iVar3 = 23825/*func_181*/;
	iParam0->f_23 = iParam1;
	switch (iParam1)
	{
		case 4:
			iVar1 = 6;
			iParam0->f_43.f_9 = 1;
			iParam0->f_43.f_10 = 0;
			iVar0 = 429473903;
			iVar2 = 256;
			break;
		
		case 2:
			iVar1 = 11;
			iParam0->f_43.f_9 = 0;
			iVar0 = 1058019971;
			iVar2 = 256;
			break;
		
		case 3:
			iVar1 = 4;
			iParam0->f_43.f_9 = 0;
			if (*iParam0 != 6)
			{
				iParam0->f_43.f_10 = 0;
			}
			else
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("CAMP_Grooming_Shadybelle", 2f);
			}
			iVar0 = -1773308460;
			iVar2 = 256;
			break;
		
		case 1:
			iVar1 = 7;
			iVar0 = 1452327073;
			break;
		
		case 0:
			iVar1 = 9;
			func_6(iParam0, iVar1);
			return;
		
		case 5:
			func_6(iParam0, 3);
			return;
	}
	if (iParam1 == 4)
	{
		func_182(iParam0, iVar0, &vVar4, &uVar7, &uVar8);
		iParam0->f_30 = { vVar4 };
		iParam0->f_33 = uVar7;
		func_183(uVar8, vVar4, uVar7, 1073741824);
		func_184(vVar4, uVar7, vVar4, uVar7);
		func_185(0);
		Global_1949604->f_5865 = 0;
		func_187(func_186(iParam1));
		iParam0->f_28 = MISC::GET_GAME_TIMER();
		func_188(16);
		func_6(iParam0, 3);
		return;
	}
	iParam0->f_29 = TASK::_0xF533D68FF970D190(iParam0->f_24, iVar0, iParam0->f_27, 0, 0);
	if (iParam0->f_29 != 0)
	{
		if (iParam1 == 3)
		{
			iParam0->f_30 = { TASK::_0xA8452DD321607029(iParam0->f_29, 1) };
			iParam0->f_33 = TASK::_0xB93EA7184BAA85C3(iParam0->f_29, 1);
			func_189(iParam0->f_29);
			if (func_190(&iVar9))
			{
				func_191(iVar9, 0);
			}
		}
		Stack.Push(iParam0);
		Call_Loc(iVar3);
		if (iParam1 == 3)
		{
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		}
		if (iParam1 != 0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, iVar2, 0);
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		iParam0->f_4 = 1;
		if (iParam1 == 1 && MISC::IS_BIT_SET(uParam2->f_330, 3))
		{
			func_192(uParam2);
			func_70(uParam2);
		}
		else if (iParam1 == 3)
		{
			if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(iLocal_2468))
			{
				GRAPHICS::DESTROY_TRACKED_POINT(iLocal_2468);
			}
			bLocal_2469 = false;
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, iParam0->f_29, 0, 0, 1, 0, 0, 0, -1082130432, 0);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 218, true);
		iParam0->f_28 = MISC::GET_GAME_TIMER();
		func_187(func_186(iParam1));
		func_188(16);
		if (iParam1 == 3)
		{
			func_6(iParam0, 12);
		}
		else
		{
			func_6(iParam0, 3);
		}
	}
	else
	{
		func_6(iParam0, iVar1);
	}
}

void func_57(int iParam0)
{
	if (func_34(&(iParam0->f_5[1])))
	{
		func_193(&(iParam0->f_5[1]), "PROPERTY_SHAVE", 1);
		func_44(&(iParam0->f_5[1]), 1, 1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_34(iParam0))
	{
		return false;
	}
	iVar0 = func_168(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_59(var uParam0, int iParam1)
{
	if (!func_119(iParam1))
	{
		return 0;
	}
	uParam0->f_333 = iParam1;
	if (!func_194(uParam0, 0, 0, -1, 1))
	{
		return 0;
	}
	if (!func_195(&(uParam0->f_7), 1, 0))
	{
		func_196("NO_REGION_FT", 10000, 0, 0, 0, 1);
		return 0;
	}
	if (!func_197(uParam0))
	{
		return 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_330), 2);
	MISC::SET_BIT(&(uParam0->f_330), 1);
	func_139(uParam0, 0);
	return 1;
}

void func_60(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_198())
	{
		return;
	}
	switch (iParam0->f_43.f_10)
	{
		case 0:
			func_199(iParam0);
			iParam0->f_43.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(iParam0->f_43), 0, 0, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_43.f_8);
			iParam0->f_43.f_10 = 1;
			break;
		
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(iParam0->f_43.f_8, 1, 0))
			{
				iParam0->f_43.f_10 = 2;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (iParam0->f_43.f_9)
				{
					iParam0->f_30 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					iParam0->f_33 = ENTITY::GET_ENTITY_HEADING(Global_35);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_43.f_8, iParam0->f_30, 0f, 0f, iParam0->f_33, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(iParam0->f_43.f_8, Global_35, -1);
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_43.f_8);
				}
				else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(iParam0->f_30, 3f, 949441562, false))
				{
					iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(iParam0->f_30, 3f, 949441562, false, false, false);
					iParam0->f_30 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					iParam0->f_33 = ENTITY::GET_ENTITY_HEADING(iVar0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_43.f_8, iParam0->f_30, 0f, 0f, iParam0->f_33, 2);
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_43.f_8);
				}
				iParam0->f_43.f_10 = 3;
			}
			break;
		
		case 3:
			if (iParam0->f_43.f_9)
			{
				if (*iParam0 == 15)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMP_Wardrobe_Beechers");
				}
				else
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMP_Wardrobe");
				}
			}
			else
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("CAMP_Grooming", 2f);
			}
			iParam0->f_43.f_10 = 4;
			break;
		
		case 4:
			break;
	}
}

void func_61(int iParam0)
{
	if (func_200(65536) && func_200(131072))
	{
		return;
	}
	if (func_201())
	{
		return;
	}
	if (func_202())
	{
		return;
	}
	if (iLocal_2471 && func_43(vLocal_2474))
	{
		return;
	}
	else if (func_43(vLocal_2474))
	{
		vLocal_2474 = { func_203(iParam0) };
	}
	if (func_34(iLocal_2472))
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			func_44(iLocal_2472, 0, 1);
		}
		else
		{
			func_44(iLocal_2472, 1, 1);
		}
	}
	if (BUILTIN::VDIST2(Global_36, vLocal_2474) < 4f)
	{
		if (!iLocal_2471)
		{
			if (func_137(Global_35, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
				{
					if (!func_43(vLocal_2474))
					{
						STREAMING::REQUEST_MODEL(1077976463, false);
						if (!STREAMING::HAS_MODEL_LOADED(1077976463))
						{
							return;
						}
						iLocal_2473 = OBJECT::CREATE_OBJECT(1077976463, vLocal_2474, true, true, false, false, false);
						OBJECT::_0xA22712E8471AA08E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_2473), 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_2473, false);
						MISC::_0x870708A6E147A9AD(iLocal_2473, "LOOK_MIRROR", 3.75f, 3.75f, 0, 0, 0, 0, 0, -1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1077976463);
					}
					iLocal_2471 = 1;
				}
			}
		}
		else if (func_204() == iLocal_2473)
		{
			iLocal_2472 = func_205("ARTHUR_COMMENT", 648122183, iLocal_2473, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
			func_206(iLocal_2472, iLocal_2473, 0, 1, -1);
		}
		else
		{
			func_123(&iLocal_2472, 1, 1);
		}
	}
	else if (iLocal_2471)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
		{
			ENTITY::DELETE_ENTITY(&iLocal_2473);
		}
		if (func_34(iLocal_2472))
		{
			func_123(&iLocal_2472, 1, 1);
		}
		iLocal_2471 = 0;
	}
	if (func_34(iLocal_2472) && func_207(iLocal_2472, 1))
	{
		if (func_200(65536))
		{
			switch (iLocal_2478)
			{
				case 0:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART1", -128067431, 0, 1, 0, 2, 1);
					iLocal_2478 = 1;
					break;
				
				case 1:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART2", -128067431, 0, 1, 0, 2, 1);
					iLocal_2478 = 2;
					break;
				
				case 2:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART3", -128067431, 0, 1, 0, 2, 1);
					iLocal_2478 = 0;
					func_209(131072);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
					{
						ENTITY::DELETE_ENTITY(&iLocal_2473);
					}
					if (func_34(iLocal_2472))
					{
						func_123(&iLocal_2472, 1, 1);
					}
					iLocal_2471 = 0;
					break;
			}
		}
		else
		{
			switch (iLocal_2478)
			{
				case 0:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART1", -128067431, 0, 1, 0, 1, 1);
					iLocal_2478 = 1;
					break;
				
				case 1:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART2", -128067431, 0, 1, 0, 1, 1);
					iLocal_2478 = 2;
					break;
				
				case 2:
					func_208(Global_35, "INSULT_REFLECTION_CONV_PART3", -128067431, 0, 1, 0, 1, 1);
					iLocal_2478 = 0;
					func_209(65536);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
					{
						ENTITY::DELETE_ENTITY(&iLocal_2473);
					}
					if (func_34(iLocal_2472))
					{
						func_123(&iLocal_2472, 1, 1);
					}
					iLocal_2471 = 0;
					break;
			}
		}
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	uParam0->f_4 = 1;
	CAM::SET_CAM_ACTIVE(uParam0->f_21, true);
	CAM::RENDER_SCRIPT_CAMS(true, bParam1, 3000, true, false, 0);
}

void func_63(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 2:
			iParam0->f_43.f_9 = 0;
			func_6(iParam0, 11);
			break;
		
		case 3:
			iParam0->f_43.f_9 = 0;
			func_60(iParam0, 0);
			func_6(iParam0, 4);
			break;
		
		case 1:
			func_6(iParam0, 7);
			break;
		
		case 0:
			func_6(iParam0, 9);
			break;
		
		case 4:
			iParam0->f_43.f_9 = 1;
			func_60(iParam0, 0);
			func_6(iParam0, 6);
			break;
		
		case 5:
			func_6(iParam0, 23);
			break;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(true);
	}
}

int func_64(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_65(int iParam0)
{
	struct<16> Var0;
	
	Var0 = Global_35;
	Var0.f_14 = 180f;
	Var0.f_15 = 0;
	func_182(iParam0, 429473903, &(Var0.f_6), &(Var0.f_9), &(Var0.f_1));
	Var0.f_10 = { Var0.f_6 };
	Var0.f_13 = Var0.f_9;
	func_210(&Var0, &(Local_48.f_2279));
}

int func_66(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_211(&(uParam0->f_2279)))
	{
		func_22(uParam0);
		return 0;
	}
	uVar0 = uParam0->f_3;
	uVar1 = uParam0->f_2;
	uParam0->f_3 = 152;
	uParam0->f_2 = 24;
	if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 6))
	{
		if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 7))
		{
			if (func_212(&(uParam0->f_2279)))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 8))
				{
					func_213(&(uParam0->f_2279));
				}
			}
			else if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 8))
			{
				func_214(&(uParam0->f_2279));
			}
			if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 8))
			{
				if (uParam0->f_2279.f_22)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_2279.f_7, true) < uParam0->f_2279.f_10 && !func_215())
					{
						func_196("TF_PRONGHORN_WARDROBE", 10000, 0, 0, 0, 1);
					}
				}
				else if (func_58(uParam0->f_2279.f_4, 1))
				{
					MISC::SET_BIT(&(uParam0->f_2279.f_5), 6);
					func_214(&(uParam0->f_2279));
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 5))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 3))
		{
			func_216(&(uParam0->f_2279));
			MISC::SET_BIT(&(uParam0->f_2279.f_5), 3);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 2))
		{
			func_217(uParam0);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 4))
		{
			if (func_218(&(uParam0->f_2279)))
			{
				MISC::SET_BIT(&(uParam0->f_2279.f_5), 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 2) && MISC::IS_BIT_SET(uParam0->f_2279.f_5, 4))
		{
			func_219(&(uParam0->f_2279));
			MISC::SET_BIT(&(uParam0->f_2279.f_5), 5);
		}
	}
	else
	{
		if (!func_91(uParam0))
		{
			func_22(uParam0);
			uParam0->f_3 = uVar0;
			uParam0->f_2 = uVar1;
			return 0;
		}
		PED::SET_PED_RESET_FLAG(uParam0->f_2279, 258, true);
		switch (func_125())
		{
			case -1:
				func_220();
				break;
		}
	}
	uParam0->f_3 = uVar0;
	uParam0->f_2 = uVar1;
	return 1;
}

void func_67()
{
	if (func_158())
	{
		func_221(0, 0);
		func_222(1, 7);
	}
}

void func_68(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (CAM::DOES_CAM_EXIST(iParam0->f_21) && CAM::IS_CAM_ACTIVE(iParam0->f_21))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_21, false);
		CAM::RENDER_SCRIPT_CAMS(false, bParam1, 3000, true, false, 0);
		CAM::DESTROY_CAM(iParam0->f_21, true);
	}
	else
	{
		iVar0 = func_2(func_1());
		if (!func_119(iVar0))
		{
			return;
		}
	}
	iParam0->f_21 = 0;
}

void func_69(int iParam0)
{
	vector3 vVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630->f_12)
	{
		PED::_0xA3A9299C4F2ADB98(Global_35);
	}
	if (iParam0->f_23 == 3)
	{
		vVar0 = { TASK::_0xA8452DD321607029(iParam0->f_29, 1) };
		TASK::_0x4161648394262FDF(vVar0, 0.5f);
		if (ANIMSCENE::_0x25557E324489393C(iLocal_2467))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_2467, "player", Global_35);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_2467);
		}
		GRAPHICS::_0xA21AF60C9F99CCC5();
	}
	func_223(func_186(iParam0->f_23));
	if (iParam0->f_1 != 9)
	{
		func_224(&(iParam0->f_43));
	}
	iParam0->f_23 = -1;
	iParam0->f_29 = 0;
	func_6(iParam0, 10);
}

void func_70(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_330), 2);
}

int func_71(var uParam0)
{
	if (uParam0->f_331 == 10)
	{
		return 1;
	}
	return 0;
}

int func_72(var uParam0)
{
	if (uParam0->f_331 >= 4 && uParam0->f_331 <= 6)
	{
		return 1;
	}
	return 0;
}

void func_73(int iParam0)
{
	if (func_225(0))
	{
		if (func_227(Global_35, func_226(0), 1, 1) <= func_228(0))
		{
			func_229(func_226(0), *iParam0);
			return;
		}
	}
	if (func_225(1))
	{
		if (func_227(Global_35, func_226(0), 1, 1) <= func_228(1))
		{
			func_229(func_226(0), *iParam0);
			return;
		}
	}
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_230(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_231(1);
	}
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_76(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_77()
{
	int iVar0;
	
	if (func_232(&Global_1898437) && func_233(&Global_1898437) == 1)
	{
		iVar0 = func_234(&Global_1898437);
		if ((func_235(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1835011)[iVar0 /*74*/])->f_22), 1);
		}
	}
}

void func_78(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])->f_2;
						if (func_235(iVar0))
						{
							if (func_236(iVar0))
							{
								func_237(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_238(&(Global_40.f_450[iVar0])))
		{
			if (((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_14 & 2 != 0)
			{
				func_239(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	if (!func_119(iParam0))
	{
		return func_240();
	}
	switch (iParam0)
	{
		case 4:
			return 607173790;
		
		case 0:
			return -1849681615;
		
		case 2:
			return 102652153;
		
		default:
			break;
	}
	return func_240();
}

bool func_81(int iParam0)
{
	return iParam0 != 0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		
		case 3:
			return -2049683567;
		
		case 4:
			return -1639750081;
		
		case 6:
			return -543306319;
		
		case 7:
			return 93160283;
		
		case 8:
			return -1838611891;
		
		case 1:
			return 1619762084;
		
		case 2:
			return -2104053099;
		
		case 9:
			return -1431073983;
		
		case 10:
			return 887432345;
		
		case 11:
			return -238320361;
		
		case 26:
			return -1433937760;
		
		case 27:
			return -681691620;
		
		case 28:
			return -706234936;
		
		case 29:
			return -282099500;
		
		case 30:
			return 1450105278;
		
		case 31:
			return -732027686;
		
		case 5:
			return 379756162;
		
		case 15:
			return 2128397741;
		
		case 17:
			return -924263120;
		
		case 33:
			return 1915478031;
		
		case 12:
			return -1775364220;
		
		case 13:
			return -1504845897;
		
		case 14:
			return -1227686818;
		
		case 18:
			return 1442571063;
		
		case 19:
			return -997221403;
		
		case 22:
			return 285759500;
		
		case 20:
			return 1489861748;
		
		case 32:
			return -2132712788;
		
		case 34:
			return 1427539511;
		
		case 23:
			return -967055532;
		
		case 24:
			return 662159626;
		
		case 25:
			return 1743191502;
		
		case 21:
			return -830712656;
		
		default:
			break;
	}
	return 0;
}

int func_83(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		if (!func_241(uParam0->f_3, uParam0->f_2, &(uParam0->f_2031)))
		{
			return 0;
		}
		if (!func_242(uParam0, uParam0->f_19))
		{
			if (!func_243(iParam1, &(uParam0->f_2031)))
			{
				return 0;
			}
			if (func_242(uParam0, uParam0->f_19))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		if (!func_243(iParam1, &(uParam0->f_2031)))
		{
			return 0;
		}
		if (!func_244(uParam0, iParam2, 1, -1, 0, 1, 0, 0))
		{
			return 0;
		}
	}
	uParam0->f_2031.f_70 = func_245(&(uParam0->f_2031));
	uParam0->f_2031.f_73 = 0;
	uParam0->f_2031.f_74 = 0;
	uParam0->f_2031.f_75 = 0;
	uParam0->f_2031.f_68 = 0;
	uParam0->f_2031.f_48 = 0;
	uParam0->f_2031.f_100 = 0;
	uParam0->f_2031.f_101 = -1;
	uParam0->f_2031.f_102 = -1;
	uParam0->f_2031.f_80 = 0;
	uParam0->f_2031.f_81 = 0;
	func_246(uParam0);
	func_247(uParam0);
	func_248();
	uParam0->f_2031.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2031.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "Title", MISC::GET_HASH_KEY(func_249(uParam0->f_2)));
	uParam0->f_2031.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_50, "Prompts");
	uParam0->f_2031.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_50, "Scene");
	func_250(uParam0, 6, -2122634935);
	func_251(uParam0, 6, 1);
	func_252(uParam0, 6, 1);
	func_253(uParam0, 6, 0);
	func_250(uParam0, 1, -672301300);
	func_251(uParam0, 1, 1);
	func_252(uParam0, 1, 1);
	func_253(uParam0, 1, 0);
	func_250(uParam0, 2, 1891107858);
	func_251(uParam0, 2, 0);
	func_252(uParam0, 2, 0);
	func_253(uParam0, 2, 0);
	func_250(uParam0, 3, -405106071);
	func_251(uParam0, 3, 0);
	func_252(uParam0, 3, 0);
	func_253(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2031.f_112 = 0;
		uParam0->f_2031.f_114 = 0;
		uParam0->f_2031.f_110 = 0;
		uParam0->f_2031.f_116 = 0;
		uParam0->f_2031.f_120 = 0;
		uParam0->f_2031.f_118 = 0;
	}
	uParam0->f_2031.f_122 = 31141/*func_254*/;
	uParam0->f_2031.f_123 = 31774/*func_255*/;
	uParam0->f_2031.f_124 = 32374/*func_256*/;
	uParam0->f_2031.f_125 = 32493/*func_257*/;
	uParam0->f_2031.f_46 = 1;
	return 1;
}

void func_84(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

void func_85()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_2477))
	{
		iLocal_2477 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_258(PLAYER::PLAYER_ID()), 0f, 0f, 0f, 2f, 2f, 2f, "Saving_PedBlocker");
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_2477, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_2477, 10208, 0, 0, -1, -1, 0);
}

void func_86(var uParam0, var uParam1, var uParam2)
{
	func_259(Global_35, 1, 1);
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_2031.f_117 = iParam1;
	uParam0->f_2031.f_116 = 1;
}

int func_88(var uParam0, var uParam1)
{
	return 1;
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_2031.f_115 = iParam1;
	uParam0->f_2031.f_114 = 1;
}

int func_90(var uParam0)
{
	int iVar0;
	
	if (!func_260(uParam0))
	{
		return 0;
	}
	if (UIAPPS::_IS_APP_RUNNING(1289756680))
	{
		return 1;
	}
	iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1289756680, -1102306668);
	if (iVar0 == 0)
	{
		uParam0->f_2031.f_47 = 1;
		return 1;
	}
	return 0;
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = 1;
	if (uParam0->f_2031.f_110)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_262(uParam0));
		Call_Loc(uParam0->f_2031.f_111);
	}
	PED::SET_PED_RESET_FLAG(func_263(uParam0), 258, true);
	PAD::DISABLE_CONTROL_ACTION(0, -668070958, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1250966545, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2131587435, false);
	if (uParam0->f_2031.f_79)
	{
		func_264(uParam0, func_262(uParam0), 1);
		uParam0->f_2031.f_79 = 0;
	}
	if (func_265())
	{
		if (func_266(128))
		{
			if (Global_1914319->f_16855.f_3.f_2)
			{
				iVar1 = func_262(uParam0);
				if (!func_267(iVar1))
				{
				}
				Global_1914319->f_16855.f_3.f_2 = 0;
			}
			else
			{
				iVar2 = func_261(uParam0);
				uParam0->f_2031.f_69 = iVar2;
				if (!uParam0->f_2031.f_100)
				{
					if (!func_268(uParam0->f_2031.f_77, &(uParam0->f_2031)))
					{
					}
				}
				else
				{
					uParam0->f_2031.f_100 = 0;
				}
				uParam0->f_2031.f_77 = 0;
				if (uParam0->f_2031.f_101 <= -1)
				{
					uParam0->f_2031.f_101 = 0;
				}
				if (!func_269(uParam0))
				{
					return 0;
				}
				else
				{
					if (uParam0->f_2031.f_116)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar2);
						Stack.Push(func_261(uParam0));
						Call_Loc(uParam0->f_2031.f_117);
					}
					uParam0->f_2031.f_69 = iVar2;
				}
			}
			func_270(128);
		}
		else if (func_266(256))
		{
			iVar3 = func_261(uParam0);
			uVar4 = func_271(&(uParam0->f_2031));
			if (uParam0->f_2031.f_101 <= -1)
			{
				uParam0->f_2031.f_101 = uVar4;
			}
			uParam0->f_2031.f_69 = iVar3;
			if (uParam0->f_2031.f_98 && uParam0->f_2031.f_103.f_5 == iVar3)
			{
				if (!func_272(uParam0))
				{
				}
			}
			else if (!uParam0->f_2031.f_100 && func_273(uParam0))
			{
				iVar0 = 0;
				func_274(uParam0, 6);
			}
			else
			{
				if (!uParam0->f_2031.f_100)
				{
					if (!func_275(&(uParam0->f_2031)))
					{
					}
				}
				else
				{
					uParam0->f_2031.f_100 = 0;
				}
				if (!func_269(uParam0))
				{
					return 0;
				}
				else
				{
					if (uParam0->f_2031.f_116)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar3);
						Stack.Push(func_261(uParam0));
						Call_Loc(uParam0->f_2031.f_117);
					}
					uParam0->f_2318.f_8 = func_261(uParam0);
					uParam0->f_2318.f_9 = func_276(uParam0);
				}
			}
			iVar5 = func_277(0);
			if (func_278(iVar5, 0))
			{
				func_279(iVar5);
			}
			func_270(256);
		}
		if (func_266(32) || func_266(64))
		{
			if (!func_280(uParam0))
			{
			}
			func_270(64);
			func_270(32);
		}
		if (func_266(8))
		{
			if (!func_281(uParam0))
			{
			}
			if (!func_266(512) && !uParam0->f_2031.f_80)
			{
				func_282(uParam0, 0);
			}
			else if (uParam0->f_2031.f_80)
			{
				uParam0->f_2031.f_80 = 0;
			}
			if (func_262(uParam0) == 2144984909 && !func_266(512))
			{
				func_283(uParam0);
			}
			func_270(512);
			func_270(8);
		}
		if (func_266(2))
		{
			if (func_266(4))
			{
				func_284(uParam0);
				func_270(4);
			}
			func_282(uParam0, 0);
			if (func_262(uParam0) == 2144984909)
			{
				func_283(uParam0);
			}
			func_270(2);
		}
		if (func_266(16384))
		{
			if (func_285() == 732138465)
			{
				func_286(uParam0);
				func_283(uParam0);
			}
			else if (!func_287(uParam0))
			{
			}
			func_270(16384);
		}
		if (func_266(4096))
		{
			if (DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_288()))
			{
				iVar6 = func_289(uParam0);
				if (iVar6 <= 0)
				{
				}
				else
				{
					DATABINDING::_VIRTUAL_COLLECTION_SET_SIZE(func_288(), iVar6);
					func_290(uParam0, uParam0->f_2031.f_101);
					uParam0->f_2031.f_102 = uParam0->f_2031.f_101;
					uParam0->f_2031.f_101 = -1;
				}
			}
			func_270(4096);
		}
		if (func_266(8192))
		{
			func_291(uParam0);
			iVar7 = func_292();
			iVar8 = func_293();
			if (!func_294(uParam0, iVar8, iVar7))
			{
			}
			func_270(8192);
		}
		func_295();
	}
	if (Global_1914319->f_16855.f_3.f_4)
	{
		func_296(uParam0);
		func_297(uParam0);
		func_282(uParam0, 0);
		Global_1914319->f_16855.f_3.f_4 = 0;
	}
	iVar9 = func_262(uParam0);
	if ((((iVar9 == 94016929 || iVar9 == 178644271) || iVar9 == 1860655620) || iVar9 == -996064024) || iVar9 == -1548684311)
	{
		iVar10 = func_298(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar10))
		{
			HUD::_0x3FE4FB41EF7D2196(iVar10);
			if ((MISC::GET_FRAME_COUNT() % 60) == 0)
			{
			}
		}
	}
	Global_1914319->f_16855.f_34 = func_299(uParam0);
	Global_1914319->f_16855.f_32 = func_261(uParam0);
	Global_1914319->f_16855.f_33 = func_300(&(uParam0->f_2031));
	Global_1914319->f_16855.f_35 = iVar0;
	return iVar0;
}

void func_92(var uParam0)
{
	func_301(uParam0, &(uParam0->f_2031.f_57));
	if (!uParam0->f_2031.f_81)
	{
		func_302(uParam0, 1);
	}
	func_303(uParam0);
	uParam0->f_2031.f_46 = 0;
	uParam0->f_2031.f_47 = 0;
	UIAPPS::_CLOSE_APP_BY_HASH(1289756680);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_50);
}

void func_93(char* sParam0)
{
	if (CAM::_0xDD0B7C5AE58F721D(sParam0))
	{
		if (CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0x8370D34BD2E60B73();
			sParam0->f_16 = Global_35;
			sParam0->f_25 = 1;
			sParam0->f_27 = 200f;
			sParam0->f_28 = 20f;
			CAM::_0xAC77757C05DE9E5A(sParam0);
		}
		else
		{
			CAM::_0xB8B207C34285E978(sParam0);
			sParam0->f_16 = Global_35;
			sParam0->f_25 = 1;
			sParam0->f_27 = 200f;
			sParam0->f_28 = 20f;
			CAM::_0xAC77757C05DE9E5A(sParam0);
			CAM::_0x8370D34BD2E60B73();
			func_304(-1801499084, Global_35, 1, 1);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(200f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(20f, 1f);
	}
	else
	{
		func_13(sParam0);
	}
	PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
}

void func_94(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_305(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_306(Var0);
}

void func_95(int iParam0, int iParam1, bool bParam2)
{
	func_307(iParam0, iParam1, bParam2, 1);
}

void func_96(char* sParam0)
{
	func_308(0, 0);
	CAM::_0x0A5A4F1979ABB40E(sParam0);
}

void func_97()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_2477))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_2477);
		POPULATION::_0xA1CFB35069D23C23(iLocal_2477);
		VOLUME::_0x43F867EF5C463A53(iLocal_2477);
	}
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (Global_40.f_1094 - 1))
	{
		iVar0 = &Global_40.f_450[iVar1];
		if (func_309(iVar0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < &Global_1898346)
	{
		if (func_232(Global_1898330[iVar0]) && func_310(Global_1898330[iVar0]))
		{
			if (func_233(Global_1898330[iVar0]) == 1 && func_311(iVar0, 4))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_100(var uParam0)
{
	if (!func_156(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_312(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_313() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_102(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_103()
{
	if (Global_1935630->f_3 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1935630->f_3);
		Global_1935630->f_3 = 0;
	}
}

void func_104(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_43890)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_314(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(iVar1) || func_315(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_105()
{
	func_101(Global_1935630, 4096);
	func_316();
	func_75(0, 0);
	func_317();
	func_318(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_319(0);
	Global_1310720->f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720->f_4 = 0;
	Global_1310720->f_6 = 0;
	Global_1310720->f_7 = 0;
	Global_1310720->f_8 = 1;
	Global_1310720->f_13 = 0;
	Global_1310720->f_14 = 0;
	Global_1310720->f_12 = 0;
	Global_1310720->f_27 = 0;
	Global_1310720->f_28 = 0;
	Global_1310720->f_29 = -1;
	Global_1935630->f_4 = 0;
	Global_1897952->f_40 = 0;
	Global_1310720->f_24 = joaat("weapon_unarmed");
	Global_1310720->f_22 = -1;
	func_320(0);
	func_321(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_322(1);
	func_323(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_107(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "JustSavedAtBed");
		}
	}
}

void func_108(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477->f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_324(2, 7000);
	}
	Global_1347477->f_4 = MISC::GET_GAME_TIMER();
	func_325(0);
	if (bParam1)
	{
		func_326(100f);
	}
}

int func_109()
{
	return 0;
}

int func_110(var uParam0)
{
	if (uParam0->f_331 == 8)
	{
		return 1;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_113(var uParam0)
{
	UIAPPS::_CLOSE_APP_BY_HASH(1833066477);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
	MAP::DISPLAY_RADAR(true);
	func_84(0);
	uParam0->f_6 = 0;
}

void func_114(var uParam0)
{
	func_327(uParam0);
}

void func_115(var uParam0)
{
	func_68(uParam0, 0);
	if (uParam0->f_4)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 256, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		uParam0->f_4 = 0;
	}
	HUD::_0xAA03F130A637D923("CAMP");
	func_21(uParam0);
	HUD::_0x8BC7C1F929D07BF3(-1347445791);
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 218, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 218, false);
	}
	func_328(0);
	if (!func_31())
	{
		func_32(1);
	}
	func_329();
	func_30(*uParam0, 65536);
	func_22(&Local_48);
	func_330(Global_35);
	func_107(0);
	func_101(Global_1935630, 131072);
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	func_102(1024);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
	{
		ENTITY::DELETE_ENTITY(&iLocal_2473);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1077976463);
	func_123(&iLocal_2472, 1, 1);
	func_331();
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(iLocal_2468))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_2468);
	}
	if (bLocal_2469)
	{
		GRAPHICS::_0xA21AF60C9F99CCC5();
	}
	if (iLocal_2470 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_2470);
	}
}

void func_116(var uParam0)
{
	uParam0->f_3 = 1;
}

int func_117(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_118(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_119(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_120(int iParam0, bool bParam1)
{
	switch (func_332(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_121(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

int func_122()
{
	return Global_40.f_4283;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_34(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_168(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_333(iVar0);
	*iParam0 = 0;
}

bool func_124(var uParam0)
{
	return uParam0->f_2031.f_47;
}

int func_125()
{
	return Global_1572887->f_12;
}

void func_126(var uParam0)
{
	func_84(0);
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_20, 0))
	{
		ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
	}
}

void func_127(int iParam0, bool bParam1)
{
	PED::_0xFEA6126C34DF2532(iParam0, bParam1);
	PED::_0xA2116C1E4ED85C24(iParam0, !bParam1);
}

void func_128(int iParam0)
{
	struct<4> Var0;
	
	if (func_334(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_335(Var0);
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_336(0);
	}
	if (bParam0)
	{
		func_305(8);
		func_305(512);
	}
	else
	{
		func_305(8);
		func_305(16);
	}
}

void func_130()
{
	Global_1914319->f_19461.f_1 = 0;
	Global_1914319->f_19461.f_20 = 0;
	Global_1914319->f_19461.f_179 = 0;
	Global_1914319->f_19461.f_1 = 0;
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319->f_19461.f_180))
	{
		HUD::_UIPROMPT_DELETE(Global_1914319->f_19461.f_180);
	}
}

void func_131(int iParam0, int iParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 16, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 15, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 7, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 8, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 17, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 5, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 21, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 25, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 23, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 19, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 9, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 10, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 22, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 20, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 18, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 6, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 0, iParam0);
	WEAPON::_0x67E21ACC5C0C970C(iParam1, 1, iParam0);
}

void func_132(var uParam0)
{
}

void func_133(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::IS_CAM_ACTIVE(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_134()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar1 = func_337();
	switch (iVar1)
	{
		case 3:
			return;
		
		case 2:
			bVar2 = true;
			break;
		
		case 0:
			bVar3 = true;
			break;
	}
	iVar4 = 0;
	while (iVar4 < 18)
	{
		iVar0 = func_338(iVar4);
		if (func_278(iVar0, 0))
		{
			if (func_339(iVar0) != -999503751)
			{
			}
			else
			{
				iVar1 = func_340(iVar0);
				switch (iVar1)
				{
					case 3:
						return;
					
					case 2:
						bVar2 = true;
						break;
					
					case 0:
						bVar3 = true;
						break;
				}
				if (bVar2 && bVar3)
				{
				}
				else
				{
					iVar4++;
				}
				if (!bVar2)
				{
					if (!bVar3)
					{
						func_32(1);
						func_341(76, 1);
					}
					else
					{
						func_32(1);
						func_341(74, 1);
					}
				}
				else if (!bVar3)
				{
					func_32(1);
					func_341(75, 1);
				}
			}
		}
	}

void func_135(var uParam0)
{
	HUD::_0xAA03F130A637D923("WARD");
	GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
	switch (func_125())
	{
		case -1:
			func_342(uParam0);
			break;
	}
}

bool func_136()
{
	return (Global_1894899 & 1 != 0 && func_1() != -1);
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_343(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_343(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_138(var uParam0)
{
	if (STREAMING::_0x99F92061EFE908BA() || func_344(uParam0->f_318, 4))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xC0258742B034DFAF(0f);
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
		if (func_345())
		{
			func_346(1);
		}
		if (uParam0->f_323 != 3 && !PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			if (func_137(uParam0->f_304.f_1, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_147(uParam0->f_304.f_1), true);
			}
		}
		AUDIO::_0x36559148B78853B3(0, 0, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
		switch (uParam0->f_323)
		{
			case 0:
				uParam0->f_323 = 4;
				break;
			
			case 1:
				if (!func_344(uParam0->f_318, 4))
				{
					func_347(&(uParam0->f_318), 4);
				}
				uParam0->f_320 = (STREAMING::_0x2F4D53023F826FF0() - 1);
				if (STREAMING::_0xDABFE48BA0D457AA() > uParam0->f_300)
				{
					uParam0->f_301 = uParam0->f_300;
					uParam0->f_300 = STREAMING::_0xDABFE48BA0D457AA();
					uParam0->f_303 = uParam0->f_302;
					uParam0->f_302 = STREAMING::_0xE5B76E5B56CD77DD();
				}
				if (STREAMING::_0x5D5E2102B174B8D2() || STREAMING::_0x7B8C2B846C05E5AD())
				{
					if (func_344(uParam0->f_318, 8))
					{
						func_348(&(uParam0->f_318), 8);
					}
					uParam0->f_323 = 2;
				}
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					uParam0->f_323 = 3;
				}
				break;
			
			case 2:
				if (!func_349(uParam0))
				{
					STREAMING::_0x62D5F0588915B277();
				}
				else if (!STREAMING::_0x5D5E2102B174B8D2() && !STREAMING::_0x7B8C2B846C05E5AD())
				{
					func_350(uParam0->f_314, 2f, 1, 0, 0, 0, 0);
					uParam0->f_323 = 3;
				}
				break;
			
			case 3:
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					func_150(1);
					MAP::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					func_351();
					POPULATION::_0xBC90BDF4E5228EA1();
					func_347(&(uParam0->f_318), 1);
					if (func_344(uParam0->f_318, 2048))
					{
						func_352(uParam0);
					}
					func_353(1);
					if (uParam0->f_324)
					{
						Call_Loc(uParam0->f_329);
					}
					func_347(&(uParam0->f_318), 32);
					func_347(&(uParam0->f_318), 64);
					if (func_344(uParam0->f_318, 4))
					{
						func_348(&(uParam0->f_318), 4);
					}
					func_74(0);
					uParam0->f_323 = 4;
				}
				break;
		}
		if (uParam0->f_324)
		{
			Call_Loc(uParam0->f_326);
		}
	}
}

void func_139(var uParam0, int iParam1)
{
	uParam0->f_331 = iParam1;
}

int func_140(var uParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(1833066477))
	{
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH(1833066477) == 0)
	{
	}
	func_354(uParam0);
	func_84(1);
	uParam0->f_6 = 1;
	return 1;
}

int func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	iVar0 = 1;
	MAP::DISPLAY_RADAR(false);
	func_355(0);
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1833066477))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1833066477, &Var2))
		{
			if (Var2.f_2 == -997855324)
			{
				iVar0 = 0;
			}
			else
			{
				switch (Var2)
				{
					case -1740156697:
						iVar1 = func_356(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "itemName"));
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_2, "subFooter", func_358(func_357(iVar1)));
						break;
					
					case -1203660660:
						iVar1 = func_356(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "itemName"));
						uParam0->f_4 = iVar1;
						iVar0 = 2;
						break;
				}
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(1833066477);
	}
	return iVar0;
}

int func_142(var uParam0)
{
	return uParam0->f_4;
}

int func_143(var uParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		func_139(uParam0, 3);
		return 0;
	}
	if (func_359(uParam0) > IntToFloat(func_360(1)))
	{
		func_139(uParam0, 3);
		return 0;
	}
	if (!func_361(uParam0, iParam1))
	{
		return 0;
	}
	sVar0 = func_362(iParam1);
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		STREAMING::_0x53764309C4618087(iVar1);
	}
	return 1;
}

int func_144()
{
	if ((func_225(0) && !func_363(0)) && !func_364(0))
	{
		return func_226(0);
	}
	if ((func_225(1) && !func_363(1)) && !func_364(1))
	{
		return func_226(1);
	}
	return 0;
}

int func_145(var uParam0, var uParam1)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1)) || PED::IS_PED_HUMAN(*uParam1))
	{
		return 0;
	}
	uParam0->f_304.f_1 = *uParam1;
	STREAMING::_0x2A6D1DAAB9EBB262(*uParam1);
	return 1;
}

int func_146(var uParam0)
{
	return uParam0->f_304.f_1;
}

int func_147(int iParam0)
{
	return iParam0;
}

bool func_148(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	return (PED::_0xFB4891BD7578CDC1(iParam0, -1163401704) || PED::_0xFB4891BD7578CDC1(iParam0, -1033766886));
}

void func_149(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_150(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

void func_151(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(uParam0->f_334))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(uParam0->f_334))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_334, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_334))
		{
			CAM::DESTROY_CAM(uParam0->f_334, false);
		}
		func_365(uParam0->f_333);
	}
}

int func_152(var uParam0)
{
	int iVar0;
	
	if (func_344(uParam0->f_318, 64))
	{
		return 0;
	}
	if (func_344(uParam0->f_318, 4) || STREAMING::_0x99F92061EFE908BA())
	{
		return 1;
	}
	if (uParam0->f_319 <= 0)
	{
		return 2;
	}
	if (Global_1935630->f_22)
	{
		return 3;
	}
	if (!func_344(uParam0->f_318, 2048) && !func_344(uParam0->f_318, 1024))
	{
		return 4;
	}
	if (uParam0->f_299 >= 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= uParam0->f_299)
		{
			STREAMING::_0xF11D7CB962FCD747(&(uParam0->f_288[iVar0]));
			iVar0++;
		}
	}
	else
	{
		if (func_344(uParam0->f_318, 2))
		{
			STREAMING::_0x6A6E79FBE8678C98();
		}
		STREAMING::_0xB9B9E47EDB9D63DB();
	}
	if (func_344(uParam0->f_318, 256) && uParam0->f_321 != 0)
	{
	}
	AUDIO::_0x36559148B78853B3(0, 0, 0);
	func_150(0);
	MAP::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_366();
	func_367(1);
	func_368(-1, 0, 0, 0, 0);
	func_369();
	POPULATION::_0xC6DCC2A3A8825C85(1);
	STREAMING::_0xCC61D8D6C19D9F14(3);
	TELEMETRY::_0x7CEF4AC79F7E7FAD(func_370(func_1()), func_370(uParam0->f_317), uParam0->f_314);
	uParam0->f_323 = 1;
	return 6;
}

void func_153(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0xA2F8B3B5FEDFC100(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_154(var uParam0)
{
	return func_344(uParam0->f_318, 1);
}

bool func_155(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_156(var uParam0)
{
	return func_371(*uParam0, 1);
}

void func_157(var uParam0)
{
	func_372(uParam0, 0f);
}

int func_158()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_159()
{
	switch (func_125())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_160(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_310(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

void func_161(int iParam0)
{
	if (func_373(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_162(int iParam0)
{
	if (!func_373(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

int func_163(int iParam0, bool bParam1)
{
	if (func_374(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_375(5000))
		{
			return 1;
		}
	}
	switch (func_376(0))
	{
		case 0:
			return 0;
		
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 11:
			return 1;
		
		case 10:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 16:
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_165(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_166(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_172(iParam0, 1);
	func_173(iParam0, 1);
	func_174(iParam0, 128);
}

int func_168(int iParam0)
{
	return iParam0;
}

int func_169(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_171(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_172(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_165(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_173(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_174(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_175(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_176(int iParam0)
{
	return (func_377(iParam0, 4) || func_377(iParam0, 5));
}

void func_177(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	func_172(iVar0, bParam1);
}

int func_178(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	if (func_378(iParam0, 1, 0))
	{
		if (func_379(iParam0))
		{
			iVar0 = func_380(iParam0, 0);
			if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
			{
				if (!_NAMESPACE48::_0xA8120EBEAF290C7A(iVar0))
				{
					return 0;
				}
				if (uParam3 && !PED::_0xA0BC8FAED8CFEB3C(func_381(iParam0)))
				{
					return 0;
				}
				if ((uParam1 || !func_382(func_381(iParam0), 1116471296, -1082130432, -1082130432, -1082130432)) || CAM::IS_SCREEN_FADED_OUT())
				{
					_NAMESPACE48::_0xD4B614179BCD0654(iVar0);
					func_383(iParam0, 0);
					if (uParam2 && func_384(((*Global_1360165)[iParam0 /*1157*/])->f_63))
					{
						func_385(iParam0, 65, 0);
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_180()
{
	if (func_386())
	{
		if (Global_1935630->f_44 == -1016714371)
		{
		}
		else
		{
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
		}
	}
	else
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
	}
}

void func_181(var uParam0)
{
	uParam0->f_22 = -1f;
}

void func_182(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	iParam0->f_29 = TASK::_0xF533D68FF970D190(iParam0->f_24, iParam1, iParam0->f_27, 0, 0);
	switch (*iParam0)
	{
		case 8:
			*uParam2 = { -326.2195f, 759.3564f, 120.6335f };
			*uParam3 = 317.7293f;
			break;
		
		case 6:
			*uParam2 = { 1903.26f, -1860.007f, 46.3492f };
			*uParam3 = 220.176f;
			break;
		
		case 15:
			*uParam2 = { func_42(iParam0) };
			*uParam3 = 307.6539f;
			break;
		
		case 2:
			*uParam2 = { func_42(iParam0) };
			*uParam3 = 266.4176f;
			break;
		
		case 9:
			*uParam2 = { 2636.935f, -1221.742f, 58.5864f };
			*uParam3 = 265.5823f;
			break;
		
		case 10:
			*uParam2 = { -821.6326f, -1326.279f, 46.8783f };
			*uParam3 = 349.9606f;
			break;
		
		case 0:
			*uParam2 = { 2341.237f, 1359.271f, 105.3746f };
			*uParam3 = 291.4584f;
			break;
		
		case 5:
			*uParam2 = { 2224.406f, -770.556f, 42.5253f };
			*uParam3 = 275.9406f;
			break;
		
		case 11:
			*uParam2 = { 1331.55f, -1377.718f, 79.5101f };
			*uParam3 = 47.7593f;
			break;
		
		case 12:
			*uParam2 = { 2977.583f, 576.0204f, 46.8774f };
			*uParam3 = 178.7695f;
			break;
		
		case 13:
			*uParam2 = { 2945.712f, 1331.153f, 43.4578f };
			*uParam3 = 197.2195f;
			break;
		
		case 14:
			*uParam2 = { -1811.204f, -369.914f, 165.4986f };
			*uParam3 = 94.4751f;
			break;
		
		default:
			if (TASK::_0x841475AC96E794D1(iParam0->f_29))
			{
				*uParam2 = { TASK::_0xA8452DD321607029(iParam0->f_29, 1) };
				*uParam3 = (TASK::_0xB93EA7184BAA85C3(iParam0->f_29, 1) - 180f);
			}
			break;
	}
	if (func_43(*uParam2))
	{
		*uParam2 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		*uParam3 = ENTITY::GET_ENTITY_HEADING(Global_35);
	}
	if (func_387())
	{
		*uParam4 = -1329576073;
	}
	else
	{
		*uParam4 = -1660189677;
	}
}

void func_183(var uParam0, vector3 vParam1, var uParam4, int iParam5)
{
	Global_1949604->f_5867 = uParam0;
	Global_1949604->f_5868 = { vParam1 };
	Global_1949604->f_5871 = uParam4;
	Global_1949604->f_5872 = iParam5;
}

void func_184(vector3 vParam0, var uParam3, vector3 vParam4, var uParam7)
{
	Global_1949604->f_5873 = { vParam0 };
	Global_1949604->f_5876 = uParam3;
	Global_1949604->f_5877 = { vParam4 };
	Global_1949604->f_5880 = uParam7;
}

void func_185(int iParam0)
{
	Global_1949604->f_5887 = iParam0;
}

int func_186(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 4:
			return 128;
		
		case 3:
			return 64;
		
		case 5:
			return 512;
	}
	return 0;
}

void func_187(var uParam0)
{
	Global_1395601->f_4 = (Global_1395601->f_4 || uParam0);
}

void func_188(int iParam0)
{
	func_347(&(Global_1395601->f_3), iParam0);
}

void func_189(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar0 = { TASK::_0xA8452DD321607029(iParam0, 1) };
	iVar3 = ITEMSET::CREATE_ITEMSET(false);
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar0, 1f, iVar3, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
		iVar7 = MISC::_0x18013392501CE5DC(iVar6);
		if (!ENTITY::IS_ENTITY_ATTACHED(iVar7))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
}

int func_190(int iParam0)
{
	if (func_388(81053684, iParam0))
	{
		return 1;
	}
	if (func_388(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_389())
	{
		return 0;
	}
	if (!func_390(iParam0))
	{
		return 0;
	}
	if (func_391(iParam0))
	{
		iVar0 = 0;
		if (func_339(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_392(&iVar0, 2);
			}
		}
		return func_393(iParam0, iVar0);
	}
	return 0;
}

void func_192(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (func_394(uParam0->f_333, &vVar0, &vVar3, &fVar6))
	{
		if (!CAM::DOES_CAM_EXIST(uParam0->f_334))
		{
			uParam0->f_334 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, fVar6, false, 2);
		}
		else
		{
			CAM::SET_CAM_PARAMS(uParam0->f_334, vVar0, vVar3, fVar6, 0, 1, 1, 2, 1, 0);
		}
		if (!CAM::IS_CAM_ACTIVE(uParam0->f_334))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_334, true);
		}
		if (!CAM::IS_CAM_RENDERING(uParam0->f_334))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		func_395(uParam0->f_333);
	}
}

void func_193(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

bool func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_327(uParam0);
	uParam0->f_326 = 49394/*func_396*/;
	uParam0->f_327 = 49402/*func_397*/;
	uParam0->f_328 = 49410/*func_398*/;
	uParam0->f_329 = 49418/*func_399*/;
	func_145(uParam0, &iParam1);
	uParam0->f_304.f_2 = iParam2;
	uParam0->f_304.f_3 = iParam3;
	uParam0->f_304.f_4 = iParam4;
	uParam0->f_304.f_5 = 1f;
	uParam0->f_304.f_5.f_1 = 2000;
	uParam0->f_304.f_5.f_2 = 0f;
	uParam0->f_304.f_5.f_3 = 1;
	uParam0->f_304.f_5.f_4 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1f;
	func_348(&(uParam0->f_318), 128);
	uParam0->f_324 = func_400(uParam0);
	return uParam0->f_324;
}

bool func_195(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1 /*7*/] = -1;
		((*uParam0)[iVar1 /*7*/])->f_3 = 0;
		((*uParam0)[iVar1 /*7*/])->f_4 = 99999999;
		((*uParam0)[iVar1 /*7*/])->f_5 = 0f;
		((*uParam0)[iVar1 /*7*/])->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_401(iVar0))
		{
			if (func_402(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_403(uParam0, iVar0);
				}
				else
				{
					func_404(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*7*/])->f_3)
		{
			if (func_111(uParam0[iVar0 /*7*/]))
			{
				iVar2++;
				((*uParam0)[iVar0 /*7*/])->f_5 = func_405(((*uParam0)[iVar0 /*7*/])->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

var func_196(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1900383[Global_40.f_1095 /*45*/];
	iVar1 = Global_1900383[1 /*45*/];
	if (iVar0 != 0 && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_363(7))
		{
			func_196("DEAD_HORSE_FT", 10000, 0, 0, 0, 1);
			return 0;
		}
		if (func_364(7))
		{
			func_196("FAR_HORSE_FT", 10000, 0, 0, 0, 1);
			return 0;
		}
	}
	else if (iVar1 != 0 && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_363(1))
		{
			func_196("DEAD_HORSE_FT", 10000, 0, 0, 0, 1);
			return 0;
		}
		if (func_364(1))
		{
			func_196("FAR_HORSE_FT", 10000, 0, 0, 0, 1);
			return 0;
		}
	}
	else
	{
		func_196("NO_HORSE_FT", 10000, 0, 0, 0, 1);
		return 0;
	}
	if (func_406(uParam0) <= 0)
	{
		func_196("NO_REGION_FT", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_198()
{
	switch (func_1())
	{
		case 71:
		case 79:
		case 98:
			return 1;
	}
	return 0;
}

void func_199(var uParam0)
{
	if (!func_198())
	{
		return;
	}
	if (uParam0->f_43.f_9)
	{
		StringCopy(&(uParam0->f_43), "lightrig@wardrobe@wardrobe_camp_generic", 64);
	}
	else
	{
		StringCopy(&(uParam0->f_43), "lightrig@barber@barber_camp_generic", 64);
	}
}

int func_200(int iParam0)
{
	switch (func_125())
	{
		case -1:
			return (Global_40.f_4283.f_2 && iParam0) != 0;
	}
	return 0;
}

bool func_201()
{
	return Global_1898164->f_163;
}

int func_202()
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

Vector3 func_203(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
			return -322.0917f, 759.3903f, 122.124f;
		
		case 11:
			return 1334.117f, -1375.125f, 80.9563f;
		
		case 14:
			return -1812.681f, -371.2848f, 166.9697f;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_204()
{
	int iVar0;
	var uVar1;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &uVar1, 1, 0))
	{
		return uVar1;
	}
	if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &uVar1) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return uVar1;
}

int func_205(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_165(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_167(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam3 && !func_34(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	func_407(iParam0, 18, 0, 1);
	func_407(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_34(iParam0))
	{
		return false;
	}
	iVar0 = func_168(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

var func_208(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_408(uParam0, &Var0);
}

void func_209(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

void func_210(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_6 = uParam0->f_1;
	uParam1->f_11 = { uParam0->f_6 };
	uParam1->f_14 = uParam0->f_9;
	uParam1->f_15 = { uParam0->f_10 };
	uParam1->f_18 = uParam0->f_13;
	uParam1->f_19 = uParam0->f_14;
	uParam1->f_7 = { uParam0->f_2 };
	uParam1->f_10 = uParam0->f_5;
	if (uParam1->f_10 == 0f)
	{
		uParam1->f_10 = 1.25f;
	}
	if (uParam0->f_15)
	{
		MISC::SET_BIT(&(uParam1->f_5), 7);
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_5), 6);
	}
	MISC::SET_BIT(&(uParam1->f_5), 0);
}

int func_211(var uParam0)
{
	if (!func_41())
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(*uParam0))
	{
		return 1;
	}
	if (func_125() == -1)
	{
		return 0;
	}
	if (func_409())
	{
		return 1;
	}
	if (func_410(1, 255))
	{
		return 1;
	}
	if (func_411())
	{
		return 1;
	}
	if (func_412())
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!func_41())
	{
		return 0;
	}
	if (func_125() != -1)
	{
		if (Global_1225638->f_12)
		{
			return 0;
		}
		if (func_410(1, 255))
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_413())
	{
		return 0;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_7) > 3.5f)
	{
		return 0;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, true))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(*uParam0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(*uParam0))
	{
		return 0;
	}
	if (PED::_0x9682F850056C9ADE(*uParam0))
	{
		return 0;
	}
	if (PED::_0x0E99E3BF11BB6367(*uParam0))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(*uParam0))
	{
		return 0;
	}
	if (func_50(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1))
	{
		return 0;
	}
	if (func_414())
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0)
{
	int iVar0;
	
	if (func_34(uParam0->f_4))
	{
		func_123(&(uParam0->f_4), 1, 1);
	}
	if (func_125() == 0)
	{
		iVar0 = -473983589;
	}
	else
	{
		iVar0 = -719620017;
	}
	uParam0->f_4 = func_37("PLAYER_WARDROBE_MAIN_MENU", iVar0, uParam0->f_7, uParam0->f_10, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
	if (func_415())
	{
		func_44(uParam0->f_4, 0, 1);
		uParam0->f_22 = 1;
	}
	else
	{
		uParam0->f_22 = 0;
	}
	MISC::SET_BIT(&(uParam0->f_5), 8);
}

void func_214(var uParam0)
{
	if (func_34(uParam0->f_4))
	{
		func_123(&(uParam0->f_4), 1, 1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_5), 8);
}

bool func_215()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

void func_216(var uParam0)
{
	HUD::_0xF66090013DE648D5("WARD");
	GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
	switch (func_125())
	{
		case -1:
			func_416(uParam0);
			break;
	}
}

void func_217(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 1))
	{
		if (func_83(uParam0, 1338309244, -1064259667, 1))
		{
			func_418(uParam0, 51072/*func_417*/);
			func_89(uParam0, 52070/*func_419*/);
			func_421(uParam0, 52525/*func_420*/);
			func_87(uParam0, 52569/*func_422*/);
			func_424(uParam0, 52704/*func_423*/);
			func_425(uParam0, uParam0->f_2279.f_6);
			func_427(uParam0, func_426(&(uParam0->f_148.f_1754)));
			func_428();
			MISC::SET_BIT(&(uParam0->f_2279.f_5), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2279.f_5, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2279.f_5, 2))
		{
			if (func_90(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2279.f_5), 2);
			}
		}
	}
}

int func_218(var uParam0)
{
	if (!HUD::_0xD0976CC34002DB57("WARD"))
	{
		return 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		return 0;
	}
	switch (func_125())
	{
		case -1:
			return func_429(uParam0);
		
		default:
			break;
	}
	return 0;
}

void func_219(var uParam0)
{
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	}
	HUD::_0x4CC5F2FC1332577F(-252438768);
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_1))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_1);
	}
	uParam0->f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_11, 0f, 0f, 0f, 5f, 5f, 10f);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_1, 10208, 8192, 0, -1, -1, 0);
	PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1, 7);
	uParam0->f_3 = PED::_0x4C39C95AE5DB1329(uParam0->f_1, false, 7);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, 0, 1);
	_NAMESPACE29::_0x0EABF182FBB63D72(*uParam0, 1, 1);
	ENTITY::_0x203BEFFDBE12E96A(*uParam0, uParam0->f_11, uParam0->f_14, 1, false, 1);
	ENTITY::_0x9587913B9E772D29(*uParam0, 0);
	func_430(*uParam0, &(uParam0->f_2));
	func_131(0, *uParam0);
	switch (func_125())
	{
		case -1:
			func_431(uParam0);
			break;
	}
	func_432(uParam0);
	MISC::SET_BIT(&(uParam0->f_5), 10);
	Global_1949598->f_1 = 1;
}

void func_220()
{
}

void func_221(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (func_125() == -1)
	{
		func_433();
	}
	else
	{
		return;
	}
	func_434();
	Global_40.f_9.f_14 = func_435();
	Global_40.f_9.f_20 = LAW::_0x54310AAB97B92816(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = _NAMESPACE59::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_436())
		{
			func_318(Global_1310720->f_1);
		}
		else if (func_437() == func_438(Global_36, 1) && func_11() != 2)
		{
			func_318(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_318(Global_36);
		}
		func_439(Global_36, &vVar0, &uVar4);
		if (!func_436())
		{
			if (func_440(vVar0, Global_36) < func_440(Global_40.f_9.f_7, Global_36))
			{
				func_318(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_438(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_439(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_441(Global_1935630, 8192);
	}
	func_442();
}

void func_222(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_443(&Global_0, 8);
	}
	if (!func_158() || func_125() != -1)
	{
		return;
	}
	func_443(&Global_0, 1);
}

void func_223(var uParam0)
{
	Global_1395601->f_4 = (Global_1395601->f_4 - (Global_1395601->f_4 && uParam0));
}

void func_224(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_8))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_8);
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	uParam0->f_10 = 4;
}

int func_225(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

float func_227(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_445(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_446(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_446(iParam0) + 1;
	fVar6 = func_447(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_448(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_229(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	
	switch (iParam1)
	{
		case 8:
			vVar0 = { -331.5268f, 779.9186f, 115.0433f };
			fVar3 = 184.8843f;
			break;
		
		case 9:
			vVar0 = { 2628.642f, -1214.329f, 52.1318f };
			fVar3 = 173.1232f;
			break;
		
		case 10:
			vVar0 = { -829.2702f, -1328.705f, 42.5669f };
			fVar3 = 296.6042f;
			break;
		
		case 11:
			vVar0 = { 1367.729f, -1373.996f, 77.7078f };
			fVar3 = 102.8617f;
			break;
		
		case 13:
			vVar0 = { 2927.111f, 1342.72f, 43.0296f };
			fVar3 = 85.0869f;
			break;
		
		case 14:
			vVar0 = { -1804.634f, -367.4374f, 160.7906f };
			fVar3 = 89.5129f;
			break;
		
		case 12:
			vVar0 = { 2956.446f, 526.9525f, 43.7402f };
			fVar3 = 85.9469f;
			break;
		
		case 16:
			vVar0 = { -5522.907f, -2977.441f, -2.5691f };
			fVar3 = 288.527f;
			break;
	}
	if (func_43(vVar0))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar4 = TASK::_0xF533D68FF970D190(vVar0, -1805387726, 5f, 1, 0);
		if (TASK::_0x841475AC96E794D1(iVar4))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vVar0, fVar3, 1, false, 1);
			TASK::_TASK_USE_SCENARIO_POINT(iParam0, iVar4, 0, 0, 1, 0, 0, 0, -1082130432, 0);
		}
	}
}

void func_230(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_231(1);
	}
}

void func_231(bool bParam0)
{
	if (bParam0)
	{
		func_347(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_348(&(Global_40.f_12018.f_42), 1);
	}
}

bool func_232(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_233(int iParam0)
{
	if (!func_232(iParam0))
	{
		return 0;
	}
	return func_450(func_449(iParam0));
}

int func_234(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_451(func_449(iParam0));
}

bool func_235(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_236(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_63 & 64512 != 0;
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_235(iParam0))
	{
		return;
	}
	if (func_452((*Global_1835011)[iParam0 /*74*/], 8192))
	{
		iVar0 = 1;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_63 = 0;
	if (!bParam1 && iVar0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 2;
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 8192;
	}
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

void func_239(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	if (!func_238(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37);
	}
	func_453(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
	func_454(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_455(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
	if (bVar0)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_457(iParam0, func_456(iParam0), 0, 0);
			}
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_457(iParam0, func_458(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
		}
	}
}

int func_240()
{
	return 0;
}

int func_241(int iParam0, int iParam1, var uParam2)
{
	struct<44> Var0;
	
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam2 = { Var0 };
	uParam2->f_5 = -1;
	uParam2->f_12 = -1;
	*uParam2 = func_459(iParam0);
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam2))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam2, &(uParam2->f_1)))
		{
			return 1;
		}
	}
	*uParam2 = func_82(iParam1);
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam2))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam2, &(uParam2->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_242(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_460(&(uParam0->f_2031));
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	if (!func_461(iParam1, &iVar1))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_462(iVar2, &(uParam0->f_2031)))
		{
			if (func_463(&(uParam0->f_2031)) == iVar1)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_243(var uParam0, var uParam1)
{
	struct<44> Var0;
	
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam1 = { Var0 };
	uParam1->f_5 = -1;
	uParam1->f_12 = -1;
	*uParam1 = uParam0;
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(*uParam1, &(uParam1->f_1)))
	{
		return 0;
	}
	return 1;
}

int func_244(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (func_464(iParam1, &(uParam0->f_2031)))
	{
		uVar0 = func_245(&(uParam0->f_2031));
		uVar1 = func_465(&(uParam0->f_2031));
		uVar2 = func_466(0);
		iVar3 = 0;
		bVar4 = false;
		iVar6 = func_460(&(uParam0->f_2031));
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if (func_462(iVar5, &(uParam0->f_2031)))
			{
				if (func_467(uParam0, iParam1, &iVar3))
				{
					bVar4 = true;
				}
				else
				{
					iVar5++;
				}
				if (bVar4)
				{
					if (bParam2)
					{
						if (bParam7)
						{
							if (!func_468())
							{
							}
							uParam0->f_2031.f_100 = 1;
						}
						else if (func_275(&(uParam0->f_2031)))
						{
							uParam0->f_2031.f_77 = iVar3;
							if (!func_469())
							{
							}
						}
						else
						{
							func_470(uParam0);
						}
						if (iParam3 >= 0)
						{
							uParam0->f_2031.f_101 = iParam3;
						}
					}
					if (bParam4)
					{
						uParam0->f_2031.f_98 = 1;
						uParam0->f_2031.f_103 = uVar0;
						uParam0->f_2031.f_103.f_5 = iParam1;
						uParam0->f_2031.f_103.f_3 = uVar1;
						uParam0->f_2031.f_103.f_4 = uVar2;
						uParam0->f_2031.f_99 = 0;
					}
					return 1;
				}
				return 0;
			}
		}
	}

int func_245(var uParam0)
{
	return uParam0->f_12;
}

int func_246(var uParam0)
{
	if (uParam0->f_2031.f_98)
	{
		uParam0->f_2031.f_103.f_3 = -1;
		uParam0->f_2031.f_103.f_1 = -1;
		uParam0->f_2031.f_103 = -1;
		uParam0->f_2031.f_103.f_5 = -1;
		uParam0->f_2031.f_103.f_6 = -1;
		uParam0->f_2031.f_99 = 0;
		uParam0->f_2031.f_98 = 0;
		return 1;
	}
	return 0;
}

void func_247(var uParam0)
{
	uParam0->f_2031.f_82 = 0;
}

void func_248()
{
	Global_1914319->f_16855.f_3 = 0;
}

char* func_249(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return "SHOP_TITLE_BAIT";
		
		case 15:
			return "SHOP_TITLE_BANK";
		
		case 8:
			return "SHOP_TITLE_BARBER";
		
		case 33:
			return "SHOP_TITLE_BARTENDER";
		
		case 28:
			return "SHOP_TITLE_";
		
		case 29:
			return "SHOP_TITLE_BOUNTYHUNTING_MP_RETURN";
		
		case 10:
			return "SHOP_TITLE_BUTCHER";
		
		case 25:
			return "SHOP_TITLE_CAMP_SHAVING";
		
		case 30:
			return "SHOP_TITLE_COACH";
		
		case 0:
			return "SHOP_TITLE_DOCTOR";
		
		case 4:
			return "SHOP_TITLE_FENCE";
		
		case 3:
			return "SHOP_TITLE_GENERAL";
		
		case 6:
			return "SHOP_TITLE_GUNSMITH";
		
		case 27:
			return "SHOP_TITLE_TRAINER";
		
		case 9:
			return "SHOP_TITLE_HORSE_SHOP";
		
		case 2:
			return "SHOP_TITLE_POST";
		
		case 26:
			return "SHOP_TITLE_QUARTER";
		
		case 7:
			return "SHOP_TITLE_TAILOR";
		
		case 1:
			return "SHOP_TITLE_TRAIN_STATION";
		
		case 31:
			return "SHOP_TITLE_HORSE_FENCE_MP";
		
		case 5:
			return "SHOP_TITLE_HORSE_FENCE";
		
		case 12:
			return "SHOP_TITLE_MARKET_PLACE";
		
		case 13:
			return "SHOP_TITLE_MARKET_PLACE";
		
		case 14:
			return "SHOP_TITLE_MARKET_PLACE";
		
		case 18:
			return "SHOP_TITLE_ANIMAL_TRAPPER";
		
		case 19:
			return "SHOP_TITLE_PEARSON";
		
		case 22:
			return "SHOP_TITLE_NEWSPAPER_BOY";
		
		case 20:
			return "SHOP_TITLE_HOTEL";
		
		case 32:
			return "SHOP_TITLE_WILDERNESS_SUPPLIES";
		
		case 34:
			return "SHOP_TITLE_HANDHELD";
		
		case 21:
			return "SHOP_TITLE_PHOTO_STUDIO";
		
		case 24:
			return "SHOP_TITLE_WARDROBE";
		
		default:
			break;
	}
	return "INVALID SHOP";
}

void func_250(var uParam0, int iParam1, int iParam2)
{
	func_471(uParam0, iParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iParam2));
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = func_472(uParam0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, func_473(iParam1, bVar0), bParam2);
}

void func_252(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = func_472(uParam0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, func_474(iParam1, bVar0), iParam2);
}

void func_253(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_475(uParam0, iParam1);
	iVar1 = func_476(uParam0, iParam1);
	func_251(uParam0, iParam1, 0);
	func_252(uParam0, iParam1, 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_53, func_477(iParam1), iParam2);
	func_251(uParam0, iParam1, iVar0);
	func_252(uParam0, iParam1, iVar1);
}

int func_254(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 336033112:
			return func_478(uParam0, uParam1);
		
		case -384358143:
			return func_479(uParam0, uParam1);
		
		case -1048755899:
			return func_480(uParam0, uParam1);
		
		case -349391286:
			return func_481(uParam0, uParam1);
		
		case -760956867:
			return func_482(uParam0, uParam1);
		
		case 38807286:
			return func_483(uParam0, uParam1);
		
		case -1395073769:
			return 1;
		
		case -853534656:
			return func_484(uParam0, uParam1);
		
		case 777890122:
			return func_485(uParam0, uParam1);
		
		case -1502467280:
			return func_486(uParam0, uParam1);
		
		case -239176093:
			return func_487(uParam0, uParam1);
		
		case -1080155519:
			return func_488(uParam0);
		
		case 1394581936:
			return func_489(uParam0, uParam1);
		
		case 193788635:
			return func_490(uParam0, uParam1);
		
		case 1119253406:
			return func_491(uParam0, uParam1);
		
		case 1837492866:
			return func_492(uParam0);
		
		case -339889117:
			return func_493(uParam0, uParam1);
		
		case -348190488:
			return func_494(uParam0, uParam1);
		
		case 1702073444:
			return func_495(uParam0, uParam1);
		
		case -584027224:
			return func_496(uParam0, uParam1->f_9);
		
		case -1968468235:
			return func_497(uParam0, uParam1);
		
		case 761079318:
			return func_498(uParam0, uParam1);
		
		case 1942587409:
			return func_499(uParam0, uParam1);
		
		case 2077448405:
			return func_500(uParam0, uParam1);
		
		case -2056428614:
			return func_501(uParam0, uParam1);
		
		case -395279071:
			return func_502(uParam0, uParam1);
		
		case 420195545:
			return func_503(uParam0, uParam1);
		
		case -698448975:
			return func_504(uParam0, uParam1);
		
		case -627085098:
			return func_505(uParam0, uParam1);
		
		case -2092532275:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_506(uParam0, uParam1);
	}
	return 1;
}

int func_255(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 336033112:
			return func_507(uParam0, uParam1);
		
		case -1968468235:
			return 1;
		
		case -384358143:
			return func_508(uParam0, uParam1);
		
		case -349391286:
			return func_509(uParam0, uParam1);
		
		case -760956867:
			return func_510(uParam0, uParam1);
		
		case 38807286:
			return func_511(uParam0, uParam1);
		
		case -1395073769:
			return 1;
		
		case -853534656:
			return func_512(uParam0, uParam1);
		
		case 777890122:
			return func_513(uParam0, uParam1);
		
		case -1502467280:
			return func_514(uParam0, uParam1);
		
		case -1048755899:
			return func_515(uParam0, uParam1);
		
		case -239176093:
			return func_516(uParam0, uParam1);
		
		case -1080155519:
			return func_517(uParam0, uParam1);
		
		case 1394581936:
			return func_518(uParam0, uParam1);
		
		case 193788635:
			return func_519(uParam0, uParam1);
		
		case 1119253406:
			return func_520(uParam0, uParam1);
		
		case 1837492866:
			return func_521(uParam0, *uParam1);
		
		case -339889117:
			return func_522(uParam0, *uParam1);
		
		case -348190488:
			return func_523(uParam0, *uParam1);
		
		case 1702073444:
			return func_524(uParam0, *uParam1);
		
		case -584027224:
			return func_525(uParam0, uParam1);
		
		case 761079318:
			return func_526(uParam0, uParam1);
		
		case 1942587409:
			return func_527(uParam0, uParam1);
		
		case -2056428614:
			return func_528(uParam0, uParam1);
		
		case 2077448405:
			return func_529(uParam0, uParam1);
		
		case -698448975:
			return func_530(uParam0, uParam1);
		
		case -627085098:
			return func_531(uParam0, uParam1);
		
		case -2092532275:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_532(uParam0, uParam1);
	}
	return 1;
}

int func_256(var uParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			iVar8 = -1;
			iVar9 = 0;
			while (iVar9 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar9, &iVar8))
				{
					if (!func_534(uParam0, iParam1, iVar8))
					{
						bVar7 = true;
					}
					else
					{
						iVar9++;
					}
					if (!bVar7)
					{
						return 1;
					}
					return 0;
				}
			}
		}
	}

int func_257(var uParam0, int iParam1, int iParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			iVar14 = 0;
			while (iVar14 < Var0.f_6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam1, iParam2, iVar14, &uVar7))
				{
					if (func_257(uParam0, iParam1, uVar7))
					{
						return 1;
					}
				}
				iVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			iVar15 = -1;
			iVar16 = 0;
			while (iVar16 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar16, &iVar15))
				{
					if (func_535(uParam0, iParam1, iVar15))
					{
						return 1;
					}
				}
				iVar16++;
			}
		}
	}
	return 0;
}

Vector3 func_258(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar0 |= 1;
	}
	if (iParam2 && Global_1946804->f_2535 != 0)
	{
		func_536(Global_1946804->f_2535);
		func_537(0);
		Global_1946804->f_2535 = 0;
	}
	if (func_538(32768))
	{
		func_539(1108822547);
	}
	if (func_125() != -1)
	{
		func_94(2, 0, 6, iParam0, 0);
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	else
	{
		func_94(2, 0, iVar0, iParam0, 0);
	}
	func_336(0);
}

int func_260(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	return GRAPHICS::_0x3D084D5568FB4028(30);
	return 1;
}

int func_261(var uParam0)
{
	return func_245(&(uParam0->f_2031));
}

int func_262(var uParam0)
{
	var uVar0;
	
	uVar0 = func_540(&(uParam0->f_2031));
	return uVar0;
}

int func_263(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2031.f_96))
	{
		return Global_35;
	}
	return uParam0->f_2031.f_96;
}

int func_264(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		uParam0->f_2031.f_73 = 0;
		uParam0->f_2031.f_74 = 0;
		uParam0->f_2031.f_75 = 0;
		func_541(uParam0, 0);
		func_542(uParam0, "");
		func_543(uParam0, 0);
		func_544(uParam0);
		func_543(uParam0, 0);
		func_545(uParam0, 0);
		func_546(uParam0, 0, 0, 0);
		func_547(uParam0, 0);
		func_548(uParam0, 0, 0, 0);
		func_549(uParam0);
		func_550(uParam0, 0);
		func_551(uParam0, 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, func_552(), 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "ItemPaletteItemName", -1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemGoldPrice", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemTokenPriceVisible", 0);
	}
	switch (iParam1)
	{
		case 1036144478:
			return func_553(uParam0, bParam2);
		
		case 2057502022:
			return func_554(uParam0, bParam2);
		
		case -706012851:
			return func_555(uParam0, bParam2);
		
		case -645366665:
			return func_556(uParam0, bParam2);
		
		case -252412307:
			return func_557(uParam0, bParam2);
		
		case -659372875:
			return func_558(uParam0, bParam2);
		
		case 2144984909:
			return func_559(uParam0, bParam2);
		
		case 115613670:
			return func_560(uParam0, bParam2);
		
		case 1275816411:
			return func_561(uParam0, bParam2);
		
		case 178644271:
			return func_562(uParam0, bParam2);
		
		case 1705401718:
			return func_563(uParam0, bParam2);
		
		case 310306577:
			return func_564(uParam0, bParam2);
		
		case -856183175:
			return func_565(uParam0, bParam2);
		
		case 1860655620:
			return func_566(uParam0, bParam2);
		
		case 94016929:
			return func_567(uParam0, bParam2);
		
		case 803749366:
			return func_568(uParam0, bParam2);
		
		case -2144266389:
			return func_569(uParam0, bParam2);
		
		case -1548684311:
			return func_570(uParam0, bParam2);
		
		case 1965673387:
			return func_571(uParam0, bParam2);
		
		case 1013443471:
			return func_572(uParam0, bParam2);
		
		case 23814986:
			return func_573(uParam0, bParam2);
		
		case 253603960:
			return func_574(uParam0, bParam2);
		
		case -440651963:
			return func_575(uParam0, bParam2);
		
		case -996064024:
			return func_576(uParam0, bParam2);
	}
	return 0;
}

bool func_265()
{
	return func_266(1024);
}

bool func_266(int iParam0)
{
	return func_344(Global_1914319->f_16855.f_3, iParam0);
}

bool func_267(int iParam0)
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(1289756680, iParam0);
}

int func_268(int iParam0, var uParam1)
{
	if (func_577(uParam1))
	{
		if (func_578(iParam0, uParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_269(var uParam0)
{
	int iVar0;
	
	iVar0 = func_262(uParam0);
	if (func_273(uParam0) && !(func_579(uParam0) && func_580(uParam0)))
	{
		func_250(uParam0, 6, -436465203);
	}
	else
	{
		func_250(uParam0, 6, -436465203);
	}
	func_581(uParam0);
	if (!func_264(uParam0, iVar0, 0))
	{
		return 0;
	}
	if (!func_267(iVar0))
	{
		return 0;
	}
	func_541(uParam0, 0);
	func_582();
	if (!uParam0->f_2031.f_68)
	{
		uParam0->f_2031.f_68 = 1;
	}
	return 1;
}

void func_270(int iParam0)
{
	func_348(&(Global_1914319->f_16855.f_3), iParam0);
}

var func_271(var uParam0)
{
	return uParam0->f_19;
}

int func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_2031.f_99)
	{
		if (func_243(uParam0->f_2031.f_103.f_1, &(uParam0->f_2031)))
		{
			uParam0->f_2031.f_70 = uParam0->f_2031.f_103.f_2;
			func_462(uParam0->f_2031.f_103.f_3, &(uParam0->f_2031));
			if (func_244(uParam0, uParam0->f_2031.f_103, 1, uParam0->f_2031.f_103.f_4, 0, 0, 0, 1))
			{
				func_246(uParam0);
				iVar0 = func_277(0);
				if (func_278(iVar0, 0))
				{
					func_279(iVar0);
				}
				return 1;
			}
		}
	}
	else if (func_244(uParam0, uParam0->f_2031.f_103, 1, uParam0->f_2031.f_103.f_4, 0, 1, 1, 1))
	{
		func_246(uParam0);
		iVar1 = func_277(0);
		if (func_278(iVar1, 0))
		{
			func_279(iVar1);
		}
		return 1;
	}
	return 0;
}

int func_273(var uParam0)
{
	if (func_583(&(uParam0->f_2031)) == uParam0->f_2031.f_70)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_274(var uParam0, int iParam1)
{
	func_251(uParam0, iParam1, 0);
	func_252(uParam0, iParam1, 0);
	func_253(uParam0, iParam1, 0);
}

int func_275(var uParam0)
{
	struct<7> Var0;
	
	if ((uParam0->f_42 - 1) >= 0)
	{
		if (!func_584(uParam0, &Var0))
		{
			return 0;
		}
		uParam0->f_31[uParam0->f_42] = -1;
		uParam0->f_20[uParam0->f_42] = 0;
		uParam0->f_42 = (uParam0->f_42 - 1);
		uParam0->f_12 = { Var0 };
		if (uParam0->f_42 < 0 || uParam0->f_42 >= 10)
		{
			uParam0->f_19 = 0;
		}
		else
		{
			uParam0->f_19 = &uParam0->f_20[uParam0->f_42];
		}
		return 1;
	}
	return 0;
}

int func_276(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
		return -1;
	}
	return func_586(iVar0, &(uParam0->f_2031));
}

int func_277(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_15;
	}
	return Global_1914319->f_16855.f_3.f_9;
}

bool func_278(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_279(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_587(iParam0), false);
}

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_2031.f_73 = func_588(uParam0);
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
		return 0;
	}
	if (func_589(iVar0, &(uParam0->f_2031), &iVar1))
	{
		func_591(uParam0, func_590(uParam0, iVar1));
		func_592(uParam0, 0, 1);
		func_541(uParam0, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<16> Var7;
	
	if (((!func_266(512) && func_593() != -729996127) && func_262(uParam0) != 1965673387) && func_262(uParam0) != -1548684311)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(func_594()))
		{
			iVar0 = func_595();
			iVar1 = func_293();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return 0;
			}
			iVar5 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar2);
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar5))
			{
				return 0;
			}
			func_596(&iVar5);
			iVar6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_594(), func_597());
			func_598(iVar6);
		}
	}
	func_599(uParam0);
	Var7.f_14 = -1;
	Var7.f_15 = -1;
	func_600(uParam0, &Var7);
	if (func_266(512))
	{
		if (func_583(&(uParam0->f_2031)) == uParam0->f_2031.f_70)
		{
			uParam0->f_2031.f_48 = 1;
		}
		if (!func_601(uParam0, 8))
		{
			if (uParam0->f_2031.f_48)
			{
				if (!uParam0->f_2031.f_81)
				{
					func_302(uParam0, 1);
				}
			}
			else
			{
				func_302(uParam0, 1);
			}
			func_602(uParam0);
		}
		if (func_468())
		{
			if (uParam0->f_2031.f_120)
			{
				Stack.Push(uParam0);
				Stack.Push(func_262(uParam0));
				Call_Loc(uParam0->f_2031.f_121);
			}
			func_603(uParam0);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (!func_604(uParam0, Var7.f_11, &Var7))
	{
	}
	if (!func_255(uParam0, &Var7))
	{
	}
	if (uParam0->f_2031.f_114)
	{
		Stack.Push(uParam0);
		Stack.Push(&Var7);
		Call_Loc(uParam0->f_2031.f_115);
		if (!StackVal)
		{
		}
	}
	if (Var7.f_11 == 1705401718 || Var7.f_11 == 310306577)
	{
		if (!func_297(uParam0))
		{
		}
	}
	if (!func_296(uParam0))
	{
	}
	if (Var7.f_11 != 1705401718 && Var7.f_11 != 310306577)
	{
		func_605(uParam0);
	}
	func_606(uParam0);
	return 1;
}

int func_282(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<12> Var7;
	
	if (func_262(uParam0) != -1548684311 && func_262(uParam0) != 1965673387)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(func_607(0)))
		{
			iVar0 = func_466(0);
			iVar1 = func_293();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return 0;
			}
			iVar5 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar2);
			if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar5))
			{
				return 0;
			}
			func_608(&iVar5, 0);
			iVar6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_607(0), func_597());
			func_609(iVar6, 0);
		}
	}
	func_541(uParam0, 0);
	func_543(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 0, 0, 0);
	func_547(uParam0, 0);
	func_548(uParam0, 0, 0, 0);
	func_549(uParam0);
	func_544(uParam0);
	func_610(&Var7, uParam0, bParam1);
	if (!func_611(uParam0, Var7.f_11, &Var7))
	{
	}
	if (!func_254(uParam0, &Var7))
	{
	}
	if (func_278(Var7.f_9, 0))
	{
		if (func_612(Var7.f_9, -495963434))
		{
			if (!func_613(uParam0, &Var7))
			{
			}
		}
	}
	if (uParam0->f_2031.f_112)
	{
		Stack.Push(uParam0);
		Stack.Push(&Var7);
		Call_Loc(uParam0->f_2031.f_113);
		if (!StackVal)
		{
		}
	}
	if (!func_614(uParam0, &Var7))
	{
	}
	if (func_278(Var7.f_9, 0))
	{
		if (func_612(Var7.f_9, -495963434))
		{
			func_613(uParam0, &Var7);
		}
	}
	if (func_615(0) == -1352600334 && func_616(0) != -1352600334)
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	func_617(uParam0, bParam1);
	return 1;
}

int func_283(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	bVar0 = false;
	iVar1 = func_618(uParam0);
	iVar2 = func_619(uParam0);
	iVar3 = func_620(uParam0);
	iVar4 = func_621((iVar1 + (9 - iVar3)));
	iVar5 = (iVar1 + (10 - iVar3));
	iVar6 = func_277(0);
	if (!func_278(iVar6, 0))
	{
		return 0;
	}
	iVar7 = func_616(0);
	if (iVar7 == -760956867 || iVar7 == 38807286)
	{
		if (iVar6 != 1279130184)
		{
			bVar8 = (func_622(0) && iVar3 > 1);
			func_623(uParam0, bVar8);
			if (func_622(0))
			{
				if (func_612(iVar6, 518788085))
				{
					if (iVar6 == 1574030042)
					{
						func_623(uParam0, 0);
						func_624(1574030042, Global_35, 0, 0, 0, 1);
					}
					else if (iVar6 == 1420417918)
					{
						func_623(uParam0, 0);
						func_624(1420417918, Global_35, 1, 1, 1, 1);
					}
					else if (iVar2 == 0 && iVar1 == 0)
					{
						bVar0 = true;
					}
					else if (iVar7 == -760956867)
					{
						func_625(iVar6, iVar4);
					}
					else
					{
						iVar9 = (iVar2 - iVar1);
						if (iVar9 < 0)
						{
							bVar0 = true;
						}
						else
						{
							func_626(iVar6, iVar9);
						}
					}
				}
				else if (iVar2 == 0 && iVar1 == 0)
				{
					bVar0 = true;
				}
				else if (func_612(iVar6, -650091303))
				{
					iVar5 = ((iVar1 - 1) + func_627(iVar6));
					if (func_628(iVar6, iVar5))
					{
					}
					else if (!func_624(iVar6, Global_35, iVar5, iVar5, iVar5, 1))
					{
					}
				}
				else if (func_612(iVar6, 1926305489))
				{
					if (!func_624(iVar6, Global_35, iVar5, -1, -1, 1))
					{
					}
				}
				else if (func_612(iVar6, -248115177))
				{
					if (!func_624(iVar6, Global_35, -1, iVar5, -1, 1))
					{
					}
				}
				else if (func_612(iVar6, -489098996))
				{
					if (!func_624(iVar6, Global_35, -1, -1, iVar5, 1))
					{
					}
				}
				else if (iVar6 == func_629())
				{
					func_630(iVar6, Global_35, iVar1, 1);
				}
				else if (func_631(iVar6))
				{
					func_630(iVar6, Global_35, 0, 1);
					func_623(uParam0, 0);
				}
				else if (iVar6 == 1279130184)
				{
					func_630(iVar6, Global_35, iVar4, 1);
					func_623(uParam0, 0);
				}
				else if (!func_630(iVar6, Global_35, iVar4, 1))
				{
				}
				if (bVar0)
				{
					func_630(func_632(), Global_35, -1, 1);
					iVar11 = 0;
					while (iVar11 < 3)
					{
						if (func_633(iVar11, &iVar10))
						{
							func_630(iVar10, Global_35, -1, 1);
						}
						iVar11++;
					}
				}
			}
			if (func_612(iVar6, 518788085))
			{
				bVar12 = true;
			}
			else
			{
				bVar12 = func_634(uParam0, iVar6, iVar7, -1);
			}
			bVar13 = func_622(0);
			if (func_635(uParam0))
			{
				bVar13 = (bVar13 && ((bVar12 && iVar1 != iVar2) || !bVar12));
			}
			if (uParam0->f_2 == 25)
			{
				iVar14 = -672301300;
			}
			else
			{
				iVar14 = -2494464;
			}
			func_636(uParam0, 1, iVar14, bVar13, 1, 0);
			func_637(uParam0, uParam0->f_2 == 8);
			bVar16 = true;
			if (iVar7 == -760956867)
			{
				bVar16 = func_638(iVar6, &iVar15);
			}
			else if (iVar7 == 38807286)
			{
				bVar16 = func_639(iVar6, &iVar15);
			}
			if (iVar15 == 4 && !bVar16)
			{
				func_640(uParam0, -1975076989);
			}
			else if (iVar15 == 2 && !bVar16)
			{
				func_640(uParam0, -541416869);
			}
			else if (iVar15 == 3 && !bVar16)
			{
				func_640(uParam0, 1589147725);
			}
			else if (func_635(uParam0) && iVar1 == iVar2)
			{
				func_640(uParam0, -797415580);
			}
			else if (func_612(iVar6, 518788085) || func_631(iVar6))
			{
				func_640(uParam0, -1385517182);
			}
			else
			{
				func_542(uParam0, MISC::_CREATE_VAR_STRING(2, "HAIR_SLIDER_CURRENT", iVar2));
			}
		}
		else
		{
			func_623(uParam0, 0);
			func_640(uParam0, -1220398291);
		}
		if (!func_635(uParam0))
		{
			func_274(uParam0, 5);
		}
	}
	return 1;
}

void func_284(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = func_641();
	iVar1 = func_642(uParam0);
	bVar2 = iVar0 != false;
	if (bVar2)
	{
		iVar1 = (iVar1 + iVar0);
		func_643(uParam0, iVar1);
		func_644(0);
	}
	func_645(uParam0, func_642(uParam0));
}

int func_285()
{
	return Global_1914319->f_16855.f_3.f_22;
}

int func_286(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_646();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1184271882);
	iVar2 = (iVar2 + iVar0);
	iVar2 = func_647(iVar2, 1, iVar1);
	func_648(uParam0, iVar2);
	return 1;
}

int func_287(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<4> Var16;
	var uVar20;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	
	iVar0 = func_607(0);
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, func_649());
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, func_650());
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, func_651());
	iVar4 = func_646();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iVar0, func_650(), iVar2);
	if (iVar1 == -395279071)
	{
		uVar5 = func_652(0);
		iVar6 = uVar5;
		iVar7 = func_653(iVar6);
		(Global_1946804->f_1329.f_1[iVar6 /*9*/])->f_8 = iVar2;
		if (!func_654(iVar7, &iVar8, &uVar9))
		{
			return 0;
		}
		uVar10 = Global_1946804->f_1329.f_1[iVar6 /*9*/][iVar2];
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, func_655(), uVar10);
		iVar11 = func_656(iVar8, 1);
		func_657(iVar11);
		func_658();
		func_659(&(Global_1946804->f_1378), &(Global_1946804->f_1378.f_1[iVar11 /*3*/]), iVar11, 1, 1);
		(Global_1946804->f_1378.f_1[iVar11 /*3*/])->f_1 = uVar9;
		if (func_660(iVar11) == -1)
		{
			func_661(iVar11, 3);
		}
		func_662(1, 1, 0);
		func_94(2, 0, 2, 0, 0);
		func_296(uParam0);
	}
	else if (iVar1 == -339889117)
	{
		iVar12 = 0;
		switch (iVar2)
		{
			case 0:
				iVar12 = 1728382685;
				break;
			
			case 1:
				iVar12 = -649335959;
				break;
		}
		if (iVar12 != 0)
		{
			if (func_663(func_277(0), iVar12, &iVar13, &iVar14))
			{
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, func_664(), iVar13);
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, func_665(), iVar14);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, func_655(), iVar12);
			func_666(uParam0, iVar12);
			if ((func_262(uParam0) == -2144266389 || func_262(uParam0) == 2057502022) || func_262(uParam0) == 1275816411)
			{
				func_667(uParam0, func_277(0), 0);
			}
			iVar15 = func_277(0);
			if (WEAPON::_0xD955FEE4B87AFA07(iVar15))
			{
				bVar26 = true;
				iVar27 = 1;
				bVar28 = true;
				iVar24 = -1610187846;
				iVar25 = 190417139;
				Var16 = { func_669(iVar15, func_668(0), iVar12, 0) };
				if (WEAPON::_0x6929E22158E52265(Global_35, 2, &uVar20))
				{
					if (func_670(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar27 = 0;
					}
				}
				if (WEAPON::_0x6929E22158E52265(Global_35, 3, &uVar20))
				{
					if (func_670(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584;
					}
				}
				if (func_671(-1185145312, 0) <= 0 || func_672() < 2)
				{
					bVar28 = false;
				}
				func_636(uParam0, 3, iVar24, bVar26, 1, 0);
				func_636(uParam0, 2, iVar25, (iVar27 && bVar28), bVar28, 0);
			}
		}
	}
	return 1;
}

var func_288()
{
	return Global_1914319->f_16855.f_3.f_23;
}

var func_289(var uParam0)
{
	return uParam0->f_2031.f_76;
}

int func_290(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_288();
	if (iVar0 == -1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "ItemListEntryIndex", iParam1);
	}
	else if (DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_288()))
	{
		DATABINDING::_VIRTUAL_COLLECTION_SET_INTEREST_INDEX(func_288(), iParam1);
	}
	return 1;
}

void func_291(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_57))
	{
		uParam0->f_2031.f_57 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemList");
	}
	else
	{
		func_301(uParam0, &(uParam0->f_2031.f_57));
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_57);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_58))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_58);
	}
	uParam0->f_2031.f_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_50, "ItemListEntries");
	Global_1914319->f_16855.f_31 = uParam0->f_2031.f_57;
}

var func_292()
{
	return Global_1914319->f_16855.f_3.f_26;
}

var func_293()
{
	return Global_1914319->f_16855.f_3.f_25;
}

int func_294(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_262(uParam0);
	iVar1 = func_289(uParam0);
	iVar2 = 0;
	if (iParam1 < 0)
	{
		iVar2 = (iVar1 + iParam1);
	}
	else
	{
		iVar2 = iParam1;
	}
	switch (iVar0)
	{
		case -996064024:
		case 1036144478:
		case 2057502022:
			return func_673(uParam0, func_261(uParam0), iVar2, iParam2);
		
		case -2144266389:
		case -856183175:
		case -706012851:
		case -659372875:
		case -645366665:
		case 115613670:
		case 178644271:
		case 1275816411:
		case 2144984909:
			return func_674(uParam0, uParam0->f_2031.f_73, iVar2, iParam2, 0);
		
		case -252412307:
			return func_674(uParam0, uParam0->f_2031.f_73, iVar2, iParam2, 1);
		
		case 310306577:
		case 1705401718:
			return func_675(uParam0, iVar2, iParam2);
		
		case 1860655620:
			return func_676(uParam0, iVar2, iParam2);
		
		case 94016929:
			return func_677(uParam0, iVar2, iParam2);
		
		case 803749366:
			return func_678(uParam0, iVar2, iParam2);
		
		case -440651963:
			return func_679(uParam0, iVar2, iParam2);
		
		case 1426047132:
			break;
		
		case 1013443471:
			return func_680(uParam0, iVar2, iParam2);
		
		case 23814986:
			return func_681(uParam0, iVar2, iParam2);
		
		case 253603960:
			return func_682(uParam0, iVar2, iParam2);
		
		default:
			break;
	}
	return 0;
}

void func_295()
{
	func_270(1024);
}

int func_296(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	bool bVar19;
	int iVar20;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_57))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
	iVar1 = 0;
	bVar19 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
		{
			func_683(&Var8, &iVar2);
			switch (Var8.f_1)
			{
				case -1968468235:
					iVar3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar2, func_684());
					iVar6 = iVar3;
					iVar4 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar2, func_685());
					iVar7 = iVar4;
					iVar5 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar2, func_686());
					func_687(uParam0, Var8.f_2, &iVar2, 0, iVar6, iVar7, iVar5);
					break;
				
				case 336033112:
					func_688(uParam0, Var8.f_2, &iVar2);
					break;
				
				case 193788635:
					if (!func_689(uParam0, Var8.f_2, &iVar2))
					{
					}
					else
					{
						Jump @1003; //curOff = 384
						if (!func_690(uParam0, Var8, Var8.f_2, Var8.f_5, &iVar2))
						{
						}
						else
						{
							Jump @1003; //curOff = 414
							bVar19 = true;
							if (!func_691(uParam0, &iVar2))
							{
							}
							else
							{
								Jump @1003; //curOff = 435
								if (!func_692(uParam0, Var8, Var8.f_2, &iVar2))
								{
								}
								else
								{
									Jump @1003; //curOff = 459
									if (!func_693(uParam0, Var8, &iVar2))
									{
									}
									else
									{
										Jump @1003; //curOff = 479
										if (!func_694(uParam0, Var8, &iVar2))
										{
										}
										else
										{
											Jump @1003; //curOff = 499
											if (!func_695(uParam0, Var8, Var8.f_3, Var8.f_4, &iVar2, 0))
											{
											}
											else
											{
												Jump @1003; //curOff = 528
												if (!func_696(uParam0, iVar1, &iVar2))
												{
												}
												else
												{
													Jump @1003; //curOff = 548
													if (!func_697(uParam0, Var8, Var8.f_3, Var8.f_4, &iVar2, 0))
													{
													}
													else
													{
														Jump @1003; //curOff = 577
														if (!func_698(uParam0, Var8, &iVar2))
														{
														}
														else
														{
															Jump @1003; //curOff = 597
															if (!func_699(uParam0, Var8, &iVar2))
															{
															}
															else
															{
																Jump @1003; //curOff = 617
																if (!func_700(uParam0, Var8, &iVar2, 0))
																{
																}
																else
																{
																	Jump @1003; //curOff = 638
																	if (!func_701(uParam0, Var8, &iVar2, 0))
																	{
																	}
																	else
																	{
																		Jump @1003; //curOff = 659
																		if (!func_702(uParam0, Var8, &iVar2))
																		{
																		}
																		else
																		{
																			Jump @1003; //curOff = 679
																			if (!func_703(uParam0, Var8, &iVar2))
																			{
																			}
																			else
																			{
																				Jump @1003; //curOff = 699
																				if (!func_704(uParam0, Var8, &iVar2))
																				{
																				}
																				else
																				{
																					Jump @1003; //curOff = 719
																					if (!func_705(uParam0, Var8, &iVar2))
																					{
																					}
																					else
																					{
																						Jump @1003; //curOff = 739
																						if (!func_706(uParam0, Var8, &iVar2))
																						{
																						}
																						else
																						{
																							Jump @1003; //curOff = 759
																							if (!func_707(uParam0, Var8, &iVar2))
																							{
																							}
																							else
																							{
																								Jump @1003; //curOff = 779
																								if (!func_708(uParam0, Var8, &iVar2, 0))
																								{
																								}
																								else
																								{
																									Jump @1003; //curOff = 800
																									if (!func_709(uParam0, Var8, &iVar2, 0))
																									{
																									}
																									else
																									{
																										Jump @1003; //curOff = 821
																										if (!func_710(uParam0, Var8, &iVar2, 0))
																										{
																										}
																										else
																										{
																											Jump @1003; //curOff = 842
																											if (!func_711(uParam0, Var8, &iVar2, 0))
																											{
																											}
																											else
																											{
																												Jump @1003; //curOff = 863
																												if (!func_712(uParam0, Var8, &iVar2))
																												{
																												}
																												else
																												{
																													Jump @1003; //curOff = 883
																													if (!func_713(uParam0, &iVar2))
																													{
																													}
																													else
																													{
																														Jump @1003; //curOff = 901
																														if (!func_714(uParam0, &iVar2))
																														{
																														}
																														else
																														{
																															Jump @1003; //curOff = 919
																															if (!func_715(uParam0, &iVar2))
																															{
																															}
																															else
																															{
																																Jump @1003; //curOff = 937
																																if (!func_716(uParam0, &iVar2))
																																{
																																}
																																else
																																{
																																	Jump @1003; //curOff = 955
																																	iVar20 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar2, func_717());
																																	if (!func_718(iVar20))
																																	{
																																	}
																																	else if (!func_719(uParam0, iVar20, &iVar2))
																																	{
																																	}
																																	else if (func_262(uParam0) == -252412307)
																																	{
																																		if (!func_720(uParam0, Var8, Var8.f_1, &iVar2, 0))
																																		{
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					iVar1++;
					if (func_262(uParam0) == 94016929)
					{
						if (bVar19)
						{
							if (func_721() == 0 && func_722() != 5)
							{
								func_592(uParam0, -1, 1);
							}
						}
						else if (func_721() != 0 || (func_721() == 0 && func_722() == 5))
						{
							func_592(uParam0, -1, 1);
						}
					}
					return 1;
			}
		}
	}

int func_297(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_59))
	{
		return 0;
	}
	iVar0 = uParam0->f_2031.f_72;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_59, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
		{
			func_683(&Var3, &iVar2);
			if (!func_723(uParam0, Var3, Var3.f_3, Var3.f_1, &iVar2, 0))
			{
			}
		}
		iVar1++;
	}
	return 1;
}

int func_298(var uParam0)
{
	return uParam0->f_2031.f_94;
}

int func_299(var uParam0)
{
	return func_724(&(uParam0->f_2031));
}

var func_300(var uParam0)
{
	return uParam0->f_42;
}

int func_301(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (uParam0->f_2031.f_78)
	{
		iVar0 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(*uParam1);
		iVar1 = 0;
		iVar2 = -1;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar3 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam1, iVar1);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar3))
			{
				bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar3, func_725());
				if (bVar4)
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar3, func_726());
					iVar5 = iVar2;
					if (PED::_0x93FFD92F05EC32FD(iVar5))
					{
						PED::_0x13E7320C762F0477(iVar5);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar3, func_726(), -1);
					}
				}
			}
			iVar1++;
		}
		uParam0->f_2031.f_78 = 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_302(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_263(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (!func_727())
	{
		return 0;
	}
	func_127(iVar0, 1);
	func_259(iVar0, 1, iParam1);
	return 1;
}

void func_303(var uParam0)
{
	uParam0->f_2031.f_49 = 0;
	GRAPHICS::_0xDAD7FB8402651654();
}

int func_304(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_728(iParam0, iParam1, bParam2, bParam3);
}

void func_305(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_306(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_729(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_730(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_305(8);
			break;
		
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_729(Param0))
			{
				return;
			}
			func_730(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_305(8);
			break;
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_731(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_307(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!func_536(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_732(iParam1);
	return func_733(iParam0, iVar0, bParam2, bParam2);
}

void func_308(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_309(int iParam0)
{
	if (!func_238(iParam0))
	{
		return 0;
	}
	if (func_734(((*Global_1347702)[iParam0 /*49*/])->f_13, 64))
	{
		return 0;
	}
	if (func_735(iParam0))
	{
		return 1;
	}
	if (func_736(iParam0))
	{
		if (func_737(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_738(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_311(int iParam0, int iParam1)
{
	return (func_739(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

bool func_312(var uParam0)
{
	return func_371(*uParam0, 2);
}

int func_313()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_314(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_315(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

void func_316()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;
	int iVar19;
	struct<11> Var20;
	int iVar37;
	
	iVar0 = func_740();
	bVar1 = (!func_10(&Global_1935630, 4194304) || Global_1935630->f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630->f_13 = (LAW::_0x69E181772886F48B(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1935630->f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630->f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630->f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630->f_17 = LAW::_0xDD5FD601481F648B(iVar0);
			Global_1935630->f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630->f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630->f_18 = LAW::_0xAD401C63158ACBAA(iVar0);
			if (Global_1935630->f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1935630->f_19 = Var2.f_10;
				Global_1935630->f_23 = Var2.f_11 == 6;
			}
			Global_1935630->f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::_0x532C5FDDB986EE5C(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1935630->f_20)
						{
							Global_1935630->f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_741();
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		Global_1935630->f_41 = Global_1935630->f_40;
	}
	Global_1935630->f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630->f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630->f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630->f_44), false, 0, false);
		Global_1935630->f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887->f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887->f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		if (Global_1572887->f_12 == -1)
		{
			if (!func_40(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
			}
			if (!func_40(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
			}
			if (!func_40(36))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::_0x139EFB0A71DD9011())
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1934388793, false);
				PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
				PAD::DISABLE_CONTROL_ACTION(0, -824104112, false);
				PAD::DISABLE_CONTROL_ACTION(0, 516589524, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1390807691, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1663574939, false);
				HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_742()) && !func_743(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, 255439828))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
				PAD::DISABLE_CONTROL_ACTION(0, 42190210, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
				PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1751579194, false);
				PAD::DISABLE_CONTROL_ACTION(0, -2023713047, false);
			}
			if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, 255439828, false);
			}
		}
	}
	else
	{
		if (func_125() == -1 && CAM::_0x139EFB0A71DD9011())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630->f_44 = 0;
		Global_1935630->f_40 = 0;
	}
}

void func_317()
{
	if (func_125() != -1)
	{
		return;
	}
	func_744();
}

void func_318(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_319(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = MISC::GET_GAME_TIMER();
}

void func_320(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_321(int iParam0)
{
	Global_1310720->f_10 = iParam0;
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_101(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_441(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_323(bool bParam0)
{
	if (!bParam0 && func_745(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(0, 0);
		LAW::_0xC61EDEBF16CD9668(752193127, true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

void func_324(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_325(bool bParam0)
{
	if (func_125() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_341(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_341(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_746(1, bParam0, 1);
	func_747();
	Global_40.f_11095.f_43 = bParam0;
}

void func_326(float fParam0)
{
	if (func_748(1) < fParam0)
	{
		func_749(1, fParam0, 0);
	}
	if (func_748(2) < fParam0)
	{
		func_749(2, fParam0, 0);
	}
	if (func_748(0) < fParam0)
	{
		func_749(0, fParam0, 0);
	}
}

void func_327(var uParam0)
{
	int iVar0;
	
	uParam0->f_299 = -1;
	uParam0->f_300 = -1;
	uParam0->f_301 = -1;
	uParam0->f_302 = -1;
	uParam0->f_303 = -1;
	uParam0->f_319 = 5;
	uParam0->f_320 = -1;
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	STREAMING::_0x09FBF15D73EFC900();
	iVar0 = 0;
	while (iVar0 < 2049)
	{
		if (iVar0 != 1)
		{
			func_348(&(uParam0->f_318), iVar0);
		}
		iVar0++;
	}
}

void func_328(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0xC9CAEAEEC1256E54(-1618603322);
		func_750(8388608);
	}
	else
	{
		func_751(8388608);
	}
}

void func_329()
{
	Global_1395601->f_4 = 0;
}

void func_330(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_331()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_47))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_47);
		POPULATION::_0xA1CFB35069D23C23(iLocal_47);
		VOLUME::_0x43F867EF5C463A53(iLocal_47);
	}
}

int func_332(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_738(iParam0);
}

void func_333(int iParam0)
{
	if (!func_752(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_334(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_335(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_729(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_729(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_730(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_305(8);
}

void func_336(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_337()
{
	return func_753(&(Global_1946804->f_1497));
}

int func_338(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= Global_1946804->f_2657.f_19)
	{
		return 0;
	}
	iVar0 = &Global_1946804->f_2657[iParam0];
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	return iVar0;
}

int func_339(int iParam0)
{
	struct<2> Var0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_340(int iParam0)
{
	struct<2> Var0;
	int iVar119;
	int iVar120;
	var uVar121;
	
	Var0.f_1 = 39;
	func_754(&Var0, 0, 1);
	iVar119 = -1;
	if (func_125() == -1)
	{
		iVar120 = func_755(iParam0);
		if (iVar120 > -1 && iVar120 <= 5)
		{
			iVar119 = iVar120;
		}
	}
	if (!func_756(&Var0, &uVar121, iParam0, iVar119, 1, 0))
	{
		return -1;
	}
	return func_753(&Var0);
}

void func_341(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_757(iParam0, &iVar0, &iVar1);
	if (!func_758(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_759(iVar0, iVar1);
}

void func_342(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_20))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "PB_IDLE"))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_20, "PB_IDLE");
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
	}
}

bool func_343(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_344(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_345()
{
	return func_760();
}

void func_346(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_349(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < &Global_1898330)
	{
		if (func_232(Global_1898330[iVar0]) && func_310(Global_1898330[iVar0]))
		{
			iVar1 = func_233(Global_1898330[iVar0]);
			if (iVar1 == 1 || iVar1 == 8)
			{
				if ((func_311(iVar0, 64) || func_311(iVar0, 16)) || func_311(iVar0, 32))
				{
					if (!func_344(uParam0->f_318, 8))
					{
						func_347(&(uParam0->f_318), 8);
					}
					return 0;
				}
			}
		}
		iVar0++;
	}
	if (func_344(uParam0->f_318, 8))
	{
	}
	return 1;
}

void func_350(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_351()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_101(Global_1935630, 16384);
}

int func_352(var uParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_304.f_1))
		{
			if (func_761(uParam0->f_304.f_1))
			{
				PHYSICS::_0x0348469DAA17576C(uParam0->f_304.f_1);
			}
			func_762(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			ENTITY::_0x203BEFFDBE12E96A(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 1, false, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_304.f_1, 136, false);
			if (PED::IS_PED_RAGDOLL(uParam0->f_304.f_1))
			{
				PED::_0x221F4D9912B7FE86(uParam0->f_304.f_1, 1);
			}
			if (PED::_0x2D64376CF437363E(uParam0->f_304.f_1))
			{
				func_763(PLAYER::PLAYER_PED_ID(), uParam0->f_304.f_1, 0, -1, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
		{
			func_762(uParam0->f_304.f_2, uParam0->f_314, uParam0->f_304, 2, 1073741824);
			iVar0 = PLAYER::PLAYER_PED_ID();
			func_764(&iVar0, &(uParam0->f_304.f_2), uParam0->f_304.f_3, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_304.f_2, 0f);
		}
		else
		{
			func_762(PLAYER::PLAYER_PED_ID(), uParam0->f_314, uParam0->f_304, 2, 1073741824);
		}
	}
	else
	{
		return 0;
	}
	if (uParam0->f_304.f_4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), uParam0->f_304.f_5, uParam0->f_304.f_5.f_1, uParam0->f_304.f_5.f_2, uParam0->f_304.f_5.f_3, uParam0->f_304.f_5.f_4);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	return 1;
}

void func_353(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

int func_354(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "FastTravel", 1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "header", "CAMP_FT_HEADER");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subHeader", "CAMP_FT_SUB");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subFooter", "");
	if (!func_765(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		func_766(4);
	}
	func_766(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_356(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if (((*Global_1888801)[iVar0 /*35*/])->f_30 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_357(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

char* func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		
		case 1:
			return "BGV";
		
		case 2:
			return "BLU";
		
		case 3:
			return "CML";
		
		case 4:
			return "GRT";
		
		case 5:
			return "GRZ";
		
		case 6:
			return "GRE";
		
		case 7:
			return "GRW";
		
		case 8:
			return "GUA";
		
		case 9:
			return "HRT";
		
		case 10:
			return "ROA";
		
		case 11:
			return "SCM";
		
		case 12:
			return "TAL";
		
		case 15:
			return "CHO";
		
		case 13:
			return "GAP";
		
		case 16:
			return "HEN";
		
		case 14:
			return "RIO";
		
		default:
			break;
	}
	return "No District Label!";
}

float func_359(var uParam0)
{
	if (func_142(uParam0) == -1)
	{
		return 0f;
	}
	return uParam0->f_5;
}

int func_360(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_361(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var7;
	
	if (!func_767(&uVar0, iParam1))
	{
		return 0;
	}
	if (!func_768(&uVar0, &Var7))
	{
		return 0;
	}
	uParam0->f_317 = iParam1;
	uParam0->f_314 = { Var7 };
	uParam0->f_304 = Var7.f_3;
	if (Var7.f_4 == 0)
	{
		return func_769(uParam0, Var7, Var7.f_3);
	}
	else
	{
		STREAMING::_0x032A14D082A9B269(Var7.f_4);
		func_347(&(uParam0->f_318), 1024);
		func_348(&(uParam0->f_318), 2048);
		return 1;
	}
	return 1;
}

char* func_362(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char* sVar7;
	
	iVar0 = func_1();
	vVar1 = { func_770(iParam0, 1) };
	vVar4 = { func_770(iVar0, 1) };
	sVar7 = "";
	switch (iVar0)
	{
		case 79:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beavershollow_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beavershollow_2";
			}
			break;
		
		case 37:
			if (vVar4.y > vVar1.y)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beechershope_south";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_beechershope_north";
			}
			break;
		
		case 98:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_clemens_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_clemens_2";
			}
			break;
		
		case 9:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_shadybell_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_shadybell_2";
			}
			break;
		
		case 43:
			sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_colter_1";
			break;
		
		case 71:
			if (vVar4.x < vVar1.x)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_horseshoe_east";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_horseshoe_north";
			}
			break;
		
		case 4:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_lakay_1";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_lakay_2";
			}
			break;
		
		case 22:
			if (vVar4.y > vVar1.y)
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_proghornranch_south";
			}
			else
			{
				sVar7 = "script@fast_travel@intro@camps@gang_camp_exit_proghornranch_north";
			}
			break;
	}
	return sVar7;
}

int func_363(int iParam0)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_225(iParam0))
	{
		return 0;
	}
	iVar0 = func_226(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_364(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_225(iParam0))
	{
		return 0;
	}
	iVar0 = func_226(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (func_771(vVar1, vVar4) > func_228(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_365(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, -121.9283f, -40.1821f, 94.5436f, 79.5934f, 1, false, 1);
			break;
		
		case 2:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, 650.6963f, -1247.359f, 42.6926f, 327.7263f, 1, false, 1);
			break;
		
		case 0:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, 2340.41f, 1354.968f, 105.3518f, 3.0069f, 1, false, 1);
			break;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	PED::_0x2208438012482A1A(Global_35, false, false);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_366()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	func_441(Global_1935630, 16384);
}

void func_367(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_368(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
	}
	if (func_772() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_773(iVar1) && !func_774(iVar1, iParam2)) && (!bParam3 || !func_775(iVar1))) && (!bParam4 || !func_776(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_777(iVar0);
			}
		}
		iVar0++;
	}
}

void func_369()
{
	if (!func_773(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_778(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		
		case 1:
			return 1567162363;
		
		case 2:
			return 456471693;
		
		case 3:
			return -1772963474;
		
		case 4:
			return 1881496386;
		
		case 5:
			return 711768994;
		
		case 6:
			return -440834066;
		
		case 7:
			return -1363847832;
		
		case 8:
			return 967769300;
		
		case 9:
			return -1436873944;
		
		case 10:
			return -1585669139;
		
		case 11:
			return 16791368;
		
		case 12:
			return 1452922822;
		
		case 13:
			return 549538301;
		
		case 14:
			return 974698954;
		
		case 15:
			return 445881012;
		
		case 16:
			return -2043891857;
		
		case 17:
			return 419656993;
		
		case 18:
			return -1732457315;
		
		case 19:
			return 1794318026;
		
		case 20:
			return 2035159966;
		
		case 21:
			return 770832805;
		
		case 22:
			return -1109814766;
		
		case 24:
			return -1075550363;
		
		case 23:
			return -1080317735;
		
		case 25:
			return 2138576151;
		
		case 26:
			return 1180954297;
		
		case 27:
			return 783603394;
		
		case 28:
			return 1162337247;
		
		case 29:
			return -170458336;
		
		case 30:
			return 1285083821;
		
		case 31:
			return -1840907462;
		
		case 32:
			return 756710130;
		
		case 33:
			return 388370024;
		
		case 34:
			return 1092296123;
		
		case 35:
			return 467491346;
		
		case 36:
			return -1391584612;
		
		case 37:
			return -152111346;
		
		case 38:
			return 1447551317;
		
		case 39:
			return 153136092;
		
		case 40:
			return 1304405732;
		
		case 41:
			return 1074984055;
		
		case 50:
			return 1087476368;
		
		case 51:
			return -1768057340;
		
		case 42:
			return 1218874593;
		
		case 52:
			return -1438443836;
		
		case 43:
			return -2036340415;
		
		case 44:
			return 803939643;
		
		case 53:
			return -632496195;
		
		case 45:
			return -965943619;
		
		case 46:
			return 283532073;
		
		case 47:
			return -69067491;
		
		case 48:
			return -1864895118;
		
		case 54:
			return -1929806571;
		
		case 55:
			return -698525417;
		
		case 56:
			return -1149739894;
		
		case 49:
			return 380507325;
		
		case 57:
			return 407796241;
		
		case 58:
			return -152267914;
		
		case 59:
			return -1675443320;
		
		case 60:
			return 1940341639;
		
		case 61:
			return 1846596114;
		
		case 62:
			return 907708501;
		
		case 64:
			return 1825644981;
		
		case 65:
			return 2065937607;
		
		case 66:
			return -211317417;
		
		case 67:
			return 1801307910;
		
		case 68:
			return -4118897;
		
		case 69:
			return 1853610692;
		
		case 70:
			return -1574644415;
		
		case 71:
			return 2133055515;
		
		case 72:
			return -1413401932;
		
		case 73:
			return 801090761;
		
		case 74:
			return 2131218644;
		
		case 75:
			return 1708823660;
		
		case 76:
			return 7976942;
		
		case 77:
			return 2111120505;
		
		case 78:
			return 176893118;
		
		case 79:
			return 1179148161;
		
		case 63:
			return 602306665;
		
		case 80:
			return 547412068;
		
		case 81:
			return -1539748801;
		
		case 82:
			return -1605119912;
		
		case 83:
			return -884464063;
		
		case 84:
			return -1420970720;
		
		case 85:
			return 1017024547;
		
		case 86:
			return -1204497306;
		
		case 87:
			return -1621069480;
		
		case 88:
			return -458604261;
		
		case 89:
			return -923391614;
		
		case 90:
			return -689247089;
		
		case 91:
			return 44049568;
		
		case 92:
			return 1350259552;
		
		case 93:
			return -61661574;
		
		case 94:
			return -725338054;
		
		case 95:
			return -770123507;
		
		case 96:
			return 1322486734;
		
		case 97:
			return -460939553;
		
		case 98:
			return -1451863552;
		
		case 99:
			return 173833068;
		
		case 100:
			return -1681004136;
		
		case 101:
			return 713715980;
		
		case 102:
			return -31204969;
		
		case 103:
			return -1720064790;
		
		case 104:
			return -532172775;
		
		case 105:
			return -739067737;
		
		case 106:
			return -1203133835;
		
		case 107:
			return -1947411598;
		
		case 109:
			return -1298718762;
		
		case 110:
			return -595083064;
		
		case 111:
			return 884833917;
		
		case 112:
			return 2141950651;
		
		case 108:
			return -1049753365;
		
		case 113:
			return -1437650729;
		
		case 126:
			return 672925454;
		
		case 127:
			return 846062774;
		
		case 120:
			return 1369756178;
		
		case 121:
			return -736172423;
		
		case 122:
			return 1597070291;
		
		case 124:
			return -159501564;
		
		case 123:
			return -1438809608;
		
		case 125:
			return -102682392;
		
		case 114:
			return -81068979;
		
		case 115:
			return 227618407;
		
		case 116:
			return 2106043438;
		
		case 129:
			return -1868356491;
		
		case 117:
			return -1380256064;
		
		case 118:
			return -2118469183;
		
		case 119:
			return -558997834;
		
		case 128:
			return 658339366;
		
		default:
			break;
	}
	return 0;
}

bool func_371(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_372(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_779() - fParam1);
	func_780(uParam0, 1);
	func_781(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_373(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_374(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_375(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_376(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_377(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	if (func_783(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_783(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_783(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_784(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_785(iParam0))
	{
		return 0;
	}
	if (func_786(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_379(int iParam0)
{
	if (func_787(iParam0))
	{
		if (func_137(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_380(int iParam0, bool bParam1)
{
	if (!func_787(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_788(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

int func_381(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_382(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_49(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_383(int iParam0, int iParam1)
{
	int iVar0;
	
	if (_NAMESPACE48::_0xA8120EBEAF290C7A(func_380(iParam0, 0)))
	{
		iVar0 = _NAMESPACE48::_0x69786495C92A3044(func_380(iParam0, 0));
		if (iVar0 != ((*Global_1360165)[iParam0 /*1157*/])->f_47 || iParam1)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_47 = iVar0;
			StringCopy(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), _NAMESPACE48::_0x9C7F95946E304778(func_380(iParam0, 0), ((*Global_1360165)[iParam0 /*1157*/])->f_47), 64);
			((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		}
	}
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_385(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_782(iParam0))
		{
			return;
		}
	}
	func_789(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

bool func_386()
{
	return func_790(Global_35, 6);
}

bool func_387()
{
	return func_791(32768);
}

int func_388(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_656(func_792(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_339(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

bool func_389()
{
	return Global_1946804->f_2792;
}

int func_390(int iParam0)
{
	if (func_793())
	{
		return 0;
	}
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_794(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_391(int iParam0)
{
	return func_795(iParam0);
}

void func_392(int iParam0, int iParam1)
{
	func_796(iParam0, iParam1);
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_797(iParam0);
	if (func_612(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_798(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_799();
			}
			else
			{
				iVar0 = func_800();
			}
		}
		else if (func_343(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_801();
		}
		else
		{
			iVar0 = func_802();
		}
	}
	else if (func_190(&iVar2))
	{
		if (func_612(iVar2, -1303648999))
		{
			iVar0 = func_799();
		}
		else
		{
			iVar0 = func_800();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_801();
	}
	else
	{
		iVar0 = func_802();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_394(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = { -121.616f, -40.4015f, 96.2565f };
			*uParam2 = { -5.9251f, 0f, 80.0535f };
			*uParam3 = 45f;
			return 1;
		
		case 2:
			*uParam1 = { 650.3687f, -1247.587f, 44.3792f };
			*uParam2 = { -6.5933f, 0f, -34.0096f };
			*uParam3 = 45f;
			return 1;
		
		case 0:
			*uParam1 = { 2340.102f, 1354.773f, 106.9161f };
			*uParam2 = { -0.0977f, 0f, -3.985f };
			*uParam3 = 45f;
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_395(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, -120.4341f, -40.3395f, 94.5526f, 80.7272f, 1, false, 1);
			break;
		
		case 2:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, 650.0016f, -1248.605f, 42.7058f, 326.195f, 1, false, 1);
			break;
		
		case 0:
			ENTITY::_0x203BEFFDBE12E96A(Global_35, 2340.061f, 1353.773f, 105.3442f, 356.3785f, 1, false, 1);
			break;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	PED::_0x2208438012482A1A(Global_35, false, false);
}

void func_396()
{
}

void func_397(var uParam0, var uParam1)
{
}

void func_398(var uParam0, var uParam1)
{
}

void func_399()
{
}

int func_400(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1))
	{
		if (!PED::_0x2D64376CF437363E(uParam0->f_304.f_1))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
	{
		if (!ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_304.f_2))
		{
			return 0;
		}
		if (func_803(uParam0->f_304.f_2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_401(int iParam0)
{
	return STREAMING::_0x8D56BDA343D9519F(func_370(iParam0));
}

int func_402(int iParam0, bool bParam1)
{
	if (!func_158())
	{
		return 1;
	}
	if (func_804(iParam0))
	{
		if (iParam0 == func_1())
		{
			return 0;
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_zero"))
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			if (iParam0 == 37 && !func_805(9))
			{
				return 0;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return 0;
				}
				if (func_437() != iParam0)
				{
					return 0;
				}
				break;
			
			case 43:
				if (!bParam1)
				{
					return 0;
				}
				break;
		}
		if (func_806() == 8)
		{
			if (func_807(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_403(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	var uVar24;
	int iVar25;
	
	uVar0 = func_808(iParam1);
	iVar1 = func_809(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH(((*uParam0)[iVar2 /*7*/])->f_6), 64);
	StringCopy(&cVar11, HUD::_GET_LABEL_TEXT_BY_HASH(iVar1), 64);
	while (((*uParam0)[iVar2 /*7*/])->f_3 && MISC::COMPARE_STRINGS(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH(((*uParam0)[iVar2 /*7*/])->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	uVar22 = uVar0;
	iVar23 = iVar1;
	while (((*uParam0)[iVar19 /*7*/])->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		uVar24 = ((*uParam0)[iVar19 /*7*/])->f_4;
		iVar21 = uParam0[iVar19 /*7*/];
		iVar25 = ((*uParam0)[iVar19 /*7*/])->f_6;
		((*uParam0)[iVar19 /*7*/])->f_4 = uVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		((*uParam0)[iVar19 /*7*/])->f_3 = 1;
		((*uParam0)[iVar19 /*7*/])->f_6 = iVar23;
		func_767((*uParam0)[iVar19 /*7*/], uParam0[iVar19 /*7*/]);
		uVar22 = uVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!((*uParam0)[iVar19 /*7*/])->f_3)
	{
		((*uParam0)[iVar19 /*7*/])->f_4 = uVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		((*uParam0)[iVar19 /*7*/])->f_3 = 1;
		((*uParam0)[iVar19 /*7*/])->f_6 = iVar23;
	}
}

void func_404(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	
	iVar0 = func_808(iParam1);
	uVar1 = func_809(iParam1);
	if (iParam1 == func_437())
	{
		((*uParam0)[0 /*7*/])->f_4 = iVar0;
		(*uParam0)[0 /*7*/] = iParam1;
		((*uParam0)[0 /*7*/])->f_3 = 1;
		((*uParam0)[0 /*7*/])->f_6 = uVar1;
		return;
	}
	iVar2 = 1;
	while ((((*uParam0)[iVar2 /*7*/])->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && ((*uParam0)[iVar2 /*7*/])->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	uVar7 = uVar1;
	while (((*uParam0)[iVar3 /*7*/])->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = ((*uParam0)[iVar3 /*7*/])->f_4;
		iVar5 = uParam0[iVar3 /*7*/];
		uVar9 = ((*uParam0)[iVar3 /*7*/])->f_6;
		((*uParam0)[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		((*uParam0)[iVar3 /*7*/])->f_3 = 1;
		((*uParam0)[iVar3 /*7*/])->f_6 = uVar7;
		func_767((*uParam0)[iVar3 /*7*/], uParam0[iVar3 /*7*/]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		uVar7 = uVar9;
		iVar3++;
	}
	if (!((*uParam0)[iVar3 /*7*/])->f_3)
	{
		((*uParam0)[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		((*uParam0)[iVar3 /*7*/])->f_3 = 1;
		((*uParam0)[iVar3 /*7*/])->f_6 = uVar7;
	}
}

float func_405(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * BUILTIN::POW((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_125() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_810()));
	}
	return func_811(fVar1, 2, 1);
}

int func_406(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		iVar2 = &uParam0->f_7[iVar0 /*7*/];
		if (((func_111(iVar2) && !func_812(iVar2)) && !func_814(func_813(iVar2), 1)) && func_401(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_34(iParam0))
	{
		return;
	}
	iVar0 = func_168(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

var func_408(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_409()
{
	return Global_1109400->f_236;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_815(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_816())
	{
		return func_815(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_815(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_411()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return &Global_1058888;
}

bool func_412()
{
	return Global_1935689->f_1;
}

bool func_413()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

bool func_414()
{
	return &Global_1935436 == 2;
}

int func_415()
{
	if ((func_125() == -1 && func_120(((*Global_1835011)[60 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_416(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_20))
	{
		uParam0->f_20 = ANIMSCENE::_CREATE_ANIM_SCENE("script@common@shop@playercamp", 0, 0, false, true);
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_20, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_20);
	}
}

int func_417(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	func_636(uParam0, 4, 1945003767, (func_817() && func_818()), func_818(), 0);
	switch (*uParam1)
	{
		case 2077448405:
			if (func_819(uParam1->f_9) && uParam1->f_9 != 166243423)
			{
				if (func_820() == uParam1->f_9)
				{
					func_636(uParam0, 4, 904671343, 0, 0, 0);
				}
				else
				{
					func_636(uParam0, 4, 904671343, 1, 1, 0);
				}
			}
			if ((func_820() == uParam1->f_9 || func_821(uParam1->f_9)) || uParam1->f_9 == 166243423)
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (func_822(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, bVar0, 1, 0);
			}
			else
			{
				bVar1 = func_823() > 0;
				func_636(uParam0, 2, 920855044, (bVar0 && bVar1), 1, 0);
			}
			break;
		
		case 1942587409:
			if (func_824(uParam1->f_9) || func_821(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, 0, 0, 0);
			}
			else if (func_822(uParam1->f_9))
			{
				func_636(uParam0, 2, -1208531349, 1, 1, 0);
			}
			else
			{
				func_636(uParam0, 2, 920855044, func_825(-525676072, 0), 1, 0);
			}
			break;
		
		case 761079318:
			if (func_339(uParam1->f_9) == -2061583405)
			{
				if (func_821(uParam1->f_9))
				{
					func_636(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (func_822(uParam1->f_9))
				{
					func_636(uParam0, 2, -1208531349, uParam1->f_9 != func_826(0), 1, 0);
				}
				else
				{
					func_636(uParam0, 2, 920855044, func_825(-2061583405, 0), 1, 0);
				}
			}
			break;
		
		default:
			func_636(uParam0, 2, 0, 0, 0, 0);
			break;
	}
	if (func_261(uParam0) == 1256151078)
	{
		func_636(uParam0, 2, -810523886, 1, 1, 0);
	}
	if (func_827(uParam1->f_9) == -1037537535 && func_828(func_339(uParam1->f_9)))
	{
		func_829(&(uParam0->f_2279.f_2), func_339(uParam1->f_9), uParam0->f_2031.f_96);
	}
	else
	{
		func_830(&(uParam0->f_2279.f_2), uParam0->f_2031.f_96);
	}
	if (*uParam1 == 336033112)
	{
		switch (uParam1->f_1)
		{
			case 2095483486:
				func_831(uParam0, 1087413233);
				break;
			
			case -1737479370:
				func_831(uParam0, 1665487470);
				break;
			
			case 1244050188:
				if (func_40(51))
				{
					func_832(uParam0, -879869228);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(49))
				{
					func_832(uParam0, 1935902678);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			
			case -1370350542:
				if (func_834(2))
				{
					func_832(uParam0, 1198999650);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_835(uParam0, -1975235238, 761079318))
				{
					func_832(uParam0, -119411041);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			
			case -953746678:
				if (func_834(3))
				{
					func_832(uParam0, -2109951974);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(24))
				{
					func_832(uParam0, 454722478);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
			
			case 1216660012:
				if (func_40(50))
				{
					func_832(uParam0, -574754285);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				else if (func_40(48))
				{
					func_832(uParam0, -256440984);
					func_833(uParam0, 1);
					func_543(uParam0, 1);
				}
				break;
		}
	}
	return 1;
}

void func_418(var uParam0, int iParam1)
{
	uParam0->f_2031.f_113 = iParam1;
	uParam0->f_2031.f_112 = 1;
}

int func_419(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_339(uParam1->f_7);
	switch (uParam1->f_10)
	{
		case 2:
			if (func_261(uParam0) == 1256151078)
			{
				func_244(uParam0, -1934515925, 1, -1, 1, 1, 1, 0);
				return 1;
			}
			switch (*uParam1)
			{
				case 2077448405:
					bVar2 = true;
					break;
				
				case 1942587409:
					bVar2 = true;
					break;
				
				case 761079318:
					if (iVar0 == -2061583405)
					{
						bVar2 = true;
					}
					break;
			}
			switch (uParam1->f_7)
			{
				case -2065815962:
					bVar2 = false;
					break;
			}
			if (bVar2)
			{
				if (func_822(uParam1->f_7))
				{
					if (func_836(func_276(uParam0)))
					{
						func_592(uParam0, -1, 1);
					}
					func_837(uParam1->f_7, 1, 1);
					func_838(uParam1->f_7, 3);
				}
				else
				{
					func_839(uParam1->f_7, 1, 0, 0);
					func_838(uParam1->f_7, 2);
				}
			}
			break;
		
		case 4:
			if ((func_819(uParam1->f_7) && func_820() != uParam1->f_7) && uParam1->f_7 != 166243423)
			{
				if (func_822(uParam1->f_7))
				{
					func_837(uParam1->f_7, 1, 1);
				}
				if (func_840(uParam1->f_7, &iVar3))
				{
					func_841(iVar3);
					func_842(2, iVar3, 6);
				}
				func_843(uParam1->f_7, 1, 1, -142743235, 0);
				func_838(uParam1->f_7, 1);
				func_592(uParam0, -1, 1);
			}
			else if (func_844(&iVar4))
			{
				iVar1 = func_845(iVar4);
				if (iVar1 != 0)
				{
					func_846(uParam0);
					func_847(iVar1, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					Global_1946804->f_1497 = iVar1;
					func_848(iVar4, 1, 1, 6);
					func_838(iVar1, 0);
					func_849(iVar1);
				}
			}
			break;
	}
	return 1;
}

void func_420(var uParam0, var uParam1, var uParam2)
{
	func_850(&(uParam0->f_2279.f_2));
}

void func_421(var uParam0, int iParam1)
{
	uParam0->f_2031.f_111 = iParam1;
	uParam0->f_2031.f_110 = 1;
}

void func_422(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 1256151078)
	{
		func_425(uParam0, uParam0->f_2279.f_6);
		func_591(uParam0, uParam0->f_2279.f_6);
	}
	else
	{
		iVar0 = iParam2;
		if (func_278(iVar0, 0) && func_612(iVar0, -393037696))
		{
			func_425(uParam0, iParam2);
			func_591(uParam0, iParam2);
		}
		else
		{
			func_851(uParam0);
			iVar1 = func_276(uParam0);
			if (iVar1 != -1)
			{
				func_591(uParam0, iVar1);
			}
			else
			{
				func_591(uParam0, iParam2);
			}
		}
	}
}

void func_423(var uParam0, var uParam1)
{
}

void func_424(var uParam0, int iParam1)
{
	uParam0->f_2031.f_121 = iParam1;
	uParam0->f_2031.f_120 = 1;
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

int func_426(var uParam0)
{
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_30);
}

int func_427(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	PED::CLEAR_PED_ENV_DIRT(iParam1);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
	uParam0->f_2031.f_96 = iParam1;
	return 1;
}

void func_428()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_820();
	if (iVar0 != 166243423)
	{
		if (func_822(166243423))
		{
			func_837(166243423, 1, 1);
		}
	}
	if (func_125() == -1)
	{
		if (func_122() != 0)
		{
			if (func_822(1164374808))
			{
				func_837(1164374808, 1, 1);
			}
		}
	}
	if (!func_822(iVar0))
	{
		if (!func_825(-999503751, 1))
		{
			iVar1 = func_852(-999503751, 0, 0);
			func_837(iVar1, 1, 0);
		}
		func_839(iVar0, 1, 0, 0);
	}
}

int func_429(var uParam0)
{
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_20, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_20, "PB_IDLE"))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_20, "PB_IDLE");
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "PB_IDLE"))
	{
		return 0;
	}
	return 1;
}

void func_430(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_1914319->f_16855;
	iVar1 = Global_1914319->f_18748;
	if (Global_1914319->f_19461.f_20 == 1)
	{
		return;
	}
	Global_1914319->f_19461.f_21 = iParam0;
	Global_1914319->f_19461 = *uParam1;
	if (iVar0 == -1 || func_853(Global_1949604, 2))
	{
		if (!func_854(func_2(iVar1)))
		{
			if (MISC::_0xACB7E1418A8B6E32(4))
			{
				*(Global_1914319->f_19461.f_22[0 /*12*/]) = { Global_1949604->f_5881 };
				(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { Global_1949604->f_5884 };
				Global_1914319->f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
			}
			else
			{
				*(Global_1914319->f_19461.f_22[0 /*12*/]) = { Global_1949604->f_5881 };
				(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { Global_1949604->f_5884 };
				if (iVar1 == 115)
				{
					Global_1914319->f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
				}
				else
				{
					Global_1914319->f_19461.f_2.f_9 = 51.3f;
				}
			}
		}
		else if (MISC::_0xACB7E1418A8B6E32(5))
		{
			if (func_853(Global_1949604, 2))
			{
				*(Global_1914319->f_19461.f_22[0 /*12*/]) = { Global_1949604->f_5881 };
				(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { Global_1949604->f_5884 };
				Global_1914319->f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
			}
		}
		else
		{
			*(Global_1914319->f_19461.f_22[0 /*12*/]) = { CAM::GET_CAM_COORD(*uParam1) };
			(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { CAM::GET_CAM_ROT(*uParam1, 2) };
			Global_1914319->f_19461.f_2.f_9 = CAM::GET_GAMEPLAY_CAM_FOV();
		}
	}
	else
	{
		if (iVar0 == 20)
		{
			*(Global_1914319->f_19461.f_22[0 /*12*/]) = { CAM::GET_CAM_COORD(*uParam1) };
			(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { CAM::GET_CAM_ROT(*uParam1, 2) };
		}
		else
		{
			func_855(Global_1914319->f_19461.f_22[0 /*12*/], iVar0, iVar1, 145281273);
			func_855(&((Global_1914319->f_19461.f_22[0 /*12*/])->f_3), iVar0, iVar1, 1979643065);
		}
		Global_1914319->f_19461.f_2.f_9 = 51.3f;
	}
	func_856(iParam0, iVar0, iVar1);
	func_857(1);
	Global_1914319->f_19461.f_20 = 1;
}

void func_431(var uParam0)
{
	float fVar0;
	
	func_84(1);
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_20, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_20, "player", *uParam0, 0);
		fVar0 = (uParam0->f_14 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_20, uParam0->f_11, 0f, 0f, fVar0, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_20);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(uParam0->f_20, "PB_IDLE"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_20, "PB_IDLE", true);
	}
}

void func_432(var uParam0)
{
	Global_1914319->f_19461.f_21 = *uParam0;
	*(Global_1914319->f_19461.f_22[0 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.1773f, 2.1151f, 0.576f) };
	(Global_1914319->f_19461.f_22[0 /*12*/])->f_3 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) + Vector(186.414f, 0f, -14.7873f) };
	Global_1914319->f_19461.f_2.f_9 = 50.9f;
	func_856(*uParam0, 24, func_1());
	Global_1914319->f_19461.f_20 = 1;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", *(Global_1914319->f_19461.f_22[0 /*12*/]), (Global_1914319->f_19461.f_22[0 /*12*/])->f_3, Global_1914319->f_19461.f_2.f_9, false, 2);
	}
	else
	{
		CAM::SET_CAM_PARAMS(uParam0->f_2, *(Global_1914319->f_19461.f_22[0 /*12*/]), (Global_1914319->f_19461.f_22[0 /*12*/])->f_3, Global_1914319->f_19461.f_2.f_9, 0, 1, 1, 2, 1, 0);
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_2))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_2, true);
	}
	if (!CAM::IS_CAM_RENDERING(uParam0->f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	func_858(uParam0->f_2, 0);
}

void func_433()
{
	if (func_125() != -1)
	{
		return;
	}
	if (!func_158())
	{
		return;
	}
	func_859(&(Global_40.f_40));
}

void func_434()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

int func_435()
{
	return &Global_1899515;
}

bool func_436()
{
	return !func_43(Global_1310720->f_1);
}

int func_437()
{
	return Global_40.f_4283.f_1;
}

int func_438(vector3 vParam0, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_1();
	if (func_111(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_860(vParam0, bParam3);
}

void func_439(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_861())
	{
		fVar0 = func_771(vParam0, Global_40.f_6);
	}
	if (func_373(33554432))
	{
		if (!func_166(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_771(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_440(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_441(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_442()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	
	if (!func_10(&Global_1935630, 8192))
	{
		return;
	}
	if (func_862(32768))
	{
		return;
	}
	func_101(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_863(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_863(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_863(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_863(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_863(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_863(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_863(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_863(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_863(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_864(10f, BUILTIN::TO_FLOAT(func_863(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_864(5f, BUILTIN::TO_FLOAT(func_863(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_864(25f, BUILTIN::TO_FLOAT(func_865(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_864(1f, BUILTIN::TO_FLOAT(func_865(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_864(6f, BUILTIN::TO_FLOAT(func_865(64058978)))));
	fVar0 = (fVar0 + (3f * func_864(1f, BUILTIN::TO_FLOAT(func_865(795577402)))));
	iVar1 = func_866();
	fVar0 = (fVar0 + (0.1111111f * func_864(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_864(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_864(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_868()))));
	if (func_805(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_805(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_805(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_805(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_805(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_867(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_864(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_864(5f, BUILTIN::TO_FLOAT(func_865(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_864(5f, BUILTIN::TO_FLOAT(func_863(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(1630085303), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(-1658238931));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_869(COMPENDIUM::_0x729D52F61A5A9E22(-2143405780), 48)) / BUILTIN::TO_FLOAT(48)));
	func_870(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_864((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_864(1f, BUILTIN::TO_FLOAT(func_871(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_872());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_864(5f, BUILTIN::TO_FLOAT(func_865(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_864(1f, BUILTIN::TO_FLOAT(func_865(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_864(1f, BUILTIN::TO_FLOAT(func_865(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_864(1f, BUILTIN::TO_FLOAT(func_865(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_864(1f, BUILTIN::TO_FLOAT(func_863(978382515, 1015970717)))));
	Var6 = { func_873(joaat("total_progress_made")) };
	fVar8 = func_874(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_232(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_232(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_738(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_875(Global_1898330[iVar61]);
				}
				else
				{
					func_876(iVar61, 0);
					if (func_233(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_877(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_877(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_877(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_443(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_444(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_445(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_446(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

float func_447(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_448(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_449(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_450(int iParam0)
{
	return iParam0 & 31;
}

int func_451(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_452(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_453(var uParam0)
{
	*uParam0 = 0;
}

void func_454(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_455(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_456(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		
		case 33:
			return 905.92f, -421.19f, 88.23f;
		
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		
		case 38:
			return -329.32f, -366.6f, 87f;
		
		case 39:
			return 97.4f, -212.47f, 111.6f;
		
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		
		case 84:
			return -73.18f, -392.3f, 70.84f;
		
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		
		case 104:
			return 2407f, -585.32f, 40.66f;
		
		case 105:
			return -219.25f, 212.93f, 94.15f;
		
		case 116:
			return 211.99f, 512.98f, 126.54f;
		
		case 117:
			return -329.2f, 797.9f, 116.89f;
		
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		
		case 135:
			return -576.08f, 524.9f, 97.86f;
		
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_457(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;
	
	if (!func_238(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_743(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_862(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_878(iParam0);
	if (!bParam5 && func_879(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_456(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_750(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_880(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_125() == -1)
	{
		func_881(iParam0);
		iVar0 = func_882(Global_40.f_4283);
		if (func_111(iVar0) && func_883(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			iVar1 = 1;
			bVar2 = func_884(iVar0);
		}
		if (func_885(iParam0, iVar1, iVar0))
		{
			func_886(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, iVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_887(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_879(iParam0) || func_888(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_888(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_734(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_887(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_889(iParam0))
		{
			if (iParam0 == 97)
			{
				func_341(185, 0);
			}
			else
			{
				func_341(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_196(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_890(iParam0, 2);
	}
}

Vector3 func_458(int iParam0)
{
	vector3 vVar0;
	
	if (!func_238(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_891(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		
		case 8:
			return 1035357148;
		
		case 9:
			return -990591911;
		
		case 17:
			return 1434435999;
		
		case 13:
			return 914613127;
		
		case 14:
			return 277114628;
		
		case 15:
			return -441298053;
		
		case 108:
			return 1671261677;
		
		case 12:
			return -2008988392;
		
		case 16:
			return -1779570775;
		
		case 106:
			return 1866591384;
		
		case 107:
			return -810797676;
		
		case 6:
			return 1591504033;
		
		case 10:
			return -1481022983;
		
		case 11:
			return -200160067;
		
		case 19:
			return 213861089;
		
		case 20:
			return 187124199;
		
		case 21:
			return -1639286351;
		
		case 18:
			return 1244472740;
		
		case 105:
			return -1711647719;
		
		case 22:
			return -184950877;
		
		case 118:
			return 354888782;
		
		case 39:
			return -922179383;
		
		case 42:
			return 877339314;
		
		case 41:
			return 327042733;
		
		case 43:
			return -1159824322;
		
		case 36:
			return 187784199;
		
		case 37:
			return 156869848;
		
		case 38:
			return 959980967;
		
		case 40:
			return 268171375;
		
		case 44:
			return -605457855;
		
		case 45:
			return -967272484;
		
		case 46:
			return 253446434;
		
		case 47:
			return -24930371;
		
		case 55:
			return -491616406;
		
		case 111:
			return 806137889;
		
		case 48:
			return 683812333;
		
		case 49:
			return 1055138492;
		
		case 50:
			return -1673339528;
		
		case 53:
			return 1428271505;
		
		case 54:
			return -2132681852;
		
		case 51:
			return 641024601;
		
		case 109:
			return 1479356600;
		
		case 110:
			return -1608228131;
		
		case 52:
			return 1700741106;
		
		case 23:
			return -768596287;
		
		case 24:
			return -1789795772;
		
		case 28:
			return 986912071;
		
		case 27:
			return 312948291;
		
		case 29:
			return 770563571;
		
		case 30:
			return 288839560;
		
		case 26:
			return 399352507;
		
		case 31:
			return -1241147617;
		
		case 113:
			return 399096998;
		
		case 32:
			return -483073269;
		
		case 112:
			return 1576805996;
		
		case 25:
			return -1427623397;
		
		case 33:
			return 305555540;
		
		case 60:
			return 2080716288;
		
		case 61:
			return 922959422;
		
		case 62:
			return 1948709075;
		
		case 63:
			return 599204508;
		
		case 65:
			return -362796541;
		
		case 115:
			return -1178912317;
		
		case 64:
			return -1575046645;
		
		case 114:
			return -176953214;
		
		case 66:
			return -1992095599;
		
		case 73:
			return 646741747;
		
		case 74:
			return -773037432;
		
		case 75:
			return 1444751354;
		
		case 69:
			return 709943351;
		
		case 77:
			return 731746260;
		
		case 76:
			return 405856312;
		
		case 72:
			return -1749578899;
		
		case 78:
			return 1581089825;
		
		case 104:
			return -883880335;
		
		case 71:
			return 1124822890;
		
		case 81:
			return 1618521465;
		
		case 80:
			return -1675300716;
		
		case 79:
			return -442258411;
		
		case 102:
			return 1665083003;
		
		case 103:
			return 810431028;
		
		case 68:
			return 1161446575;
		
		case 70:
			return -406930559;
		
		case 35:
			return 1523596125;
		
		case 86:
			return -372049939;
		
		case 85:
			return 226213668;
		
		case 82:
			return 1437804895;
		
		case 117:
			return 430529746;
		
		case 84:
			return -1254552445;
		
		case 83:
			return 1526480524;
		
		case 116:
			return 644508980;
		
		case 1:
			return 1628277480;
		
		case 120:
			return -1985767496;
		
		case 0:
			return 1117878254;
		
		case 2:
			return 622553269;
		
		case 3:
			return -1934358691;
		
		case 121:
			return 962619556;
		
		case 89:
			return 94750187;
		
		case 87:
			return 545745902;
		
		case 88:
			return 1875117241;
		
		case 101:
			return -1861588330;
		
		case 126:
			return -1079912632;
		
		case 127:
			return -1624899219;
		
		case 124:
			return 646944986;
		
		case 149:
			return 1712034773;
		
		case 150:
			return 1084233913;
		
		case 151:
			return -1628307596;
		
		case 152:
			return 1244193358;
		
		case 128:
			return -268420964;
		
		case 129:
			return -283845926;
		
		case 130:
			return 76731659;
		
		case 131:
			return 2141489518;
		
		case 59:
			return 1529797091;
		
		case 132:
			return 1120323763;
		
		case 133:
			return -1951530479;
		
		case 134:
			return 2034257465;
		
		case 135:
			return 278587369;
		
		case 57:
			return 1388932648;
		
		case 137:
			return 1467401843;
		
		case 138:
			return -1049737591;
		
		case 139:
			return 1175719437;
		
		case 140:
			return 2115547696;
		
		case 56:
			return 878376253;
		
		case 141:
			return -508879537;
		
		case 142:
			return -654369397;
		
		case 143:
			return 1573058547;
		
		case 144:
			return 1753151614;
		
		case 145:
			return -2113647360;
		
		case 146:
			return 1337275619;
		
		case 147:
			return -237650722;
		
		case 148:
			return 283754781;
		
		case 58:
			return -2076086367;
		
		case 136:
			return -487054121;
		
		case 119:
			return 551011289;
		
		case 122:
			return -647250101;
		
		case 95:
			return -1769964380;
		
		case 97:
			return -1464928880;
		
		case 96:
			return 1315212395;
		
		case 90:
			return -1495157302;
		
		case 93:
			return -2140031237;
		
		case 91:
			return -1829807698;
		
		case 92:
			return 186603357;
		
		case 94:
			return -1575817877;
		
		case 98:
			return 1087483310;
		
		case 125:
			return -552506176;
		
		case 123:
			return -614248279;
		
		case 99:
			return 441769767;
		
		case 100:
			return 1318049946;
		
		case 4:
			return 548657065;
		
		case 5:
			return 243086140;
		
		case 34:
			return -305029900;
		
		case 67:
			return 1008537949;
		
		default:
			break;
	}
	return 0;
}

var func_460(var uParam0)
{
	return uParam0->f_1.f_2;
}

int func_461(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 1702063850;
			return 1;
		
		case 1:
			*iParam1 = 2060555271;
			return 1;
		
		case 3:
			*iParam1 = -1228165250;
			return 1;
		
		case 4:
			*iParam1 = 298535881;
			return 1;
		
		case 13:
			*iParam1 = 206398161;
			return 1;
		
		case 10:
			*iParam1 = 188795938;
			return 1;
		
		case 11:
			*iParam1 = 1546351910;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_462(int iParam0, var uParam1)
{
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(*uParam1, iParam0, &(uParam1->f_5)))
	{
		uParam1->f_31[0] = uParam1->f_5;
		uParam1->f_12 = { uParam1->f_5 };
		uParam1->f_20[0] = 0;
		uParam1->f_42 = 0;
		uParam1->f_43 = iParam0;
		return 1;
	}
	return 0;
}

int func_463(var uParam0)
{
	return uParam0->f_5;
}

bool func_464(int iParam0, var uParam1)
{
	var uVar0;
	
	return ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam1, iParam0, &uVar0);
}

var func_465(var uParam0)
{
	return uParam0->f_43;
}

int func_466(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_14;
	}
	return Global_1914319->f_16855.f_3.f_8;
}

int func_467(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_245(&(uParam0->f_2031)) == iParam1)
	{
		return 1;
	}
	iVar0 = func_892(&(uParam0->f_2031));
	iVar1 = 0;
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			*iParam2 = iVar1;
			if (func_268(iVar1, &(uParam0->f_2031)))
			{
				if (func_467(uParam0, iParam1, iParam2))
				{
					return 1;
				}
			}
			iVar1++;
		}
		func_275(&(uParam0->f_2031));
		return 0;
	}
	else
	{
		func_275(&(uParam0->f_2031));
	}
	return 0;
}

bool func_468()
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(1289756680, -1597171896);
}

bool func_469()
{
	return UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(1289756680, 677247760);
}

void func_470(var uParam0)
{
	uParam0->f_2031.f_79 = 1;
}

void func_471(var uParam0, int iParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2031.f_53, func_893(iParam1), sParam2);
}

bool func_472(var uParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, func_477(iParam1));
}

char* func_473(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldEnabled";
			}
			else
			{
				return "SelectEnabled";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "OptionHeldEnabled";
			}
			else
			{
				return "OptionEnabled";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "ToggleHeldEnabled";
			}
			else
			{
				return "ToggleEnabled";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "InfoHeldEnabled";
			}
			else
			{
				return "InfoEnabled";
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return "AdjustHeldEnabled";
			}
			else
			{
				return "AdjustEnabled";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BackHeldEnabled";
			}
			else
			{
				return "BackEnabled";
			}
			break;
	}
	return "";
}

char* func_474(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldVisible";
			}
			else
			{
				return "SelectVisible";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "OptionHeldVisible";
			}
			else
			{
				return "OptionVisible";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "ToggleHeldVisible";
			}
			else
			{
				return "ToggleVisible";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "InfoHeldVisible";
			}
			else
			{
				return "InfoVisible";
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return "AdjustHeldVisible";
			}
			else
			{
				return "AdjustVisible";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BackHeldVisible";
			}
			else
			{
				return "BackVisible";
			}
			break;
	}
	return "";
}

bool func_475(var uParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_472(uParam0, iParam1);
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, func_473(iParam1, bVar0));
}

bool func_476(var uParam0, int iParam1)
{
	bool bVar0;
	
	bVar0 = func_472(uParam0, iParam1);
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_53, func_474(iParam1, bVar0));
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectHeld";
		
		case 2:
			return "OptionHeld";
		
		case 3:
			return "ToggleHeld";
		
		case 4:
			return "InfoHeld";
		
		case 5:
			return "AdjustHeld";
		
		case 6:
			return "BackHeld";
	}
	return "";
}

int func_478(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	bVar0 = true;
	iVar1 = func_466(0);
	iVar2 = func_894(iVar1, &(uParam0->f_2031));
	iVar3 = func_299(uParam0);
	if (func_895(iVar3, iVar2, 4))
	{
		iVar4 = 0;
		if (func_896(uParam0, iVar3, iVar2, &iVar4))
		{
			iVar5 = func_897(uParam0, iVar4);
			if ((((iVar5 == -853534656 || iVar5 == 761079318) || iVar5 == 1942587409) || iVar5 == 2077448405) || iVar5 == -2056428614)
			{
				func_898(uParam0, iVar4);
				bVar0 = false;
			}
			else if (iVar5 == 1394581936)
			{
				func_899(uParam0, iVar4);
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		func_302(uParam0, 1);
		func_602(uParam0);
	}
	bVar6 = func_622(0);
	func_636(uParam0, 1, -672301300, bVar6, 1, 0);
	return 1;
}

int func_479(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = func_622(0);
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	return 1;
}

int func_480(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = func_622(0);
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	return 1;
}

int func_481(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uParam1->f_9;
	bVar1 = func_622(0);
	func_636(uParam0, 1, 2053664062, bVar1, 1, 0);
	if (func_827(iVar0) == -1037537535)
	{
		func_898(uParam0, iVar0);
	}
	return 1;
}

int func_482(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (iVar0 == 1279130184)
	{
		if (!func_900() && !func_631(func_632()))
		{
			func_630(func_901(func_632()), Global_35, -1, 1);
		}
		else
		{
			func_630(func_632(), Global_35, -1, 1);
		}
	}
	else
	{
		if (func_612(iVar0, 518788085) || (func_902(iVar0) && !func_631(iVar0)))
		{
			bVar1 = ((func_360(1) >= func_903(1279130184, 0) && !func_900()) && !func_631(func_632()));
			sVar2 = MISC::_CREATE_VAR_STRING(2, "BARBER_POMADE", func_903(1279130184, 0));
			func_904(uParam0, 3, sVar2, bVar1, !func_631(func_632()), 0);
		}
		else
		{
			func_274(uParam0, 2);
		}
		func_274(uParam0, 2);
		iVar3 = 1;
		if (!func_638(iVar0, &iVar3))
		{
			func_259(Global_35, 1, 1);
		}
		if (func_612(iVar0, 518788085))
		{
			func_906(Global_35, (func_905() - 1), 1);
		}
	}
	func_636(uParam0, 1, -2494464, func_622(0), 1, 0);
	return 1;
}

int func_483(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = 1;
	if (!func_639(iVar0, &iVar1))
	{
		func_302(uParam0, 1);
		if (uParam1->f_11 == 2144984909)
		{
			func_623(uParam0, 0);
		}
	}
	else
	{
		func_636(uParam0, 1, -672301300, 1, 1, 0);
	}
	return 1;
}

int func_484(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_634(uParam0, iVar0, -853534656, -1))
	{
		if (func_907(iVar0) || func_908(iVar0))
		{
			func_636(uParam0, 1, -1910242239, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 1, -507073631, 0, 1, 0);
		}
	}
	else if (func_835(uParam0, iVar0, -853534656))
	{
		iVar1 = 0;
		if (func_909(Global_35, iVar0, &iVar1))
		{
			func_636(uParam0, 1, -507073631, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 1, -507073631, 0, 1, 0);
		}
	}
	else
	{
		bVar2 = func_910(uParam0, iVar0, -853534656);
		func_636(uParam0, 1, -2494464, bVar2, 1, 0);
	}
	if (!func_909(func_263(uParam0), iVar0, &iVar3))
	{
		func_831(uParam0, iVar3);
	}
	else
	{
		func_547(uParam0, 0);
	}
	if (!func_907(iVar0) && !func_908(iVar0))
	{
		func_898(uParam0, iVar0);
	}
	return 1;
}

int func_485(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_634(uParam0, iVar0, 777890122, -1))
	{
		func_274(uParam0, 1);
	}
	else if (func_835(uParam0, iVar0, 777890122))
	{
		func_636(uParam0, 1, -507073631, 1, 1, 0);
	}
	else
	{
		bVar1 = func_622(0);
		func_636(uParam0, 1, -2494464, bVar1, 1, 0);
	}
	return 1;
}

int func_486(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (uParam1->f_11 != 310306577)
	{
		if (func_634(uParam0, iVar0, -1502467280, -1))
		{
			func_274(uParam0, 1);
		}
		else if (func_835(uParam0, iVar0, -1502467280))
		{
			func_636(uParam0, 1, -507073631, 1, 1, 0);
		}
		else
		{
			bVar1 = func_622(0);
			func_636(uParam0, 1, -2494464, bVar1, 1, 0);
		}
	}
	return 1;
}

int func_487(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = func_622(0);
	iVar1 = -2494464;
	if (func_903(uParam1->f_9, 0) <= 0)
	{
		iVar1 = 1892711184;
	}
	func_636(uParam0, 1, iVar1, bVar0, 1, 0);
	return 1;
}

int func_488(var uParam0)
{
	int iVar0;
	
	iVar0 = func_652(0);
	if (iVar0 == -1 || iVar0 >= 5)
	{
		return 0;
	}
	if (func_911(iVar0))
	{
		func_636(uParam0, 2, -861791432, 1, 1, 1);
	}
	func_640(uParam0, -1848132362);
	return 1;
}

int func_489(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (uParam0->f_2 == 18)
	{
		return 1;
	}
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (!func_899(uParam0, iVar0))
	{
	}
	if (func_835(uParam0, iVar0, 1394581936))
	{
		iVar1 = -507073631;
	}
	else
	{
		iVar1 = -2494464;
	}
	if (!func_634(uParam0, iVar0, 1394581936, -1))
	{
		bVar2 = func_622(0);
		func_636(uParam0, 1, iVar1, bVar2, 1, 0);
	}
	return 1;
}

int func_490(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = uParam1->f_1;
	if (iVar0 == -1 || iVar0 >= 5)
	{
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	else if (func_911(iVar0))
	{
		if (func_912(iVar0) == 1)
		{
			func_636(uParam0, 3, 1346060065, 1, 1, 0);
			func_640(uParam0, -262890001);
		}
		else
		{
			func_636(uParam0, 3, 545231356, 1, 1, 0);
			func_640(uParam0, 369533482);
		}
		func_636(uParam0, 2, -861791432, 1, 1, 1);
	}
	else
	{
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	return 1;
}

int func_491(var uParam0, var uParam1)
{
	if (func_278(uParam1->f_9, 0))
	{
		if (func_913(&(uParam1->f_3), 0))
		{
			func_274(uParam0, 2);
			func_274(uParam0, 3);
		}
		else
		{
			func_636(uParam0, 3, -507073631, 1, 1, 0);
			func_636(uParam0, 2, -861791432, 1, 1, 1);
		}
		func_636(uParam0, 1, -672301300, 1, 1, 0);
	}
	else
	{
		func_636(uParam0, 1, -2494464, 1, 1, 0);
		func_274(uParam0, 2);
		func_274(uParam0, 3);
	}
	func_914(uParam0, &(uParam1->f_3));
	return 1;
}

int func_492(var uParam0)
{
	int iVar0;
	
	iVar0 = func_721();
	if (iVar0 == 1)
	{
		func_636(uParam0, 1, 877647614, 1, 1, 0);
		func_640(uParam0, 829087889);
	}
	else if (iVar0 == 3)
	{
		func_636(uParam0, 1, -1765989736, 1, 1, 0);
		func_640(uParam0, -2111805612);
	}
	return 1;
}

int func_493(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	struct<4> Var12;
	var uVar16;
	
	bVar0 = func_622(0);
	func_636(uParam0, 1, -672301300, bVar0, 1, 0);
	iVar1 = 1728382685;
	if (func_915(uParam1->f_9, 1728382685, 0) && func_915(uParam1->f_9, -649335959, 0))
	{
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(uParam1->f_10, func_655());
		iVar1 = iVar2;
		func_666(uParam0, iVar1);
		if (func_663(uParam1->f_9, iVar1, &iVar3, &iVar4))
		{
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam1->f_10, func_664(), iVar3);
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam1->f_10, func_665(), iVar4);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam1->f_10, func_916(), 1);
		}
		func_636(uParam0, 5, 1067499419, 1, 1, 0);
	}
	else if (func_915(uParam1->f_9, -649335959, 0))
	{
		func_666(uParam0, -649335959);
	}
	else
	{
		func_666(uParam0, 1728382685);
	}
	bVar11 = true;
	if (WEAPON::_0x0556E9D2ECF39D01(uParam1->f_9))
	{
		iVar5 = -572103635;
		iVar6 = 894623821;
		iVar7 = 10;
		iVar8 = 9;
		bVar9 = func_917(Global_35, 1, iVar7, 1) != uParam1->f_9;
		bVar10 = func_917(Global_35, 1, iVar8, 1) != uParam1->f_9;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(uParam1->f_9))
	{
		bVar9 = true;
		bVar10 = true;
		iVar5 = -1610187846;
		iVar6 = 190417139;
		iVar7 = 2;
		iVar8 = 3;
		Var12 = { func_669(uParam1->f_9, func_668(0), iVar1, 0) };
		if (WEAPON::_0x6929E22158E52265(Global_35, iVar7, &uVar16))
		{
			if (func_670(&Var12, &uVar16))
			{
				bVar9 = false;
				bVar10 = false;
			}
		}
		if (WEAPON::_0x6929E22158E52265(Global_35, iVar8, &uVar16))
		{
			if (func_670(&Var12, &uVar16))
			{
				bVar9 = false;
				iVar6 = 165536584;
			}
		}
		if (func_671(-1185145312, 0) <= 0 || func_672() < 2)
		{
			bVar11 = false;
		}
	}
	else if (WEAPON::_0x959383DCD42040DA(uParam1->f_9))
	{
		iVar5 = 1091200442;
		iVar7 = 4;
		iVar8 = 4;
		bVar9 = func_917(Global_35, 1, iVar7, 1) != uParam1->f_9;
	}
	if (WEAPON::_0x959383DCD42040DA(uParam1->f_9))
	{
		func_636(uParam0, 3, iVar5, bVar9, 1, 0);
		func_274(uParam0, 2);
	}
	else
	{
		func_636(uParam0, 3, iVar5, bVar9, 1, 0);
		func_636(uParam0, 2, iVar6, (bVar10 && bVar11), bVar11, 0);
	}
	func_640(uParam0, 525827058);
	return 1;
}

int func_494(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam1->f_10, func_684());
	iVar0 = iVar1;
	bVar2 = func_622(0);
	if (func_278(iVar0, 0))
	{
		if (func_918(uParam1->f_9))
		{
			if (func_827(iVar0) == -1037537535)
			{
				if (bVar2)
				{
					func_898(uParam0, iVar0);
				}
				if (!func_909(func_263(uParam0), iVar0, &iVar3))
				{
					func_831(uParam0, iVar3);
				}
				else if (iVar0 == func_826(0))
				{
					func_831(uParam0, 223046265);
				}
				else
				{
					func_547(uParam0, 0);
				}
			}
		}
	}
	func_636(uParam0, 1, -672301300, bVar2, 1, 0);
	return 1;
}

int func_495(var uParam0, var uParam1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	struct<17> Var15;
	int iVar32;
	int iVar33;
	int iVar34;
	
	uVar0 = uParam1->f_1;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	uVar14 = func_919(uParam0);
	iVar33 = 0;
	iVar33 = 0;
	while (iVar33 < iVar11)
	{
		iVar32 = func_920(iVar33, iVar12);
		if (func_278(iVar32, 0))
		{
			iVar34 = func_897(uParam0, iVar32);
			if (iVar34 == 1702073444)
			{
			}
			else
			{
				Var15 = { *uParam1 };
				Var15.f_9 = iVar32;
				Var15 = iVar34;
				if (func_921(&(uParam0->f_2031), iVar32, &uVar13))
				{
					uParam0->f_2031.f_73 = uVar13;
				}
				else if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar32, uVar0) == -2089472884)
				{
				}
			else
			{
				}
				else
				{
					Stack.Push(uParam0);
					Stack.Push(&Var15);
					Call_Loc(uParam0->f_2031.f_122);
					if (StackVal)
					{
					}
					if (uParam0->f_2031.f_112)
					{
						Stack.Push(uParam0);
						Stack.Push(&Var15);
						Call_Loc(uParam0->f_2031.f_113);
						if (!StackVal)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar33++;
	}
	uParam0->f_2031.f_73 = uVar14;
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
	return 1;
}

int func_496(var uParam0, int iParam1)
{
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_497(var uParam0, var uParam1)
{
	return 1;
}

int func_498(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = uParam1->f_9;
	iVar1 = func_339(iVar0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar2 = func_634(uParam0, iVar0, 761079318, -1);
	func_636(uParam0, 1, -507073631, !bVar2, 1, 0);
	func_898(uParam0, iVar0);
	if (!func_909(func_263(uParam0), iVar0, &iVar3))
	{
		func_831(uParam0, iVar3);
	}
	else if (iVar0 == func_826(0))
	{
		func_831(uParam0, 223046265);
	}
	else
	{
		func_547(uParam0, 0);
	}
	switch (iVar1)
	{
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
			func_543(uParam0, 0);
			break;
	}
	return 1;
}

int func_499(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar1 = func_634(uParam0, iVar0, 761079318, -1);
	func_636(uParam0, 1, -507073631, !bVar1, 1, 0);
	func_898(uParam0, iVar0);
	return 1;
}

int func_500(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	bVar1 = func_634(uParam0, iVar0, 761079318, -1);
	if (uParam1->f_9 == 166243423)
	{
		func_636(uParam0, 1, -507073631, 0, 1, 0);
		if (func_820() == 166243423)
		{
			func_831(uParam0, 1985110445);
		}
		else
		{
			func_547(uParam0, 0);
		}
	}
	else
	{
		func_636(uParam0, 1, -507073631, !bVar1, 1, 0);
		func_547(uParam0, 0);
	}
	func_898(uParam0, iVar0);
	return 1;
}

int func_501(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = uParam1->f_9;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_263(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	bVar3 = func_909(iVar1, iVar0, &iVar2);
	if (func_634(uParam0, iVar0, 761079318, -1))
	{
		func_636(uParam0, 1, -1577066167, 1, 1, 0);
	}
	else
	{
		func_636(uParam0, 1, -1467646358, bVar3, 1, 0);
	}
	return 1;
}

int func_502(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = uParam1->f_1;
	iVar1 = uVar0;
	iVar3 = 0;
	if (func_622(0))
	{
		func_636(uParam0, 5, 1067499419, 1, 1, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = 536681653;
				break;
			
			case 2:
				iVar2 = -934544273;
				break;
			
			default:
				iVar2 = 1243347373;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
			case 1:
				iVar2 = -1078622262;
				break;
			
			case 2:
				iVar2 = -929695534;
				break;
			
			default:
				iVar2 = 836317122;
				break;
		}
		iVar4 = func_263(uParam0);
		if (!func_922(iVar4, iVar1, &iVar5))
		{
			iVar3 = iVar5;
		}
	}
	if (iVar3 != 0)
	{
		func_547(uParam0, 0);
	}
	else
	{
		func_831(uParam0, iVar3);
	}
	func_640(uParam0, iVar2);
	return 1;
}

int func_503(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	
	bVar0 = func_622(0);
	iVar1 = uParam1->f_1;
	if (!func_923(&iVar1))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		func_832(uParam0, MISC::GET_HASH_KEY(sVar2));
		func_833(uParam0, bVar0);
	}
	func_636(uParam0, 1, -2494464, bVar0, 1, 0);
	func_924(uParam0->f_18, iVar1, &iVar3);
	func_640(uParam0, iVar3);
	return 1;
}

int func_504(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = func_622(0);
	bVar2 = false;
	iVar3 = uParam1->f_1;
	if (func_718(iVar3))
	{
		iVar1 = func_925(iVar3);
		bVar2 = true;
	}
	func_636(uParam0, 1, -1217561127, bVar0, 1, 0);
	if (bVar2)
	{
		if (iVar1 > 0)
		{
			if (func_360(1) >= iVar1)
			{
				func_640(uParam0, -1091091272);
			}
			else
			{
				func_640(uParam0, -156356253);
			}
		}
		else
		{
			func_640(uParam0, 1900320479);
		}
	}
	else
	{
		func_640(uParam0, -2075002545);
	}
	return 1;
}

int func_505(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_289(uParam0);
	func_636(uParam0, 2, -316829060, iVar0 > 0, 1, 1);
	func_636(uParam0, 1, -586975683, iVar0 > 0, 1, 0);
	func_640(uParam0, 1670931336);
	return 1;
}

int func_506(var uParam0, var uParam1)
{
	return func_926(uParam0, *uParam1);
}

int func_507(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (uParam1->f_10 == 1)
	{
		iVar0 = func_595();
		iVar1 = func_892(&(uParam0->f_2031));
		if (iVar0 < iVar1 && iVar0 >= 0)
		{
			uParam0->f_2031.f_77 = iVar0;
			return func_469();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_508(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<6> Var3;
	
	iVar0 = uParam1->f_7;
	bVar1 = false;
	if (func_927(0))
	{
		iVar2 = uParam0->f_3;
		if (func_929(func_928(uParam0)))
		{
			iVar2 = func_928(uParam0);
		}
		if (func_930(iVar0, iVar2, &Var3))
		{
			if ((Var3.f_2 != 0 && !Var3.f_5) && !Var3.f_4)
			{
				bVar1 = func_931(uParam0, iVar0, -1, 1, 0);
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	uParam1->f_9 = 1;
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_509(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = uParam1->f_7;
	if (uParam1->f_10 == 1)
	{
		if (func_932(iVar0, 0))
		{
			return 0;
		}
		else
		{
			iVar1 = 600942249;
			func_933(uParam0->f_2, &iVar1);
			iVar2 = func_934(uParam0->f_2);
			iVar3 = func_935(uParam0->f_2, iVar0);
			if (func_936(iVar0, iVar1, 1, 1, iVar2, 1))
			{
				func_937(iVar0, iVar1, 1, 0, iVar2, iVar3);
				if (uParam0->f_2 == 18)
				{
					func_938(iVar0);
				}
				else if (uParam0->f_2 == 19)
				{
					func_939();
				}
				iVar4 = func_940(iVar0, iVar1);
				func_941(uParam0->f_2, uParam0->f_3, iVar0, 1, iVar4);
				if (func_932(iVar0, 0))
				{
					func_592(uParam0, func_466(0), 1);
					iVar5 = func_897(uParam0, iVar0);
					if (iVar5 == -853534656)
					{
						func_942(iVar0);
					}
				}
				uParam0->f_2318.f_11 = 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_510(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (uParam1->f_10 == 1)
	{
		if (func_612(iVar0, 518788085))
		{
			iVar1 = func_618(uParam0);
			iVar2 = func_619(uParam0);
			func_943(1, (iVar2 - iVar1));
			func_944();
			func_945(uParam0, iVar0);
		}
		else if (iVar0 == 1279130184)
		{
			func_946(uParam0->f_2 == 8);
			func_944();
		}
		else
		{
			if (func_631(iVar0))
			{
				func_947(0, 0);
			}
			func_948(1);
			func_944();
		}
		if (func_949(1))
		{
			func_946(uParam0->f_2 == 8);
			func_944();
		}
		if (uParam0->f_2 == 8)
		{
			func_931(uParam0, iVar0, -1, 0, 0);
		}
		else
		{
			func_931(uParam0, iVar0, 0, 0, 0);
		}
	}
	else if (uParam1->f_10 == 3)
	{
		if (!func_900() && !func_631(func_632()))
		{
			func_630(func_901(func_632()), Global_35, -1, 1);
			func_946(uParam0->f_2 == 8);
			func_944();
			if (uParam0->f_2 == 8)
			{
				func_931(uParam0, 1279130184, -1, 0, 0);
			}
			else
			{
				func_931(uParam0, 1279130184, 0, 0, 0);
			}
		}
	}
	return 1;
}

int func_511(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (iVar0 == 1574030042)
	{
		func_624(1574030042, Global_35, 0, 0, 0, 1);
		func_950();
	}
	else if (iVar0 == 1420417918)
	{
		func_624(1420417918, Global_35, 1, 1, 1, 1);
		func_950();
	}
	else if (uParam1->f_11 != 2144984909)
	{
		func_951(iVar0, 1, 1);
	}
	else
	{
		iVar1 = func_618(uParam0);
		iVar2 = func_619(uParam0);
		if (func_612(iVar0, 518788085) && iVar1 != iVar2)
		{
			func_951(iVar0, 1, (iVar2 - iVar1));
			func_950();
			if (!func_952(2) && !uParam0->f_2 == 25)
			{
			}
		}
		else
		{
			func_950();
			if (!func_952(2) && !uParam0->f_2 == 25)
			{
			}
		}
		func_945(uParam0, iVar0);
	}
	if (uParam0->f_2 == 8)
	{
		func_931(uParam0, iVar0, -1, 0, 0);
	}
	else
	{
		func_931(uParam0, iVar0, 0, 0, 0);
	}
	return 1;
}

int func_512(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (uParam1->f_10 == 1)
	{
		iVar1 = func_339(uParam1->f_7);
		func_846(uParam0);
		if (iVar1 == -999503751)
		{
			if (func_125() == -1)
			{
				iVar0 = func_755(uParam1->f_7);
				if (iVar0 == -1)
				{
					iVar0 = 0;
				}
				func_953(Global_40.f_7729, 4096);
				Global_40.f_7729 = iVar0;
				Global_1905941 = Global_40.f_7729;
				func_954(Global_40.f_7729, 4096);
			}
			func_955(-1, 0, 1, 1, 1, 0);
			func_849(uParam1->f_7);
		}
		else if (func_907(uParam1->f_7) || func_908(uParam1->f_7))
		{
			if (func_634(uParam0, uParam1->f_7, 761079318, -1))
			{
				iVar2 = func_956(uParam1->f_7);
			}
			else
			{
				iVar2 = uParam1->f_7;
			}
			iVar3 = func_957(iVar2);
			iVar4 = func_263(uParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				return 0;
			}
			func_846(uParam0);
			func_958(iVar4, iVar2, 0, iVar3, 1, 1, 1, 0, 1, 0);
			func_849(166243423);
		}
		else
		{
			func_662(1, 1, 0);
			func_849(166243423);
		}
		if (!func_932(uParam1->f_7, 1))
		{
			uParam0->f_2011 = uParam1->f_7;
			iVar5 = func_931(uParam0, uParam1->f_7, -1, 1, func_959(uParam0));
			func_942(uParam1->f_7);
			uParam1->f_9 = iVar5;
		}
		else
		{
			uParam1->f_9 = 1;
		}
		iVar6 = func_263(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6) || ENTITY::IS_ENTITY_DEAD(iVar6))
		{
			return 0;
		}
		func_127(iVar6, 1);
		func_960(iVar6);
	}
	return 1;
}

int func_513(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	vector3 vVar7;
	int iVar10;
	struct<4> Var11;
	struct<4> Var15;
	var uVar19;
	int iVar24;
	int iVar25;
	int iVar26;
	struct<4> Var27;
	struct<5> Var31;
	var uVar36;
	int iVar40;
	int iVar41;
	struct<4> Var42;
	int iVar46;
	struct<4> Var47;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar56;
	struct<4> Var57;
	int iVar61;
	int iVar62;
	int iVar63;
	struct<10> Var64;
	struct<14> Var78;
	
	iVar0 = func_961(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar2 = func_962(uParam0);
	if (iVar2 == 0)
	{
		return 0;
	}
	if (func_612(iVar1, 1844906744))
	{
		vVar7.f_1 = -1;
		vVar7.f_2 = -1;
		iVar25 = func_276(uParam0);
		if (func_963(func_724(&(uParam0->f_2031)), iVar25, &Var3))
		{
			iVar24 = 0;
			while (iVar24 < Var3.f_3)
			{
				vVar7 = { func_964(iVar24, Var3, &(uParam0->f_2031)) };
				if ((vVar7.x != iVar1 && func_278(vVar7.x, 0)) && func_965(iVar0, vVar7.x, iVar2, 0))
				{
					if (func_966(vVar7.x, iVar0, &iVar10, &Var11, &uVar19, 1, iVar2))
					{
						Var15 = { func_669(vVar7.x, Var11, iVar10, 0) };
						if (!func_967(Var15, 0))
						{
						}
					}
				}
				iVar24++;
			}
		}
		func_274(uParam0, 1);
	}
	else
	{
		if (!func_966(iVar1, iVar0, &iVar26, &Var27, &Var31, 1, iVar2))
		{
			return 0;
		}
		if (!func_968(iVar1, &Var27, iVar26, 0))
		{
			Var31 = { Var27 };
			Var31.f_4 = iVar26;
			if (!func_969(iVar1, &uVar36, &Var31, 1, 752097756, 0))
			{
				return 0;
			}
			func_970(iVar1, 1, 0, 0, 0);
			func_941(uParam0->f_2, uParam0->f_3, iVar1, 1, func_903(iVar1, 0));
			func_971(func_903(iVar1, 0), 0, 0, 0, 1);
			if (func_972(uParam0->f_3, 262144))
			{
				INVENTORY::_0x9B4E793B1CB6550A();
				func_973(uParam0->f_3, 262144);
			}
			uParam0->f_2318.f_11 = 1;
		}
		iVar40 = func_974(Var27, iVar26, 1);
		iVar41 = 0;
		if (func_278(iVar40, 0))
		{
			Var47 = { func_669(iVar40, Var27, iVar26, 0) };
			iVar52 = func_339(iVar40);
			iVar56 = func_975(iVar40);
			iVar51 = 0;
			while (iVar51 < iVar56)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar52, iVar51, &iVar53))
				{
					iVar41 = func_974(Var47, iVar53, 1);
					if (func_278(iVar41, 0) && func_827(iVar41) == 658570475)
					{
						Var42 = { func_669(iVar41, Var47, iVar53, 0) };
						iVar46 = iVar53;
						Jump @587; //curOff = 569
					}
					else
					{
						iVar41 = 0;
					}
				}
				iVar51++;
			}
		}
		Var57 = { func_669(iVar1, Var27, iVar26, 0) };
		if (!func_967(Var57, 1))
		{
			return 0;
		}
		if (func_278(iVar41, 0))
		{
			if (func_976(iVar40, iVar46) == 0)
			{
				if (func_976(iVar1, iVar46) == 0)
				{
					if (func_977(Var42, Var57, iVar46, 1, 1))
					{
					}
				}
				else
				{
					Var31 = { Var57 };
					Var31.f_4 = iVar46;
					if (func_978(iVar41, &Var42, &Var31, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		if (func_612(iVar1, -1644819871))
		{
			Var64.f_9 = -1591664384;
			Var78 = { func_979(0, -1591664384, -1591664384, -1591664384, 0, 1851054657) };
			Var78.f_9 = { Var27 };
			if (func_980(&Var78, &iVar61, &iVar62, 0))
			{
				iVar63 = 0;
				while (iVar63 < iVar62)
				{
					if (func_981(&Var64, iVar63, iVar61, iVar62))
					{
						Var31 = { Var27 };
						Var31.f_4 = Var64.f_9;
						if (func_978(Var64.f_4, &Var64, &Var31, -1, -142743235, 0, 0))
						{
						}
					}
					iVar63++;
				}
			}
			func_982(iVar61);
		}
		if (func_983(iVar0, iVar2))
		{
			func_984(13, 1);
		}
		func_274(uParam0, 1);
	}
	return 1;
}

int func_514(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	vector3 vVar7;
	int iVar10;
	struct<4> Var11;
	struct<4> Var15;
	var uVar19;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<4> Var28;
	struct<5> Var32;
	int iVar37;
	int iVar38;
	int iVar39;
	struct<10> Var40;
	struct<14> Var54;
	var uVar68;
	struct<4> Var72;
	
	iVar0 = func_961(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = uParam1->f_7;
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar2 = func_962(uParam0);
	if (iVar2 == 0)
	{
		return 0;
	}
	if (func_612(iVar1, 1844906744))
	{
		vVar7.f_1 = -1;
		vVar7.f_2 = -1;
		iVar25 = func_276(uParam0);
		if (func_963(func_724(&(uParam0->f_2031)), iVar25, &Var3))
		{
			iVar24 = 0;
			while (iVar24 < Var3.f_3)
			{
				vVar7 = { func_964(iVar24, Var3, &(uParam0->f_2031)) };
				if (vVar7.x != iVar1 && func_278(vVar7.x, 0))
				{
					if (func_966(vVar7.x, iVar0, &iVar10, &Var11, &uVar19, 1, iVar2))
					{
						Var15 = { func_669(vVar7.x, Var11, iVar10, 0) };
						iVar26 = func_339(vVar7.x);
						if (iVar26 == 146649851 || iVar26 == -1954920608)
						{
							if (func_967(Var15, 0))
							{
							}
						}
						else if (func_978(vVar7.x, &Var15, &uVar19, -1, -142743235, 0, 0))
						{
							func_971(func_903(iVar1, 0), 0, 0, 0, 1);
						}
					}
				}
				iVar24++;
			}
		}
	}
	else
	{
		if (!func_966(iVar1, iVar0, &iVar27, &Var28, &Var32, 1, iVar2))
		{
			return 0;
		}
		Var32 = { Var28 };
		Var32.f_4 = iVar27;
		if (!func_968(iVar1, &Var28, iVar27, 0))
		{
			Var40.f_9 = -1591664384;
			Var54 = { func_979(0, iVar27, -1591664384, -1591664384, 0, 0) };
			Var54.f_9 = { Var28 };
			if (func_980(&Var54, &iVar37, &iVar38, 0))
			{
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (func_981(&Var40, iVar39, iVar37, iVar38))
					{
						if (func_978(Var40.f_4, &Var40, &Var32, -1, -142743235, 0, 0))
						{
						}
					}
					iVar39++;
				}
			}
			func_982(iVar37);
			if (!func_969(iVar1, &uVar68, &Var32, 1, 752097756, 0))
			{
				return 0;
			}
			func_970(iVar1, 1, 0, 0, 0);
			func_941(uParam0->f_2, uParam0->f_3, iVar1, 1, func_903(iVar1, 0));
			func_971(func_903(iVar1, 0), 0, 0, 0, 1);
			if (func_972(uParam0->f_3, 262144))
			{
				INVENTORY::_0x9B4E793B1CB6550A();
				func_973(uParam0->f_3, 262144);
			}
		}
		Var72 = { func_669(iVar1, Var28, iVar27, 0) };
		if (!func_967(Var72, 1))
		{
			return 0;
		}
	}
	if (func_983(iVar0, iVar2))
	{
		func_984(13, 1);
	}
	return 1;
}

int func_515(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<6> Var3;
	
	iVar0 = uParam1->f_7;
	bVar1 = false;
	if (func_927(0))
	{
		iVar2 = uParam0->f_3;
		if (func_929(func_928(uParam0)))
		{
			iVar2 = func_928(uParam0);
		}
		if (func_930(iVar0, iVar2, &Var3))
		{
			if ((Var3.f_2 != 0 && !Var3.f_5) && !Var3.f_4)
			{
				bVar1 = func_931(uParam0, iVar0, -1, 1, 0);
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	uParam1->f_9 = 1;
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_516(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	struct<8> Var2;
	int iVar10;
	struct<6> Var11;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	struct<6> Var26;
	
	iVar0 = uParam1->f_7;
	if (uParam1->f_10 == 1 && !func_985(uParam0, 128))
	{
		bVar1 = true;
		iVar10 = uParam0->f_3;
		if (func_929(func_928(uParam0)))
		{
			iVar10 = func_928(uParam0);
		}
		func_986(uParam0, 128);
		if (func_930(iVar0, iVar10, &Var11))
		{
			if ((Var11.f_2 != 0 && !Var11.f_5) && !Var11.f_4)
			{
				if (func_987() == -1 && func_911(0))
				{
					func_988("SHOP_HORSE_HELP_NO_OPEN_STABLED_SLOTS", "", 0, 0, 4000, 0, 0, 0, 0, 1, 1);
				}
				else if (func_989(&Var2))
				{
					iVar17 = func_903(iVar0, 0);
					if (!func_931(uParam0, iVar0, iVar17, 1, 0))
					{
						bVar1 = false;
						if (func_990(iVar0, 1, 0))
						{
							func_991("SHOP_H_MAX_ITEM");
						}
					}
					if (!bVar1)
					{
						func_992(uParam0, 128);
						return 0;
					}
				}
				else
				{
					bVar1 = false;
				}
			}
		}
		else
		{
			bVar1 = false;
		}
		uParam1->f_9 = bVar1;
		if (bVar1)
		{
			if (func_125() == -1)
			{
				if (func_911(0))
				{
					iVar18 = func_987();
				}
				else
				{
					iVar18 = 0;
				}
				if (iVar18 == -1)
				{
				}
				else
				{
					if (iVar18 != 0)
					{
						if (TASK::IS_PED_IN_WRITHE(func_226(0)))
						{
							func_993(0);
							func_994(func_226(0));
							ENTITY::_SET_ENTITY_HEALTH(func_226(0), 0, 0);
						}
						else
						{
							func_995(0);
							func_993(0);
							func_996(0, iVar18);
							func_997(iVar18, 2);
							func_998(0);
							iVar19 = func_226(iVar18);
							func_999(&(Global_1914319->f_17042), iVar19);
							func_1000(&(Global_1914319->f_17042), iVar18, iVar19);
						}
					}
					iVar20 = func_1001(iVar0);
					iVar21 = func_1002(iVar20);
					iVar22 = func_1003(&(Global_1914319->f_17042), iVar21);
					iVar23 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(Global_1914319->f_17042.f_70[iVar22]));
					if (ENTITY::DOES_ENTITY_EXIST(iVar23))
					{
					}
					func_1004(iVar23, 0, 0);
					func_997(0, 1);
					func_1005(0);
					Var24 = { func_1006(0) };
					Var26 = { func_1007() };
					func_1008(iVar23, &Var24, &Var26, 0);
					func_1009(0, Var2);
					func_1010(0);
					func_1011(0, 1);
					func_1012(0, 1);
					func_1013(0);
					func_847(-1662430395, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
					Global_1914319->f_17042.f_70[iVar22] = 0;
					uParam1->f_20 = 0;
				}
			}
			func_1014(uParam0);
			return 1;
		}
	}
	func_992(uParam0, 128);
	return 1;
}

int func_517(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	var uVar7;
	
	if (uParam1->f_10 == 2)
	{
		iVar0 = uParam1->f_7;
		if (!func_278(iVar0, 0))
		{
			return 0;
		}
		if (!func_1015(iVar0))
		{
			return 0;
		}
		uVar2 = uParam1->f_1;
		iVar1 = uVar2;
		if (iVar1 == -1 || iVar1 >= 5)
		{
			return 0;
		}
		uParam1->f_17 = iVar1;
		uParam1->f_18 = iVar1;
		uParam1->f_19 = 0;
		if (func_911(iVar1))
		{
			fVar3 = func_1016(iVar0, func_226(iVar1));
			func_1017(uParam0, iVar0, 1, BUILTIN::ROUND(fVar3));
			if (func_1018(iVar1))
			{
				func_843(-1662430395, 1, 1, -142743235, 0);
			}
			iVar4 = func_226(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (iVar4 == PLAYER::_0xB48050D326E9A2F3(PLAYER::GET_PLAYER_INDEX()))
				{
					func_1019(&uVar7);
					func_1008(iVar4, &uVar5, &uVar7, 0);
					uParam1->f_19 = 1;
					func_1020(&(Global_1914319->f_17042));
				}
			}
			if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2012))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_2012, 0f);
				ENTITY::DELETE_ENTITY(&(uParam0->f_2012));
			}
			func_1021(iVar1);
			func_1013(iVar1);
			func_998(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_518(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar11;
	struct<2> Var12;
	struct<6> Var14;
	int iVar20;
	int iVar21;
	var uVar22;
	
	iVar1 = uParam1->f_7;
	if (uParam1->f_10 != 1)
	{
		return 1;
	}
	bVar2 = false;
	if (func_835(uParam0, iVar1, 1394581936))
	{
		if (func_1022(iVar1))
		{
			iVar3 = func_444(7);
			if (iVar3 != -1)
			{
				if (func_1023(iVar1))
				{
					func_1024(iVar3, iVar1);
				}
				if (func_1025(iVar1))
				{
					func_1026(iVar3, iVar1);
				}
			}
		}
		else
		{
			func_1027(iVar1, 1);
		}
		bVar2 = true;
	}
	else
	{
		iVar4 = uParam0->f_3;
		if (func_929(func_928(uParam0)))
		{
			iVar4 = func_928(uParam0);
		}
		if (func_930(iVar1, iVar4, &Var5))
		{
			if (!Var5.f_4)
			{
				iVar11 = func_444(7);
				if (iVar11 != -1)
				{
					Var12 = { func_1006(iVar11) };
					Var14 = { func_1007() };
					iVar20 = func_339(iVar1);
					if (func_1028(iVar1))
					{
						iVar21 = func_1029(Var12, iVar20);
					}
					else if (func_1030(iVar1))
					{
						iVar21 = func_1031(Var14, iVar20);
					}
					if (iVar21 != iVar1)
					{
						bVar2 = func_931(uParam0, iVar1, -1, 1, 0);
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						if (func_1022(iVar1))
						{
							if (func_1025(iVar1))
							{
								func_1032(iVar11, iVar1, 1, 1);
							}
							if (func_1023(iVar1))
							{
								func_1033(iVar11, iVar1, 1, 1);
							}
						}
						else if (func_1034(iVar1, 1))
						{
							if (func_1035(iVar1, &iVar0))
							{
								func_1036(iVar0);
							}
						}
					}
				}
			}
		}
		else
		{
			bVar2 = false;
		}
	}
	if (bVar2)
	{
		uVar22 = func_1037(uParam0);
		func_1038(uVar22);
	}
	uParam1->f_9 = bVar2;
	if (bVar2)
	{
		if (func_1039(iVar1))
		{
			func_1040(uParam0, 8);
		}
		return 1;
	}
	return 0;
}

int func_519(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	var uVar11;
	float fVar12;
	int iVar13;
	var uVar14;
	var uVar16;
	
	iVar0 = uParam1->f_7;
	uParam1->f_16 = 0;
	if (func_1041() == 3)
	{
		uVar3 = uParam1->f_1;
		iVar1 = uVar3;
		if (iVar1 == -1 || iVar1 >= 5)
		{
			return 0;
		}
		if (func_911(iVar1))
		{
			if (iVar1 == 0 || iVar1 == 1)
			{
				iVar2 = func_987();
				if (iVar2 != -1)
				{
					iVar4 = func_226(iVar1);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						return 0;
					}
					if (func_1042(iVar2))
					{
						if (!func_911(iVar2))
						{
							func_993(iVar1);
						}
					}
					func_996(iVar1, iVar2);
					func_997(iVar2, 2);
					func_998(iVar1);
					uParam1->f_16 = 1;
					uParam1->f_17 = iVar1;
					uParam1->f_18 = iVar2;
					if (iVar1 == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2012))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_2012, 0f);
						ENTITY::DELETE_ENTITY(&(uParam0->f_2012));
					}
					func_1000(&(Global_1914319->f_17042), iVar2, iVar4);
					iVar5 = func_1043(iVar2);
					func_592(uParam0, iVar5, 0);
					func_1014(uParam0);
				}
				else
				{
					func_988("SHOP_HORSE_HELP_NO_OPEN_STABLED_SLOTS", "", 0, 0, 4000, 0, 0, 0, 0, 1, 1);
				}
			}
			else
			{
				iVar6 = func_1044();
				if (iVar1 == -1 || iVar1 >= 7)
				{
					return 0;
				}
				if (!func_1042(iVar1) && iVar1 != 1)
				{
					return 0;
				}
				if (func_1042(iVar1))
				{
					if (func_912(iVar1) != 2)
					{
						return 0;
					}
				}
				iVar7 = func_226(iVar1);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				iVar8 = func_226(iVar6);
				bVar9 = false;
				if (func_912(0) == 1)
				{
					if (TASK::IS_PED_IN_WRITHE(iVar8))
					{
						func_994(iVar8);
						func_1045(0, iVar1);
						ENTITY::_SET_ENTITY_HEALTH(iVar8, 0, 0);
						func_998(0);
						func_996(iVar1, 0);
						func_997(0, 1);
					}
					else
					{
						func_1045(0, iVar1);
						func_996(0, iVar1);
						func_997(0, 1);
						if (iVar1 == 1)
						{
							bVar9 = true;
							func_997(iVar1, 1);
						}
						else
						{
							func_997(iVar1, 2);
							func_1000(&(Global_1914319->f_17042), iVar1, iVar8);
						}
					}
				}
				else
				{
					func_996(iVar1, 0);
					func_997(0, 1);
					func_1005(0);
					func_998(iVar1);
				}
				func_1005(0);
				func_1046();
				MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
				func_995(0);
				if (bVar9)
				{
					func_995(1);
				}
				uParam1->f_16 = 2;
				uParam1->f_17 = iVar1;
				uParam1->f_18 = 0;
				func_592(uParam0, 0, 0);
				func_986(uParam0, 1);
			}
		}
		else if (!func_278(iVar0, 0))
		{
		}
	}
	else if (func_1041() == 2)
	{
		if (!func_278(iVar0, 0))
		{
			return 0;
		}
		if (!func_1015(iVar0))
		{
			return 0;
		}
		uVar11 = uParam1->f_1;
		iVar10 = uVar11;
		if (iVar10 == -1 || iVar10 >= 5)
		{
			return 0;
		}
		if (func_911(iVar10))
		{
			uParam1->f_16 = 3;
			uParam1->f_17 = iVar10;
			uParam1->f_18 = iVar10;
			uParam1->f_19 = 0;
			fVar12 = func_1016(iVar0, func_226(iVar10));
			func_1017(uParam0, iVar0, 1, BUILTIN::ROUND(fVar12));
			if (func_1018(iVar10))
			{
				func_843(-1662430395, 1, 1, -142743235, 0);
			}
			iVar13 = func_226(iVar10);
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				if (iVar13 == PLAYER::_0xB48050D326E9A2F3(PLAYER::GET_PLAYER_INDEX()))
				{
					func_1019(&uVar16);
					func_1008(iVar13, &uVar14, &uVar16, 0);
					uParam1->f_19 = 1;
					func_1020(&(Global_1914319->f_17042));
				}
			}
			if (iVar10 == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2012))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uParam0->f_2012, 0f);
				ENTITY::DELETE_ENTITY(&(uParam0->f_2012));
			}
			if (func_911(0) && iVar10 != 0)
			{
				func_1045(iVar10, 0);
			}
			else
			{
				func_993(iVar10);
			}
			func_1021(iVar10);
			func_1013(iVar10);
			func_998(iVar10);
			Global_20709.f_2406 = Global_20709.f_2405;
			Global_20709.f_2405 = Global_20709.f_2404;
			Global_20709.f_2404 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			return 0;
		}
	}
	else if (func_1041() == 1)
	{
	}
	return 1;
}

int func_520(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;
	
	if (func_1041() == 1)
	{
		if (func_278(uParam1->f_7, 0))
		{
			if (!func_244(uParam0, -1931652360, 1, -1, 1, 0, 0, 0))
			{
			}
			func_914(uParam0, &(uParam1->f_3));
			func_1047(uParam1->f_7);
		}
		else if (!func_244(uParam0, -223810523, 1, -1, 1, 0, 0, 0))
		{
		}
	}
	else if (func_1041() == 3)
	{
		if (func_278(uParam1->f_7, 0))
		{
			if (!func_913(&(uParam1->f_3), 0))
			{
				Var0 = { func_1048(uParam0) };
				if (!func_1049(&(uParam1->f_3), &Var0, 0))
				{
					return 0;
				}
				func_1047(uParam1->f_7);
				iVar4 = func_1037(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					func_1050(iVar4, uParam1->f_7, 1);
				}
			}
		}
	}
	else if (func_1041() == 2)
	{
		if (!func_913(&(uParam1->f_3), 0))
		{
			if (!func_1051(&(uParam0->f_1999), uParam1->f_3))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_521(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	return 1;
}

int func_522(var uParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	var uVar12;
	
	iVar0 = func_1052();
	iVar1 = func_594();
	if (Param1.f_10 == 1)
	{
		iVar2 = -1;
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar1, func_1053());
		iVar3 = -1;
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar1, func_1054());
		if (iVar3 != -1 && iVar2 != -1)
		{
			if (func_1055(uParam0, iVar2, iVar3, -1, 1, 1))
			{
				func_1056(uParam0, iVar0);
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else if (Param1.f_10 == 3)
	{
		if (WEAPON::_0x0556E9D2ECF39D01(Param1.f_7))
		{
			iVar4 = 10;
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(Param1.f_7))
		{
			iVar4 = 2;
		}
		else if (WEAPON::_0x959383DCD42040DA(Param1.f_7))
		{
			iVar4 = 4;
		}
		iVar5 = func_962(uParam0);
		if (!func_1057(Param1.f_7, iVar4, iVar5))
		{
		}
		func_636(uParam0, 3, 801835943, 0, 1, 0);
		return 1;
	}
	else if (Param1.f_10 == 2)
	{
		if (WEAPON::_0x0556E9D2ECF39D01(Param1.f_7))
		{
			iVar6 = 9;
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(Param1.f_7))
		{
			iVar6 = 3;
		}
		else if (WEAPON::_0x959383DCD42040DA(Param1.f_7))
		{
			iVar6 = 4;
		}
		iVar7 = func_962(uParam0);
		Var8 = { func_669(Param1.f_7, func_668(0), iVar7, 0) };
		if ((WEAPON::_0xD955FEE4B87AFA07(Param1.f_7) && WEAPON::_0x6929E22158E52265(Global_35, iVar6, &uVar12)) && func_670(&Var8, &uVar12))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 3, false, false);
		}
		else
		{
			func_1057(Param1.f_7, iVar6, iVar7);
		}
		func_636(uParam0, 2, 621498879, 0, 1, 0);
		return 1;
	}
	return 0;
}

int func_523(var uParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (Param1.f_10 == 1)
	{
		iVar0 = func_594();
		iVar1 = -1;
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, func_1053());
		iVar2 = -1;
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, func_1054());
		if (iVar2 != -1)
		{
			bVar3 = !func_579(uParam0);
			if (iVar1 != func_299(uParam0))
			{
				if (func_1055(uParam0, iVar1, iVar2, -1, 1, bVar3))
				{
					return 1;
				}
			}
			else if (func_244(uParam0, iVar2, 1, -1, bVar3, 1, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_524(var uParam0, struct<23> Param1)
{
	var uVar0;
	struct<9> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<23> Var15;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	
	uVar0 = Param1.f_14;
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_8 = uVar0;
	iVar11 = 0;
	iVar12 = 0;
	iVar12 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var1, &iVar11, 1);
	if (iVar12 == -1)
	{
		return 0;
	}
	iVar14 = 0;
	Var15.f_14 = -1;
	Var15.f_15 = -1;
	iVar42 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
	iVar14 = 0;
	while (iVar14 < iVar11)
	{
		iVar13 = func_920(iVar14, iVar12);
		if (func_278(iVar13, 0))
		{
			if (func_921(&(uParam0->f_2031), iVar13, &uVar38) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar13, uVar0) == -2089472884)
				{
					bVar44 = true;
					iVar43 = 0;
					while (iVar43 < iVar42)
					{
						iVar41 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar43);
						if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar41))
						{
							iVar39 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar41, func_684());
							iVar40 = iVar39;
							if (func_612(iVar40, 1954943838) && func_1058(iVar13, iVar40))
							{
								bVar44 = false;
							}
							else
							{
								iVar43++;
							}
							if (bVar44)
							{
							}
							else
							{
								Var15 = { Param1 };
								Var15.f_7 = iVar13;
								Var15 = func_897(uParam0, iVar13);
								Stack.Push(uParam0);
								Stack.Push(&Var15);
								Call_Loc(uParam0->f_2031.f_123);
								if (StackVal)
								{
								}
								if (uParam0->f_2031.f_114)
								{
									Stack.Push(uParam0);
									Stack.Push(&Var15);
									Call_Loc(uParam0->f_2031.f_115);
									if (!StackVal)
									{
									}
								}
							}
							iVar14++;
							ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar12);
							return 1;
						}
					}
				}
			}
		}
	}

int func_525(var uParam0, var uParam1)
{
	return 1;
}

int func_526(var uParam0, var uParam1)
{
	int iVar0;
	
	if (uParam1->f_10 == 1)
	{
		func_846(uParam0);
		if (func_339(uParam1->f_7) == -2061583405 || func_339(uParam1->f_7) == -525676072)
		{
			func_1059();
		}
		iVar0 = func_263(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		func_662(1, 1, 0);
		func_849(166243423);
		func_127(iVar0, 1);
		func_960(iVar0);
	}
	return 1;
}

int func_527(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		func_846(uParam0);
		func_662(1, 1, 0);
		func_849(166243423);
	}
	return 1;
}

int func_528(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam1->f_10 == 1)
	{
		if (func_634(uParam0, uParam1->f_7, 761079318, -1))
		{
			iVar0 = func_956(uParam1->f_7);
		}
		else
		{
			iVar0 = uParam1->f_7;
		}
		iVar1 = func_957(iVar0);
		iVar2 = func_263(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			return 0;
		}
		func_846(uParam0);
		func_958(iVar2, iVar0, 0, iVar1, 1, 1, 1, 0, 1, 0);
		func_849(166243423);
	}
	return 1;
}

int func_529(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return func_1060(uParam0, uParam1->f_7);
	}
	return 1;
}

int func_530(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (uParam1->f_10 == 1)
	{
		iVar0 = uParam1->f_1;
		if (!func_718(iVar0))
		{
			return 0;
		}
		if (func_925(iVar0) <= 0)
		{
			return 0;
		}
		iVar1 = func_925(iVar0);
		if (func_360(1) >= iVar1)
		{
			func_1061(iVar0);
			func_1062(iVar0);
			func_971(iVar1, 0, 0, 1, 1);
			uParam0->f_2318.f_20 = iVar1;
			uParam0->f_2318.f_11 = 1;
			uParam0->f_2318.f_19 = iVar0;
		}
	}
	else if (uParam1->f_10 == 2)
	{
		iVar2 = 0;
		iVar5 = 0;
		while (iVar5 < 130)
		{
			iVar3 = -1;
			if (!func_111(iVar5))
			{
			}
			else if (!func_804(iVar5))
			{
			}
			else
			{
				iVar3 = func_1064(func_1063(iVar5, 1, 1));
				if (!func_718(iVar3))
				{
				}
				else if (iVar3 == 5)
				{
				}
				else if (func_1065(iVar4, iVar3))
				{
				}
				else
				{
					func_1066(&iVar4, iVar3);
					iVar2 = (iVar2 + func_925(iVar3));
				}
			}
			iVar5++;
		}
		if (func_360(1) >= iVar2)
		{
			func_1067();
			func_1068();
			func_971(iVar2, 0, 0, 1, 1);
			uParam0->f_2318.f_20 = iVar2;
			uParam0->f_2318.f_11 = 1;
			uParam0->f_2318.f_19 = 6;
		}
	}
	return 1;
}

int func_531(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	switch (uParam1->f_10)
	{
		case 1:
			iVar1 = uParam1->f_1;
			if (func_1069(iVar1) && func_1070(iVar1, -1))
			{
				func_1071(iVar1, 0);
				if (func_1072(5, &uVar0))
				{
					func_1073(iVar1, uVar0);
				}
			}
			func_592(uParam0, -1, 1);
			return 1;
		
		case 2:
			iVar2 = 0;
			while (iVar2 < 180)
			{
				if (func_1069(&(Global_40.f_9910[iVar2 /*6*/])) && func_1070(&(Global_40.f_9910[iVar2 /*6*/]), -1))
				{
					func_1071(&(Global_40.f_9910[iVar2 /*6*/]), 0);
					if (func_1072(5, &uVar0))
					{
						func_1073(&(Global_40.f_9910[iVar2 /*6*/]), uVar0);
					}
				}
				iVar2++;
			}
			func_592(uParam0, -1, 1);
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_532(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 1)
	{
		return func_1074(uParam0, *uParam1);
	}
	return 1;
}

bool func_533(var uParam0)
{
	return ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(uParam0);
}

int func_534(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<4> Var4;
	vector3 vVar8;
	
	if (!func_533(iParam1))
	{
		return 0;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &uVar3, &uVar1, &uVar2))
			{
				vVar8.x = uVar3;
				vVar8.f_1 = uVar2;
				vVar8.f_2 = uVar1;
				if (func_1075(uParam0, vVar8) && !func_821(vVar8.x))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_535(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	vector3 vVar4;
	struct<4> Var7;
	
	if (!func_533(iParam1))
	{
		return 0;
	}
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var7))
	{
		iVar0 = 0;
		while (iVar0 < Var7.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var7, iVar0, &iVar3, &uVar1, &uVar2))
			{
				vVar4.x = iVar3;
				vVar4.f_1 = uVar2;
				vVar4.f_2 = uVar1;
				if (func_1075(uParam0, vVar4))
				{
					if (func_1076(uParam0, iVar3))
					{
						return 1;
					}
					if (func_533(uVar2))
					{
						Stack.Push(uParam0);
						Stack.Push(uVar2);
						Stack.Push(uVar1);
						Call_Loc(uParam0->f_2031.f_125);
						if (StackVal)
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_536(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1946804->f_2535.f_2 = 0;
		Global_1946804->f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804->f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1077(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 - (Global_1946804->f_2535.f_2 && (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1078(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1))
		{
			func_1079(iVar1, (Global_1946804->f_2535.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1946804->f_2535.f_1 = (Global_1946804->f_2535.f_1 - 1);
	*(Global_1946804->f_2535.f_43[iVar0 /*2*/]) = { *(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/]) };
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = 0;
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = 0;
	return 1;
}

bool func_537(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1080(iVar0, 1);
		if (!func_1081(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (iParam0 && func_660(iVar0) == -1)
			{
				func_661(iVar0, 0);
				func_1082(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1) /*2*/], 2, 6);
			}
			func_1083(iVar2, 3, 6);
			Global_1946804->f_2456[iVar0 /*2*/] = 0;
			(Global_1946804->f_2456[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_538(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_539(int iParam0)
{
	func_1084(iParam0, 8, 6);
}

var func_540(var uParam0)
{
	return uParam0->f_12.f_1;
}

void func_541(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 0)
		{
			if (iVar0 == 6 && !bParam1)
			{
			}
			else
			{
				func_274(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_542(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2031.f_52, "ItemTooltip", sParam1);
}

void func_543(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", iParam1);
}

void func_544(var uParam0)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceVisible", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceGold", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceEnabled", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceFooterVisible", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceVisible", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemModifiedPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPriceText", -1);
}

void func_545(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", iParam1);
}

void func_546(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "IconVisible", iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "TextureDictionary", iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Texture", iParam3);
}

void func_547(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", iParam1);
}

void func_548(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "IconVisible", iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "TextureDictionary", iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Texture", iParam3);
}

void func_549(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemWeather");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Visible", 0);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "OutfitWeather");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", 0);
}

void func_550(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "SaddleStatsVisible", iParam1);
}

void func_551(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "StirrupStatsVisible", iParam1);
}

char* func_552()
{
	return "uiPaletteVisible";
}

int func_553(var uParam0, bool bParam1)
{
	int iVar0;
	
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1085(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	return 1;
}

int func_554(var uParam0, bool bParam1)
{
	int iVar0;
	
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1085(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	func_667(uParam0, func_961(uParam0), 0);
	return 1;
}

int func_555(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	return 1;
}

int func_556(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	return 1;
}

int func_557(var uParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	if (func_1088(uParam0))
	{
		uVar1 = func_959(uParam0);
		func_1089(uParam0, uVar1, 0);
	}
	else
	{
		func_549(uParam0);
	}
	return 1;
}

int func_558(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	func_832(uParam0, 0);
	return 1;
}

int func_559(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	iVar1 = func_619(uParam0);
	iVar2 = func_620(uParam0);
	func_1090(uParam0, iVar2, iVar1, iVar1, 0, 1);
	if (uParam0->f_2 == 25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ShavingSplitterVisible", 0);
	}
	return 1;
}

int func_560(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_67))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_67 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	func_832(uParam0, 0);
	return 1;
}

int func_561(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	iVar1 = func_961(uParam0);
	if (func_278(iVar1, 0))
	{
		func_667(uParam0, iVar1, 0);
	}
	return 1;
}

int func_562(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_67))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_67 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_563(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_291(uParam0);
	iVar0 = func_1091(&(uParam0->f_2031));
	if (!func_1086(uParam0, iVar0))
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ItemPalettePriceVisible", 0);
	return 1;
}

int func_564(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_291(uParam0);
	iVar0 = func_1091(&(uParam0->f_2031));
	if (!func_1086(uParam0, iVar0))
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ItemPalettePriceVisible", 1);
	return 1;
}

int func_565(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_605(uParam0))
	{
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_63))
	{
		uParam0->f_2031.f_63 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeTextList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_63);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		uParam0->f_2031.f_64 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_50, "ItemRecipeImageList");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	func_1092(uParam0, 0);
	func_1093(uParam0, 0);
	func_1094(uParam0, 1);
	return 1;
}

int func_566(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	if (!func_1086(uParam0, func_1095()))
	{
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_67))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, 0, 0);
	}
	else
	{
		uParam0->f_2031.f_67 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_2031.f_50, "Effects", 0, 0);
	}
	func_1096(uParam0, 0);
	return 1;
}

int func_567(var uParam0, bool bParam1)
{
	int iVar0;
	
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (func_721() != 0 || (func_721() == 0 && func_722() == 5))
	{
		iVar0 = 1;
	}
	func_1086(uParam0, (4 + iVar0));
	if (!uParam0->f_2031.f_79)
	{
		func_1093(uParam0, 0);
	}
	return 1;
}

int func_568(var uParam0, bool bParam1)
{
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	func_1086(uParam0, 10);
	return 1;
}

int func_569(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		if (!func_605(uParam0))
		{
		}
	}
	iVar0 = 0;
	if (!func_1087(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	return 1;
}

int func_570(var uParam0, bool bParam1)
{
	func_1097(2);
	func_1097(1024);
	return 1;
}

int func_571(var uParam0, bool bParam1)
{
	func_1097(2);
	func_1097(1024);
	return 1;
}

int func_572(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar1 = func_1098(uParam0->f_3);
	iVar2 = func_1099();
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!func_1100(iVar3, &iVar4))
		{
		}
		else if (!func_1101(iVar1, iVar4))
		{
		}
		else if (iVar4 == iVar1)
		{
		}
		else
		{
			iVar0++;
		}
		iVar3++;
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	func_832(uParam0, 0);
	func_636(uParam0, 1, -2494464, 1, 1, 0);
	return 1;
}

int func_573(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!bParam1)
	{
	}
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < 130)
	{
		iVar1 = -1;
		if (!func_111(iVar3))
		{
		}
		else if (!func_804(iVar3))
		{
		}
		else
		{
			iVar1 = func_1064(func_1063(iVar3, 1, 1));
			if (!func_718(iVar1))
			{
			}
			else if (iVar1 == 5)
			{
			}
			else if (func_1065(iVar2, iVar1))
			{
			}
			else
			{
				func_1066(&iVar2, iVar1);
				iVar0++;
			}
		}
		iVar3++;
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	func_832(uParam0, 0);
	func_636(uParam0, 1, -1217561127, 0, 1, 0);
	func_636(uParam0, 2, -1789759600, 0, 1, 1);
	return 1;
}

int func_574(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (func_1069(&(Global_40.f_9910[iVar1 /*6*/])) && func_1070(&(Global_40.f_9910[iVar1 /*6*/]), -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		func_468();
		return 1;
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	return 1;
}

int func_575(var uParam0, bool bParam1)
{
	func_591(uParam0, func_261(uParam0));
	if (!func_1086(uParam0, 3))
	{
	}
	return 1;
}

int func_576(var uParam0, bool bParam1)
{
	int iVar0;
	
	func_591(uParam0, func_245(&(uParam0->f_2031)));
	iVar0 = 0;
	if (!func_1085(uParam0, func_261(uParam0), &iVar0))
	{
	}
	if (!func_1086(uParam0, iVar0))
	{
	}
	func_1096(uParam0, 0);
	return 1;
}

int func_577(var uParam0)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = func_1102(uParam0);
	if (iVar0 > 0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam0, uParam0->f_12, 0, &Var1))
		{
			uParam0->f_31[uParam0->f_42] = uParam0->f_12;
			uParam0->f_20[uParam0->f_42] = uParam0->f_19;
			uParam0->f_42++;
			uParam0->f_12 = { Var1 };
			uParam0->f_19 = 0;
			return 1;
		}
	}
	return 0;
}

int func_578(int iParam0, var uParam1)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = func_1102(uParam1);
	if (iVar0 > 0)
	{
		if (iParam0 >= 0 && iParam0 < iVar0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, func_583(uParam1), iParam0, &Var1))
			{
				uParam1->f_19 = iParam0;
				uParam1->f_12 = { Var1 };
				return 1;
			}
		}
	}
	return 0;
}

bool func_579(var uParam0)
{
	return uParam0->f_2031.f_98;
}

var func_580(var uParam0)
{
	return uParam0->f_2031.f_99;
}

void func_581(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_59))
	{
		uParam0->f_2031.f_59 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_2031.f_50, 924730110);
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_59);
	}
	uParam0->f_2031.f_72 = 0;
	func_643(uParam0, 0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_60))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2031.f_60);
	}
	uParam0->f_2031.f_60 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_50, -248239712);
}

void func_582()
{
	var uVar0;
	
	Global_1914319->f_16855.f_3.f_8 = 0;
	Global_1914319->f_16855.f_3.f_9 = 0;
	Global_1914319->f_16855.f_3.f_10 = uVar0;
	Global_1914319->f_16855.f_3.f_11 = 0;
	Global_1914319->f_16855.f_3.f_12 = 0;
	Global_1914319->f_16855.f_3.f_13 = uVar0;
}

int func_583(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return &(uParam0->f_31[(uParam0->f_42 - 1)]);
		}
	}
	return func_1103(uParam0);
}

int func_584(var uParam0, var uParam1)
{
	if (uParam0->f_42 > 1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam0, func_583(uParam0), uParam1))
		{
			return 1;
		}
	}
	else
	{
		*uParam1 = { uParam0->f_5 };
		return 1;
	}
	return 0;
}

int func_585(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	iVar0 = func_1091(&(uParam0->f_2031));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_589(iVar1, &(uParam0->f_2031), &uVar3))
		{
			if (!func_1104(uParam0, iVar1))
			{
			}
			else
			{
				if (iVar2 == iParam1)
				{
					*iParam2 = iVar1;
					return 1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_586(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return -1;
	}
	iVar0 = func_1091(uParam1);
	if (iParam0 < 0 || iParam0 >= iVar0)
	{
		return -1;
	}
	iVar1 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar1))
	{
		return iVar1;
	}
	return -1;
}

int func_587(int iParam0)
{
	return iParam0;
}

int func_588(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_2031.f_50, func_1105());
}

int func_589(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(*uParam1, iVar0, uParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_590(var uParam0, int iParam1)
{
	if (func_1106(func_299(uParam0), iParam1, 1))
	{
		return 703647745;
	}
	if (func_1106(func_299(uParam0), iParam1, 16))
	{
		return 644372540;
	}
	if (func_1106(func_299(uParam0), iParam1, 32))
	{
		return 931007774;
	}
	return iParam1;
}

void func_591(var uParam0, int iParam1)
{
	int iVar0;
	
	if (uParam0->f_16 == 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = uParam0->f_16;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_56))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_2031.f_56, iVar0);
	}
	else
	{
		uParam0->f_2031.f_56 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "PageFilterCurrentPageLabel", iVar0);
	}
}

int func_592(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_288()))
	{
		return 0;
	}
	DATABINDING::_VIRTUAL_COLLECTION_RESET(func_288());
	if (iParam1 >= 0)
	{
		uParam0->f_2031.f_101 = iParam1;
	}
	if (bParam2)
	{
		func_470(uParam0);
	}
	return 1;
}

int func_593()
{
	return Global_1914319->f_16855.f_3.f_1;
}

var func_594()
{
	return Global_1914319->f_16855.f_3.f_7;
}

int func_595()
{
	return Global_1914319->f_16855.f_3.f_5;
}

void func_596(int iParam0)
{
	Global_1914319->f_16855.f_3.f_7 = *iParam0;
}

char* func_597()
{
	return "uiItemEnum";
}

void func_598(int iParam0)
{
	Global_1914319->f_16855.f_3.f_6 = iParam0;
}

void func_599(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1914319->f_16855.f_3.f_1 == -729996127)
	{
		func_1107(uParam0->f_2031.f_71);
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_59, uParam0->f_2031.f_71);
		func_596(&iVar0);
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, func_597());
		iVar2 = iVar1;
		func_598(iVar2);
	}
}

void func_600(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_262(uParam0);
	uVar1 = func_1108(uParam0, func_595());
	uParam1->f_11 = iVar0;
	uParam1->f_12 = uVar1;
	uParam1->f_13 = func_261(uParam0);
	*uParam1 = func_1109();
	uParam1->f_7 = func_1052();
	uParam1->f_1 = func_1110();
	uParam1->f_2 = func_595();
	uParam1->f_8 = func_594();
	uParam1->f_10 = func_1041();
	uParam1->f_21 = func_618(uParam0);
	uParam1->f_22 = func_620(uParam0);
	uParam1->f_3 = { func_1111(&(uParam1->f_8)) };
	uParam1->f_14 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_594(), func_1053());
	uParam1->f_15 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_594(), func_1054());
}

bool func_601(var uParam0, int iParam1)
{
	return func_1112(&(uParam0->f_2031), iParam1);
}

int func_602(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2031.f_97)
	{
		iVar0 = func_1037(uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0xA0BC8FAED8CFEB3C(iVar0))
			{
				func_1113(iVar0);
			}
			else
			{
				uParam0->f_2307 = iVar0;
			}
			uParam0->f_2031.f_97 = 0;
		}
	}
	return 1;
}

void func_603(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = func_277(0);
	iVar1 = func_607(0);
	iVar2 = func_616(0);
	if (func_278(iVar0, 0))
	{
		if (iVar2 != -348190488)
		{
			if (func_1114(iVar0))
			{
				bVar3 = true;
				if (uParam0->f_3 != 152)
				{
					if (func_827(iVar0) == -1037537535)
					{
						if (func_835(uParam0, iVar0, -853534656))
						{
							bVar3 = false;
						}
					}
				}
				if (bVar3)
				{
					func_279(iVar0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, func_1115(), 0);
				}
			}
		}
	}
}

int func_604(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return 1;
		
		case 2057502022:
			return 1;
		
		case -996064024:
			return func_1116(uParam0, uParam2);
		
		case -706012851:
			return 1;
		
		case -645366665:
			return 1;
		
		case -252412307:
			return 1;
		
		case 115613670:
			return 1;
		
		case -659372875:
			return 1;
		
		case 2144984909:
			return 1;
		
		case -856183175:
			return func_1117(uParam0, uParam2);
		
		case 1705401718:
			return func_1118(uParam0, uParam2);
		
		case 310306577:
			return func_1119(uParam0, uParam2);
		
		case 1275816411:
			return 1;
		
		case 178644271:
			return func_1120(uParam0, uParam2);
		
		case 1860655620:
			return func_1121(uParam0, uParam2);
		
		case 94016929:
			return func_1122(uParam0, uParam2);
		
		case 803749366:
			return 1;
		
		case -2144266389:
			return 1;
		
		case -1548684311:
			return func_1123(uParam0, uParam2);
		
		case 1965673387:
			return func_1124(uParam0, uParam2);
	}
	return 1;
}

int func_605(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	uParam0->f_2031.f_74 = 0;
	iVar1 = 0;
	iVar1 = func_1091(&(uParam0->f_2031));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				if (!func_1104(uParam0, iVar2))
				{
				}
				else
				{
					uParam0->f_2031.f_74++;
				}
			}
			iVar2++;
		}
		if (uParam0->f_2031.f_73 >= uParam0->f_2031.f_74)
		{
			uParam0->f_2031.f_73 = (uParam0->f_2031.f_74 - 1);
		}
		if (func_585(uParam0, uParam0->f_2031.f_73, &iVar2))
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				func_591(uParam0, func_590(uParam0, iVar3));
			}
		}
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "CategoryCount", uParam0->f_2031.f_74);
	uParam0->f_2031.f_55 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, func_1105(), 0);
	return iVar0;
}

void func_606(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = func_1052();
	iVar1 = func_1109();
	if (func_278(iVar0, 0))
	{
		if (iVar1 != -348190488)
		{
			if (func_1114(iVar0))
			{
				bVar2 = true;
				iVar3 = func_594();
				if (uParam0->f_3 != 152)
				{
					if (func_827(iVar0) == -1037537535)
					{
						if (func_835(uParam0, iVar0, -853534656))
						{
							bVar2 = false;
						}
					}
				}
				if (bVar2)
				{
					func_279(iVar0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, func_1115(), 0);
				}
			}
		}
	}
}

var func_607(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_16;
	}
	return Global_1914319->f_16855.f_3.f_10;
}

void func_608(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_20 = Global_1914319->f_16855.f_3.f_16;
		Global_1914319->f_16855.f_3.f_16 = *iParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_13 = Global_1914319->f_16855.f_3.f_10;
		Global_1914319->f_16855.f_3.f_10 = *iParam0;
	}
}

void func_609(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_19 = Global_1914319->f_16855.f_3.f_15;
		Global_1914319->f_16855.f_3.f_15 = iParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_12 = Global_1914319->f_16855.f_3.f_9;
		Global_1914319->f_16855.f_3.f_9 = iParam0;
	}
}

void func_610(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_262(uParam1);
	uParam0->f_11 = iVar0;
	*uParam0 = func_616(bParam2);
	uParam0->f_12 = func_261(uParam1);
	uParam0->f_7 = func_622(bParam2);
	uParam0->f_8 = func_1125(bParam2);
	uParam0->f_9 = func_277(bParam2);
	uParam0->f_1 = func_652(bParam2);
	uParam0->f_2 = func_466(bParam2);
	uParam0->f_10 = func_607(bParam2);
	uParam0->f_13 = func_1126(bParam2);
	uParam0->f_14 = func_1127(bParam2);
	uParam0->f_15 = func_618(uParam1);
	uParam0->f_16 = func_620(uParam1);
	uParam0->f_3 = { func_1111(&(uParam0->f_10)) };
	uParam0->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_607(bParam2), func_1053());
	uParam0->f_14 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_607(bParam2), func_1054());
}

int func_611(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return func_1128(uParam0);
		
		case 2057502022:
			return func_1129(uParam0);
		
		case -706012851:
			return func_1130(uParam0);
		
		case -996064024:
			return func_1131(uParam0);
		
		case -645366665:
			return func_1132(uParam0);
		
		case -252412307:
			return func_1133(uParam0);
		
		case -659372875:
			return func_1134(uParam0);
		
		case 2144984909:
			return func_1135(uParam0);
		
		case 115613670:
			return func_1136(uParam0);
		
		case -856183175:
			return func_1137(uParam0);
		
		case 310306577:
		case 1705401718:
			return func_1138(uParam0, uParam2);
		
		case 178644271:
			return func_1139(uParam0);
		
		case 1275816411:
			return func_1140(uParam0);
		
		case 1860655620:
			return func_1141(uParam0, uParam2);
		
		case 94016929:
			return func_1142(uParam0);
		
		case 803749366:
			return 1;
		
		case -2144266389:
			return func_1143(uParam0);
		
		case -1548684311:
			return func_1144(uParam0);
		
		case 23814986:
			return func_1145(uParam0);
		
		case 1965673387:
			return func_1146(uParam0, uParam2);
	}
	return 1;
}

int func_612(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_613(var uParam0, var uParam1)
{
	struct<9> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if (*uParam1 == 1702073444)
	{
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1;
		Var0.f_3 = -1;
		Var0.f_4 = -1;
		Var0.f_5 = -1;
		Var0.f_6 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1;
		Var0.f_8 = uParam1->f_13;
		iVar10 = 0;
		iVar11 = 0;
		iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
		if (iVar11 == -1)
		{
			return 0;
		}
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 < iVar10)
		{
			iVar12 = func_920(iVar13, iVar11);
			if (func_278(iVar12, 0))
			{
				if (func_1147(uParam0, iVar12))
				{
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
					return 1;
				}
			}
			iVar13++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
		if (func_1147(uParam0, uParam1->f_9))
		{
			return 1;
		}
	}
	else if (func_1147(uParam0, uParam1->f_9))
	{
		return 1;
	}
	iVar14 = func_1148(uParam0);
	bVar15 = func_360(1) >= iVar14;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ItemPalettePriceEnabled", bVar15);
	func_1149(uParam0, -2089226131, 0, iVar14, 0);
	func_637(uParam0, bVar15);
	return 0;
}

int func_614(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	int iVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar31;
	char* sVar32;
	char* sVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	bool bVar37;
	char* sVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	iVar0 = uParam1->f_9;
	func_1150(&iVar0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = *uParam1;
	sVar2 = "";
	iVar3 = func_671(iVar0, 0);
	iVar4 = func_1151(iVar0, 0);
	iVar16 = 0;
	bVar17 = func_1152(uParam0, iVar0);
	bVar18 = func_1153(func_903(iVar0, 0));
	if (func_262(uParam0) == 310306577)
	{
		bVar18 = func_1153(func_1148(uParam0));
	}
	switch (iVar1)
	{
		case -1048755899:
		case -384358143:
		case 2036169888:
			if (iVar3 == iVar4)
			{
				sVar2 = MISC::_CREATE_VAR_STRING(130, "SHOP_TOOLTIP_ITEM_FULL_COUNT", iVar3, iVar4, MISC::_CREATE_VAR_STRING(0, func_1154(iVar0)));
			}
			else if (!bVar18)
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-1119897106);
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(130, "SHOP_TOOLTIP_ITEM_COUNT", iVar3, iVar4, MISC::_CREATE_VAR_STRING(0, func_1154(iVar0)));
			}
			if (bVar17)
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "SHOP_TOOLTIP_ITEM_LOCKED");
			}
			break;
		
		case -1502467280:
		case -1395073769:
		case -853534656:
		case -584027224:
		case 777890122:
		case 1394581936:
			if (!bVar18 && !func_835(uParam0, iVar0, iVar1))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-1119897106);
			}
			else if (func_634(uParam0, iVar0, iVar1, -1))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-835900986);
			}
			else if (((uParam0->f_2 == 18 && ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar0, &vVar9)) && vVar9.z == -1037537535) && !func_909(Global_35, iVar0, &iVar16))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(iVar16);
			}
			else if (func_835(uParam0, iVar0, iVar1))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(1387842121);
			}
			else
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-2064544801);
			}
			iVar19 = uParam0->f_3;
			if (func_929(func_928(uParam0)))
			{
				iVar19 = func_928(uParam0);
			}
			if (func_339(iVar0) == -999503751)
			{
				vVar20 = 3;
				if (func_1155(iVar0, iVar19, &vVar20))
				{
					iVar31 = 0;
					while (iVar31 < vVar20.f_10)
					{
						if ((vVar20[iVar31 /*3*/])->f_2)
						{
							switch (&vVar20[iVar31 /*3*/])
							{
								case -253134813:
									sVar2 = MISC::_CREATE_VAR_STRING(2, "SHOP_TOOLTIP_ITEM_LOCKED_HONOR");
									break;
							}
						}
						iVar31++;
					}
				}
			}
			if (uParam0->f_2 == 18)
			{
				if (func_1039(iVar0))
				{
					sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(1317810363);
				}
			}
			break;
		
		case -349391286:
			if (uParam0->f_2 == 18)
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS_TRP";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS_TRP";
			}
			else if (uParam0->f_2 == 19)
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS_PRS";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS_PRS";
			}
			else
			{
				sVar32 = "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS";
				sVar33 = "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS";
			}
			func_933(uParam0->f_2, &iVar34);
			if (func_932(iVar0, 0))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(1387842121);
			}
			else if (bVar17)
			{
				if (uParam0->f_2 == 19)
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "SHOP_TOOLTIP_UNMENT_REQUIREMENTS_PRS");
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				}
			}
			else if (func_360(1) < func_940(iVar0, iVar34))
			{
				sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-1119897106);
			}
			else
			{
				iVar35 = func_934(uParam0->f_2);
				if (!func_936(iVar0, iVar34, 1, 1, iVar35, 1))
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, sVar32);
				}
				else if (((uParam0->f_2 == 18 && ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar0, &vVar9)) && vVar9.z == -1037537535) && !func_909(Global_35, iVar0, &iVar16))
				{
					sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(iVar16);
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, sVar33);
				}
			}
			break;
		
		case -760956867:
			iVar8 = 1;
			if (!func_638(iVar0, &iVar8))
			{
				switch (iVar8)
				{
					case 4:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-1975076989);
						break;
					
					case 2:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-541416869);
						break;
					
					case 3:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(1589147725);
						break;
				}
			}
			break;
		
		case 38807286:
			iVar8 = 1;
			if (!func_639(iVar0, &iVar8))
			{
				switch (iVar8)
				{
					case 4:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-1975076989);
						break;
					
					case 2:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(-541416869);
						break;
					
					case 3:
						sVar2 = HUD::_GET_LABEL_TEXT_BY_HASH(1589147725);
						break;
				}
			}
			break;
		
		case 2077448405:
			iVar5 = func_1156(-999503751, 1);
			iVar6 = func_1157(-999503751, 1);
			if (iVar5 >= iVar6)
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_OUTFITS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_OUTFITS_ON_HORSE_TOOLTIP", iVar5, iVar6);
			}
			break;
		
		case 1942587409:
			iVar7 = func_339(iVar0);
			if (func_821(iVar0))
			{
				if (!func_634(uParam0, iVar0, 1942587409, -1))
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, -1779818913, HUD::_GET_LABEL_TEXT_BY_HASH(func_1158(iVar7)));
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, 287622369, func_1159(iVar0));
				}
			}
			else
			{
				iVar5 = func_1156(-525676072, 1);
				iVar6 = func_1157(-525676072, 1);
				if (!func_825(-525676072, 1))
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_MASKS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_MASKS_ON_HORSE_TOOLTIP", iVar5, iVar6);
				}
			}
			break;
		
		case 761079318:
			iVar7 = func_339(iVar0);
			switch (iVar7)
			{
				case -1719060085:
				case -923693316:
				case -839140560:
				case -298391753:
				case -163032984:
				case 502936876:
				case 1282123855:
				case 1545016984:
				case 1769055947:
				case 2016058810:
				case 2047428024:
					bVar36 = true;
					break;
				
				default:
					bVar36 = false;
					break;
			}
			bVar37 = func_634(uParam0, iVar0, iVar1, -1);
			iVar39 = func_261(uParam0);
			iVar40 = iVar39;
			if (func_278(iVar40, 0) && func_612(iVar40, -393037696))
			{
				sVar38 = func_1159(iVar40);
			}
			else
			{
				sVar38 = func_1159(iVar0);
			}
			if (bVar37)
			{
				if (bVar36)
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, 220200945, sVar38);
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, -321520534, sVar38);
				}
			}
			else if (bVar36)
			{
				sVar2 = MISC::_CREATE_VAR_STRING(8, -682383052, sVar38);
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(8, -1889410522, sVar38);
			}
			if (func_821(iVar0))
			{
				if (!bVar37)
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, -1779818913, HUD::_GET_LABEL_TEXT_BY_HASH(func_1158(iVar7)));
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(8, 287622369, func_1159(iVar0));
				}
			}
			else if (iVar7 == -2061583405)
			{
				iVar5 = func_1156(-2061583405, 1);
				iVar6 = func_1157(-2061583405, 1);
				if (!func_825(-2061583405, 1))
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_HATS_ON_HORSE_FULL_TOOLTIP", iVar5, iVar6);
				}
				else
				{
					sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_HATS_ON_HORSE_TOOLTIP", iVar5, iVar6);
				}
			}
			break;
		
		case -2056428614:
			iVar41 = func_1160(&(Global_1946804->f_1378));
			if (iVar41 < 2)
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_TALISMAN_COUNT_TOOLTIP", iVar41, 2);
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "WARDROBE_TALISMAN_COUNT_TOOLTIP_FULL", iVar41, 2);
			}
			break;
		
		case -348190488:
			sVar2 = MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_STYLE_SELECT_TOOLTIP", HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_1));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		func_542(uParam0, sVar2);
	}
	return 1;
}

int func_615(bool bParam0)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_1161(bParam0), func_649());
	return iVar0;
}

int func_616(bool bParam0)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_607(bParam0), func_649());
	return iVar0;
}

void func_617(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = func_466(bParam1);
	iVar1 = func_1162(bParam1);
	if (iVar0 != iVar1)
	{
		iVar2 = func_1163(bParam1);
		iVar3 = func_1161(bParam1);
		iVar4 = func_615(bParam1);
		if (func_278(iVar2, 0))
		{
			if (iVar4 != -348190488)
			{
				if (func_1114(iVar2))
				{
					bVar5 = true;
					if (uParam0->f_3 != 152)
					{
						if (func_827(iVar2) == -1037537535)
						{
							if (func_835(uParam0, iVar2, -853534656))
							{
								bVar5 = false;
							}
						}
					}
					if (bVar5)
					{
						func_279(iVar2);
						DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, func_1115(), 0);
					}
				}
			}
			else if (func_1114(iVar2))
			{
				func_279(iVar2);
			}
		}
	}
}

var func_618(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1184271882);
}

var func_619(var uParam0)
{
	var uVar0;
	
	uVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	return uVar0;
}

var func_620(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 997560919);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		default:
			return -1;
	}
	return -1;
}

bool func_622(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319->f_16855.f_3.f_16, func_1164());
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319->f_16855.f_3.f_10, func_1164());
}

int func_623(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1569227938, bParam1);
	return 1;
}

int func_624(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	func_658();
	if (!func_756(&(Global_1946804->f_1378), &iVar0, iParam0, -1, 0, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[0 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[1 /*5*/];
	}
	if (iParam4 == -1)
	{
		iParam4 = &Global_40.f_7731[2 /*5*/];
	}
	func_1165(iParam2, iParam3, iParam4);
	if ((iParam2 == 0 && iParam3 == 0) && iParam4 == 0)
	{
		func_1166(iParam1, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1166(iParam1, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_94(1, 96, 0, 0, 0);
		}
		else
		{
			func_94(1, 96, 1, iParam1, 0);
		}
	}
	func_336(1);
	return 1;
}

void func_625(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1881423545:
			func_906(Global_35, iParam1, 1);
			break;
	}
}

void func_626(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 1024854903:
			iVar0 = (func_1167(0) - iParam1);
			iVar1 = (func_1167(1) - iParam1);
			iVar2 = (func_1167(2) - iParam1);
			if (iVar0 <= -1)
			{
				iVar0 = 0;
			}
			if (iVar1 <= -1)
			{
				iVar1 = 0;
			}
			if (iVar2 <= -1)
			{
				iVar2 = 0;
			}
			func_1168(Global_35, iVar0, iVar1, iVar2, 1);
			break;
		
		case 1224358974:
			func_1168(Global_35, (func_1167(0) - iParam1), -1, -1, 1);
			break;
		
		case 1107981273:
			func_1168(Global_35, -1, (func_1167(1) - iParam1), -1, 1);
			break;
		
		case 1792152856:
			func_1168(Global_35, -1, -1, (func_1167(2) - iParam1), 1);
			break;
	}
}

int func_627(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	
	func_1169(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (&uVar0[iVar4] > &uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return &(uVar0[iVar5]);
}

int func_628(int iParam0, int iParam1)
{
	var uVar0[3];
	int iVar4[3];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (!func_1169(iParam0, &uVar0))
	{
		return 0;
	}
	iVar9 = 0;
	iVar10 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (&uVar0[iVar8] < &uVar0[iVar9])
		{
			iVar9 = iVar8;
		}
		if (&uVar0[iVar8] > &uVar0[iVar10])
		{
			iVar10 = iVar8;
		}
		iVar8++;
	}
	iVar4[0] = func_1170(0);
	iVar4[2] = func_1170(2);
	iVar4[1] = func_1170(1);
	iVar12 = (uVar0[iVar10] - iVar4[iVar10]) // PointerArith;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (&uVar0[iVar8] != -1)
		{
			iVar11 = (uVar0[iVar8] - uVar0[iVar10]) // PointerArith;
			if (&iVar4[iVar8] > (&uVar0[iVar8] + iVar12))
			{
				iVar4[iVar8] = (&uVar0[iVar8] + iVar12);
			}
			if (&iVar4[iVar8] > (iParam1 - iVar11))
			{
				iVar4[iVar8] = (iParam1 - iVar11);
			}
			if (&iVar4[iVar8] < &uVar0[iVar8])
			{
				iVar4[iVar8] = &uVar0[iVar8];
			}
		}
		else
		{
			iVar4[iVar8] = 1;
		}
		iVar8++;
	}
	if (!func_624(iParam0, Global_35, &(iVar4[0]), &(iVar4[1]), &(iVar4[2]), 1))
	{
		return 0;
	}
	return 1;
}

int func_629()
{
	if (func_1171() == 1160113249)
	{
		return -1392593303;
	}
	return 1156231582;
}

int func_630(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1172(iParam0, 0, 1, 1, 1))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		iParam2 = Global_40.f_7748.f_1;
	}
	func_1173(iParam2);
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam1, 0);
		}
	}
	func_336(1);
	return 1;
}

bool func_631(int iParam0)
{
	return (iParam0 == 642397982 || iParam0 == -312175403);
}

int func_632()
{
	return &(Global_1946804->f_1497.f_1[1 /*3*/]);
}

int func_633(int iParam0, var uParam1)
{
	int iVar0;
	
	if (!func_1174(iParam0, &iVar0))
	{
		return 0;
	}
	*uParam1 = &Global_1946804->f_1497.f_1[func_656(iVar0, 1) /*3*/];
	return 1;
}

int func_634(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	vector3 vVar14;
	struct<4> Var17;
	struct<9> Var21;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<4> Var41;
	int iVar45;
	int iVar46;
	struct<4> Var47;
	struct<4> Var52;
	int iVar56;
	struct<14> Var57;
	int iVar71;
	int iVar72;
	struct<11> Var73;
	int iVar87;
	int iVar88;
	var uVar89;
	var uVar90;
	int iVar91;
	vector3 vVar92;
	struct<4> Var95;
	struct<9> Var99;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	var uVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	struct<11> Var117;
	struct<14> Var131;
	
	iVar0 = 0;
	if (iParam2 == -1502467280 || iParam2 == 777890122)
	{
		if (func_612(iParam1, 1844906744))
		{
			iVar0 = 1;
			vVar1.f_1 = -1;
			vVar1.f_2 = -1;
			iVar5 = func_276(uParam0);
			if (func_963(func_724(&(uParam0->f_2031)), iVar5, &Var6))
			{
				iVar4 = 0;
				while (iVar4 < Var6.f_3)
				{
					vVar1 = { func_964(iVar4, Var6, &(uParam0->f_2031)) };
					if (vVar1.x != iParam1 && func_278(vVar1.x, 0))
					{
						if (func_634(uParam0, vVar1.x, func_897(uParam0, vVar1.x), -1))
						{
							iVar0 = 0;
						}
					}
					iVar4++;
				}
			}
		}
		else if (func_612(iParam1, 188214926))
		{
			uVar12 = func_919(uParam0);
			iVar13 = func_276(uParam0);
			vVar14.f_1 = -1;
			vVar14.f_2 = -1;
			Var21 = -1;
			Var21.f_1 = -1;
			Var21.f_2 = -1;
			Var21.f_3 = -1;
			Var21.f_4 = -1;
			Var21.f_5 = -1;
			Var21.f_6 = -1;
			Var21.f_7 = -1;
			Var21.f_8 = -1;
			if (func_963(func_724(&(uParam0->f_2031)), iVar13, &Var17))
			{
				iVar10 = 0;
				while (iVar10 < Var17.f_3)
				{
					vVar14 = { func_964(iVar10, Var17, &(uParam0->f_2031)) };
					if (vVar14.x == iParam1 && func_278(vVar14.x, 0))
					{
						Var21.f_8 = vVar14.y;
						iVar32 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var21, &iVar31, 1);
						if (iVar32 == -1)
						{
						}
						else
						{
							iVar33 = 0;
							while (iVar33 < iVar31)
							{
								iVar34 = func_920(iVar33, iVar32);
								if (((func_278(iVar34, 0) && iVar34 != iParam1) && func_921(&(uParam0->f_2031), iVar34, &uVar11)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar34, Var21.f_8) == -2089472884)
								{
									uParam0->f_2031.f_73 = uVar11;
									uVar35 = func_897(uParam0, iVar34);
									if (func_634(uParam0, iVar34, uVar35, -1))
									{
										iVar0 = 1;
									}
									else
									{
										iVar33++;
									}
									uParam0->f_2031.f_73 = uVar12;
									ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar32);
									Jump @534; //curOff = 522
									iVar10++;
									Jump @562; //curOff = 534
									iVar36 = func_961(uParam0);
									iVar0 = func_965(iVar36, iParam1, func_962(uParam0), 0);
									Jump @1801; //curOff = 562
									if (iParam2 == -760956867)
									{
										if (iParam1 != 1279130184)
										{
											return func_902(iParam1);
										}
										else
										{
											return func_900();
										}
									}
									else if (iParam2 == 38807286)
									{
										return func_1175(iParam1);
									}
									else if ((((iParam2 == -853534656 || iParam2 == 761079318) || iParam2 == 1942587409) || iParam2 == -2056428614) || iParam2 == 2077448405)
									{
										if (func_339(iParam1) == -999503751)
										{
											if (func_1176(iParam1))
											{
												return func_1177(iParam1, &(Global_1946804->f_1497));
											}
											else
											{
												return func_820() == iParam1;
											}
										}
										if (func_821(iParam1))
										{
											if (iParam1 == -992705550)
											{
												iVar37 = func_1178(1742327865);
												if (!func_908(iVar37))
												{
													return 1;
												}
											}
											else if (iParam1 == -383172193)
											{
												iVar38 = func_1178(1742327865);
												if (func_908(iVar38))
												{
													return 1;
												}
											}
											else if (iParam1 == -1870922521)
											{
												iVar39 = func_1178(1108822547);
												if (!func_907(iVar39))
												{
													return 1;
												}
											}
											iParam1 = func_956(iParam1);
										}
										return func_824(iParam1);
									}
									else if (iParam2 == 1394581936)
									{
										if (func_125() == -1)
										{
											if (func_1022(iParam1))
											{
												iVar40 = func_444(7);
												if (iVar40 == -1)
												{
													return 0;
												}
												if (func_1023(iParam1))
												{
													iVar0 = func_1179(iVar40, iParam1);
												}
												if (func_1025(iParam1))
												{
													iVar0 = func_1180(iVar40, iParam1);
												}
											}
											else
											{
												iVar0 = func_1181(iParam1);
											}
										}
									}
									else if (iParam2 == -584027224)
									{
										Var41 = { func_669(-1838434463, func_1182(0), 1084182731, 1) };
										iVar45 = func_339(iParam1);
										switch (iVar45)
										{
											case -1015460895:
											case -768291983:
											case 1193257440:
											case 1415299667:
											case 1795979421:
												if (iParam1 == func_974(Var41, func_1183(iVar45), 1))
												{
													return 1;
												}
												break;
											
											case 526314052:
											case 1206030994:
												if (func_932(iParam1, 0))
												{
													return 1;
												}
												break;
										}
									}
									else if (iParam2 == 1702073444)
									{
										if (func_1184(iParam1))
										{
											if (iParam3 == -1)
											{
												return 0;
											}
											iVar46 = func_961(uParam0);
											if (!func_278(iVar46, 0))
											{
												return 0;
											}
											Var47 = { func_1185(iVar46, 0, 0) };
											Var52 = { func_669(iVar46, Var47, func_962(uParam0), 0) };
											iVar56 = iParam3;
											if (iVar56 == 0)
											{
												return 0;
											}
											Var57 = { func_979(0, -1591664384, -1591664384, -1591664384, 0, iVar56) };
											if (func_980(&Var57, &iVar71, &iVar72, 0))
											{
												Var73.f_9 = -1591664384;
												iVar87 = 0;
												while (iVar87 < iVar72)
												{
													if (func_981(&Var73, iVar87, iVar71, iVar72))
													{
														if (func_670(&(Var73.f_5), &Var52))
														{
															if (Var73.f_10)
															{
																func_982(iVar71);
																return 1;
															}
														}
													}
													iVar87++;
												}
												func_982(iVar71);
											}
											return 0;
										}
										uVar90 = func_919(uParam0);
										iVar91 = func_276(uParam0);
										vVar92.f_1 = -1;
										vVar92.f_2 = -1;
										Var99 = -1;
										Var99.f_1 = -1;
										Var99.f_2 = -1;
										Var99.f_3 = -1;
										Var99.f_4 = -1;
										Var99.f_5 = -1;
										Var99.f_6 = -1;
										Var99.f_7 = -1;
										Var99.f_8 = -1;
										if (func_963(func_724(&(uParam0->f_2031)), iVar91, &Var95))
										{
											iVar88 = 0;
											while (iVar88 < Var95.f_3)
											{
												vVar92 = { func_964(iVar88, Var95, &(uParam0->f_2031)) };
												if (vVar92.x == iParam1 && func_278(vVar92.x, 0))
												{
													Var99.f_8 = vVar92.y;
													iVar110 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var99, &iVar109, 1);
													if (iVar110 == -1)
													{
													}
													else
													{
														iVar111 = 0;
														while (iVar111 < iVar109)
														{
															iVar112 = func_920(iVar111, iVar110);
															if (((func_278(iVar112, 0) && iVar112 != iParam1) && func_921(&(uParam0->f_2031), iVar112, &uVar89)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar112, Var99.f_8) == -2089472884)
															{
																uParam0->f_2031.f_73 = uVar89;
																uVar113 = func_897(uParam0, iVar112);
																if (func_634(uParam0, iVar112, uVar113, -1))
																{
																	iVar0 = 1;
																}
																else
																{
																	iVar111++;
																}
																uParam0->f_2031.f_73 = uVar90;
																ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar110);
																Jump @1693; //curOff = 1681
																iVar88++;
																Jump @1801; //curOff = 1693
																Var117.f_9 = -1591664384;
																Var131 = { func_979(iParam1, -1591664384, -1591664384, -1591664384, 0, 0) };
																if (func_980(&Var131, &iVar114, &iVar115, 0))
																{
																	iVar116 = 0;
																	while (iVar116 < iVar115)
																	{
																		if (func_981(&Var117, iVar116, iVar114, iVar115))
																		{
																			iVar0 = Var117.f_10;
																		}
																		else
																		{
																			iVar116++;
																		}
																	}
																}
																func_982(iVar114);
																return iVar0;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

bool func_635(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -1569227938);
}

void func_636(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	func_904(uParam0, iParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iParam2), bParam3, bParam4, iParam5);
}

void func_637(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceEnabled", bParam1);
}

int func_638(int iParam0, int iParam1)
{
	if (func_360(1) < func_1186(iParam0, -915411861, 1, 0, 0))
	{
		*iParam1 = 3;
		return 0;
	}
	if (iParam0 == -1881423545)
	{
		if (func_1187())
		{
			return 1;
		}
		else
		{
			*iParam1 = 4;
			return 0;
		}
	}
	if ((iParam0 != func_629() && !func_631(iParam0)) && func_905() < 3)
	{
		return 0;
	}
	if (!func_631(iParam0) && func_905() < 1)
	{
		return 0;
	}
	if (func_631(iParam0) && func_905() == 0)
	{
		return 0;
	}
	if (iParam0 == 1279130184 && (func_905() == 1 || func_905() == 0))
	{
		return 0;
	}
	return 1;
}

int func_639(int iParam0, int iParam1)
{
	var uVar0[3];
	int iVar4;
	
	if (!func_1188(iParam0))
	{
		*iParam1 = 1;
		return 0;
	}
	if (iParam0 == 1574030042)
	{
		if (func_155(34))
		{
			return func_1189(1);
		}
		else if (func_952(2))
		{
			return func_1189(1);
		}
		else
		{
			return (func_952(1) && func_1190(1));
		}
	}
	if (func_952(2))
	{
		return 0;
	}
	*iParam1 = 4;
	switch (iParam0)
	{
		case 1024854903:
			return ((func_1191(0) || func_1191(1)) || func_1191(2));
		
		case 1224358974:
			return func_1191(0);
		
		case 1107981273:
			return func_1191(1);
		
		case 1792152856:
			return func_1191(2);
		
		case 1420417918:
			return func_1189(2);
		
		default:
			break;
	}
	func_1169(iParam0, &uVar0);
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (func_1167(iVar4) < &uVar0[iVar4])
		{
			return 0;
		}
		iVar4++;
	}
	return 1;
}

void func_640(var uParam0, int iParam1)
{
	func_542(uParam0, HUD::_GET_LABEL_TEXT_BY_HASH(iParam1));
}

var func_641()
{
	return Global_1914319->f_16855.f_3.f_17;
}

int func_642(var uParam0)
{
	return uParam0->f_2031.f_71;
}

void func_643(var uParam0, int iParam1)
{
	uParam0->f_2031.f_71 = iParam1;
	if (uParam0->f_2031.f_71 >= uParam0->f_2031.f_72)
	{
		uParam0->f_2031.f_71 = 0;
	}
	else if (uParam0->f_2031.f_71 < 0)
	{
		uParam0->f_2031.f_71 = (uParam0->f_2031.f_72 - 1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_50, 1731278865, uParam0->f_2031.f_71);
}

void func_644(int iParam0)
{
	Global_1914319->f_16855.f_3.f_17 = iParam0;
}

int func_645(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2031.f_72 <= 0 || iParam1 >= uParam0->f_2031.f_72)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_2031.f_50, "currentPaletteIndex", iParam1);
	func_1192(uParam0->f_2031.f_71, 0);
	iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_59, iParam1);
	func_608(&iVar0, 0);
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, func_597());
	iVar2 = iVar1;
	func_609(iVar2, 0);
	return 1;
}

var func_646()
{
	return Global_1914319->f_16855.f_3.f_21;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

int func_648(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, -804795275);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(uParam0->f_2031.f_52, 1535851697))
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 988907979, iParam1 > 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 1417549877, iParam1 < iVar0);
	}
	if (iParam1 > iVar0)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam1);
	return 1;
}

char* func_649()
{
	return "uiItemType";
}

int func_650()
{
	return 1999907591;
}

int func_651()
{
	return -655974324;
}

int func_652(bool bParam0)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_607(bParam0), func_717());
	return iVar0;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 358835375;
		
		case 1:
			return -1127546830;
		
		case 2:
			return 1116743896;
		
		default:
			break;
	}
	return -1;
}

int func_654(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	bVar3 = false;
	if (!func_1193(iParam0, uParam1, &iVar0))
	{
		return 0;
	}
	iVar4 = func_1194(iParam0);
	func_1195(&(Global_1946804->f_964), -380731322, *uParam1, iParam0, 1, Global_1946804->f_1329.f_1[iVar4 /*9*/][(Global_1946804->f_1329.f_1[iVar4 /*9*/])->f_8]);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	while (DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		iVar2 = 0;
		while (iVar2 < (Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_5)
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &(Global_1946804->f_964), &((Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_1[iVar2])))
			{
				bVar3 = false;
			}
			else
			{
				iVar4 = func_1194(&((Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_1[iVar2]));
				if (iVar1 != Global_1946804->f_1329.f_1[iVar4 /*9*/][(Global_1946804->f_1329.f_1[iVar4 /*9*/])->f_8])
				{
					bVar3 = false;
				}
				else
				{
					bVar3 = true;
					iVar2++;
				}
			}
		}
		if (!bVar3)
		{
		}
		else
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &(Global_1946804->f_964), -763890493))
			{
				return 0;
			}
			*uParam2 = iVar1;
			return 1;
		}
	}
	return 0;
}

int func_655()
{
	return 800223284;
}

int func_656(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_657(int iParam0)
{
	func_1196(&(Global_1946804->f_2589), iParam0);
}

void func_658()
{
	int iVar0;
	
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_659(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 12;
	iVar2 = func_339(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1197(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_661(iVar1, iVar3);
		}
	}
	if (func_1198(-1586649372) && func_1197(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_661(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
			}
			func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		
		case 688587926:
			func_1199(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1199(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_661(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1199(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_339(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_612(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_339(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_339(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					break;
				
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_339(&(uParam0->f_1[iVar1 /*3*/])) || func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_661(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_660(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2589)
	{
		if (&Global_1946804->f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_661(int iParam0, int iParam1)
{
	func_1200(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_662(bool bParam0, bool bParam1, bool bParam2)
{
	func_1201(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_663(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_1202(iParam0, iParam1);
	if (iVar0 == 1)
	{
		*uParam2 = -2098954619;
		*uParam3 = 1210712530;
	}
	else if (iVar0 == 2)
	{
		*uParam2 = -1498731425;
		*uParam3 = 1210712530;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_664()
{
	return -1577411677;
}

int func_665()
{
	return -2105905628;
}

void func_666(var uParam0, int iParam1)
{
	uParam0->f_2031.f_84 = iParam1;
	uParam0->f_148.f_1281.f_207 = iParam1;
	Global_1914319->f_16855.f_37 = iParam1;
}

void func_667(var uParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	struct<5> Var44;
	struct<4> Var49;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	bool bVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	
	if (!func_278(iParam1, 0))
	{
		return;
	}
	if (!func_1203(iParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var0))
	{
	}
	else if (Var0 <= 0)
	{
	}
	else
	{
		fVar34 = 100f;
		Var35 = { func_1204(-664570214, WEAPON::_0x8EC44AE8DECFF841(iParam1)) };
		if (STATS::_STAT_ID_IS_VALID(&Var35))
		{
			STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
		}
		iVar37 = 0;
		while (iVar37 < Var0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
			{
				if (vVar22.y == -266488916)
				{
					iVar29 = (iVar29 + vVar22.z);
				}
				else if (vVar22.y == 1648497600)
				{
					iVar30 = (iVar30 + vVar22.z);
				}
				else if (vVar22.y == -1856731002)
				{
					iVar31 = (iVar31 + vVar22.z);
				}
				else if (vVar22.y == 2038990430)
				{
					iVar32 = (iVar32 + vVar22.z);
				}
				else if (vVar22.y == 983649838)
				{
					iVar33 = (iVar33 + vVar22.z);
				}
				if (vVar22.y == 1465168878)
				{
					iVar30 = (iVar30 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -1103443887)
				{
					iVar32 = (iVar32 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -800430237)
				{
					iVar33 = (iVar33 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
			}
			iVar37++;
		}
		iVar38 = 0;
		iVar39 = 0;
		iVar40 = 0;
		iVar41 = 0;
		iVar42 = 0;
		iVar43 = 0;
		Var44 = { func_1185(iParam1, 0, 0) };
		Var44.f_4 = func_962(uParam0);
		Var49 = { func_669(iParam1, Var44, Var44.f_4, 0) };
		iVar53 = func_975(iParam1);
		bVar58 = true;
		iVar54 = 0;
		while (iVar54 < iVar53)
		{
			iVar55 = func_1205(iParam1, iVar54);
			if (iVar55 != 0)
			{
				iVar56 = func_974(Var49, iVar55, 0);
				bVar58 = true;
				if (func_278(iParam2, 0))
				{
					if (func_1206(iParam2, iVar55) || func_612(iParam2, 1844906744))
					{
						if (func_612(iParam2, 1844906744))
						{
							if (func_1207(uParam0, func_299(uParam0), func_276(uParam0), &iVar57))
							{
								if (func_1206(iVar57, iVar55))
								{
									bVar58 = false;
								}
							}
						}
						else if (!func_278(iVar56, 0))
						{
							bVar58 = false;
						}
						else if (iVar56 != iParam2)
						{
							bVar58 = false;
						}
					}
				}
				if (func_278(iVar56, 0))
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar56, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar41 = (iVar41 + vVar22.z);
									if (bVar58)
									{
										iVar38 = (iVar38 + vVar22.z);
									}
								}
								else if (vVar22.y == 1173003838)
								{
									iVar43 = (iVar43 + vVar22.z);
									if (bVar58)
									{
										iVar39 = (iVar39 + vVar22.z);
									}
								}
								else if (vVar22.y == -1657343230)
								{
									iVar42 = (iVar42 + vVar22.z);
									if (bVar58)
									{
										iVar40 = (iVar40 + vVar22.z);
									}
								}
							}
							iVar37++;
						}
					}
				}
				if (!bVar58)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam2, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar38 = (iVar38 + vVar22.z);
								}
								else if (vVar22.y == 1173003838)
								{
									iVar39 = (iVar39 + vVar22.z);
								}
								else if (vVar22.y == -1657343230)
								{
									iVar40 = (iVar40 + vVar22.z);
								}
							}
							iVar37++;
						}
					}
				}
			}
			iVar54++;
		}
		if (func_827(iParam2) == 307971639)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam2, &Var0))
			{
				iVar37 = 0;
				iVar37 = 0;
				while (iVar37 < Var0)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
					{
						if (vVar22.y == 1999781523)
						{
							iVar29 = (iVar29 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar33 = (iVar33 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar30 = (iVar30 + vVar22.z);
						}
					}
					iVar37++;
				}
			}
		}
		iVar59 = (iVar29 + iVar41);
		if (iVar29 + iVar38) > (iVar29 + iVar41)
		{
			iVar59 = (iVar29 + iVar38);
		}
		iVar60 = (iVar30 + iVar42);
		if (iVar30 + iVar40) > (iVar30 + iVar42)
		{
			iVar60 = (iVar30 + iVar40);
		}
		iVar61 = (iVar33 + iVar43);
		if (iVar33 + iVar39) > (iVar33 + iVar43)
		{
			iVar61 = (iVar33 + iVar39);
		}
		iVar62 = (iVar29 + iVar41);
		if (iVar29 + iVar38) < (iVar29 + iVar41)
		{
			iVar62 = (iVar29 + iVar38);
		}
		iVar63 = (iVar30 + iVar42);
		if (iVar30 + iVar40) < (iVar30 + iVar42)
		{
			iVar63 = (iVar30 + iVar40);
		}
		iVar64 = (iVar33 + iVar43);
		if (iVar33 + iVar39) < (iVar33 + iVar43)
		{
			iVar64 = (iVar33 + iVar39);
		}
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponPowerValue", iVar59);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponRangeValue", iVar60);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponAccuracyValue", iVar61);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponFireRateValue", iVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponReloadValue", iVar32);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponPowerDiff", (iVar29 + iVar41));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponRangeDiff", (iVar30 + iVar42));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponAccuracyDiff", (iVar33 + iVar43));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponFireRateDiff", iVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponReloadDiff", iVar32);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponPowerNew", iVar62);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponRangeNew", iVar63);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponAccuracyNew", iVar64);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponFireRateNew", iVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "WeaponReloadNew", iVar32);
	}
}

struct<4> func_668(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_1208(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_669(923904168, func_1182(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_669(923904168, func_1182(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_669(923904168, func_1182(bParam0), -740156546, 0);
}

struct<4> func_669(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1208(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_670(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_671(int iParam0, bool bParam1)
{
	if (func_1209(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1208(bParam1), iParam0, 0);
}

int func_672()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	Var4.f_9 = -1591664384;
	if (func_1210("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_981(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_982(iVar0);
	}
	return iVar3;
}

int func_673(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_299(uParam0);
	iVar1 = func_1211(iVar0, iParam1);
	iVar2 = func_289(uParam0);
	iVar3 = 0;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = func_1212(iVar0, iParam1, iVar5);
		if (iVar4 != -1)
		{
			if (func_1213(iVar3, iParam2, iParam3, iVar2))
			{
				iVar6 = func_1108(uParam0, iVar5);
				if (func_1214(iVar6))
				{
					switch (iVar6)
					{
						case 2119176479:
							if (func_1215(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						
						case -1873242174:
							if (func_1216(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						
						case 1406783678:
							if (func_1217(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						
						case 1649093494:
							if (func_1218(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
						
						case -1095179319:
							if (func_1219(uParam0, iVar3))
							{
								iVar3++;
							}
							break;
					}
				}
				else if (func_1220(uParam0, iVar4, iVar3))
				{
					iVar3++;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_674(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = func_289(uParam0);
	iVar1 = 0;
	if (!func_585(uParam0, iParam1, &iVar1))
	{
		return 0;
	}
	iVar2 = func_1091(&(uParam0->f_2031));
	if (iVar2 <= 0)
	{
		return 0;
	}
	if (iVar1 >= iVar2 || iVar1 < 0)
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		return 0;
	}
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	iVar6 = 0;
	iVar8 = 0;
	iVar9 = func_586(iVar1, &(uParam0->f_2031));
	if (func_1106(func_299(uParam0), iVar9, 1))
	{
		if (!func_1221(uParam0, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else if (func_836(iVar9))
	{
		if (!func_1222(uParam0, iVar9, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else
	{
		iVar7 = func_1223(iVar1, &(uParam0->f_2031));
		if (iVar7 <= 0)
		{
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			vVar3 = { func_1224(iVar1, iVar6, &(uParam0->f_2031)) };
			if (func_278(vVar3.x, 0))
			{
				if (func_1075(uParam0, vVar3))
				{
					if (func_1213(iVar8, iParam2, iParam3, iVar0))
					{
						if (!func_1225(uParam0, vVar3.x, iVar8, vVar3.y, vVar3.z, bParam4))
						{
						}
					}
					iVar8++;
				}
			}
			iVar6++;
		}
	}
	return 1;
}

int func_675(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_289(uParam0);
	iVar1 = func_1091(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (func_589(iVar2, &(uParam0->f_2031), &iVar3))
			{
				func_1226(uParam0, iVar3, iVar2);
			}
		}
		iVar2++;
	}
	return 1;
}

int func_676(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_289(uParam0);
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_1213(iVar4, iParam1, iParam2, iVar0))
		{
			switch (iVar3)
			{
				case 0:
					iVar2 = 2;
					break;
				
				case 1:
					iVar2 = 3;
					break;
				
				case 2:
					iVar2 = 4;
					break;
				
				default:
					return 0;
			}
			if (func_911(iVar2) && func_1042(iVar2))
			{
				iVar5 = func_445(iVar2);
				iVar1 = func_1227(iVar5);
				if (func_1228(uParam0, iVar1, iVar2, iVar4))
				{
					iVar4++;
				}
			}
		}
		iVar3++;
	}
	return 1;
}

int func_677(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_289(uParam0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		switch (iVar1)
		{
			case 0:
				iVar2 = 0;
				break;
			
			case 1:
				iVar2 = 2;
				break;
			
			case 2:
				iVar2 = 3;
				break;
			
			case 3:
				iVar2 = 4;
				break;
			
			default:
				return 0;
		}
		if (func_1213(iVar1, iParam1, iParam2, iVar0))
		{
			if (!func_1229(uParam0, iVar2, iVar1))
			{
			}
		}
		iVar1++;
	}
	if (iVar0 == 5)
	{
		if (func_1213(4, iParam1, iParam2, iVar0))
		{
			if (!func_1230(uParam0, 4))
			{
			}
		}
	}
	return 1;
}

int func_678(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<14> Var20;
	int iVar34;
	
	iVar0 = func_289(uParam0);
	Var1.f_9 = -1591664384;
	iVar15 = func_1231(0);
	iVar16 = 0;
	iVar17 = 0;
	if (func_1213(iVar16, iParam1, iParam2, iVar0))
	{
		if (func_1232(&Var1, 0))
		{
			if (func_1233(uParam0, Var1, iVar16))
			{
				iVar16++;
			}
		}
	}
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		if (func_1213(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_1234(iVar17, &iVar18))
			{
				if (func_1235(iVar18, &Var1, 0))
				{
					if (func_1233(uParam0, Var1, iVar16))
					{
						iVar16++;
					}
				}
			}
		}
		iVar17++;
	}
	iVar19 = func_1236(0);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar19)
	{
		if (func_1237(iVar17, &Var1, 0))
		{
			if (func_1213(iVar16, iParam1, iParam2, iVar0))
			{
				if (func_1233(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	Var20.f_9 = -1591664384;
	iVar34 = (iVar0 - iVar16);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar34)
	{
		if (func_1213(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_1233(uParam0, Var20, iVar16))
			{
				iVar16++;
			}
		}
		iVar17++;
	}
	return 1;
}

int func_679(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_289(uParam0);
	func_1238(&(Global_1946804->f_1497));
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (func_1239(uParam0, iVar2, iVar1))
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_680(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_1099();
	iVar1 = func_1098(uParam0->f_3);
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		if (func_1213(iVar2, iParam1, iParam2, iVar0))
		{
			if (!func_1100(iVar3, &iVar4))
			{
			}
			else if (!func_1101(iVar1, iVar4))
			{
			}
			else if (iVar4 == iVar1)
			{
			}
			else if (func_1240(uParam0, iVar4, iVar2))
			{
				iVar2++;
			}
		}
		iVar3++;
	}
	return 1;
}

int func_681(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_289(uParam0);
	iVar4 = 0;
	while (iVar4 < 130)
	{
		if (func_1213(iVar1, iParam1, iParam2, iVar0))
		{
			iVar2 = -1;
			if (!func_111(iVar4))
			{
			}
			else if (!func_804(iVar4))
			{
			}
			else
			{
				iVar2 = func_1064(func_1063(iVar4, 1, 1));
				if (!func_718(iVar2))
				{
				}
				else if (iVar2 == 5)
				{
				}
				else if (func_1065(iVar3, iVar2))
				{
				}
				else if (func_1241(uParam0, iVar2, iVar1))
				{
					func_1066(&iVar3, iVar2);
					iVar1++;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_682(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_289(uParam0);
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 180)
		{
			if (func_1069(&(Global_40.f_9910[iVar1 /*6*/])) && func_1070(&(Global_40.f_9910[iVar1 /*6*/]), -1))
			{
				if (func_1213(iVar2, iParam1, iParam2, iVar0))
				{
					if (func_1242(uParam0, *(Global_40.f_9910[iVar1 /*6*/]), iVar2))
					{
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	return 1;
}

int func_683(var uParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam1))
	{
		return 0;
	}
	uParam0->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, func_649());
	*uParam0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, func_597());
	uParam0->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, func_717());
	uParam0->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, func_1053());
	uParam0->f_4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*iParam1, func_1054());
	uParam0->f_5 = { func_1111(iParam1) };
	uParam0->f_9 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam1, func_1164());
	uParam0->f_10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam1, func_684());
	return 1;
}

char* func_684()
{
	return "uiPaletteOptionItemEnum";
}

char* func_685()
{
	return "uiPaletteOptionItemType";
}

char* func_686()
{
	return "uiPaletteOptionItemLayoutLinkID";
}

int func_687(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	char[] cVar8[8];
	struct<2> Var12;
	int iVar15;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -1968468235);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), iParam1);
	bVar0 = true;
	if (func_534(uParam0, func_299(uParam0), iParam1))
	{
		bVar0 = false;
	}
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1968468235);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	iVar1 = iParam5;
	bVar3 = true;
	if (func_262(uParam0) == 310306577)
	{
		iVar2 = iParam4;
		if (iVar2 == 0)
		{
			if (!func_1207(uParam0, func_299(uParam0), iParam1, &iVar2))
			{
				func_1244(uParam0, func_299(uParam0), iParam1, &iVar2, &iParam6);
				bVar3 = false;
			}
		}
		else
		{
			bVar3 = func_634(uParam0, iVar2, iVar1, iParam6);
		}
	}
	else if (!func_1207(uParam0, func_299(uParam0), iParam1, &iVar2))
	{
		bVar3 = false;
	}
	if (bVar0)
	{
		if (iVar2 != 0)
		{
			iVar1 = func_897(uParam0, iVar2);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_684(), iVar2);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_685(), iVar1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_686(), iParam6);
			if (func_1245(uParam0, iVar2, &sVar4, &cVar8, 1))
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", 1);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTextureDict", &sVar4);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTexture", &cVar8);
			}
			else if (!func_1246(uParam0, iVar2, &Var12, 164843734))
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", 1);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTextureDict", "");
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTexture", "");
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", 1);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTextureDict", Var12.f_1);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTexture", Var12);
			}
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", bVar3);
			if (func_262(uParam0) == 1705401718)
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", bVar3);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", 0);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", 0);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_684(), -1);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_685(), -1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_686(), -1);
		}
	}
	iVar15 = func_535(uParam0, func_299(uParam0), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), iVar15);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), bVar0);
	return 1;
}

int func_688(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	bool bVar23;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 336033112);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), iParam1);
	iVar0 = 1;
	Var1.f_9 = -1591664384;
	if (iParam1 == -2028811010 || iParam1 == -1671231179)
	{
		if (!func_1247(func_961(uParam0), &Var1, func_962(uParam0)))
		{
			func_640(uParam0, -329058787);
			iVar0 = 0;
		}
	}
	if (func_1108(uParam0, iParam1) != 94016929)
	{
		if (func_256(uParam0, func_299(uParam0), iParam1))
		{
			iVar0 = 0;
		}
	}
	bVar23 = func_257(uParam0, func_299(uParam0), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), bVar23);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(336033112);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			iVar0 = 0;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "iconVisible", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTextureDict", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "iconTexture", "");
	return 1;
}

int func_689(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<8> Var7;
	int iVar15;
	var uVar16;
	
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar15 = iParam1;
	Var7 = { func_1248(iVar15) };
	if (iVar15 == -1 || iVar15 >= 7)
	{
		return 0;
	}
	if (iVar15 == 0)
	{
		bVar3 = true;
		bVar6 = (func_985(uParam0, 4096) && func_911(0));
	}
	bVar4 = func_911(iVar15);
	bVar5 = (iVar15 == 4 && func_1249());
	if (bVar4)
	{
		iVar1 = func_1250(iVar15);
		iVar2 = func_445(iVar15);
		iVar0 = func_1227(iVar2);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
		{
			StringCopy(&Var7, HUD::_GET_LABEL_TEXT_BY_HASH(MISC::GET_HASH_KEY(func_1251(iVar1))), 64);
		}
		if (!func_278(iVar0, 0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	MISC::_INT_TO_STRING(iParam1, "%i", &uVar16);
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, &uVar16);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 193788635);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iVar0);
	if (bVar4)
	{
		if (bVar3)
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", -437533031);
			if (func_721() == 0 && func_722() != 5)
			{
				DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", 1210165179);
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", -1715189579);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", -437533031);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", 444737100);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTextureDict", -437533031);
		if (bVar3)
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", -1715189579);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "frontSlotTexture", 1220803671);
		}
	}
	if (bVar4)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, func_1252(), &Var7);
	}
	else if (bVar3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, func_1252(), HUD::_GET_LABEL_TEXT_BY_HASH(-1669636523));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, func_1252(), HUD::_GET_LABEL_TEXT_BY_HASH(-2096252882));
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), (bVar4 && bVar6));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), bVar4);
	}
	if (bVar5)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "backTextureVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "backTextureDict", 1210712530);
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "backTexture", 566347780);
	}
	return 1;
}

int func_690(var uParam0, int iParam1, int iParam2, struct<4> Param3, int iParam7)
{
	var uVar0;
	
	MISC::_INT_TO_STRING(iParam2, "%i", &uVar0);
	*iParam7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, &uVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam7, -156023664, -437533031);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam7, -231316707, -1327110633);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, func_649(), 1119253406);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, func_717(), iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam7, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "frontSlotTextureColour", 1105014447);
	func_1253(iParam7, Param3);
	if (func_278(iParam1, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam7, func_1243(), func_1159(iParam1));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "frontSlotTextureVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, func_1164(), 1);
		if (func_913(&Param3, 0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "backTextureVisible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "backTextureDict", 1210712530);
			DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam7, "backTexture", -1725710676);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "backTextureVisible", 0);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam7, func_1243(), MISC::_CREATE_VAR_STRING(2, "SHOP_EMPTY_SADDLE_SLOT"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, "frontSlotTextureVisible", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam7, func_1164(), 0);
	}
	return 1;
}

int func_691(var uParam0, int iParam1)
{
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, "SADDLE");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_649(), 1837492866);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_717(), 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTextureDict", -437533031);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTexture", -1327110633);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "frontSlotTextureColour", 1105014447);
	if (func_721() == 3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), -5180795);
	}
	else if (func_721() == 1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), -50782933);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, func_1164(), 1);
	return 1;
}

int func_692(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;
	int iVar10;
	int iVar11;
	char cVar12[64];
	struct<8> Var20;
	int iVar28;
	float fVar29;
	
	*iParam3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	iVar0 = 1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam3, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam3, func_649(), -1080155519);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam3, func_717(), iParam2);
	iVar9 = func_1002(func_1254(iParam1));
	iVar10 = iParam2;
	iVar11 = MISC::GET_HASH_KEY(func_1255(iVar9));
	StringCopy(&cVar12, HUD::_GET_LABEL_TEXT_BY_HASH(iVar11), 64);
	Var20 = { func_1248(iVar10) };
	if (iVar10 != -1 && !MISC::_0x375F5870A7B8BEC1(&Var20))
	{
		Var1 = { Var20 };
	}
	else
	{
		Var1 = { cVar12 };
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, func_1252(), &Var1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "showQuantity", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "forSale", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "owned", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "locked", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "soldOut", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "useGoldPrice", 0);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(iVar0);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1080155519);
		Call_Loc(uParam0->f_2031.f_119);
		iVar0 = (StackVal && StackVal);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, func_1164(), iVar0);
	iVar28 = iParam2;
	fVar29 = func_1016(iParam1, func_226(iVar28));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam3, "price", BUILTIN::ROUND(fVar29));
	return 1;
}

int func_693(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -760956867);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "tickVisible", func_634(uParam0, iParam1, -760956867, -1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	iVar0 = func_910(uParam0, iParam1, -760956867);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, "itemDescription", func_1256(iParam1));
	if (func_1246(uParam0, iParam1, &Var1, 164843734))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "textureDictionary", Var1.f_1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "texture", Var1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "not_script_data_int_3", 1);
	return 1;
}

int func_694(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 38807286);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "tickVisible", func_634(uParam0, iParam1, 38807286, -1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	iVar0 = func_910(uParam0, iParam1, 38807286);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar1 = func_1256(iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, "itemDescription", iVar1);
	if (func_1246(uParam0, iParam1, &Var2, 164843734))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "textureDictionary", Var2.f_1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, "texture", Var2);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "not_script_data_int_3", 1);
	return 1;
}

int func_695(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_649(), -339889117);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_1053(), iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_1054(), iParam3);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam4, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_1154(iParam1));
		Stack.Push(-339889117);
		Call_Loc(uParam0->f_2031.f_119);
		iVar0 = StackVal;
	}
	if (WEAPON::_0x0556E9D2ECF39D01(iParam1))
	{
		iVar1 = 10;
		iVar2 = 9;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(iParam1))
	{
		iVar1 = 2;
		iVar2 = 3;
	}
	else if (WEAPON::_0x959383DCD42040DA(iParam1))
	{
		iVar2 = 4;
		iVar1 = 4;
	}
	if (func_917(Global_35, 1, iVar1, 0) == iParam1 || func_917(Global_35, 1, iVar2, 0) == iParam1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "iconVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam4, "iconTexture", 863205103);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "iconVisible", 0);
	}
	if (bParam5)
	{
		if (func_915(iParam1, 1728382685, 0) && func_915(iParam1, -649335959, 0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*iParam4, func_655(), 1728382685);
			DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam4, func_650(), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam4, func_651(), 2);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam4, func_1257(), 0);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1115(), func_1076(uParam0, iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1164(), iVar0);
	return 1;
}

int func_696(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	
	if (iParam1 >= 3 || iParam1 < 0)
	{
		return 0;
	}
	MISC::_INT_TO_STRING(iParam1, "%d", &uVar0);
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, &uVar0);
	iVar4 = iParam1;
	bVar5 = true;
	iVar6 = func_263(uParam0);
	if (!func_922(iVar6, iVar4, &uVar7))
	{
		bVar5 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -395279071);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, func_1252(), MISC::_CREATE_VAR_STRING(0, func_653(iVar4)));
	if (bVar5)
	{
		if ((Global_1946804->f_1329.f_1[iVar4 /*9*/])->f_7 > 1)
		{
			iVar8 = (Global_1946804->f_1329.f_1[iVar4 /*9*/])->f_8;
			iVar9 = Global_1946804->f_1329.f_1[iVar4 /*9*/][iVar8];
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*iParam2, func_655(), iVar9);
			DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam2, func_650(), iVar8);
		}
		else
		{
			bVar5 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam2, func_1257(), bVar5);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*iParam2, func_651(), (Global_1946804->f_1329.f_1[iVar4 /*9*/])->f_7);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(bVar5);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-395279071);
		Call_Loc(uParam0->f_2031.f_119);
		bVar5 = (StackVal && StackVal);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), bVar5);
	return 1;
}

int func_697(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_649(), -348190488);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_1053(), iParam2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_1054(), iParam3);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam4, func_1243(), func_1154(iParam1));
	bVar3 = func_1258(uParam0, iParam2, iParam3, &iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "equipped", bVar3);
	if (!bVar3)
	{
		if (func_896(uParam0, iParam2, iParam3, &iVar1))
		{
		}
	}
	if (func_278(iVar1, 0))
	{
		if (bParam5)
		{
			if (func_1259(uParam0, iParam4, iVar1))
			{
			}
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "onHorse", func_1260(uParam0, iParam2, iParam3, &uVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam4, func_684(), iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "addIconVisible", 1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam4, "addIconTextureDict", "itemtype_textures");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam4, "addIconTexture", "ITEMTYPE_UPGRADES");
	bVar4 = true;
	iVar5 = func_263(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5) || ENTITY::IS_ENTITY_DEAD(iVar5))
	{
		bVar4 = false;
	}
	else
	{
		bVar4 = func_909(iVar5, iVar1, &iVar2);
	}
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(func_1154(iParam1));
		Stack.Push(-348190488);
		Call_Loc(uParam0->f_2031.f_119);
		bVar4 = StackVal;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1164(), bVar4);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1115(), func_257(uParam0, iParam2, iParam3));
	return 1;
}

int func_698(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -384358143);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_932(iParam1, 0);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	iVar0 = func_910(uParam0, iParam1, -384358143);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_699(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -1395073769);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_932(iParam1, 1);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	iVar0 = func_910(uParam0, iParam1, -1395073769);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_700(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -853534656);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = func_634(uParam0, iParam1, -853534656, -1);
	iVar5 = 0;
	bVar1 = func_932(iParam1, 1);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	iVar0 = func_910(uParam0, iParam1, -853534656);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	bVar6 = func_1076(uParam0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), bVar6);
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return 1;
}

int func_701(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -349391286);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	iVar6 = 600942249;
	func_933(uParam0->f_2, &iVar6);
	bVar2 = (func_1152(uParam0, iParam1) || func_1262(iParam1, iVar6, 1));
	bVar1 = func_932(iParam1, 1);
	iVar5 = func_940(iParam1, iVar6);
	bVar3 = iVar5 > 0;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, bVar1);
	iVar0 = func_910(uParam0, iParam1, -349391286);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	if (bParam3)
	{
		if (func_827(iParam1) == -1037537535)
		{
			func_1259(uParam0, iParam2, iParam1);
		}
	}
	return 1;
}

int func_702(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 2036169888);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	func_1261(iParam2, 0, 0, 0, 0, 0, 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_703(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -239176093);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	iVar0 = func_1001(iParam1);
	iVar1 = func_1002(iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), MISC::GET_HASH_KEY(func_1255(iVar1)));
	iVar2 = 1;
	bVar3 = false;
	bVar4 = false;
	bVar5 = true;
	bVar6 = false;
	iVar7 = 0;
	bVar3 = func_932(iParam1, 0);
	bVar4 = func_1152(uParam0, iParam1);
	iVar7 = func_903(iParam1, 0);
	bVar5 = iVar7 > 0;
	func_1261(iParam2, bVar4, bVar6, bVar3, bVar5, iVar7, 0);
	iVar2 = func_910(uParam0, iParam1, -239176093);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_704(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 1394581936);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, 1394581936, -1);
	bVar1 = func_835(uParam0, iParam1, 1394581936);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	bVar3 = !bVar1;
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	iVar0 = func_910(uParam0, iParam1, 1394581936);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_705(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 777890122);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, 777890122, -1);
	bVar1 = func_835(uParam0, iParam1, 777890122);
	bVar3 = !func_835(uParam0, iParam1, 777890122);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	iVar0 = func_910(uParam0, iParam1, 777890122);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_706(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -1502467280);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar4 = func_634(uParam0, iParam1, -1502467280, -1);
	bVar1 = func_835(uParam0, iParam1, -1502467280);
	bVar3 = !func_835(uParam0, iParam1, -1502467280);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 1);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(iVar0);
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(iParam1);
		Stack.Push(-1502467280);
		Call_Loc(uParam0->f_2031.f_119);
		iVar0 = (StackVal && StackVal);
	}
	iVar0 = func_910(uParam0, iParam1, -1502467280);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_707(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -584027224);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	iVar0 = 1;
	bVar1 = false;
	bVar2 = false;
	bVar3 = true;
	bVar4 = false;
	iVar5 = 0;
	bVar1 = func_932(iParam1, 0);
	bVar2 = func_1152(uParam0, iParam1);
	iVar5 = func_903(iParam1, 0);
	bVar3 = iVar5 > 0;
	bVar4 = func_634(uParam0, iParam1, -584027224, -1);
	func_1261(iParam2, bVar2, bVar4, bVar1, bVar3, iVar5, 0);
	iVar0 = func_910(uParam0, iParam1, -584027224);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	return 1;
}

int func_708(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	bVar0 = true;
	if (func_821(iParam1))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 761079318);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "new", func_1114(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	bVar1 = func_822(iParam1);
	if (func_908(iParam1))
	{
		bVar1 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "onHorse", bVar1);
	if (func_1263(uParam0->f_2))
	{
		iVar3 = func_263(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			bVar2 = false;
		}
		bVar2 = func_909(iVar3, iParam1, &iVar4);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), bVar2);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	if (bParam3)
	{
		if (bVar0)
		{
			func_1259(uParam0, iParam2, iParam1);
		}
	}
	return 1;
}

int func_709(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -2056428614);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "new", func_1114(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	bVar0 = false;
	if (func_1263(uParam0->f_2))
	{
		iVar1 = func_263(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			bVar0 = false;
		}
		bVar0 = func_909(iVar1, iParam1, &iVar2);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return 1;
}

int func_710(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	bVar0 = true;
	if (func_821(iParam1))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 1942587409);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "new", func_1114(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "onHorse", func_822(iParam1));
	iVar1 = 1;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	if (bParam3)
	{
		if (bVar0)
		{
			if (func_1259(uParam0, iParam2, iParam1))
			{
			}
		}
	}
	return 1;
}

int func_711(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), 2077448405);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "new", func_1114(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "equipped", func_634(uParam0, iParam1, 761079318, -1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "onHorse", func_822(iParam1));
	if (iParam1 == 166243423 && func_820() != 166243423)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1115(), func_1076(uParam0, iParam1));
	if (bParam3)
	{
		if (func_1259(uParam0, iParam2, iParam1))
		{
		}
	}
	return 1;
}

int func_712(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	char* sVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -1048755899);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_597(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	iVar0 = 0;
	if (!func_1264(iParam1, -915411861, &iVar0, 0))
	{
	}
	Var1 = { func_1185(iParam1, 0, 1) };
	if (iVar0 > 0 && func_1265(iParam1, &Var1, 0, 0) > 1)
	{
		sVar6 = MISC::_CREATE_VAR_STRING(10, "SHOP_LIST_ITEM_QUANTITY", func_1159(iParam1), iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam2, func_1252(), sVar6);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), func_1154(iParam1));
	}
	iVar7 = func_910(uParam0, iParam1, -1048755899);
	bVar8 = false;
	bVar9 = false;
	bVar10 = true;
	iVar11 = func_903(iParam1, 0);
	bVar8 = func_932(iParam1, 0);
	bVar9 = func_1152(uParam0, iParam1);
	iVar11 = func_903(iParam1, 0);
	bVar10 = iVar11 > 0;
	func_1261(iParam2, bVar9, 0, bVar8, bVar10, iVar11, 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), iVar7);
	return 1;
}

int func_713(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, -1352600334);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_649(), -1352600334);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), 2119176479);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "showQuantity", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "forSale", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "owned", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "locked", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "soldOut", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "useGoldPrice", 0);
	iVar0 = func_903(-1724045811, 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "price", iVar0);
	bVar1 = true;
	bVar1 = (func_1266() && func_360(1) >= iVar0);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-1352600334);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			bVar1 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, func_1164(), bVar1);
	return 1;
}

int func_714(var uParam0, int iParam1)
{
	struct<21> Var0;
	bool bVar22;
	int iVar23;
	bool bVar24;
	
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, -772187037);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_649(), -772187037);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), 1406783678);
	Var0.f_9 = -1591664384;
	bVar22 = func_1247(func_961(uParam0), &Var0, func_962(uParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "showQuantity", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "forSale", !bVar22);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "owned", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "locked", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "soldOut", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, "useGoldPrice", 0);
	iVar23 = BUILTIN::ROUND((func_867(Var0.f_16, Var0.f_20) * BUILTIN::TO_FLOAT(func_903(-898386032, 0))));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, "price", iVar23);
	bVar24 = (func_360(1) >= iVar23 && !bVar22);
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-772187037);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			bVar24 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, func_1164(), bVar24);
	return 1;
}

int func_715(var uParam0, int iParam1)
{
	bool bVar0;
	
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, -2092532275);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_649(), -2092532275);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), -1873242174);
	bVar0 = ((!func_900() && func_794(1613651027, 1, 0)) && !func_631(func_632()));
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(-2092532275);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, func_1164(), bVar0);
	return 1;
}

int func_716(var uParam0, int iParam1)
{
	int iVar0;
	
	*iParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, 317179309);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam1, func_649(), 317179309);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam1, func_1243(), 1362641624);
	iVar0 = 1;
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(317179309);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			iVar0 = 0;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam1, func_1164(), iVar0);
	return 1;
}

char* func_717()
{
	return "uiItemID";
}

bool func_718(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_719(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	*iParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, func_1267(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_649(), -698448975);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, func_717(), iParam1);
	sVar0 = func_1268(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(*iParam2, func_1243(), MISC::GET_HASH_KEY(sVar0));
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "showQuantity", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "forSale", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "owned", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "locked", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "soldOut", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, "useGoldPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam2, func_1164(), func_1269(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam2, "price", func_925(iParam1));
	return 1;
}

int func_720(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	char* sVar0;
	char[] cVar4[8];
	struct<2> Var8;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam3))
	{
		*iParam3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, iParam1);
	}
	switch (iParam2)
	{
		case -2056428614:
		case 761079318:
		case 1942587409:
		case 2077448405:
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "equipped", func_634(uParam0, iParam1, iParam2, -1));
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "onHorse", func_822(iParam1));
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "rightImageVisible", 0);
			break;
		
		default:
			if (func_634(uParam0, iParam1, iParam2, -1))
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "equipped", 1);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "rightImageVisible", 0);
			}
			else if (func_835(uParam0, iParam1, iParam2))
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "equipped", 0);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "rightImageDictionary", func_1270());
				DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "rightImageTexture", "stamp_owned");
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "rightImageVisible", 1);
			}
			break;
	}
	if (bParam4)
	{
		if (func_1245(uParam0, iParam1, &sVar0, &cVar4, 0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "visible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "textureDictionary", &sVar0);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "texture", &cVar4);
		}
		else if (!func_1246(uParam0, iParam1, &Var8, 164843734))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "visible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "textureDictionary", "");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "texture", "");
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam3, "visible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "textureDictionary", Var8.f_1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(*iParam3, "texture", Var8);
		}
	}
	return 1;
}

int func_721()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_722()
{
	return Global_40.f_1095.f_3054;
}

int func_723(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char* sVar0;
	char[] cVar4[8];
	struct<2> Var8;
	int iVar11;
	
	*iParam4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_60, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_649(), iParam3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_597(), iParam1);
	if (iParam3 == 1702073444 || func_612(iParam1, -495963434))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_1053(), iParam2);
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(*iParam4, func_717(), iParam1);
	if (bParam5)
	{
		if (func_1245(uParam0, iParam1, &sVar0, &cVar4, 0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam4, -1765302991, 1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*iParam4, 1976702369, &sVar0);
			DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*iParam4, -1924991449, &cVar4);
		}
		else if (!func_1246(uParam0, iParam1, &Var8, 164843734))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam4, -1765302991, 1);
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*iParam4, 1976702369, 2);
			DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*iParam4, -1924991449, 2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*iParam4, -1765302991, 1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*iParam4, 1976702369, Var8.f_1);
			DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*iParam4, -1924991449, Var8);
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1115(), func_1076(uParam0, iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "owned", func_835(uParam0, iParam1, iParam3));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, "equipped", func_634(uParam0, iParam1, iParam3, iParam2));
	iVar11 = func_910(uParam0, iParam1, iParam3);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*iParam4, func_1164(), iVar11);
	return 1;
}

var func_724(var uParam0)
{
	return *uParam0;
}

char* func_725()
{
	return "uiItemMetapedPreloadRequestMade";
}

char* func_726()
{
	return "uiItemMetapedPreloadRequest";
}

bool func_727()
{
	return Global_1946804->f_978;
}

int func_728(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (Global_1946804->f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_1271(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_732(iParam0);
	return func_1272(iParam1, iVar0, bParam2, 1);
}

bool func_729(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_730(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_731(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_335(Var0);
}

int func_732(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	Var1 = -961687407;
	if (func_125() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_1273(iVar0);
}

int func_733(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_94(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_537(0))
	{
	}
	func_1274(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

bool func_734(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_735(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false) && !func_1275(((*Global_1347702)[iParam0 /*49*/])->f_15)) && !func_734(((*Global_1347702)[iParam0 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

int func_736(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	return func_310(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_737(int iParam0)
{
	float fVar0;
	
	if (func_738(((*Global_1347702)[iParam0 /*49*/])->f_15) == 2 || iParam0 == func_1276(Global_1347343->f_2))
	{
		return 1;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 32 != 0)
	{
		return 1;
	}
	fVar0 = BUILTIN::VDIST2(func_458(iParam0), Global_36);
	if (fVar0 < (((*Global_1347702)[iParam0 /*49*/])->f_16 * ((*Global_1347702)[iParam0 /*49*/])->f_16))
	{
		return 1;
	}
	return 0;
}

int func_738(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1277(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_739(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

int func_740()
{
	if (Global_1572887->f_12 != -1)
	{
		Global_35 = Global_1225638->f_8;
		Global_36 = { Global_1225638->f_16 };
		return Global_1225638->f_10;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_741()
{
	Global_1935630->f_13 = 0;
	Global_1935630->f_14 = 0;
	Global_1935630->f_26 = 0;
	Global_1935630->f_15 = 0;
	Global_1935630->f_16 = 0;
	Global_1935630->f_17 = 0;
	Global_1935630->f_18 = 0;
	Global_1935630->f_19 = -1;
	Global_1935630->f_20 = -1;
	Global_1935630->f_21 = -1;
	Global_1935630->f_23 = 0;
}

int func_742()
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (!func_158())
	{
		return 0;
	}
	if (!func_120(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_120(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_1278())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_234(&(Global_1898164->f_1[0 /*5*/]));
		if (func_238(iVar0) && func_888(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_232(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

void func_744()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_40(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

bool func_745(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1279(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_746(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

void func_747()
{
	func_1280();
	func_1281();
	func_1282();
}

float func_748(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_749(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	
	if (func_125() != -1)
	{
		return;
	}
	if (!func_40(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1283(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_1284(iParam0), iVar0);
	func_1286(func_1285(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1287(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_341(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_341(func_1288(iParam0), 1);
	}
	sVar1 = func_1289(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_750(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_751(int iParam0)
{
	switch (func_125())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_752(int iParam0)
{
	return func_165(iParam0, 2);
}

int func_753(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = *uParam0;
	if (!func_278(iVar0, 0))
	{
		return -1;
	}
	if (iVar0 == 2131771850)
	{
		return 3;
	}
	if (func_339(iVar0) != -999503751)
	{
		return -1;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar3 = &uParam0->f_1[iVar2 /*3*/];
		if (!func_278(iVar3, 0))
		{
		}
		else if (!func_1290(func_339(iVar3)))
		{
		}
		else
		{
			iVar4 = func_1291(iVar3);
			if (iVar4 != -1)
			{
				iVar1 = (iVar1 + iVar4);
			}
		}
		iVar2++;
	}
	if (iVar1 >= 4)
	{
		return 2;
	}
	if (iVar1 <= 2)
	{
		return 0;
	}
	return 1;
}

void func_754(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1292(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_1080(iVar0, 1);
			if (func_1197(iVar0, iParam1))
			{
				vVar4 = { func_1293(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1081(iVar7, 4))
				{
					func_1083(iVar7, 4, 6);
				}
			}
			else
			{
				func_1084(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		
		case 1661121390:
			return 6;
		
		case 1164374808:
			return 7;
		
		case 624063935:
			return 9;
		
		case -1476781101:
			return 10;
		
		case 1560492757:
			return 15;
		
		case -769081407:
			return 16;
		
		case 688004210:
			return 20;
		
		case 166243423:
			return 0;
		
		case -1826731591:
			return 24;
		
		case 2119049229:
			return 25;
		
		case 1352942778:
			return 26;
		
		case 1964379549:
			return 27;
		
		case 1201189539:
			return 28;
		
		case 1351927599:
			return 21;
		
		case 2032023096:
			return 22;
		
		case 1784889667:
			return 13;
		
		case 1160643979:
			return 8;
		
		case 1383300684:
			return 1;
		
		case 2051441678:
			return 2;
		
		case 162509669:
			return 3;
		
		case 635948769:
			return 4;
		
		case 274995506:
			return 5;
		
		case 1902428294:
			return 17;
		
		case -2114499732:
			return 18;
		
		case 800827126:
			return 19;
		
		case 294553332:
			return 11;
		
		case 1788874135:
			return 12;
		
		case -1243402388:
			return 66;
		
		case 65931886:
			return 67;
		
		case 1371678229:
			return 68;
		
		case 2102263084:
			return 69;
		
		case -272211555:
			return 61;
		
		case -55563408:
			return 64;
		
		case -1914506115:
			return 71;
		
		case 802495462:
			return 75;
		
		case 842905332:
			return 77;
		
		case 1511551084:
			return 79;
		
		case -1725704631:
			return 81;
		
		case 1257427489:
			return 83;
		
		case -659341240:
			return 85;
		
		case 2038771525:
			return 87;
		
		case -535599244:
			return 89;
		
		case -389591806:
			return 73;
		
		case -1205612021:
			return 70;
		
		case 890706995:
			return 93;
		
		case 1156438275:
			return 90;
		
		case -1611873049:
			return 91;
		
		case 594312243:
			return 92;
		
		case -978578725:
			return 94;
		
		case -361635024:
			return 62;
		
		case -1951220140:
			return 78;
		
		case 1460520700:
			return 76;
		
		case 523337834:
			return 80;
		
		case -19271249:
			return 82;
		
		case 214175524:
			return 84;
		
		case -1303643297:
			return 86;
		
		case 411856831:
			return 88;
		
		case -926815459:
			return 72;
		
		case -1300731953:
			return 74;
		
		case -409616653:
			return 65;
		
		case 509954990:
			return 29;
		
		case -445916744:
			return 30;
		
		case -866249154:
			return 31;
		
		case -2077063704:
			return 32;
		
		case 205207539:
			return 33;
		
		case -1033657275:
			return 34;
		
		case 1806002837:
			return 35;
		
		case 705324896:
			return 36;
		
		case -1541763703:
			return 37;
		
		case 387052410:
			return 38;
		
		case -361288914:
			return 39;
		
		case -911054515:
			return 40;
		
		case 1084200963:
			return 41;
		
		case 1847948074:
			return 42;
		
		case -1212526764:
			return 43;
		
		case 1851440270:
			return 44;
		
		case -2028985700:
			return 45;
		
		case 1074435214:
			return 46;
		
		case -883015675:
			return 47;
		
		case -1047155604:
			return 48;
		
		case 1123231221:
			return 49;
		
		case 1866989210:
			return 50;
		
		case 478183719:
			return 51;
		
		case -1698955868:
			return 52;
		
		case -2029378634:
			return 53;
		
		case 1339864416:
			return 54;
		
		case 890998115:
			return 55;
		
		case -1376288999:
			return 56;
		
		case -1041123771:
			return 57;
		
		case 1389254668:
			return 58;
		
		case -346112633:
			return 59;
		
		case 773309172:
			return 60;
		
		case -291256376:
			return 23;
		
		default:
			break;
	}
	return -1;
}

int func_756(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!func_1294(uParam0, iParam3, iParam2) && !func_1295(uParam0, iParam2, iParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_538(32768))
	{
		if (!*iParam1 || (*iParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_1296(1108822547);
		}
		else
		{
			func_539(1108822547);
		}
	}
	func_1297(uParam0, 0, 0);
	func_336(iParam5);
	return 1;
}

void func_757(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_758(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1298(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1299(iParam0))
	{
		return 0;
	}
	if (func_1300(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1301(iParam0, 1)) || func_862(32768))
	{
		if (!func_1301(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_31())
	{
		return 0;
	}
	return 1;
}

void func_759(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_760()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_761(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

void func_762(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_147(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_1302(iParam0))
	{
		if (func_761(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_343(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_762(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_762(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_343(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_343(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_343(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_343(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_343(iParam5, 129))
	{
		if (func_343(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_343(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_343(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_343(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_1302(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_343(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_343(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_763(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

int func_764(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && func_1303(*uParam1))
			{
				iParam2 = func_1304(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *uParam1, iParam2);
	}
	return 1;
}

int func_765(var uParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "locationList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		Var1 = { *(uParam0->f_7[iVar0 /*7*/]) };
		if (func_111(Var1))
		{
			iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_3, func_1305(Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, "itemName", func_809(Var1));
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "forSale", 0);
			iVar9 = 1;
			if (func_812(Var1))
			{
				iVar9 = 0;
			}
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "enabled", iVar9);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_3, -1, "fast_travel_item", iVar8);
		}
		iVar0++;
	}
	return 1;
}

void func_766(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_767(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1306(uParam0);
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_370(iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
	if (iVar1 <= 0)
	{
		return 0;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return 1;
}

int func_768(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	float fVar6;
	float fVar7;
	
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (uParam0->f_1 == 0)
	{
		return 0;
	}
	if (uParam0->f_2 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		if (func_1307(uParam0, iVar0, &Var1))
		{
			if (iVar0 == 0)
			{
				*uParam1 = { Var1 };
				uParam1->f_3 = Var1.f_3;
				uParam1->f_4 = Var1.f_4;
			}
			else if (!func_43(Var1))
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Var1);
				fVar7 = BUILTIN::VDIST2(Global_36, *uParam1);
				if (fVar6 * fVar6) < (fVar7 * fVar7)
				{
					*uParam1 = { Var1 };
					uParam1->f_3 = Var1.f_3;
					uParam1->f_4 = Var1.f_4;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_769(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_314 = { vParam1 };
	uParam0->f_304 = uParam4;
	STREAMING::_0xBE8DAA9D8D01DA6A(uParam0->f_314);
	func_347(&(uParam0->f_318), 2048);
	func_348(&(uParam0->f_318), 1024);
	return 1;
}

Vector3 func_770(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_111(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

float func_771(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_772()
{
	return Global_1310750->f_16037;
}

bool func_773(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_774(int iParam0, int iParam1)
{
	if (!func_773(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_775(int iParam0)
{
	if (!func_773(iParam0))
	{
		return 0;
	}
	if (func_1308(64) && func_1309(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_776(int iParam0)
{
	if (!func_773(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_777(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_773(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_1310(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_778(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

float func_779()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_780(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_781(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_782(int iParam0)
{
	return iParam0 > -1;
}

bool func_783(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_782(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_784(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		if (!func_782(iParam0))
		{
			return false;
		}
	}
	func_789(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

bool func_785(int iParam0)
{
	return func_783(iParam0, 16, 1);
}

int func_786(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_787(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_788(int iParam0)
{
	int iVar0;
	
	if (!func_782(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_1311(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_789(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
	return 1;
}

bool func_790(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

int func_791(int iParam0)
{
	switch (func_125())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_792(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1312(iVar0);
}

int func_793()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1313())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_794(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_827(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1314(iParam0, 1))
		{
			return false;
		}
	}
	return func_1315(iParam0, 0, bParam2) >= iParam1;
}

int func_795(int iParam0)
{
	int iVar0;
	
	iVar0 = func_339(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_796(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_797(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_190(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_798(int iParam0)
{
	if (-1829635046 == func_1316(81053684))
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	else if (func_388(-525676072, iParam0))
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_799()
{
	int iVar0;
	
	iVar0 = 1549701178;
	switch (func_1317())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		
		case 3:
			iVar0 = 949387044;
			break;
		
		case 1:
			iVar0 = -22529868;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_800()
{
	int iVar0;
	
	iVar0 = 614608656;
	switch (func_1317())
	{
		case 0:
			iVar0 = 614608656;
			break;
		
		case 3:
			iVar0 = -1290316291;
			break;
		
		case 1:
			iVar0 = 1918034163;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_801()
{
	int iVar0;
	
	iVar0 = -1832677570;
	switch (func_1317())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		
		case 3:
			iVar0 = -362314920;
			break;
		
		case 1:
			iVar0 = -1336137422;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_802()
{
	int iVar0;
	
	iVar0 = 1623252156;
	switch (func_1317())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		
		case 3:
			iVar0 = -1469902924;
			break;
		
		case 1:
			iVar0 = 170763280;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_803(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_804(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_805(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	return func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_806()
{
	return Global_1897952->f_41;
}

bool func_807(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_808(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_1318(iParam0) };
	return func_1319(vVar0);
}

int func_809(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_30;
}

int func_810()
{
	int iVar0;
	
	iVar0 = LAW::_0x54310AAB97B92816(PLAYER::PLAYER_ID());
	return iVar0;
}

float func_811(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	bVar0 = fParam0 >= 0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

int func_812(int iParam0)
{
	if (!func_111(iParam0))
	{
		return 0;
	}
	return func_1320(iParam0, 33554432);
}

int func_813(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_814(int iParam0, bool bParam1)
{
	if (!func_1321(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_1322(iParam0, 8))
		{
			return 0;
		}
	}
	if (func_1322(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_815(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_816()
{
	return Global_1109400->f_244;
}

int func_817()
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!func_1323(2, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_818()
{
	return func_820() == 166243423;
}

int func_819(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, -1285438911))
	{
		return 1;
	}
	return 0;
}

int func_820()
{
	return Global_1946804->f_1497;
}

int func_821(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

bool func_822(int iParam0)
{
	var uVar0;
	
	return func_1324(iParam0, &uVar0);
}

int func_823()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar2 = 0;
	iVar3 = 0;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) == -999503751)
		{
			if (func_820() == iVar1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar3 = func_1157(-999503751, 1);
	if (!bVar4)
	{
		iVar3 = (iVar3 - 1);
	}
	return (iVar3 - iVar2);
}

int func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_656(func_957(iParam0), 1);
	iVar1 = iParam0;
	if (iVar0 != 39)
	{
		return &Global_1946804->f_1497.f_1[iVar0 /*3*/] == iVar1;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1946804->f_1497.f_1[iVar0 /*3*/] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_825(int iParam0, bool bParam1)
{
	return func_1156(iParam0, 0) < func_1157(iParam0, bParam1);
}

int func_826(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1171();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_827(int iParam0)
{
	vector3 vVar0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_828(int iParam0)
{
	if ((func_1325(iParam0) && iParam0 != -999503751) && iParam0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_829(var uParam0, int iParam1, int iParam2)
{
	if (!Global_1914319->f_19461.f_20)
	{
		func_430(iParam2, uParam0);
	}
	if (func_1326(iParam1) == func_1326(Global_1914319->f_19461.f_1))
	{
		return;
	}
	if (func_43(CAM::GET_CAM_COORD(*uParam0)))
	{
		func_1327(&(Global_1914319->f_19461.f_14), &(Global_1914319->f_19461.f_17), &((Global_1914319->f_19461.f_22[0 /*12*/])->f_9), &((Global_1914319->f_19461.f_22[0 /*12*/])->f_6), &((Global_1914319->f_19461.f_22[0 /*12*/])->f_10), &((Global_1914319->f_19461.f_22[0 /*12*/])->f_11));
	}
	else
	{
		Global_1914319->f_19461.f_14 = { CAM::GET_CAM_COORD(*uParam0) };
		Global_1914319->f_19461.f_17 = { CAM::GET_CAM_ROT(*uParam0, 2) };
	}
	Global_1914319->f_19461.f_1 = iParam1;
	func_1327(&(Global_1914319->f_19461.f_2), &(Global_1914319->f_19461.f_2.f_3), &(Global_1914319->f_19461.f_2.f_9), &(Global_1914319->f_19461.f_2.f_6), &(Global_1914319->f_19461.f_2.f_10), &(Global_1914319->f_19461.f_2.f_11));
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
	}
	Global_1914319->f_19461.f_179 = 0;
	func_1328(1);
	func_857(0);
	CAM::SET_CAM_PARAMS(*uParam0, Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_3, Global_1914319->f_19461.f_2.f_9, 500, 28, 28, 2, 1, 0);
	CAM::SET_CAM_NEAR_CLIP(*uParam0, 0.25f);
	func_858(*uParam0, func_1326(Global_1914319->f_19461.f_1));
}

void func_830(var uParam0, int iParam1)
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (!Global_1914319->f_19461.f_20)
	{
		func_430(iParam1, uParam0);
	}
	if (Global_1914319->f_19461.f_1 == -999503751 || Global_1914319->f_19461.f_1 == 0)
	{
		return;
	}
	Global_1914319->f_19461.f_1 = -999503751;
	func_857(1);
	CAM::SET_CAM_PARAMS(*uParam0, *(Global_1914319->f_19461.f_22[0 /*12*/]), (Global_1914319->f_19461.f_22[0 /*12*/])->f_3, (Global_1914319->f_19461.f_22[0 /*12*/])->f_9, 500, 28, 28, 2, 1, 0);
	func_1328(0);
	func_858(*uParam0, 0);
}

void func_831(var uParam0, int iParam1)
{
	func_547(uParam0, 1);
	func_1329(uParam0, iParam1, 1);
	func_548(uParam0, 1, 1210712530, -1787661156);
}

void func_832(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1088(uParam0))
	{
		iVar0 = func_959(uParam0);
		iParam1 = func_1256(iVar0);
	}
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "Text", iParam1);
}

void func_833(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemDescription");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "Enabled", bParam1);
}

int func_834(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_794(func_1330(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_835(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	struct<4> Var19;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	var uVar28;
	int iVar29;
	vector3 vVar30;
	struct<4> Var33;
	struct<9> Var37;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	int iVar52;
	int iVar53;
	var uVar54;
	int iVar55;
	vector3 vVar56;
	struct<4> Var59;
	struct<9> Var63;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	var uVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	struct<14> Var81;
	
	iVar0 = 0;
	if (iParam2 == -1502467280 || iParam2 == 777890122)
	{
		if (func_612(iParam1, 1844906744))
		{
			iVar1 = func_339(iParam1);
			if ((iParam2 == 777890122 || iVar1 == 146649851) || iVar1 == -1954920608)
			{
				iVar0 = 1;
			}
			else if (iParam2 == -1502467280)
			{
				Var5 = -1;
				Var5.f_1 = -1;
				Var5.f_2 = -1;
				Var5.f_3 = -1;
				Var5.f_4 = -1;
				Var5.f_5 = -1;
				Var5.f_6 = -1;
				Var5.f_7 = -1;
				Var5.f_8 = -1;
				Var5.f_13 = -1;
				iVar23 = func_961(uParam0);
				iVar24 = func_962(uParam0);
				if (iVar23 != 0 && iVar24 != 0)
				{
					Var19 = { func_669(iVar23, func_668(0), iVar24, 0) };
					if (iVar1 != 0)
					{
						iVar0 = 1;
						iVar25 = func_1331(iParam1);
						iVar26 = 0;
						while (iVar26 < iVar25)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar26, &iVar2))
							{
								Var5 = { func_979(0, iVar2, -1591664384, -1591664384, 0, 0) };
								func_1332(&Var5, Var19);
								if (func_980(&Var5, &iVar3, &iVar4, 1))
								{
									if (iVar4 != 0)
									{
										iVar0 = 0;
									}
									func_982(iVar3);
								}
							}
							iVar26++;
						}
					}
				}
			}
		}
		else if (func_612(iParam1, 188214926))
		{
			iVar29 = func_276(uParam0);
			vVar30.f_1 = -1;
			vVar30.f_2 = -1;
			Var37 = -1;
			Var37.f_1 = -1;
			Var37.f_2 = -1;
			Var37.f_3 = -1;
			Var37.f_4 = -1;
			Var37.f_5 = -1;
			Var37.f_6 = -1;
			Var37.f_7 = -1;
			Var37.f_8 = -1;
			if (func_963(func_724(&(uParam0->f_2031)), iVar29, &Var33))
			{
				iVar27 = 0;
				while (iVar27 < Var33.f_3)
				{
					vVar30 = { func_964(iVar27, Var33, &(uParam0->f_2031)) };
					if (vVar30.x == iParam1 && func_278(vVar30.x, 0))
					{
						Var37.f_8 = vVar30.y;
						iVar48 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var37, &iVar47, 1);
						if (iVar48 == -1)
						{
						}
						else
						{
							iVar49 = 0;
							while (iVar49 < iVar47)
							{
								iVar50 = func_920(iVar49, iVar48);
								if (((func_278(iVar50, 0) && iVar50 != iParam1) && func_921(&(uParam0->f_2031), iVar50, &uVar28)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar50, Var37.f_8) == -2089472884)
								{
									uVar51 = func_897(uParam0, iVar50);
									if (func_835(uParam0, iVar50, uVar51))
									{
										iVar0 = 1;
									}
									else
									{
										iVar49++;
									}
									ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar48);
									Jump @665; //curOff = 653
									iVar27++;
									Jump @692; //curOff = 665
									iVar52 = func_961(uParam0);
									iVar0 = func_1333(iVar52, iParam1, func_962(uParam0));
									Jump @1200; //curOff = 692
									if (iParam2 == -584027224)
									{
										if (func_671(iParam1, 1) > 0)
										{
											return 1;
										}
									}
									else if (iParam2 == 1702073444)
									{
										iVar55 = func_276(uParam0);
										vVar56.f_1 = -1;
										vVar56.f_2 = -1;
										Var63 = -1;
										Var63.f_1 = -1;
										Var63.f_2 = -1;
										Var63.f_3 = -1;
										Var63.f_4 = -1;
										Var63.f_5 = -1;
										Var63.f_6 = -1;
										Var63.f_7 = -1;
										Var63.f_8 = -1;
										if (func_963(func_724(&(uParam0->f_2031)), iVar55, &Var59))
										{
											iVar53 = 0;
											while (iVar53 < Var59.f_3)
											{
												vVar56 = { func_964(iVar53, Var59, &(uParam0->f_2031)) };
												if (vVar56.x == iParam1 && func_278(vVar56.x, 0))
												{
													Var63.f_8 = vVar56.y;
													iVar74 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var63, &iVar73, 1);
													if (iVar74 == -1)
													{
													}
													else
													{
														iVar75 = 0;
														while (iVar75 < iVar73)
														{
															iVar76 = func_920(iVar75, iVar74);
															if (((func_278(iVar76, 0) && iVar76 != iParam1) && func_921(&(uParam0->f_2031), iVar76, &uVar54)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar76, Var63.f_8) == -2089472884)
															{
																uVar77 = func_897(uParam0, iVar76);
																if (func_835(uParam0, iVar76, uVar77))
																{
																	iVar0 = 1;
																}
																else
																{
																	iVar75++;
																}
																ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar74);
																Jump @1048; //curOff = 1035
																iVar53++;
																Jump @1200; //curOff = 1048
																if (iParam2 == 1394581936)
																{
																	if (func_1022(iParam1))
																	{
																		iVar78 = func_444(7);
																		if (iVar78 == -1)
																		{
																			return 0;
																		}
																		if (func_1023(iParam1))
																		{
																			return func_1334(iVar78, iParam1);
																		}
																		if (func_1025(iParam1))
																		{
																			return func_1335(iVar78, iParam1);
																		}
																	}
																	else
																	{
																		return func_1336(iParam1);
																	}
																}
																else
																{
																	Var81 = { func_979(iParam1, -1591664384, -1591664384, -1591664384, 0, 0) };
																	if (func_980(&Var81, &iVar79, &iVar80, 0))
																	{
																		if (iVar80 > 0)
																		{
																			iVar0 = 1;
																		}
																	}
																	func_982(iVar79);
																}
																return iVar0;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

int func_836(int iParam0)
{
	if ((iParam0 == 207706105 || iParam0 == -1998614617) || iParam0 == -357182937)
	{
		return 1;
	}
	return 0;
}

void func_837(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_339(iParam0))
	{
		case -2061583405:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_1337(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1338();
	}
	if (bParam1)
	{
		func_129(0, 0);
	}
}

void func_838(int iParam0, int iParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	
	if (!func_278(iParam0, 0))
	{
		return;
	}
	if (!func_1339(iParam0, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			sVar3 = "ITEM_SAVED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
		
		case 1:
			sVar3 = "ITEM_DELETED";
			sVar4 = "Transaction_Negative";
			iVar5 = 619977481;
			break;
		
		case 2:
			sVar3 = "ITEM_STORED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
		
		case 3:
			sVar3 = "ITEM_REMOVED";
			sVar4 = "Transaction_Positive";
			iVar5 = 109029619;
			break;
	}
	sVar6 = func_1340(MISC::_CREATE_VAR_STRING(10, sVar3, MISC::_CREATE_VAR_STRING(0, func_1154(iParam0))), iVar5);
	func_1341(sVar6, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar5, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_839(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	if (!func_1342(iParam0))
	{
		return;
	}
	iVar0 = func_339(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		
		case 81053684:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		
		case -999503751:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		
		case -525676072:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		
		case -1719060085:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		
		case -413129408:
			bVar1 = func_1343(iParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_826(0))
	{
		func_1344(iParam0, 1);
		if (func_1171() == 1160113249)
		{
			func_1344(func_826(-2125499975), 0);
		}
		else
		{
			func_1344(func_826(1160113249), 0);
		}
	}
	func_1338();
	if (func_1345(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_1208(0), iParam0, 0);
	}
	func_1346(iParam0, iParam3);
	if (bParam2)
	{
		func_129(0, 0);
	}
}

int func_840(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (func_125() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == (Global_26795.f_26[iVar0 /*120*/])->f_1)
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iVar1 == (Global_36637.f_45.f_350.f_26[iVar0 /*120*/])->f_1)
			{
				*uParam1 = iVar0;
				return 1;
			}
			iVar0++;
		}
		return 0;
	}
	return 0;
}

void func_841(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_125() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_1347(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1348(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

void func_842(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (&Global_26795.f_26[iParam1 /*120*/] - (Global_26795.f_26[iParam1 /*120*/] && iParam0));
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (&Global_36637.f_45.f_350.f_26[iParam1 /*120*/] - (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0));
	}
}

int func_843(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1349(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_970(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_794(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_1350(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_1315(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_1315(iParam0, 0, 0) - iParam1) < 0)
		{
			func_843(iParam0, func_1315(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_827(iParam0) == -427144552)
	{
		if (!func_1351(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1352(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_927(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_970(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1353(iParam0, iParam1);
	return 1;
}

int func_844(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (!func_1323(2, iVar0))
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_845(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 5)
	{
		return func_1354(iVar0);
	}
	return 0;
}

void func_846(var uParam0)
{
	int iVar0;
	
	iVar0 = func_1355(-999503751);
	if (iVar0 != 0)
	{
		if (func_836(func_276(uParam0)))
		{
			func_592(uParam0, -1, 1);
		}
		func_837(iVar0, 1, 1);
	}
}

int func_847(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_1356(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1357(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1358(iParam0, bParam2);
	iVar2 = 0;
	if (func_1315(iParam0, 0, 0) == 0)
	{
		if (func_1359(iParam0))
		{
			iVar5 = func_1360(iParam0);
			iVar6 = func_1361(iVar5);
			iVar7 = func_1362(iVar6) + 1;
			func_1363(iVar5);
			if (func_1364(38))
			{
				func_341(483, 0);
			}
			else
			{
				func_341(482, 0);
			}
			if (iVar7 == func_1365(iVar6))
			{
				func_847(func_1366(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_158() && func_1367(4))
				{
					if (func_158() && (func_1368(38) || func_1364(38)))
					{
						func_1370(38, func_1366(iVar6), 0, 0, func_1369(), 0, -1, 0);
						func_1371(2);
					}
					else
					{
						func_1370(38, func_1366(iVar6), 0, 0, func_1369(), 0, -1, 0);
						func_1371(1);
					}
				}
			}
			else if (func_158() && func_1367(4))
			{
				if (func_158() && (func_1368(38) || func_1364(38)))
				{
					func_1370(38, 0, 0, 0, func_1369(), 0, -1, 0);
					func_1371(2);
				}
				else
				{
					func_1370(38, 0, 0, 0, func_1369(), 0, -1, 0);
					func_1371(1);
				}
			}
			if (func_158() && func_1367(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_158() && (func_1368(38) || func_1364(38)))
					{
						func_1372(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1372(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_827(iParam0) == -1037537535)
	{
		if ((!func_612(iParam0, 866047851) && !func_612(iParam0, -1979000645)) && !func_612(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1373(iParam0, 8388608) && !func_40(28))
	{
		func_1374(28);
	}
	if (!bVar3)
	{
		if (func_612(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_339(iParam0) == -1447088266)
			{
				iVar1 = func_1376(func_1375(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_125() == -1)
					{
						func_1377(iVar1);
					}
					if (func_927(0) && func_1378(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1379(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_125() == -1)
					{
						func_1377(iParam0);
					}
					if (func_927(0) && func_1378(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1379(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_827(iParam0) == -427144552)
		{
			if (!func_1380(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_827(iParam0) == 307971639 && func_1209(iParam0))
		{
			if (!func_1381(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_612(iParam0, 866047851))
		{
			func_1382(iParam0);
		}
		else if (func_612(iParam0, 2000026003))
		{
			func_1383(iParam0);
		}
		else if (func_612(iParam0, -103750053))
		{
			func_1385(func_1384(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_1385(func_1204(-717883113, 2091222383), iVar0);
		}
		else if (func_612(iParam0, -121341956) && !func_612(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_341(498, 0);
				}
			}
			if (func_612(iParam0, -2017733358) || func_612(iParam0, -1369131378))
			{
				func_1386(iParam0);
			}
		}
		else if (func_612(iParam0, -136654233))
		{
			if (func_612(iParam0, -1021472396))
			{
			}
		}
		else if (func_612(iParam0, -1466706512) && func_612(iParam0, 1147021565))
		{
			func_341(484, 0);
		}
		else if (func_612(iParam0, 1147021565) && func_612(iParam0, -524514947))
		{
		}
		else if (func_612(iParam0, 554195525))
		{
		}
		else if (func_612(iParam0, 589988438))
		{
			if (func_1387())
			{
				func_1388(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_612(iParam0, 787083290) && func_612(iParam0, 949916894))
		{
			func_1389(iParam0);
		}
		else if (func_612(iParam0, -1718133314))
		{
			func_1390(iParam0);
		}
		else if (func_612(iParam0, -1738650224))
		{
			func_1391(iParam0);
		}
		else if (func_612(iParam0, -1112814642) && func_612(iParam0, 949916894))
		{
			func_1392(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_612(iParam0, 1841149704))
		{
			func_1393();
		}
		else if (func_612(iParam0, 606799272))
		{
			func_1394(iParam0, iParam1);
			func_1395(iParam0);
		}
		else if (func_612(iParam0, -1112814642) && func_612(iParam0, -1697809989))
		{
			func_1396(iParam0, 0, 0, 0);
		}
		else if (func_612(iParam0, -2017733358) || func_612(iParam0, -1369131378))
		{
			func_1386(iParam0);
		}
		else if (func_612(iParam0, -1921346699))
		{
			if (func_125() != -1)
			{
				return 0;
			}
			func_1397(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_612(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_794(215778062, 1, 0))
					{
						func_847(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_794(670273567, 1, 0))
					{
						func_847(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_794(-967317137, 1, 0))
					{
						func_847(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_794(526074061, 1, 0))
					{
						func_847(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_794(-1045488665, 1, 0))
					{
						func_847(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_794(471514780, 1, 0))
					{
						func_847(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_612(iParam0, -839724752) && func_1373(iParam0, 4))
		{
			if (!func_1364(42))
			{
				func_1398(iParam0);
			}
		}
		else if (func_612(iParam0, 1399091007))
		{
			func_1399(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_612(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_847(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_1374(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_958(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1400(&iVar9, 0))
				{
					func_1378(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_125() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_958(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_341(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1401();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1402();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1403();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1404();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_747();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_1405(499813453, 854119837, 0);
				func_1406(499813453, 0);
				func_1407(1);
				break;
			
			case 2127812557:
				func_1405(499813453, -1292544588, 0);
				func_1406(499813453, 0);
				func_1407(2);
				break;
			
			case 808991383:
				func_1405(499813453, -1003325394, 0);
				func_1406(499813453, 0);
				func_1407(4);
				break;
			
			case 1134518629:
				func_1405(666607663, -335460405, 0);
				func_1406(666607663, 0);
				func_1408(1);
				break;
			
			case 902940106:
				func_1405(666607663, 903797617, 0);
				func_1406(666607663, 0);
				func_1408(2);
				break;
			
			case -418174898:
				func_1405(666607663, 669728650, 0);
				func_1406(666607663, 0);
				func_1408(4);
				break;
			
			case -648114971:
				func_1405(-220219788, 1214120047, 0);
				func_1406(-220219788, 0);
				func_1409(1);
				break;
			
			case 211153747:
				func_1405(-220219788, 655769340, 0);
				func_1406(-220219788, 0);
				func_1409(2);
				break;
			
			case -32876996:
				func_1405(-220219788, 885316185, 0);
				func_1406(-220219788, 0);
				func_1409(4);
				break;
			
			case 1191437462:
				func_1405(218622660, -1491419385, 0);
				func_1406(218622660, 0);
				func_1410(1);
				break;
			
			case 1119149048:
				func_1405(218622660, 1809565830, 0);
				func_1406(218622660, 0);
				func_1410(2);
				break;
			
			case 506073827:
				func_1405(390004462, -628873767, 0);
				func_1406(390004462, 0);
				func_1411(1);
				break;
			
			case -1876986168:
				func_1405(390004462, -405421956, 0);
				func_1406(390004462, 0);
				func_1411(2);
				break;
			
			case 2142623221:
				func_1405(390004462, -1108972386, 0);
				func_1406(390004462, 0);
				func_1411(4);
				break;
			
			case 1508215381:
				func_1405(6410548, 1053716392, 0);
				func_1406(6410548, 0);
				func_1412(1);
				break;
			
			case -888935280:
				func_1405(6410548, 806507056, 0);
				func_1406(6410548, 0);
				func_1412(2);
				break;
			
			case -1252474566:
				func_1405(6410548, 1571925350, 0);
				func_1406(6410548, 0);
				func_1412(4);
				break;
			
			case -1465702449:
				func_1405(6410548, 1330352282, 0);
				func_1406(6410548, 0);
				func_1412(8);
				break;
			
			case -21093309:
				func_1413(242, func_1154(-21093309), 0);
				break;
			
			case 204375141:
				func_1413(240, func_1154(204375141), 0);
				break;
			
			case -417963070:
				func_1413(241, func_1154(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_1414(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_341(488, 0);
				break;
			
			case 1613651027:
				func_341(491, 0);
				break;
			
			case -885810591:
				func_341(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_847(func_1415(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_847(func_1416(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_40(1))
				{
					func_341(487, 0);
				}
				break;
			
			case -898386032:
				func_341(486, 0);
				break;
			
			case -2035110427:
				if (func_125() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_341(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_1417(&iVar10);
		if (!func_1418(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_927(0))
		{
			return 1;
		}
		if (func_827(iParam0) == -1037537535)
		{
			func_1419(iParam0);
		}
		if (func_612(iParam0, -1979000645))
		{
			func_1420(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_927(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_847(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1421(iVar2, 0);
		}
	}
	Var35 = { func_1350(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_1422(iParam0);
	if (sParam6 > 0f)
	{
		if (func_612(iParam0, -839724752))
		{
			func_1423(iParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_970(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_848(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_1424(&(Global_1946804->f_1497), iParam0);
	if (bParam2)
	{
		func_1425(2, iParam0, 6);
	}
	if (bParam1)
	{
		func_129(0, 1);
	}
}

void func_849(int iParam0)
{
	if (!func_1426(iParam0))
	{
		return;
	}
	if (func_821(iParam0))
	{
		return;
	}
	if (func_339(iParam0) != -999503751)
	{
		return;
	}
	func_839(iParam0, 1, 0, 0);
}

void func_850(var uParam0)
{
	func_1427(uParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319->f_19461.f_180))
	{
		if (HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1914319->f_19461.f_180))
		{
			if (!Global_1914319->f_19461.f_179)
			{
				func_1428(uParam0);
			}
		}
		else if (Global_1914319->f_19461.f_179)
		{
			func_1428(uParam0);
		}
	}
}

void func_851(var uParam0)
{
	uParam0->f_16 = 0;
}

int func_852(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam1 >= func_1156(iParam0, bParam2))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 18)
	{
		iVar2 = &Global_1946804->f_2657[iVar1];
		if (func_278(iVar2, 0))
		{
			if (func_339(iVar2) == iParam0)
			{
				if (iVar0 == iParam1)
				{
					return iVar2;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_853(var uParam0, int iParam1)
{
	return (uParam0->f_5863 && iParam1) != 0;
}

bool func_854(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3((Global_1395601->f_5[iParam0 /*28*/])->f_23))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB((Global_1395601->f_5[iParam0 /*28*/])->f_23, Global_36);
}

int func_855(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	
	Var0 = &Global_1914319->f_16934[iParam1];
	if (!func_1429(&Var0, iParam2))
	{
		return 0;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam0, &Var0))
	{
		return 0;
	}
	return 1;
}

void func_856(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	vector3 vVar14;
	vector3 vVar17;
	var uVar20;
	vector3 vVar21;
	vector3 vVar24;
	var uVar27;
	vector3 vVar28;
	vector3 vVar31;
	var uVar34;
	vector3 vVar35;
	vector3 vVar38;
	var uVar41;
	vector3 vVar42;
	vector3 vVar45;
	vector3 vVar48;
	vector3 vVar51;
	vector3 vVar54;
	vector3 vVar57;
	vector3 vVar60;
	vector3 vVar63;
	vector3 vVar66;
	vector3 vVar69;
	vector3 vVar72;
	var uVar75;
	var uVar76;
	var uVar77;
	var uVar78;
	var uVar79;
	var uVar80;
	vector3 vVar81;
	vector3 vVar84;
	var uVar87;
	
	if (iParam1 != -1 && func_855(&vVar45, iParam1, iParam2, -642706190))
	{
		func_855(&vVar51, iParam1, iParam2, -1507145287);
		func_855(&vVar57, iParam1, iParam2, 872797902);
		func_855(&vVar63, iParam1, iParam2, 939367811);
		func_855(&vVar69, iParam1, iParam2, -776836338);
		func_855(&vVar0, iParam1, iParam2, 1891724909);
		func_855(&vVar7, iParam1, iParam2, 26009546);
		func_855(&vVar14, iParam1, iParam2, -1287161638);
		func_855(&vVar21, iParam1, iParam2, 1781223200);
		func_855(&vVar28, iParam1, iParam2, 639395495);
		func_855(&vVar35, iParam1, iParam2, -1034669384);
		func_855(&vVar81, iParam1, iParam2, 1091942092);
	}
	else
	{
		vVar45 = { func_1430(1) };
		vVar51 = { func_1430(2) };
		vVar57 = { func_1430(3) };
		vVar63 = { func_1430(4) };
		vVar69 = { func_1430(5) };
		vVar0 = { func_1430(7) };
		vVar7 = { func_1430(6) };
		vVar14 = { func_1430(10) };
		vVar21 = { func_1430(8) };
		vVar28 = { func_1430(9) };
		vVar35 = { func_1430(11) };
		vVar81 = { func_1430(12) };
	}
	*(Global_1914319->f_19461.f_22[1 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar45) };
	*(Global_1914319->f_19461.f_22[2 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar51) };
	*(Global_1914319->f_19461.f_22[3 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar57) };
	*(Global_1914319->f_19461.f_22[4 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar63) };
	*(Global_1914319->f_19461.f_22[5 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar69) };
	*(Global_1914319->f_19461.f_22[7 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	*(Global_1914319->f_19461.f_22[6 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar7) };
	*(Global_1914319->f_19461.f_22[10 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar14) };
	*(Global_1914319->f_19461.f_22[8 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar21) };
	*(Global_1914319->f_19461.f_22[9 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar28) };
	*(Global_1914319->f_19461.f_22[11 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar35) };
	*(Global_1914319->f_19461.f_22[12 /*12*/]) = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar81) };
	if (iParam1 != -1 && func_855(&vVar48, iParam1, iParam2, 222482482))
	{
		func_855(&vVar54, iParam1, iParam2, -718905633);
		func_855(&vVar60, iParam1, iParam2, 1700485506);
		func_855(&vVar66, iParam1, iParam2, 1998419372);
		func_855(&vVar72, iParam1, iParam2, 1259760656);
		func_855(&vVar3, iParam1, iParam2, 1327962479);
		func_855(&vVar10, iParam1, iParam2, -991979571);
		func_855(&vVar17, iParam1, iParam2, 1380636221);
		func_855(&vVar24, iParam1, iParam2, 797889520);
		func_855(&vVar31, iParam1, iParam2, -1676223069);
		func_855(&vVar38, iParam1, iParam2, -717624061);
		func_855(&vVar42, iParam1, iParam2, -1335042021);
		func_855(&vVar84, iParam1, iParam2, -1154246256);
	}
	else
	{
		vVar42 = { func_1431(0) };
		vVar48 = { func_1431(1) };
		vVar54 = { func_1431(2) };
		vVar60 = { func_1431(3) };
		vVar66 = { func_1431(4) };
		vVar72 = { func_1431(5) };
		vVar3 = { func_1431(7) };
		vVar10 = { func_1431(6) };
		vVar17 = { func_1431(10) };
		vVar24 = { func_1431(8) };
		vVar31 = { func_1431(9) };
		vVar38 = { func_1431(11) };
		vVar84 = { func_1431(12) };
	}
	vVar42 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar42) };
	vVar48 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar48) };
	vVar54 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar54) };
	vVar60 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar60) };
	vVar66 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar66) };
	vVar72 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar72) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
	vVar10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar10) };
	vVar17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar17) };
	vVar24 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar24) };
	vVar31 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar31) };
	vVar38 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar38) };
	vVar84 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar84) };
	(Global_1914319->f_19461.f_22[0 /*12*/])->f_6 = { vVar42 };
	(Global_1914319->f_19461.f_22[1 /*12*/])->f_6 = { vVar48 };
	(Global_1914319->f_19461.f_22[2 /*12*/])->f_6 = { vVar54 };
	(Global_1914319->f_19461.f_22[3 /*12*/])->f_6 = { vVar60 };
	(Global_1914319->f_19461.f_22[4 /*12*/])->f_6 = { vVar66 };
	(Global_1914319->f_19461.f_22[5 /*12*/])->f_6 = { vVar72 };
	(Global_1914319->f_19461.f_22[7 /*12*/])->f_6 = { vVar3 };
	(Global_1914319->f_19461.f_22[6 /*12*/])->f_6 = { vVar10 };
	(Global_1914319->f_19461.f_22[10 /*12*/])->f_6 = { vVar17 };
	(Global_1914319->f_19461.f_22[8 /*12*/])->f_6 = { vVar24 };
	(Global_1914319->f_19461.f_22[9 /*12*/])->f_6 = { vVar31 };
	(Global_1914319->f_19461.f_22[11 /*12*/])->f_6 = { vVar38 };
	(Global_1914319->f_19461.f_22[12 /*12*/])->f_6 = { vVar84 };
	(Global_1914319->f_19461.f_22[1 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[1 /*12*/]), vVar48) };
	(Global_1914319->f_19461.f_22[2 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[2 /*12*/]), vVar54) };
	(Global_1914319->f_19461.f_22[3 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[3 /*12*/]), vVar60) };
	(Global_1914319->f_19461.f_22[4 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[4 /*12*/]), vVar66) };
	(Global_1914319->f_19461.f_22[5 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[5 /*12*/]), vVar72) };
	(Global_1914319->f_19461.f_22[7 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[7 /*12*/]), vVar3) };
	(Global_1914319->f_19461.f_22[6 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[6 /*12*/]), vVar10) };
	(Global_1914319->f_19461.f_22[10 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[10 /*12*/]), vVar17) };
	(Global_1914319->f_19461.f_22[8 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[8 /*12*/]), vVar24) };
	(Global_1914319->f_19461.f_22[9 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[9 /*12*/]), vVar31) };
	(Global_1914319->f_19461.f_22[11 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[11 /*12*/]), vVar38) };
	(Global_1914319->f_19461.f_22[12 /*12*/])->f_3 = { func_1432(*(Global_1914319->f_19461.f_22[12 /*12*/]), vVar84) };
	if (iParam1 != -1 && func_1433(&uVar75, iParam1, iParam2, -1227997166))
	{
		func_1433(&uVar76, iParam1, iParam2, 1325448948);
		func_1433(&uVar77, iParam1, iParam2, -2091857109);
		func_1433(&uVar78, iParam1, iParam2, 967624365);
		func_1433(&uVar79, iParam1, iParam2, 1865698850);
		func_1433(&uVar80, iParam1, iParam2, 743589651);
		func_1433(&uVar6, iParam1, iParam2, 856434605);
		func_1433(&uVar13, iParam1, iParam2, 1222222663);
		func_1433(&uVar20, iParam1, iParam2, -1399406742);
		func_1433(&uVar27, iParam1, iParam2, -1889746575);
		func_1433(&uVar34, iParam1, iParam2, 1996639706);
		func_1433(&uVar41, iParam1, iParam2, 171259336);
		func_1433(&uVar87, iParam1, iParam2, 1430427185);
	}
	else
	{
		uVar75 = func_1434(0);
		uVar76 = func_1434(1);
		uVar77 = func_1434(2);
		uVar78 = func_1434(3);
		uVar79 = func_1434(4);
		uVar80 = func_1434(5);
		uVar6 = func_1434(7);
		uVar13 = func_1434(6);
		uVar20 = func_1434(10);
		uVar27 = func_1434(8);
		uVar34 = func_1434(9);
		uVar41 = func_1434(11);
		uVar87 = func_1434(12);
	}
	(Global_1914319->f_19461.f_22[0 /*12*/])->f_9 = uVar75;
	(Global_1914319->f_19461.f_22[1 /*12*/])->f_9 = uVar76;
	(Global_1914319->f_19461.f_22[2 /*12*/])->f_9 = uVar77;
	(Global_1914319->f_19461.f_22[3 /*12*/])->f_9 = uVar78;
	(Global_1914319->f_19461.f_22[4 /*12*/])->f_9 = uVar79;
	(Global_1914319->f_19461.f_22[5 /*12*/])->f_9 = uVar80;
	(Global_1914319->f_19461.f_22[7 /*12*/])->f_9 = uVar6;
	(Global_1914319->f_19461.f_22[6 /*12*/])->f_9 = uVar13;
	(Global_1914319->f_19461.f_22[10 /*12*/])->f_9 = uVar20;
	(Global_1914319->f_19461.f_22[8 /*12*/])->f_9 = uVar27;
	(Global_1914319->f_19461.f_22[9 /*12*/])->f_9 = uVar34;
	(Global_1914319->f_19461.f_22[11 /*12*/])->f_9 = uVar41;
	(Global_1914319->f_19461.f_22[12 /*12*/])->f_9 = uVar87;
	if (iParam1 != -1 && func_1433(&uVar75, iParam1, iParam2, 2126347867))
	{
		func_1433(&uVar76, iParam1, iParam2, -1473147387);
		func_1433(&uVar77, iParam1, iParam2, 1271822110);
		func_1433(&uVar78, iParam1, iParam2, -242139225);
		func_1433(&uVar79, iParam1, iParam2, 261148733);
		func_1433(&uVar80, iParam1, iParam2, 456166852);
		func_1433(&uVar6, iParam1, iParam2, 1008724865);
		func_1433(&uVar13, iParam1, iParam2, 355420967);
		func_1433(&uVar20, iParam1, iParam2, 6312985);
		func_1433(&uVar27, iParam1, iParam2, -2062854103);
		func_1433(&uVar34, iParam1, iParam2, 345389633);
		func_1433(&uVar41, iParam1, iParam2, 522396574);
		func_1433(&uVar87, iParam1, iParam2, -788366962);
	}
	else
	{
		uVar75 = func_1435(0);
		uVar76 = func_1435(1);
		uVar77 = func_1435(2);
		uVar78 = func_1435(3);
		uVar79 = func_1435(4);
		uVar80 = func_1435(5);
		uVar6 = func_1435(7);
		uVar13 = func_1435(6);
		uVar20 = func_1435(10);
		uVar27 = func_1435(8);
		uVar34 = func_1435(9);
		uVar41 = func_1435(11);
		uVar87 = func_1435(12);
	}
	(Global_1914319->f_19461.f_22[0 /*12*/])->f_10 = uVar75;
	(Global_1914319->f_19461.f_22[1 /*12*/])->f_10 = uVar76;
	(Global_1914319->f_19461.f_22[2 /*12*/])->f_10 = uVar77;
	(Global_1914319->f_19461.f_22[3 /*12*/])->f_10 = uVar78;
	(Global_1914319->f_19461.f_22[4 /*12*/])->f_10 = uVar79;
	(Global_1914319->f_19461.f_22[5 /*12*/])->f_10 = uVar80;
	(Global_1914319->f_19461.f_22[7 /*12*/])->f_10 = uVar6;
	(Global_1914319->f_19461.f_22[6 /*12*/])->f_10 = uVar13;
	(Global_1914319->f_19461.f_22[10 /*12*/])->f_10 = uVar20;
	(Global_1914319->f_19461.f_22[8 /*12*/])->f_10 = uVar27;
	(Global_1914319->f_19461.f_22[9 /*12*/])->f_10 = uVar34;
	(Global_1914319->f_19461.f_22[11 /*12*/])->f_10 = uVar41;
	(Global_1914319->f_19461.f_22[12 /*12*/])->f_10 = uVar87;
	if (iParam1 != -1 && func_1433(&uVar75, iParam1, iParam2, 926457408))
	{
		func_1433(&uVar76, iParam1, iParam2, -1446400344);
		func_1433(&uVar77, iParam1, iParam2, 1416748891);
		func_1433(&uVar78, iParam1, iParam2, 101413382);
		func_1433(&uVar79, iParam1, iParam2, -1976760931);
		func_1433(&uVar80, iParam1, iParam2, 1306012376);
		func_1433(&uVar6, iParam1, iParam2, 1136472284);
		func_1433(&uVar13, iParam1, iParam2, 1349037503);
		func_1433(&uVar20, iParam1, iParam2, 835143778);
		func_1433(&uVar27, iParam1, iParam2, 918365883);
		func_1433(&uVar34, iParam1, iParam2, -938532231);
		func_1433(&uVar41, iParam1, iParam2, -2024244127);
		func_1433(&uVar87, iParam1, iParam2, 1748298861);
	}
	else
	{
		uVar75 = func_1436(0);
		uVar76 = func_1436(1);
		uVar77 = func_1436(2);
		uVar78 = func_1436(3);
		uVar79 = func_1436(4);
		uVar80 = func_1436(5);
		uVar6 = func_1436(7);
		uVar13 = func_1436(6);
		uVar20 = func_1436(10);
		uVar27 = func_1436(8);
		uVar34 = func_1436(9);
		uVar41 = func_1436(11);
		uVar87 = func_1436(12);
	}
	(Global_1914319->f_19461.f_22[0 /*12*/])->f_11 = uVar75;
	(Global_1914319->f_19461.f_22[1 /*12*/])->f_11 = uVar76;
	(Global_1914319->f_19461.f_22[2 /*12*/])->f_11 = uVar77;
	(Global_1914319->f_19461.f_22[3 /*12*/])->f_11 = uVar78;
	(Global_1914319->f_19461.f_22[4 /*12*/])->f_11 = uVar79;
	(Global_1914319->f_19461.f_22[5 /*12*/])->f_11 = uVar80;
	(Global_1914319->f_19461.f_22[7 /*12*/])->f_11 = uVar6;
	(Global_1914319->f_19461.f_22[6 /*12*/])->f_11 = uVar13;
	(Global_1914319->f_19461.f_22[10 /*12*/])->f_11 = uVar20;
	(Global_1914319->f_19461.f_22[8 /*12*/])->f_11 = uVar27;
	(Global_1914319->f_19461.f_22[9 /*12*/])->f_11 = uVar34;
	(Global_1914319->f_19461.f_22[11 /*12*/])->f_11 = uVar41;
	(Global_1914319->f_19461.f_22[12 /*12*/])->f_11 = uVar87;
}

void func_857(bool bParam0)
{
	if (bParam0)
	{
		Global_1914319->f_19461.f_1 = 0;
		Global_1914319->f_19461.f_184 = { *(Global_1914319->f_19461.f_22[0 /*12*/]) };
		Global_1914319->f_19461.f_187 = { (Global_1914319->f_19461.f_22[0 /*12*/])->f_3 };
		Global_1914319->f_19461.f_194 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(Global_1914319->f_19461.f_22[0 /*12*/]), (Global_1914319->f_19461.f_22[0 /*12*/])->f_6, true);
	}
	else
	{
		Global_1914319->f_19461.f_184 = { Global_1914319->f_19461.f_2 };
		Global_1914319->f_19461.f_187 = { Global_1914319->f_19461.f_2.f_3 };
		Global_1914319->f_19461.f_194 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_6, true);
	}
	Global_1914319->f_19461.f_190 = 0f;
	Global_1914319->f_19461.f_191 = 0f;
	Global_1914319->f_19461.f_192 = Global_1914319->f_19461.f_187;
	Global_1914319->f_19461.f_193 = Global_1914319->f_19461.f_187.f_2;
	Global_1914319->f_19461.f_182 = 0f;
	Global_1914319->f_19461.f_183 = 0f;
	Global_1914319->f_19461.f_195 = 0;
}

void func_858(var uParam0, int iParam1)
{
	struct<10> Var0;
	
	CAM::_0x11F32BB61B756732(uParam0, (Global_1914319->f_19461.f_22[iParam1 /*12*/])->f_11);
	Var0 = { func_1437(iParam1) };
	CAM::_0xE4B7945EF4F1BFB2(uParam0, &Var0);
}

void func_859(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534->f_7301), 243);
}

int func_860(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_1438(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_861()
{
	if (func_155(43) && !func_155(44))
	{
		return 0;
	}
	if (func_155(67) && func_122() != 8)
	{
		return 0;
	}
	return 1;
}

bool func_862(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

var func_863(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_1204(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_864(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_865(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_873(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_866()
{
	int iVar0;
	
	if (func_343(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_343(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_867(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_868()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1439(iVar0);
		if (func_343(func_1440(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_869(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_870(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*uParam0 = (*uParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*uParam1 = (*uParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*uParam1 += 6;
	iVar0 = func_1315(-1845241476, 0, 0);
	iVar1 = func_1315(1654063339, 0, 0);
	iVar2 = func_1315(1623931083, 0, 0);
	*uParam0 = (*uParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_871(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	
	Var1 = { func_1384(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_872()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1441(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> func_873(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

var func_874(var uParam0, var uParam1)
{
	var uVar0;
	
	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

void func_875(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_232(iParam0))
	{
		return;
	}
	if (func_310(iParam0))
	{
		func_1442(iParam0, 0, 2);
	}
	iVar0 = func_1443(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_876(int iParam0, int iParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || iParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_449(Global_1898330[iParam0]);
		func_1444(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_877(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_878(int iParam0)
{
	int iVar0;
	
	iVar0 = -1337945352;
	if (!func_238(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_879(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_880(int iParam0)
{
	if (!func_879(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_887(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_455(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

void func_881(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_882(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 5:
			return 4;
		
		case 6:
			return 79;
		
		case 0:
			return 43;
		
		case 2:
			return 98;
		
		case 4:
			return 58;
		
		case 1:
			return 71;
		
		case 3:
			return 9;
		
		case 7:
			return 22;
		
		case 8:
			return 37;
		
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_883(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_884(int iParam0)
{
	if (!func_1445(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_1446(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_1447(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_1447(iParam0), false) <= func_1448();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_1448();
	}
	return func_1449();
}

int func_885(int iParam0, int iParam1, int iParam2)
{
	if ((iParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_886(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_232(iParam0))
	{
		return;
	}
	switch (func_233(iParam0))
	{
		case 1:
			iVar0 = func_234(iParam0);
			if (func_1450(iVar0, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1451(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1451(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_1452(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_452((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		
		case 8:
			iVar1 = func_234(iParam0);
			if (func_1453(iVar1, bParam1, iParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_878(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					
					case 2103462781:
						iVar2 = -1032930804;
						break;
					
					case -1485222547:
						iVar2 = 13700166;
						break;
					
					case 1673015813:
						iVar2 = -592708248;
						break;
					
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_878(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_881(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

void func_887(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_888(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_889(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_890(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

int func_891(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1454(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

var func_892(var uParam0)
{
	return uParam0->f_12.f_6;
}

char* func_893(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectLabel";
		
		case 2:
			return "OptionLabel";
		
		case 3:
			return "ToggleLabel";
		
		case 4:
			return "InfoLabel";
		
		case 5:
			return "AdjustLabel";
		
		case 6:
			return "BackLabel";
	}
	return "";
}

int func_894(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_892(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return -1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, func_245(uParam1), iParam0, &uVar1))
	{
		return uVar1;
	}
	return -1;
}

int func_895(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, uParam1, &Var0))
	{
		return func_343(Var0.f_3, iParam2);
	}
	return 0;
}

int func_896(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	var uVar9;
	
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1244(uParam0, iParam1, iVar7, iParam3, &uVar9))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

int func_897(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	func_933(uParam0->f_2, &iVar0);
	if (func_262(uParam0) == -2144266389)
	{
		return -339889117;
	}
	else if (func_918(iParam1))
	{
		return -348190488;
	}
	else if (!func_932(iParam1, 0) && func_1455(iParam1, iVar0))
	{
		return -349391286;
	}
	else if (func_1456(iParam1) && uParam0->f_3 == 152)
	{
		return 2077448405;
	}
	else if (func_1457(iParam1))
	{
		return -2056428614;
	}
	else if (func_339(iParam1) == -525676072 && uParam0->f_3 == 152)
	{
		return 1942587409;
	}
	else if (func_827(iParam1) == -1037537535 && uParam0->f_3 == 152)
	{
		return 761079318;
	}
	else if (func_612(iParam1, 188214926))
	{
		return 1702073444;
	}
	else if (func_339(iParam1) == -1839668642 || func_339(iParam1) == -1415811768)
	{
		return -760956867;
	}
	else if (func_339(iParam1) == 231148558 || func_339(iParam1) == 356304563)
	{
		return 38807286;
	}
	else if (func_827(iParam1) == -1013984273)
	{
		return 777890122;
	}
	else if (func_827(iParam1) == 658570475)
	{
		return -1502467280;
	}
	else if (func_827(iParam1) == 307971639)
	{
		return -1048755899;
	}
	else if (func_827(iParam1) == -1037537535)
	{
		return -853534656;
	}
	else if (func_1015(iParam1))
	{
		return -239176093;
	}
	else if (func_1458(iParam1))
	{
		return 1394581936;
	}
	else if ((((((func_339(iParam1) == 1795979421 || func_339(iParam1) == 1193257440) || func_339(iParam1) == 1415299667) || func_339(iParam1) == -1015460895) || func_339(iParam1) == -768291983) || func_339(iParam1) == 1206030994) || func_339(iParam1) == 526314052)
	{
		return -584027224;
	}
	else if (func_932(iParam1, 0) && func_1455(iParam1, iVar0))
	{
		return 2036169888;
	}
	else
	{
		return -384358143;
	}
	return 0;
}

int func_898(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_1263(uParam0->f_2))
	{
		return 0;
	}
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (func_827(iParam1) != -1037537535)
	{
		return 0;
	}
	if (func_821(iParam1))
	{
		iVar0 = func_956(iParam1);
		if (iVar0 != 0)
		{
			iParam1 = iVar0;
		}
	}
	iVar1 = func_263(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar4 = func_339(iParam1);
	func_127(iVar1, 0);
	if (iVar4 == -999503751)
	{
		iVar5 = func_755(iParam1);
		if (iVar5 == 0)
		{
			func_259(iVar1, 1, 1);
		}
		else if (iVar5 <= 5 && iVar5 >= 1)
		{
			if (!func_1459(iVar1, iVar5, 1))
			{
				return 0;
			}
		}
		else if (!func_1460(iVar1, iParam1, 1))
		{
			return 0;
		}
	}
	else
	{
		if (!func_909(iVar1, iParam1, &iVar3))
		{
			return 0;
		}
		iVar2 = func_957(iParam1);
		if (!func_1461(iVar1, iParam1, 0, iVar2))
		{
			return 0;
		}
	}
	return 1;
}

int func_899(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	
	iVar0 = func_1037(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	Var1 = { func_1006(0) };
	Var3 = { func_1007() };
	if (PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		func_1462(uParam0, iParam1, iVar0, &Var1, &Var3);
	}
	else
	{
		uParam0->f_2308 = 1;
		uParam0->f_2317 = iParam1;
		uParam0->f_2307 = iVar0;
		uParam0->f_2309 = { Var1 };
		uParam0->f_2311 = { Var3 };
	}
	uParam0->f_2031.f_97 = 1;
	return 1;
}

bool func_900()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 1156231582:
			return -986108061;
		
		case -1472456118:
			return -1051664629;
		
		case -2120294484:
			return 1471627791;
		
		case -814448122:
			return 1012091683;
		
		case 1279519416:
			return 282876023;
		
		case 933586678:
			return 1334801974;
		
		case 1612093252:
			return -736147717;
		
		case 530132198:
			return -245303732;
		
		case -499492817:
			return -1900633994;
		
		case -1392593303:
			return -1511041621;
		
		case -2091943191:
			return -193909113;
		
		case 1165676701:
			return -929316746;
		
		case 1380556716:
			return -1147723761;
		
		case -1140711191:
			return 963009459;
		
		case -1189021969:
			return 602337354;
		
		case 862555979:
			return -1471756535;
		
		case -674783297:
			return -2017785881;
		
		case 279124309:
			return -827216318;
		
		default:
			break;
	}
	return 0;
}

bool func_902(int iParam0)
{
	if (iParam0 == 1279130184)
	{
		if (func_900())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return iParam0 == func_632();
}

int func_903(int iParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	iVar1 = Global_1914319->f_16855;
	if (iVar1 != -1)
	{
		fVar0 = func_1463(&((Global_1914319->f_3[iVar1 /*446*/])->f_35), iParam0);
	}
	iVar2 = BUILTIN::ROUND((IntToFloat(func_1186(iParam0, -915411861, 1, 0, bParam1)) * fVar0));
	return iVar2;
}

void func_904(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	func_471(uParam0, iParam1, sParam2);
	func_253(uParam0, iParam1, iParam5);
	func_251(uParam0, iParam1, bParam3);
	func_252(uParam0, iParam1, bParam4);
}

int func_905()
{
	return Global_40.f_7748.f_1;
}

void func_906(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_40.f_7748.f_1;
	}
	func_658();
	func_1173(iParam1);
	if (bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam0, 0);
		}
	}
	func_336(1);
}

int func_907(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_612(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_908(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_612(iParam0, 160827531))
	{
		return 1;
	}
	return 0;
}

int func_909(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (func_827(iParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_125() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_339(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_957(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_612(iParam1, 866047851))
	{
		iVar5 = func_656(iVar4, 1);
		if (func_1160(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*iParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*iParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_339(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_612(iParam1, -1638171711))
			{
				*iParam2 = 187275271;
				return 0;
			}
			Jump @729; //curOff = 405
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*iParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*iParam2 = -849690042;
				return 0;
			}
			Jump @729; //curOff = 476
			if (func_388(1868067663, &iVar0))
			{
				*iParam2 = 939463734;
				return 0;
			}
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1464(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1464(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763;
					return 0;
				}
				Jump @729; //curOff = 586
				iVar3 = func_339(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_612(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*iParam2 = -357399012;
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*iParam2 = 2143522536;
						return 0;
					}
				}
			}
			*iParam2 = 0;
			return 1;
		}

bool func_910(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam2 == 0)
	{
		iVar0 = func_897(uParam0, iParam1);
	}
	else
	{
		iVar0 = iParam2;
	}
	bVar1 = true;
	bVar2 = func_835(uParam0, iParam1, iVar0);
	bVar3 = func_360(1) >= func_903(iParam1, 0);
	bVar4 = !func_1152(uParam0, iParam1);
	bVar6 = func_634(uParam0, iParam1, iVar0, -1);
	iVar7 = func_263(uParam0);
	switch (iVar0)
	{
		case -384358143:
			bVar1 = ((bVar3 && bVar4) && !func_932(iParam1, 0));
			break;
		
		case 1394581936:
			bVar1 = ((bVar3 && bVar4) || (bVar2 && !bVar6));
			break;
		
		case -1395073769:
		case -853534656:
			bVar1 = ((bVar3 && bVar4) || bVar2);
			if (func_339(iParam1) != -999503751)
			{
				if (func_1263(uParam0->f_2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar7) || ENTITY::IS_ENTITY_DEAD(iVar7))
					{
					}
					else
					{
						bVar5 = func_909(iVar7, iParam1, &iVar8);
						if (!bVar5)
						{
						}
						bVar1 = (bVar1 && bVar5);
						Jump @754; //curOff = 343
						if (!ENTITY::DOES_ENTITY_EXIST(iVar7) || ENTITY::IS_ENTITY_DEAD(iVar7))
						{
						}
						else
						{
							if (func_1263(uParam0->f_2))
							{
								bVar1 = func_909(iVar7, iParam1, &iVar8);
							}
							Jump @754; //curOff = 394
							func_933(uParam0->f_2, &iVar9);
							iVar10 = func_934(uParam0->f_2);
							bVar1 = (((!bVar2 && !func_1262(iParam1, iVar9, 1)) && bVar4) && func_936(iParam1, iVar9, 0, 1, iVar10, 1));
							Jump @754; //curOff = 462
							bVar1 = (((bVar3 && !func_932(iParam1, 0)) && !(func_987() == -1 && func_911(0))) && !func_985(uParam0, 128));
							Jump @754; //curOff = 518
							bVar1 = ((bVar3 || func_835(uParam0, iParam1, iVar0)) && bVar4);
							Jump @754; //curOff = 548
							bVar1 = ((bVar3 && !func_932(iParam1, 0)) && bVar4);
							Jump @754; //curOff = 575
							bVar1 = (func_932(iParam1, 0) || (bVar3 && bVar4));
							Jump @754; //curOff = 602
							if (uParam0->f_2 == 25)
							{
								bVar1 = (func_1465(iParam1) && !func_1466(iParam1));
							}
							else
							{
								if (func_952(2))
								{
									iVar11 = 0;
								}
								else
								{
									iVar11 = func_903(iParam1, 0);
								}
								bVar3 = func_360(1) >= iVar11;
								bVar1 = ((bVar3 && func_1465(iParam1)) && bVar4);
							}
							Jump @754; //curOff = 692
							if (iParam1 != 1279130184)
							{
								bVar1 = (bVar3 && func_1467(iParam1));
							}
							else
							{
								bVar1 = ((bVar3 && !func_900()) && !func_631(func_632()));
							}
						}
					}
					if (uParam0->f_2031.f_118)
					{
						Stack.Push(bVar1);
						Stack.Push(uParam0);
						Stack.Push(func_261(uParam0));
						Stack.Push(iParam1);
						Stack.Push(iVar0);
						Call_Loc(uParam0->f_2031.f_119);
						bVar1 = (StackVal && StackVal);
					}
					return bVar1;
				}
			}
		}

int func_911(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_912(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_912(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_913(var uParam0, bool bParam1)
{
	struct<11> Var0;
	struct<10> Var14;
	
	Var0.f_9 = -1591664384;
	if (!func_1468(*uParam0, &Var0, bParam1, 0))
	{
		return 0;
	}
	Var14.f_9 = -1591664384;
	if (!func_1468(Var0.f_5, &Var14, bParam1, 0))
	{
		return 0;
	}
	if (!func_1015(Var14.f_4))
	{
		return 0;
	}
	return Var0.f_10;
}

void func_914(var uParam0, var uParam1)
{
	uParam0->f_2031.f_85 = { *uParam1 };
}

int func_915(int iParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;
	
	Var0.f_9 = -1591664384;
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_1469(iParam0, &uVar22, &Var0, iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_1470(iParam0, &Var0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_916()
{
	return -2087382057;
}

int func_917(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_918(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_919(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_585(uParam0, uParam0->f_2031.f_73, &iVar0))
	{
		return -1;
	}
	return iVar0;
}

int func_920(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_921(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_1091(uParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar3 = 0;
	while (iVar3 < iVar0)
	{
		iVar1 = func_1223(iVar3, uParam0);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			vVar4 = { func_1224(iVar3, iVar2, uParam0) };
			if (vVar4.x == iParam1)
			{
				*uParam2 = iVar3;
				return 1;
			}
			iVar2++;
		}
		iVar3++;
	}
	return 0;
}

int func_922(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 20;
	iVar2 = 35;
	*uParam2 = 0;
	switch (iParam1)
	{
		case 0:
			if (PED::_0xFB4891BD7578CDC1(iParam0, 2056714954))
			{
				*uParam2 = -1938792745;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, 694822476))
			{
				*uParam2 = -1938792745;
				return 0;
			}
			return 1;
		
		case 1:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
			{
				*uParam2 = 1317906541;
				return 0;
			}
			iVar0 = 22;
			if (&Global_1946804->f_1497.f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
			{
				*uParam2 = -692182446;
				return 0;
			}
			return 1;
		
		case 2:
			if (&Global_1946804->f_1497.f_1[iVar2 /*3*/] != &Global_1946804->f_57[iVar2 /*11*/])
			{
				*uParam2 = 807419199;
				return 0;
			}
			return 1;
		
		default:
			break;
	}
	return 1;
}

int func_923(var uParam0)
{
	switch (*uParam0)
	{
		case 5:
		case 23:
		case 28:
		case 69:
		case 76:
		case 78:
		case 105:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_924(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (!func_111(iParam0))
	{
		*uParam2 = -676468980;
		return 0;
	}
	if (!func_111(iParam1))
	{
		*uParam2 = -676468980;
		return 0;
	}
	if (!func_1471(0, 1) || !func_1471(1, 1))
	{
		*uParam2 = -676468980;
		return 0;
	}
	iVar0 = func_1472(iParam0, iParam1);
	if (func_360(1) < iVar0)
	{
		*uParam2 = 1770286334;
		return 0;
	}
	*uParam2 = 1510530693;
	return 1;
}

int func_925(int iParam0)
{
	if (!func_718(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_926(var uParam0, int iParam1)
{
	bool bVar0;
	struct<10> Var1;
	var uVar23;
	
	ATTRIBUTE::_0xD962F8579D702DB5();
	bVar0 = func_622(0);
	if (iParam1 == -772187037)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		Var1.f_9 = -1591664384;
		if (func_1247(func_961(uParam0), &Var1, func_962(uParam0)))
		{
			func_640(uParam0, 1010638409);
		}
		else
		{
			func_640(uParam0, 1547417882);
		}
	}
	else if (iParam1 == -2092532275)
	{
		if (func_900())
		{
			func_640(uParam0, 125684063);
		}
		else if (!func_794(1613651027, 1, 0))
		{
			func_640(uParam0, -1870030974);
		}
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		if (!func_900() && !func_631(func_632()))
		{
			func_630(func_901(func_632()), Global_35, -1, 1);
		}
		else
		{
			func_630(func_632(), Global_35, -1, 1);
		}
	}
	else if (iParam1 == -1352600334)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
		if (bVar0)
		{
			uVar23 = func_1473(uParam0);
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uVar23, 2);
		}
	}
	else if (iParam1 == 2073652352)
	{
		func_636(uParam0, 1, -672301300, bVar0, 1, 0);
	}
	return 1;
}

int func_927(bool bParam0)
{
	if (func_125() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_1208(bParam0));
}

int func_928(var uParam0)
{
	return uParam0->f_2031.f_44;
}

bool func_929(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_930(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = func_1474(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iVar0 == 11)
	{
		Var1.f_2 = 1;
		Var1.f_3 = -15;
		if (!func_1475(&(Global_1914319->f_17378), iParam0, &Var1))
		{
			return 0;
		}
		if (Var1 != 0)
		{
			*uParam2 = Var1;
			uParam2->f_2 = 1;
			return 1;
		}
	}
	else
	{
		if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(func_82(iVar0)))
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(func_82(iVar0), iParam0, &iVar6))
			{
				return 0;
			}
		}
		if (iVar6 == 0)
		{
			return 0;
		}
		iVar9 = 0;
		if (!func_1476(iParam1, &iVar6, uParam2, &iVar9))
		{
			return 0;
		}
		if (func_1015(iParam0))
		{
			iVar10 = func_1477(iParam0, iParam1, 1);
			iVar11 = func_1001(iParam0);
			iVar12 = func_1002(iVar11);
			if (iVar12 == 153881023 || iVar12 == 2010625508)
			{
				if (!func_1478(iVar12))
				{
					iVar10 = (iVar10 - 1);
				}
			}
			if (iVar10 <= 0)
			{
				return 0;
			}
		}
		uParam2->f_2 = 1;
		return 1;
	}
	return 0;
}

int func_931(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6[45];
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = iParam1;
	bVar1 = true;
	if (func_1150(&iVar0))
	{
		bVar1 = false;
	}
	if (func_827(iParam1) == 307971639 && func_612(iParam1, -1588156645))
	{
		bVar1 = false;
	}
	iVar2 = func_903(iParam1, 0);
	if (iParam2 != -1)
	{
		iVar2 = iParam2;
	}
	if ((func_360(0) - iVar2) < 0)
	{
		func_196("SHOP_H_TOO_POOR", 10000, 0, 0, 0, 1);
		return 0;
	}
	if (func_278(func_1479(uParam0->f_3), 0))
	{
		if (iParam1 != func_1479(uParam0->f_3))
		{
			if (func_360(0) - iVar2) < func_903(func_1479(uParam0->f_3), 0)
			{
				return 0;
			}
		}
	}
	iVar3 = 0;
	if (!func_1264(iParam1, -915411861, &iVar3, 0))
	{
		iVar3 = 1;
	}
	if (uParam0->f_148.f_1750 > 1)
	{
		iVar3 = (iVar3 * uParam0->f_148.f_1750);
		iVar2 = (iVar2 * uParam0->f_148.f_1750);
	}
	if (bParam3)
	{
		if (func_932(iVar0, 0))
		{
			func_196("SHOP_H_MAX_ITEM", 10000, 0, 0, 0, 1);
			return 0;
		}
	}
	iVar5 = func_827(iVar0);
	if (iVar5 == -1784221369)
	{
	}
	else if (iVar5 == -1977020088)
	{
	}
	else if (iVar5 == -1037537535)
	{
		if (bParam3 && !func_847(iParam1, iVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return 0;
		}
		if (func_1456(iParam1))
		{
			if (func_1480(iParam1))
			{
				iVar52 = func_1481(iParam1, &uVar6);
				iVar53 = 0;
				while (iVar53 < iVar52)
				{
					if (!func_794(&(uVar6[iVar53]), 1, 0) && !func_847(&(uVar6[iVar53]), 1, 1, 0, 0, 1248274121, 0, 0, 0, 0))
					{
						return 0;
					}
					iVar53++;
				}
			}
		}
		else if (uParam0->f_2 == 18)
		{
			func_938(iParam1);
		}
		else if (uParam0->f_2 == 6)
		{
			if (iParam1 == -469722632 && func_794(899611344, 1, 0))
			{
				func_847(-1185145312, 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
			}
		}
	}
	else if (func_1482(iParam1))
	{
		if (iVar5 == 307971639)
		{
			iVar4 = func_671(iParam1, 0);
		}
		if (!func_847(iParam1, iVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return 0;
		}
		else if (func_1203(iParam1))
		{
			if (!func_1483(iParam1))
			{
				func_1377(iParam1);
			}
		}
	}
	else if (func_1484(iParam1))
	{
		iVar54 = iVar3;
		if (func_612(iParam1, 58855631))
		{
			iVar54 = uParam0->f_148.f_1750;
		}
		if (!func_847(iParam1, iVar54, 1, 0, 0, 1248274121, 0, 0, 0, 0))
		{
			return 0;
		}
	}
	else if (func_1485(iParam1))
	{
		iVar55 = iVar3;
		if (func_612(iParam1, 58855631))
		{
			iVar55 = uParam0->f_148.f_1750;
		}
		if (!func_847(iParam1, iVar55, 1, 0, 0, 1248274121, 0, 0, 0, 0))
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (!func_847(iParam1, 1, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return 0;
		}
	}
	if (func_1486(iVar0))
	{
		func_1488(func_1487(iVar0), 1);
	}
	if (func_972(uParam0->f_3, 262144))
	{
		func_973(uParam0->f_3, 262144);
	}
	func_971(iVar2, 0, 0, 0, 0);
	iVar56 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iVar0))
	{
		iVar56 = 1;
	}
	if (bVar1)
	{
		if (iParam4 != 0)
		{
			func_970(iParam4, iVar3, 0, 1, iVar56);
		}
		else
		{
			if (iVar5 == 307971639)
			{
				iVar3 = func_1489(iVar3, 0, (func_1151(iParam1, 0) - iVar4));
			}
			func_970(iVar0, iVar3, 0, 1, iVar56);
		}
	}
	func_941(uParam0->f_2, uParam0->f_3, iParam1, iVar3, iVar2);
	func_1490(uParam0->f_2, Global_35, iParam1);
	uParam0->f_2009 = uParam0->f_2008;
	uParam0->f_2008 = iParam1;
	uParam0->f_2318.f_11 = 1;
	uParam0->f_1999.f_3 = 1;
	uParam0->f_6 = 1;
	if (!Global_20709.f_2402)
	{
		Global_20709.f_2402 = 1;
	}
	if (func_1479(uParam0->f_3) == iParam1)
	{
		func_1491(uParam0->f_3);
	}
	iVar57 = func_1492(iParam1, 0);
	if (!AUDIO::_0x6DF942C4179BE5AB(iVar57, -41291407))
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
	else
	{
		AUDIO::_0xE8EAFF7B41EDD291(iVar57, -41291407, 0);
	}
	return 1;
}

bool func_932(int iParam0, bool bParam1)
{
	struct<5> Var0;
	
	if (func_827(iParam0) == -1977020088 && func_125() == -1)
	{
		return func_1336(iParam0);
	}
	Var0 = { func_1185(iParam0, 0, 1) };
	return func_1493(iParam0, &Var0, 1, bParam1, 0);
}

void func_933(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 18:
			*iParam1 = 369710026;
			break;
		
		case 19:
			*iParam1 = 761605153;
			break;
		
		case 6:
			*iParam1 = -893266537;
			break;
		
		case 4:
			*iParam1 = -768110908;
			break;
	}
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 1;
		
		case 19:
			return 2;
		
		default:
			break;
	}
	return 0;
}

int func_935(int iParam0, int iParam1)
{
	if (iParam0 == 19)
	{
		if (func_339(iParam1) == -590250209)
		{
			return 0;
		}
		else
		{
			return 3;
		}
	}
	return 0;
}

bool func_936(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	return func_1494(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

void func_937(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	if (!func_278(iParam0, 0))
	{
		return;
	}
	if (!func_927(0))
	{
		func_1495(iParam0, iParam1);
	}
	else if (func_1496(iParam0, iParam1, 0, bParam2, iParam4))
	{
		func_1497(iParam0, 1, bParam3, 1, iParam5);
	}
}

void func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<10> Var8;
	struct<2> Var18[5];
	struct<14> Var29;
	
	Var8 = -1;
	Var8.f_1 = -1;
	Var8.f_2 = -1;
	Var8.f_3 = -1;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_7 = -1;
	Var8.f_8 = -1;
	Var29 = -1;
	Var29.f_1 = -1;
	Var29.f_2 = -1;
	Var29.f_3 = -1;
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_7 = -1;
	Var29.f_8 = -1;
	Var29.f_13 = -1;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var18, &iVar0, 5))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if ((Var18[iVar1 /*2*/])->f_1 != 2117289778)
		{
		}
		else
		{
			Var8 = { func_1498(-1591664384, -1591664384, 0, 0, 0, 0, -1, &(Var18[iVar1 /*2*/]), 0) };
			if (!func_1499(Var8, &iVar4, &iVar5, 0))
			{
			}
			else if (iVar5 <= 0)
			{
				func_1500(iVar4);
			}
			else
			{
				Var29 = { func_979(0, -1591664384, -1591664384, -1591664384, 0, &(Var18[iVar1 /*2*/])) };
				if (!func_980(&Var29, &iVar2, &iVar3, 0))
				{
					func_1500(iVar4);
				}
				else
				{
					func_982(iVar2);
					if (iVar3 < (iVar5 - 1))
					{
						func_1500(iVar4);
					}
					else
					{
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!ITEMDATABASE::_0x8750F69A720C2E41(iVar4, iVar6, &iVar7))
							{
							}
							else if (func_339(iVar7) == -999503751)
							{
								func_847(iVar7, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
							}
							iVar6++;
						}
						func_1500(iVar4);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_939()
{
	bool bVar0;
	
	if (!func_1501(456315479))
	{
		bVar0 = true;
		if (!func_1501(1486898918))
		{
			if (func_1502(12, 0) > 1)
			{
				func_1503(1486898918);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1501(1500419820))
		{
			if (func_1502(3, 0) > 2)
			{
				func_1503(1500419820);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1501(-1642438278))
		{
			if (func_1502(4, 0) > 2)
			{
				func_1503(-1642438278);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_1501(-1784068921))
		{
			if (func_1504())
			{
				func_1503(-1784068921);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_1503(456315479);
		}
	}
}

int func_940(int iParam0, int iParam1)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_1455(iParam0, iParam1))
	{
		if (func_1505(iParam0, iParam1, &Var0, &iVar31, 1, 0))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				iVar33 = &Var0[iVar32 /*2*/];
				if (func_278(iVar33, 0) && iVar33 == 2084597891)
				{
					return (Var0[iVar32 /*2*/])->f_1;
				}
				iVar32++;
			}
		}
	}
	return 0;
}

int func_941(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_125() == 0)
	{
		return 1;
	}
	if (func_1015(iParam2))
	{
		func_1506(iParam1, iParam2, iParam3);
	}
	func_1507(iParam0, iParam1, iParam2, iParam3, iParam4);
	return 1;
}

void func_942(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_587(iParam0), true);
}

void func_943(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_1187())
		{
			func_1508();
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	func_906(Global_35, -1, 1);
}

void func_944()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = &Global_1946804->f_1378.f_1[iVar0 /*3*/];
	if (!func_900() && func_1509(iVar1))
	{
		Global_1946804->f_1378.f_1[iVar0 /*3*/] = func_1510(iVar1);
	}
	func_336(0);
	*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
	func_1511();
	Global_40.f_7748.f_2 = func_632();
	func_947(Global_1946804->f_2656, 0);
	func_1512();
}

int func_945(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar6 = ((func_612(iParam1, -650091303) || func_612(iParam1, -709142106)) && !func_612(iParam1, 518788085));
	if (iParam1 == 1574030042 || func_631(iParam1))
	{
		func_623(uParam0, 0);
		return 10;
	}
	else if (iParam1 == 1024854903)
	{
		iVar7 = 0;
		iVar0 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (iVar0 < func_1167(iVar7) + 1)
			{
				iVar0 = func_1167(iVar7) + 1;
			}
			iVar7++;
		}
	}
	else if (bVar6)
	{
		iVar0 = 0;
		iVar8 = 0;
		if (!func_1169(iParam1, &uVar2))
		{
			return 10;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (&uVar2[iVar1] > iVar8)
			{
				iVar8 = &uVar2[iVar1];
			}
			iVar1++;
		}
		iVar0 = (10 - iVar8) + 1;
	}
	else if (func_612(iParam1, 1926305489))
	{
		iVar0 = func_1167(0) + 1;
	}
	else if (func_612(iParam1, -248115177))
	{
		iVar0 = func_1167(1) + 1;
	}
	else if (func_612(iParam1, -489098996))
	{
		iVar0 = func_1167(2) + 1;
	}
	else
	{
		iVar0 = func_905() + 1;
	}
	iVar9 = 0;
	if (func_612(iParam1, -964485123))
	{
		iVar9 = 3;
	}
	else if (func_612(iParam1, 518788085))
	{
		func_633(2, &iVar10);
		if (iParam1 == 1792152856 && (iVar10 == 1629162959 || iVar10 == -355063150))
		{
			iVar9 = 4;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else if (bVar6)
	{
		iVar11 = 10;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (&uVar2[iVar1] == -1)
			{
			}
			else if ((&uVar2[iVar1] - func_1170(iVar1)) < iVar11)
			{
				iVar11 = (&uVar2[iVar1] - func_1170(iVar1));
			}
			iVar1++;
		}
		iVar9 = func_1489(iVar11 + 1, 0, iVar0);
	}
	if (iParam1 == 1156231582 || iParam1 == -1392593303)
	{
		if (func_905() >= 2)
		{
			iVar12 = 2;
		}
		else
		{
			iVar12 = 1;
		}
		func_1090(uParam0, 2, -1, iVar12, 1, 1);
	}
	else if (func_612(iParam1, -964485123) || (func_612(iParam1, 518788085) && !func_612(iParam1, -709142106)))
	{
		func_1090(uParam0, (10 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	else if (bVar6)
	{
		func_1090(uParam0, iVar0, -1, iVar9, 1, 1);
	}
	else
	{
		func_1090(uParam0, (11 - iVar9), -1, (iVar0 - iVar9), 1, 1);
	}
	return iVar9;
}

void func_946(bool bParam0)
{
	int iVar0;
	
	Global_40.f_7748.f_3 = 1;
	iVar0 = func_435();
	func_1513(&iVar0, 0, 0, 0, func_8(bParam0, 5, 2), 0, 0, 0);
	if (func_1514(iVar0, Global_40.f_7748, 1))
	{
		Global_40.f_7748 = iVar0;
	}
}

void func_947(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_1515(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_435();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1516());
		func_1517(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_1513(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_948(bool bParam0)
{
	if (func_900() && (bParam0 || func_1518(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_435();
		}
		else
		{
			func_341(492, 1);
		}
		func_94(9, 0, 0, 0, 0);
	}
}

bool func_949(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

void func_950()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_336(0);
	func_1519(0, Global_1946804->f_2653, 0);
	func_1519(1, Global_1946804->f_2654, 0);
	func_1519(2, Global_1946804->f_2655, 0);
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar1 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar2 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar2 /*3*/]) };
	*(Global_1946804->f_1497.f_1[iVar3 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar3 /*3*/]) };
	func_1520();
	func_1521();
}

void func_951(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 <= 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1024854903:
			func_1522(0, 0, iParam2);
			func_1522(1, 0, iParam2);
			func_1522(2, 0, iParam2);
			break;
		
		case 1224358974:
			func_1522(0, 0, iParam2);
			break;
		
		case 1107981273:
			func_1522(1, 0, iParam2);
			break;
		
		case 1792152856:
			func_1522(2, 0, iParam2);
			break;
	}
	if (!bParam1)
	{
		return;
	}
	func_1168(Global_35, -1, -1, -1, 1);
}

bool func_952(int iParam0)
{
	return (Global_40.f_7731.f_16 && iParam0) != 0;
}

void func_953(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_117(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_954(int iParam0, int iParam1)
{
	if (!func_117(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_955(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1523()) || iParam5)
		{
			func_1524();
		}
	}
	if (func_125() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((iParam4 && iVar0 > 5) && func_1176(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1354(Global_40.f_7729);
				Global_1946804->f_1378 = func_1354(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1525(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1526(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_129(0, 1);
	}
	func_336(0);
}

int func_956(int iParam0)
{
	int iVar0;
	
	iVar0 = func_957(iParam0);
	if (func_656(iVar0, 1) >= 39 || func_656(iVar0, 1) < 0)
	{
		return 0;
	}
	return &(Global_1946804->f_57[func_656(iVar0, 1) /*11*/]);
}

int func_957(int iParam0)
{
	struct<5> Var0;
	
	Var0 = { func_1185(iParam0, 1, 0) };
	return func_1312(Var0.f_4);
}

int func_958(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1185(iParam1, 1, 0) };
		iParam3 = func_1312(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1172(iParam1, iParam2, func_656(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_662(1, (func_125() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1) /*11*/])
			{
				func_94(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_538(32768) && iParam1 != &Global_1946804->f_57[func_656(iParam3, 1) /*11*/])
			{
				func_1059();
				func_94(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_94(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1527(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_94(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_128(0);
			func_731(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_94(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_959(var uParam0)
{
	return uParam0->f_2031.f_82;
}

void func_960(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

int func_961(var uParam0)
{
	return uParam0->f_2031.f_83;
}

int func_962(var uParam0)
{
	return uParam0->f_2031.f_84;
}

bool func_963(int iParam0, int iParam1, var uParam2)
{
	return ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(uParam0, iParam1, uParam2);
}

Vector3 func_964(int iParam0, struct<4> Param1, var uParam5)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	iVar3 = 0;
	iVar4 = -1;
	iVar5 = -1;
	if (iParam0 >= 0 && iParam0 < Param1.f_3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(*uParam5, Param1, iParam0, &iVar3, &iVar4, &iVar5))
		{
			vVar0.x = iVar3;
			vVar0.f_1 = iVar5;
			vVar0.f_2 = iVar4;
		}
	}
	return vVar0;
}

int func_965(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;
	struct<11> Var10;
	int iVar24;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (!func_1203(iParam0))
	{
		return 0;
	}
	Var10.f_9 = -1591664384;
	if (!func_966(iParam1, iParam0, &iVar0, &Var1, &uVar5, 1, iParam2))
	{
		return 0;
	}
	iVar24 = func_974(Var1, iVar0, 0);
	if (iParam1 == iVar24)
	{
		if (!bParam3)
		{
			if (func_1468(Var1, &Var10, 0, 0))
			{
				if (func_827(Var10.f_4) == -427144552)
				{
				}
				else if (!Var10.f_10)
				{
					return 0;
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_966(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_339(iParam1);
		iVar5 = func_975(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_1185(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_669(iParam1, *uParam4, uParam4->f_4, 0) };
					*uParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_1208(0);
			Var37 = { func_1185(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_669(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_339(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1528(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*uParam2 = uVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*uParam2 = 0;
	return 0;
}

int func_967(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	
	if (!func_927(0))
	{
		return func_1529(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1468(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_1208(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_968(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1530(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_969(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1493(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_927(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_1208(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_970(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_278(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1531())
	{
		func_1532(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1533(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1533(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_1373(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_827(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1339(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_1340(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_1154(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_612(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_1154(iParam0));
	}
	func_1341(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_971(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1534(iParam0);
	if (bParam3)
	{
		func_1535(iParam0, sParam1, iParam2);
	}
}

bool func_972(int iParam0, int iParam1)
{
	if (!func_929(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_973(int iParam0, int iParam1)
{
	if (!func_929(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

int func_974(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;
	
	Var0.f_9 = -1591664384;
	if (func_1528(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_975(int iParam0)
{
	int iVar0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_976(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar4;
	struct<2> Var5;
	
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(iParam0);
	if (iVar0 != 0)
	{
		uVar2 = 1;
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar0, &uVar2);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar0, &uVar2, iVar1, &Var5))
			{
				if (Var5.f_1 == iParam1)
				{
					return Var5;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_977(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;
	
	if (!func_927(bParam10))
	{
		return func_1536(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1468(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_670(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_1208(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_967(Var14, 1))
		{
		}
	}
	return 1;
}

int func_978(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1537(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1468(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_927(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1208(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

struct<14> func_979(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

int func_980(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_1208(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_981(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_982(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	struct<4> Var12;
	struct<9> Var16;
	int iVar26;
	int iVar27;
	int iVar28;
	vector3 vVar29;
	int iVar36;
	int iVar37;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_1203(iParam0))
	{
		return 0;
	}
	iVar1 = func_339(iParam0);
	Var7 = { func_1185(iParam0, 0, 0) };
	Var7.f_4 = iParam1;
	Var12 = { func_669(iParam0, Var7, Var7.f_4, 0) };
	Var16 = -1;
	Var16.f_1 = -1;
	Var16.f_2 = -1;
	Var16.f_3 = -1;
	Var16.f_4 = -1;
	Var16.f_5 = -1;
	Var16.f_6 = -1;
	Var16.f_7 = -1;
	Var16.f_8 = -1;
	iVar36 = 1;
	iVar37 = func_975(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar37)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
		{
			if (((((((((iVar2 == -1088328663 || iVar2 == 513602003) || iVar2 == -1420574021) || iVar2 == 1079459546) || iVar2 == -1779133048) || iVar2 == 1254273765) || iVar2 == 2063859257) || iVar2 == -1652627327) || (iParam0 == -506285289 && iVar2 == 1400281261)) || (iParam0 == 1402226560 && iVar2 == -201958220))
			{
			}
			else
			{
				Var16 = iVar2;
				iVar26 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var16, &iVar27, 1);
				if (iVar26 == -1)
				{
				}
				else if (iVar27 == 0)
				{
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar26);
				}
				else
				{
					if (ITEMDATABASE::_0x8750F69A720C2E41(iVar26, 0, &iVar28) && ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iVar28, &vVar29))
					{
						if (vVar29.z == -1013984273 || (vVar29.z == 658570475 && (iVar2 == 354352628 || iVar2 == 635273153)))
						{
							iVar5 = func_974(Var12, iVar2, 0);
							iVar6 = func_976(iParam0, iVar2);
							if (func_278(iVar5, 0))
							{
								if (iVar5 == iVar6)
								{
									if (iVar27 > 1)
									{
										iVar36 = 0;
									}
								}
							}
							else if (func_278(iVar6, 0))
							{
							}
							else
							{
								iVar36 = 0;
							}
						}
					}
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar26);
				}
			}
		}
		iVar0++;
	}
	return iVar36;
}

int func_984(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1538(iParam0))
	{
		return 0;
	}
	if (!func_158())
	{
		return 0;
	}
	if (!func_1539(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_985(var uParam0, int iParam1)
{
	return func_344(uParam0->f_2006, iParam1);
}

void func_986(var uParam0, int iParam1)
{
	func_347(&(uParam0->f_2006), iParam1);
}

int func_987()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = iVar0;
		if (iVar1 == 1)
		{
		}
		else if (iVar1 == 0)
		{
		}
		else if (iVar1 == 4 && func_1249())
		{
		}
		else if (!func_911(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

var func_988(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	return func_1540(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

bool func_989(char* sParam0)
{
	return func_1542(sParam0, func_1541());
}

bool func_990(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	
	Var0 = { func_1185(iParam0, 0, 0) };
	return func_1493(iParam0, &Var0, iParam1, 0, bParam2);
}

void func_991(char* sParam0)
{
	Global_1914319->f_18963 = func_196(sParam0, 10000, 0, 0, 0, 1);
}

void func_992(var uParam0, int iParam1)
{
	func_348(&(uParam0->f_2006), iParam1);
}

void func_993(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1543(iParam0, &uVar0);
	func_1544(&uVar58);
	func_1545(iParam0, &uVar0, 1);
	func_1546(&uVar0, &uVar58, &uVar116);
	func_1547(&uVar116);
	func_1548(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1549(iParam0, &uVar232);
	func_1550(&uVar248);
	iVar280 = func_1551(&uVar232);
	iVar281 = func_1551(&uVar248);
	if (iVar281 > iVar280)
	{
		func_1552(&uVar248);
	}
	else
	{
		func_1552(&uVar232);
	}
	func_1553(iParam0);
	func_1554(iParam0, &uVar264);
}

void func_994(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_995(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

void func_996(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_995(iParam0);
	func_995(iParam0);
	func_1555(iParam0, iParam1);
	func_1556(iParam0, iParam1);
	func_1557(iParam0, iParam1);
	iVar1 = func_226(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1558(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_226(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1558(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_1559();
}

void func_997(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_998(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_1560(&Var0);
	func_1561(iParam0, Var0);
	func_1562(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1563(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1564(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1565(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1566(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1567(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1568(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1569(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1570(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

int func_999(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = 3;
	if (func_1571(&(uParam0->f_115)))
	{
		func_1572(uParam0, iParam1, &(uParam0->f_115), 1);
	}
	else
	{
		func_1572(uParam0, iParam1, &uVar0, 1);
		func_1573(uParam0, &uVar0);
	}
	return 1;
}

void func_1000(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!func_1042(iParam1))
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			iVar0 = 0;
			break;
		
		case 3:
			iVar0 = 1;
			break;
		
		case 4:
			iVar0 = 2;
			break;
	}
	func_1574(iParam2);
	func_1575(iParam1, 0);
	Var1 = { func_1006(iParam1) };
	func_1019(&uVar3);
	func_994(iParam2);
	func_1008(iParam2, &Var1, &uVar3, 0);
	ENTITY::_0x203BEFFDBE12E96A(iParam2, func_1576(uParam0, iVar0), &(uParam0->f_15[iVar0]), 1, true, 1);
	ENTITY::_0x9587913B9E772D29(iParam2, 0);
	PED::_0x1D4636C90BBEFACB(iParam2, 1);
	func_1577(iParam2);
	TASK::CLEAR_PED_TASKS(iParam2, 1, 0);
	TASK::TASK_STAND_STILL(iParam2, -1);
	func_997(iParam1, 2);
	func_995(iParam1);
}

int func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 1538827865:
			return -450053710;
		
		case -1792561227:
			return -1679658797;
		
		case 1033678910:
			return 1792770814;
		
		case -1942141178:
			return -1963397600;
		
		case 671599957:
			return -1250098797;
		
		case -1554935503:
			return -318278790;
		
		case 694610769:
			return 55096099;
		
		case 1941463607:
			return -458397856;
		
		case -887316537:
			return -444610976;
		
		case 1762474047:
			return 746627200;
		
		case -828859553:
			return 705691988;
		
		case 1410237043:
			return 2130094044;
		
		case -2026073756:
			return -1554827654;
		
		case 729407854:
			return 604357666;
		
		case 2002245664:
			return -1029277326;
		
		case -1120227140:
			return -1140650619;
		
		case 1142681594:
			return -1999198818;
		
		case 1214981718:
			return 1496579364;
		
		case -845373950:
			return -1523757120;
		
		case -864588185:
			return -403470324;
		
		case 1482814085:
			return 1576849913;
		
		case -1040918754:
			return -925223936;
		
		case 535545841:
			return -1547438906;
		
		case 1686036388:
			return -635239558;
		
		case -621245377:
			return -2026265047;
		
		case 2125477381:
			return -586898625;
		
		case 1808724704:
			return 937246805;
		
		case -1745871311:
			return 1593035738;
		
		case -1366099125:
			return 861505058;
		
		case -1900776854:
			return 687445866;
		
		case 1381855825:
			return 1705182311;
		
		case -470894301:
			return -78273782;
		
		case -58297715:
			return -819697512;
		
		case 919533729:
			return -247265944;
		
		case -1158763155:
			return -1516219602;
		
		case 1112812928:
			return -1265030920;
		
		case 753764318:
			return 2024948086;
		
		case 2100045093:
			return 1696286663;
		
		case 1097965086:
			return -1342159303;
		
		case -2136667309:
			return -1154406788;
		
		case -376463594:
			return 2030804811;
		
		case -1917318030:
			return 1230359523;
		
		case 1631640006:
			return -1038436471;
		
		case -1565311117:
			return -1063137731;
		
		case 1714576673:
			return 96930969;
		
		case 210760725:
			return -1180427609;
		
		case 2051021144:
			return 2119038574;
		
		case 1924406350:
			return 43825738;
		
		case -1990143531:
			return 2145697477;
		
		case 1741899492:
			return -1261814606;
		
		case -1629575335:
			return 107013696;
		
		case 1096294193:
			return 1066034872;
		
		case -1162498792:
			return 36009259;
		
		case -212500005:
			return -1599683008;
		
		case -538557079:
			return -1693870200;
		
		case 171150858:
			return 1072019803;
		
		case 67538819:
			return 1074477367;
		
		case -126472599:
			return -85890205;
		
		case -1219957736:
			return 1048964673;
		
		case -332060056:
			return -727455979;
		
		case 1917500091:
			return -1667789645;
		
		case -1043453945:
			return -1924405794;
		
		case 1723487083:
			return 1861665605;
		
		case 2044230644:
			return -526169133;
		
		case 1680713143:
			return 900144280;
		
		case 344528703:
			return 1133837220;
		
		case -1674873797:
			return 1702024301;
		
		case 281852151:
			return -1604180548;
		
		case -285185056:
			return 1772321403;
		
		case -1692268955:
			return -1028075925;
		
		case 2130706226:
			return 84224102;
		
		case -1754375530:
			return -1896838685;
		
		case -71211764:
			return -420599285;
		
		case -1390353518:
			return 478986344;
		
		case 330935532:
			return 446670976;
		
		case -935042458:
			return 802784330;
		
		case -41062704:
			return 549900435;
		
		case 887669186:
			return -2063289686;
		
		case 2102774612:
			return 917402668;
		
		case -2011111190:
			return -914712122;
		
		case -535752499:
			return -598917269;
		
		case 559905966:
			return 808655744;
		
		default:
			break;
	}
	return 0;
}

int func_1002(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		
		case -1679658797:
			return 1432602132;
		
		case 1792770814:
			return 92296905;
		
		case -1963397600:
			return -842044823;
		
		case -1250098797:
			return 1371398552;
		
		case -318278790:
			return -745453539;
		
		case 55096099:
			return 1583029039;
		
		case -458397856:
			return -783061276;
		
		case -444610976:
			return -1322521536;
		
		case 746627200:
			return 728055838;
		
		case 705691988:
			return 1100711204;
		
		case 2130094044:
			return -1782334639;
		
		case -1554827654:
			return -1181052732;
		
		case 604357666:
			return -540812301;
		
		case -1029277326:
			return -179102320;
		
		case -1140650619:
			return -1266863668;
		
		case -1999198818:
			return -2078767648;
		
		case 1496579364:
			return -2055655009;
		
		case -1523757120:
			return -1506685618;
		
		case -403470324:
			return -852553462;
		
		case 1576849913:
			return -2105447887;
		
		case -925223936:
			return -80004868;
		
		case -1547438906:
			return 1813208211;
		
		case -635239558:
			return 836323303;
		
		case -2026265047:
			return 153881023;
		
		case -586898625:
			return -1256798240;
		
		case 937246805:
			return 2118089359;
		
		case 1593035738:
			return -1537586382;
		
		case 861505058:
			return 1440692746;
		
		case 687445866:
			return 697143532;
		
		case 1705182311:
			return 281128160;
		
		case -78273782:
			return 1854519167;
		
		case -819697512:
			return -1376299681;
		
		case -247265944:
			return -1955947684;
		
		case -1516219602:
			return 1427053849;
		
		case -1265030920:
			return 1361788230;
		
		case 2024948086:
			return 1974379573;
		
		case 1696286663:
			return 545109431;
		
		case -1342159303:
			return 1275638003;
		
		case -1154406788:
			return 2083573823;
		
		case 2030804811:
			return 1235275977;
		
		case 1230359523:
			return 892601357;
		
		case -1038436471:
			return 1224695367;
		
		case -1063137731:
			return 955937750;
		
		case 96930969:
			return 648301150;
		
		case -1180427609:
			return -1597490733;
		
		case 2119038574:
			return 2000205872;
		
		case 43825738:
			return -1428527735;
		
		case 2145697477:
			return 170010697;
		
		case -1261814606:
			return -742726637;
		
		case 107013696:
			return -1714171692;
		
		case 1066034872:
			return -103101636;
		
		case 36009259:
			return -1999094324;
		
		case -1599683008:
			return 1724200240;
		
		case -1693870200:
			return 237935328;
		
		case 1072019803:
			return 120848852;
		
		case 1074477367:
			return -868094182;
		
		case -85890205:
			return -887362763;
		
		case 1048964673:
			return 2059232991;
		
		case -727455979:
			return -847714194;
		
		case -1667789645:
			return 1756765331;
		
		case -1924405794:
			return -813071670;
		
		case 1861665605:
			return -1900569233;
		
		case -526169133:
			return 1688250187;
		
		case 2120708491:
			return -1262715164;
		
		case 900144280:
			return 2010625508;
		
		case 1133837220:
			return -136225010;
		
		case 1702024301:
			return -225011104;
		
		case -1604180548:
			return -1882436593;
		
		case 1772321403:
			return -1331210307;
		
		case -1230516683:
			return 122449722;
		
		case 594040097:
			return -1784502482;
		
		case 1883159941:
			return -1943445834;
		
		case -1028075925:
			return -635244104;
		
		case 84224102:
			return -1427377767;
		
		case -1896838685:
			return -1293672675;
		
		case -420599285:
			return -1179079660;
		
		case 478986344:
			return 805526368;
		
		case 446670976:
			return 1342496140;
		
		case 802784330:
			return -126555855;
		
		case 549900435:
			return 294243421;
		
		case -2063289686:
			return -997197050;
		
		case 917402668:
			return -235714362;
		
		case -914712122:
			return -1678164;
		
		case -598917269:
			return -977833913;
		
		case -216303527:
			return 1589164943;
		
		case -1356425746:
			return -1087523615;
		
		case -1760684159:
			return -496814209;
		
		case -548014618:
			return 2109055751;
		
		case 1800725969:
			return -776673611;
		
		case -1391147923:
			return 1764402253;
		
		case -646460384:
			return -1417310078;
		
		case -1181161469:
			return 1096273915;
		
		case -1642485146:
			return 772751081;
		
		case -1486704931:
			return -1140435723;
		
		case 1139858530:
			return 2002524329;
		
		case -1053639984:
			return 1151530184;
		
		case -941733863:
			return -1266525037;
		
		case -1084397164:
			return -2018137175;
		
		case -575759638:
			return -574151692;
		
		case -1718100160:
			return 649786380;
		
		case 979093383:
			return -1921328920;
		
		case 1760888205:
			return -837607790;
		
		case 291878635:
			return 370424594;
		
		default:
			break;
	}
	return 0;
}

int func_1003(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_69 - 1))
	{
		iVar1 = &uParam0->f_70[iVar0];
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (iParam1 == func_1002(iVar2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_1004(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_1578(iParam0))
	{
		return;
	}
	if (func_1579(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	func_1580(iParam1, iParam0);
	func_1581(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_0xB48050D326E9A2F3(iVar0))
	{
		func_1575(iParam1, 0);
	}
	else
	{
		iVar1 = func_1582(iParam0);
		func_1575(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		func_1558(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (func_1583(iParam1))
	{
		func_1584(iParam1);
	}
	iVar3 = func_445(iParam1);
	iVar4 = func_1227(iVar3);
	func_1585(iParam1, iVar4);
}

void func_1005(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1544(&uVar0);
	func_1543(iParam0, &uVar58);
	func_1586(iParam0, &uVar0);
	func_1546(&uVar0, &uVar58, &uVar116);
	func_1548(iParam0, &uVar116);
	func_1547(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1550(&uVar232);
	func_1549(iParam0, &uVar248);
	iVar280 = func_1551(&uVar232);
	iVar281 = func_1551(&uVar248);
	if (iVar281 > iVar280)
	{
		func_1554(iParam0, &uVar248);
	}
	else
	{
		func_1554(iParam0, &uVar232);
	}
	func_1552(&uVar264);
	func_1553(iParam0);
	func_1587(iParam0);
}

struct<2> func_1006(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1588(iParam0, &uVar2))
	{
	}
	if (!func_1589(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1007()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	if (func_1590(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1590(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1590(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1590(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1590(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1590(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1008(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_1591(iParam0);
	func_1592(iParam0, uParam1);
	func_994(iParam0);
	func_1593(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1594(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1009(int iParam0, char[32] cParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*(Global_40.f_1095.f_1[iParam0 /*436*/]) = { cParam1 };
}

void func_1010(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = func_1595(func_1248(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

void func_1011(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_445(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1596(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1597(iParam1);
	iVar5 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_1012(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

void func_1013(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1598(iParam0);
	func_1011(iParam0, 0);
	func_1599(iParam0, 0f);
}

void func_1014(var uParam0)
{
	uParam0->f_2031.f_80 = 1;
}

bool func_1015(int iParam0)
{
	return func_827(iParam0) == -1784221369;
}

float func_1016(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	iVar2 = func_1600(iParam0, 0);
	fVar1 = func_1601(iParam1);
	fVar0 = (IntToFloat(iVar2) * fVar1);
	if (fVar0 < 100f)
	{
		fVar0 = 100f;
	}
	if (func_1602(iParam0))
	{
		fVar0 = 0f;
	}
	return fVar0;
}

int func_1017(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_1603(iParam1, iParam2);
	if (iParam3 >= 0)
	{
		iVar0 = iParam3;
	}
	func_1604(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
	TELEMETRY::_0x9BD8A9D0A774A6F8(func_82(uParam0->f_2), func_459(uParam0->f_3), iParam1, iParam2, iVar0);
	uParam0->f_1999.f_4 = 1;
	uParam0->f_6 = 1;
	uParam0->f_2318.f_11 = 1;
	uParam0->f_2009 = uParam0->f_2008;
	uParam0->f_2008 = iParam1;
	uParam0->f_2013 = iVar0;
	AUDIO::PLAY_SOUND_FRONTEND("SELL", "HUD_SHOP_SOUNDSET", true, 0);
	return 1;
}

int func_1018(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_434;
}

void func_1019(var uParam0)
{
	func_1605(uParam0);
	func_1606(uParam0, 0);
	func_1607(uParam0, 0);
	func_1608(uParam0, 0);
	func_1609(uParam0, 0);
	func_1610(uParam0, 0);
	func_1611(uParam0, 0);
}

int func_1020(var uParam0)
{
	func_1612();
	return 1;
}

void func_1021(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	func_1613(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1614(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1580(iParam0, 0);
	func_1615(iParam0);
}

bool func_1022(int iParam0)
{
	return ((func_1023(iParam0) || func_1025(iParam0)) || func_1616(iParam0));
}

bool func_1023(int iParam0)
{
	return func_339(iParam0) == 177369922;
}

int func_1024(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_669(iParam1, Var0, 1415981582, 0) };
	return func_967(Var29, 1);
}

bool func_1025(int iParam0)
{
	return func_339(iParam0) == -1551449832;
}

int func_1026(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_669(iParam1, Var0, -2119169513, 0) };
	return func_967(Var29, 1);
}

int func_1027(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_966(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1618() };
	Var14 = { func_669(iParam0, Var10, iVar9, 0) };
	if (func_967(Var14, iParam1))
	{
		if (func_1619(iParam0))
		{
			if (func_1590(325139909, &uVar18))
			{
				if (func_1027(uVar18, 0))
				{
				}
			}
		}
		else if (func_1620(iParam0))
		{
			if (func_1590(325139909, &uVar19))
			{
				if (func_1027(uVar19, 0))
				{
				}
			}
			if (func_1590(986998820, &uVar20))
			{
				if (func_1027(uVar20, 0))
				{
				}
			}
			iVar21 = func_1621(iParam0);
			if (func_278(iVar21, 0))
			{
				if (func_1027(iVar21, 1))
				{
				}
			}
		}
		func_1622();
		return 1;
	}
	return 0;
}

int func_1028(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -1551449832:
		case 177369922:
			return 1;
	}
	return 0;
}

int func_1029(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 177369922:
			return func_1623(&uParam0);
		
		case -1551449832:
			return func_1624(&uParam0);
	}
	return 0;
}

int func_1030(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -1629133289:
		case -1555511632:
		case -1346384396:
		case -712836614:
		case 599669344:
		case 1302066700:
			return 1;
	}
	return 0;
}

int func_1031(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	switch (iParam6)
	{
		case -1346384396:
			return func_1625(&uParam0);
		
		case -712836614:
			return func_1626(&uParam0);
		
		case -1629133289:
			return func_1627(&uParam0);
		
		case 1302066700:
			return func_1628(&uParam0);
		
		case 599669344:
			return func_1629(&uParam0);
		
		case -1555511632:
			return func_1630(&uParam0);
	}
	return 0;
}

int func_1032(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	var uVar34;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	struct<14> Var55;
	
	if (!func_1025(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = -2119169513;
	Var29 = { Var0 };
	if (func_969(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!func_1026(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { func_979(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (func_980(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (func_981(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (func_978(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			func_982(iVar38);
		}
		return 1;
	}
	return 0;
}

int func_1033(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	var uVar34;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	struct<14> Var55;
	
	if (!func_1023(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	Var29.f_4 = 1415981582;
	Var29 = { Var0 };
	if (func_969(iParam1, &uVar34, &Var29, 1, 752097756, 0))
	{
		if (bParam2)
		{
			if (!func_1024(iParam0, iParam1))
			{
			}
		}
		if (bParam3)
		{
			Var41.f_9 = -1591664384;
			Var55 = { func_979(0, Var29.f_4, -1591664384, -1591664384, 0, 0) };
			Var55.f_9 = { Var29 };
			if (func_980(&Var55, &iVar38, &iVar39, 0))
			{
				iVar40 = 0;
				while (iVar40 < iVar39)
				{
					if (func_981(&Var41, iVar40, iVar38, iVar39))
					{
						if (Var41.f_4 != iParam1)
						{
							if (func_978(Var41.f_4, &Var41, &Var29, -1, -142743235, 0, 0))
							{
							}
						}
					}
					iVar40++;
				}
			}
			func_982(iVar38);
		}
		return 1;
	}
	return 0;
}

int func_1034(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_966(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1618() };
	Var10.f_4 = uVar9;
	if (func_969(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_1027(iParam0, 1))
			{
			}
		}
		if (func_1620(iParam0))
		{
			func_1034(func_1621(iParam0), 1);
		}
		func_1622();
		return 1;
	}
	return 0;
}

int func_1035(int iParam0, var uParam1)
{
	if (func_612(iParam0, 352481484))
	{
		*uParam1 = 352481484;
		return 1;
	}
	return 0;
}

void func_1036(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_979(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_980(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_982(iVar0);
	}
}

int func_1037(var uParam0)
{
	return uParam0->f_2031.f_95;
}

void func_1038(int iParam0)
{
	PED::_0xA4AC05B1A364EBC5(iParam0, "HORSE_PREVIEW_OUTFIT", 1);
}

bool func_1039(int iParam0)
{
	return func_339(iParam0) == -712836614;
}

void func_1040(var uParam0, int iParam1)
{
	func_392(&(uParam0->f_2031.f_45), iParam1);
}

int func_1041()
{
	switch (Global_1914319->f_16855.f_3.f_1)
	{
		case -1948969248:
			return 1;
		
		case -729996127:
			return 1;
		
		case -626520457:
			return 2;
		
		case 1180239319:
			return 3;
		
		case -177941708:
			return 4;
		
		default:
			return 0;
	}
	return 0;
}

int func_1042(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

int func_1043(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		default:
			return 0;
	}
	return 0;
}

var func_1044()
{
	if (Global_40.f_1095 <= -1 || Global_40.f_1095 >= 7)
	{
		Global_40.f_1095 = 0;
	}
	return Global_40.f_1095;
}

void func_1045(int iParam0, int iParam1)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam1 = func_444(iParam1);
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_1543(iParam0, &uVar0);
	func_1543(iParam1, &uVar58);
	func_1545(iParam0, &uVar0, 1);
	func_1586(iParam1, &uVar0);
	func_1546(&uVar0, &uVar58, &uVar116);
	func_1548(iParam1, &uVar116);
	func_1548(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_1549(iParam0, &uVar232);
	func_1549(iParam1, &uVar248);
	iVar280 = func_1551(&uVar232);
	iVar281 = func_1551(&uVar248);
	if (iVar281 > iVar280)
	{
		func_1554(iParam1, &uVar248);
	}
	else
	{
		func_1554(iParam1, &uVar232);
	}
	func_1554(iParam0, &uVar264);
	func_1553(iParam0);
	func_1553(iParam1);
	func_1587(iParam1);
}

void func_1046()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var3;
	
	iVar0 = func_226(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1900383->f_393))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1900383->f_393, false, true);
		}
		OBJECT::DELETE_OBJECT(&(Global_1900383->f_393));
	}
	Var1 = { func_1006(0) };
	Var3 = { func_1007() };
	func_1008(iVar0, &Var1, &Var3, 0);
	PLAYER::_0xD2CB0FB0FDCB473D(PLAYER::GET_PLAYER_INDEX(), iVar0);
	func_1631(0);
	func_1632(0);
}

void func_1047(int iParam0)
{
	if (func_125() != 0 || !func_278(iParam0, 0))
	{
		return;
	}
}

struct<4> func_1048(var uParam0)
{
	return uParam0->f_2031.f_89;
}

int func_1049(var uParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	
	if (func_1633(uParam0, 0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (func_1528(*uParam1, -415648720, &Var0, bParam2))
	{
		if (!func_1634(*uParam0, Var0, 1, bParam2))
		{
			return 0;
		}
	}
	else if (!func_977(*uParam0, *uParam1, -415648720, 1, bParam2))
	{
		return 0;
	}
	return 1;
}

void func_1050(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_1635(iParam1);
	if (func_1636(iVar0) == iParam1)
	{
		func_1638(iParam0, func_1637(iVar0));
		return;
	}
	func_1639(iParam0, iParam1, 0, -783849117, 127, 127, 127);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 0, 0, 0);
	}
}

int func_1051(int* iParam0, struct<4> Param1)
{
	struct<12> Var0;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!func_1640(iParam0, Param1, &Var0, 1))
	{
		return 0;
	}
	iParam0->f_4 = 1;
	AUDIO::PLAY_SOUND_FRONTEND("SELL", "HUD_SHOP_SOUNDSET", true, 0);
	return 1;
}

var func_1052()
{
	return Global_1914319->f_16855.f_3.f_6;
}

char* func_1053()
{
	return "uiItemLayoutId";
}

char* func_1054()
{
	return "uiItemMenuId";
}

int func_1055(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<44> Var0;
	int iVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	int iVar48;
	var uVar49;
	int iVar50;
	
	if (func_533(iParam1))
	{
		Var0.f_20 = 10;
		Var0.f_31 = 10;
		if (func_243(iParam1, &Var0))
		{
			if (func_464(iParam2, &Var0))
			{
				if (!uParam0->f_2031.f_68)
				{
					func_577(&(uParam0->f_2031));
				}
				iVar44 = func_245(&(uParam0->f_2031));
				uVar45 = func_724(&(uParam0->f_2031));
				uVar46 = uParam0->f_2031.f_70;
				uVar47 = func_465(&(uParam0->f_2031));
				iVar48 = func_466(0);
				if (iParam3 != -1)
				{
					if (func_464(iParam3, &Var0))
					{
						uParam0->f_2031.f_70 = iParam3;
					}
					else
					{
						return 0;
					}
				}
				else if (func_1641(iParam1, iParam2, &uVar49))
				{
					uParam0->f_2031.f_70 = uVar49;
				}
				else
				{
					return 0;
				}
				uParam0->f_2031 = { Var0 };
				func_242(uParam0, uParam0->f_19);
				iVar50 = 0;
				if (func_467(uParam0, iParam2, &iVar50))
				{
					if (bParam4)
					{
						if (func_275(&(uParam0->f_2031)))
						{
							uParam0->f_2031.f_77 = iVar50;
							if (!func_469())
							{
							}
						}
						else
						{
							func_470(uParam0);
						}
					}
					if (bParam5)
					{
						uParam0->f_2031.f_98 = 1;
						uParam0->f_2031.f_99 = 1;
						uParam0->f_2031.f_103 = iVar44;
						uParam0->f_2031.f_103.f_1 = uVar45;
						uParam0->f_2031.f_103.f_2 = uVar46;
						uParam0->f_2031.f_103.f_3 = uVar47;
						uParam0->f_2031.f_103.f_4 = iVar48;
						if (iParam3 != -1)
						{
							uParam0->f_2031.f_103.f_5 = iParam3;
						}
						else
						{
							uParam0->f_2031.f_103.f_5 = iParam2;
						}
						uParam0->f_2031.f_103.f_6 = iParam1;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1056(var uParam0, int iParam1)
{
	if (func_1203(iParam1))
	{
		uParam0->f_2031.f_83 = iParam1;
		uParam0->f_148.f_1281.f_1 = iParam1;
		Global_1914319->f_16855.f_36 = iParam1;
		return 1;
	}
	uParam0->f_2031.f_83 = 0;
	Global_1914319->f_16855.f_36 = 0;
	return 0;
}

int func_1057(int iParam0, int iParam1, int iParam2)
{
	struct<13> Var0;
	var uVar16;
	struct<4> Var22;
	
	Var0.f_7 = 752097756;
	Var0.f_8 = 1056964608;
	Var0.f_9 = 1065353216;
	Var0.f_4 = iParam0;
	Var0 = { func_669(iParam0, func_668(0), iParam2, 0) };
	Var0.f_6 = iParam1;
	Var0.f_12 = 1;
	Var22 = { func_1642() };
	if (func_670(&Var0, &Var22))
	{
		return 0;
	}
	if (WEAPON::_GIVE_WEAPON_TO_PED(Global_35, &Var0, &uVar16))
	{
		return 1;
	}
	return 0;
}

int func_1058(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	switch (iVar0)
	{
		case 1196380333:
			if (iVar1 == -2074343699)
			{
				return 1;
			}
			break;
		
		case 178628960:
			if (iVar1 == -1876918654)
			{
				return 1;
			}
			break;
		
		case -640803885:
			if (iVar1 == -2008888655)
			{
				return 1;
			}
			break;
		
		case -333996550:
			if (iVar1 == -1641912903 || iVar1 == 392209426)
			{
				return 1;
			}
			break;
		
		case 473747105:
			if (iVar1 == -1470197171 || iVar1 == -306833601)
			{
				return 1;
			}
			break;
		
		case 1455274515:
			if (iVar1 == 218564594 || iVar1 == 406441491)
			{
				return 1;
			}
			break;
		
		case -1598259337:
			if (iVar1 == 1202709885)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1059()
{
	func_1643(&(Global_1946804->f_2776));
	func_1644(32768);
	func_1083(1108822547, 8, 6);
}

int func_1060(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_846(uParam0);
	if (func_125() == -1)
	{
		iVar0 = func_755(iParam1);
		if (iVar0 == -1)
		{
			iVar0 = 0;
		}
		func_953(Global_40.f_7729, 4096);
		Global_40.f_7729 = iVar0;
		Global_1905941 = Global_40.f_7729;
		func_954(Global_40.f_7729, 4096);
	}
	if (func_538(32768))
	{
		func_1059();
	}
	func_955(-1, 0, 1, 1, 1, 0);
	iVar1 = func_263(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	func_127(iVar1, 1);
	func_960(iVar1);
	func_849(iParam1);
	return 1;
}

void func_1061(int iParam0)
{
	int iVar0;
	int iVar1;
	
	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_718(iParam0))
	{
		return;
	}
	func_1645(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_111(iVar0))
		{
			if (func_1064(func_1063(iVar0, 1, 1)) == iParam0)
			{
				func_1646(iVar0, 0);
				func_1647(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1321(iVar1))
		{
			if (func_1648(iVar1) == iParam0)
			{
				func_1649(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_1062(int iParam0)
{
	if (!func_718(iParam0))
	{
		return;
	}
	func_1650(iParam0, 0);
}

int func_1063(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 76:
			if (func_812(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		
		case 105:
			if (func_812(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		
		case 5:
			return 1559741032;
		
		case 61:
			return 60667583;
		
		case 78:
			return 1758133584;
		
		case 26:
			return -577559008;
		
		case 38:
			if (!bParam1 || func_125() != -1)
			{
				return 1624541293;
			}
			if (func_40(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		
		case 92:
			return 1637569166;
		
		case 65:
			return -867798278;
		
		case 69:
			return 1543937523;
		
		case 93:
			return 1030875135;
		
		case 95:
			return -201437056;
		
		case 57:
			return 794246846;
		
		case 3:
			return -968357677;
		
		case 32:
			return 728480338;
		
		case 82:
			return 725489698;
		
		case 35:
			return 183652754;
		
		case 56:
			return 2056744450;
		
		case 126:
			return 963280223;
		
		case 120:
			return -256309418;
		
		case 124:
			return 1666986024;
		
		case 115:
			return 251328732;
		
		case 127:
			if (!bParam1 || func_125() != -1)
			{
				return 1024208566;
			}
			if (func_40(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		
		case 22:
			if (!bParam1 || func_125() != -1)
			{
				return 965626876;
			}
			if (func_120(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		
		case 37:
			if (!bParam1 || func_125() != -1)
			{
				return -497792649;
			}
			if (func_120(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				return -497792649;
			}
			else if (func_40(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_437())
			{
				return 2126166785;
			}
			break;
		
		case 110:
			if (!bParam1 || func_125() != -1)
			{
				return -1990305778;
			}
			if (func_40(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_813(iParam0);
		if (iVar0 != -1)
		{
			return func_1651(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		
		case -1147969487:
			return 0;
		
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

bool func_1065(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_1066(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_1067()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1062(iVar0);
		iVar0++;
	}
}

void func_1068()
{
	int iVar0;
	
	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_718(iVar0))
		{
			func_1061(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_1069(int iParam0)
{
	return iParam0 != 0;
}

int func_1070(int iParam0, int iParam1)
{
	if (!func_1069(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1652(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_1653(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_1071(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_1069(iParam0))
	{
		return;
	}
	iVar0 = func_1652(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_1653(Global_40.f_9910[iVar0 /*6*/], 4))
	{
		return;
	}
	else
	{
		func_1654(Global_40.f_9910[iVar0 /*6*/], 4);
		func_1655(Global_40.f_9910[iVar0 /*6*/], 8);
	}
	if (bParam1)
	{
		if (!func_743(0, 0, 1))
		{
			func_222(0, 17);
		}
	}
}

int func_1072(int iParam0, var uParam1)
{
	if (!func_1656(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1073(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_1069(iParam0))
	{
		return;
	}
	iVar0 = func_1657(iParam0, uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_1658(iParam0, iVar1, uParam1, &iVar2, &iVar3);
		func_847(iVar2, iVar3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		iVar1++;
	}
}

int func_1074(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	struct<4> Var11;
	var uVar15;
	struct<21> Var19;
	int iVar41;
	int iVar42;
	
	if (iParam1 == -2092532275)
	{
		if (!func_900() && !func_631(func_632()))
		{
			bVar0 = func_794(1613651027, 1, 0);
			if ((bVar0 && uParam0->f_2 == 25) || uParam0->f_2 == 8)
			{
				func_630(func_901(func_632()), Global_35, -1, 1);
				func_946(uParam0->f_2 == 8);
				func_944();
			}
			if (bVar0 && uParam0->f_2 == 25)
			{
				func_843(1613651027, 1, 0, 562618531, 0);
			}
		}
	}
	else if (iParam1 == -1352600334)
	{
		if (func_360(1) >= func_903(-1724045811, 0))
		{
			if (func_225(0))
			{
				iVar1 = func_226(0);
				func_1659(iVar1, -1724045811);
				iVar2 = func_903(-1724045811, 0);
				func_1507(uParam0->f_2, uParam0->f_3, -1724045811, 1, iVar2);
				func_971(iVar2, 0, 0, 1, 1);
			}
		}
	}
	else if (iParam1 == 2073652352)
	{
		if (func_1542(&Var3, func_1248(7)))
		{
			func_1009(7, Var3);
			func_1010(7);
			func_244(uParam0, -1729195554, 1, -1, 0, 0, 0, 0);
		}
		func_1040(uParam0, 2);
	}
	else if (iParam1 == 317179309)
	{
		Var11 = { func_1048(uParam0) };
		if (!func_1660(&(uParam0->f_1999), 692350163, Var11, -1585141069, 1, 1, -570078785))
		{
			return 0;
		}
		func_1040(uParam0, 4);
	}
	else if (iParam1 == -772187037)
	{
		Var19.f_9 = -1591664384;
		iVar41 = func_961(uParam0);
		if (!func_1469(iVar41, &uVar15, &Var19, func_962(uParam0)))
		{
			return 0;
		}
		iVar42 = BUILTIN::ROUND((func_867(Var19.f_16, Var19.f_20) * BUILTIN::TO_FLOAT(func_903(-898386032, 0))));
		Var19.f_16 = 0f;
		Var19.f_18 = 0f;
		Var19.f_19 = 0f;
		Var19.f_20 = 0f;
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_1208(0), &uVar15, &Var19, 22))
		{
			return 0;
		}
		func_1507(uParam0->f_2, uParam0->f_3, 2096542750, 1, iVar42);
		func_971(iVar42, 0, 0, 0, 1);
	}
	return 1;
}

int func_1075(var uParam0, vector3 vParam1)
{
	int iVar0;
	var uVar1;
	
	if (!func_278(vParam1.x, 0))
	{
		return 0;
	}
	if (uParam0->f_3 == 152)
	{
		if (func_918(vParam1.x))
		{
			Stack.Push(uParam0);
			Stack.Push(vParam1.y);
			Stack.Push(vParam1.z);
			Call_Loc(uParam0->f_2031.f_124);
			if (!StackVal)
			{
				return 1;
			}
		}
		else if (func_821(vParam1.x))
		{
			return 1;
		}
		return func_671(vParam1.x, 0) > 0;
	}
	else
	{
		iVar0 = uParam0->f_3;
		if (func_929(func_928(uParam0)))
		{
			iVar0 = func_928(uParam0);
		}
		if (!func_1661())
		{
			if (vParam1.x == 1534638301)
			{
				return 0;
			}
		}
		if (func_930(vParam1.x, iVar0, &uVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1076(var uParam0, int iParam1)
{
	if ((((((func_821(iParam1) || func_918(iParam1)) || func_827(iParam1) == 658570475) || func_827(iParam1) == -1013984273) || func_827(iParam1) == 307971639) || func_819(iParam1)) || iParam1 == 166243423)
	{
		return 0;
	}
	if (uParam0->f_3 != 152)
	{
		if (func_827(iParam1) == -1037537535)
		{
			if (func_835(uParam0, iParam1, -853534656))
			{
				return 0;
			}
		}
	}
	if (func_1114(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1077(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2535.f_1)
	{
		if (&Global_1946804->f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1078(int iParam0, var uParam1)
{
	return (Global_1946804->f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1079(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (&Global_1946804->f_2535.f_3[iParam0] - (Global_1946804->f_2535.f_3[iParam0] && uParam1));
}

int func_1080(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1081(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

void func_1082(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1083(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1084(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_656(iParam0, 1) /*11*/])->f_10 || iParam1);
}

int func_1085(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	*iParam2 = 0;
	uVar0 = func_299(uParam0);
	iVar1 = func_1211(uVar0, iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_1212(uVar0, iParam1, iVar2) != -1)
		{
			*iParam2++;
		}
		iVar2++;
	}
	return 1;
}

int func_1086(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return 0;
	}
	uParam0->f_2031.f_76 = iParam1;
	return 1;
}

int func_1087(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	
	*iParam2 = 0;
	iVar0 = 0;
	if (!func_585(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1091(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = func_586(iVar0, &(uParam0->f_2031));
	if (func_1106(func_299(uParam0), iVar7, 1))
	{
		if (!func_1662(uParam0, iParam2))
		{
			return 0;
		}
	}
	else if (func_836(iVar7))
	{
		if (!func_1663(uParam0, iVar7, iParam2))
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_1223(iVar0, &(uParam0->f_2031));
		if (iVar6 <= 0)
		{
		}
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { func_1224(iVar0, iVar5, &(uParam0->f_2031)) };
			if (func_278(vVar2.x, 0))
			{
				if (func_1075(uParam0, vVar2))
				{
					*iParam2++;
				}
			}
			iVar5++;
		}
	}
	return 1;
}

bool func_1088(var uParam0)
{
	return uParam0->f_2031.f_82 != 0;
}

void func_1089(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemWeather");
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "OutfitWeather");
	if (bParam2)
	{
		uVar3 = iParam1;
		uVar4 = func_299(uParam0);
		if (!func_896(uParam0, uVar4, uVar3, &iVar0))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", 0);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", 0);
			return;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (func_339(iVar0) == -999503751)
	{
		iVar5 = func_340(iVar0);
		if (iVar5 == -1 || (iVar0 == 166243423 && func_820() != 166243423))
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", 0);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, "Effectiveness", iVar5);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", 0);
	}
	else
	{
		iVar6 = func_1291(iVar0);
		if (iVar6 == -1)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", 0);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "Visible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar1, "Warmth", iVar6);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "Visible", 0);
	}
}

int func_1090(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (iParam2 > iParam1)
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		iParam1 = 0;
	}
	if (iParam2 != -1)
	{
		iParam2 = func_1489(iParam2, 0, iParam1);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, iParam3);
	}
	iParam3 = func_1489(iParam3, 0, iParam1);
	iVar0 = (iParam3 - 1);
	iVar0 = func_1489(iVar0, 0, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -2088148546, 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 997560919, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1453173492, iVar0);
	if (iParam3 == 0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, -10);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, iParam3);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1569227938, iParam4);
	func_1664(uParam0, bParam5);
	return 1;
}

int func_1091(var uParam0)
{
	return uParam0->f_12.f_5;
}

void func_1092(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "RecipeFooterVisible", iParam1);
}

void func_1093(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "FooterVisible", bParam1);
}

void func_1094(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "RecipeInfoVisible", bParam1);
}

int func_1095()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch (iVar1)
		{
			case 2:
			case 3:
			case 4:
				if (func_911(iVar1))
				{
					iVar0++;
				}
				break;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1096(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceFooterVisible", iParam1);
}

void func_1097(int iParam0)
{
	func_347(&(Global_1914319->f_16855.f_3), iParam0);
}

int func_1098(int iParam0)
{
	if (!func_929(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_1() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 106:
		case 107:
		case 108:
			return 38;
		
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		
		case 22:
		case 118:
			return 3;
		
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		
		case 23:
		case 24:
			return 23;
		
		case 35:
			return 101;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		
		case 4:
			return 13;
		
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		
		case 5:
			return 14;
		
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		
		case 34:
			return 90;
		
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		
		case 67:
			return 113;
		
		case 87:
		case 88:
		case 89:
			return 28;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		
		case 95:
		case 96:
		case 97:
			return 120;
		
		case 98:
			return 123;
		
		case 99:
		case 100:
		case 123:
			return 117;
		
		case 119:
			return 65;
		
		case 122:
			return 82;
		
		case 124:
			return 110;
		
		case 125:
			return 127;
		
		case 56:
			return 71;
		
		case 57:
			return 98;
		
		case 58:
			return 9;
		
		case 59:
			return 79;
		
		default:
			break;
	}
	return -1;
}

int func_1099()
{
	return 7;
}

int func_1100(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = 23;
			return 1;
		
		case 1:
			*uParam1 = 105;
			return 1;
		
		case 2:
			*uParam1 = 5;
			return 1;
		
		case 3:
			*uParam1 = 78;
			return 1;
		
		case 4:
			*uParam1 = 28;
			return 1;
		
		case 5:
			*uParam1 = 76;
			return 1;
		
		case 6:
			*uParam1 = 69;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 117:
			switch (iParam1)
			{
				case 126:
					return 1;
				
				default:
					break;
			}
			return 0;
		
		default:
			break;
	}
	return 1;
}

int func_1102(var uParam0)
{
	struct<7> Var0;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(*uParam0, func_583(uParam0), &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

var func_1103(var uParam0)
{
	return uParam0->f_5;
}

int func_1104(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	
	iVar0 = func_1091(&(uParam0->f_2031));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return 0;
	}
	iVar1 = func_586(iParam1, &(uParam0->f_2031));
	if (func_1106(func_299(uParam0), iVar1, 1))
	{
		return 1;
	}
	if (func_836(iVar1))
	{
		iVar2 = 0;
		func_1663(uParam0, iVar1, &iVar2);
		return iVar2 > 0;
	}
	iVar3 = func_1223(iParam1, &(uParam0->f_2031));
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < iVar3)
	{
		vVar4 = { func_1224(iParam1, iVar7, &(uParam0->f_2031)) };
		if (func_278(vVar4.x, 0))
		{
			if (func_1075(uParam0, vVar4))
			{
				return 1;
			}
		}
		iVar7++;
	}
	return 0;
}

char* func_1105()
{
	return "PageFilterCurrentPageIndex";
}

int func_1106(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam0, iParam1, &vVar0))
	{
		return func_343(vVar0.z, iParam2);
	}
	return 0;
}

void func_1107(var uParam0)
{
	Global_1914319->f_16855.f_3.f_5 = uParam0;
}

int func_1108(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_892(&(uParam0->f_2031));
	if (iParam1 >= iVar0 || iParam1 < 0)
	{
		return 71870468;
	}
	if (func_1665(iParam1, &(uParam0->f_2031), &Var1))
	{
		return Var1.f_1;
	}
	return 71870468;
}

int func_1109()
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_594(), func_649());
	return iVar0;
}

int func_1110()
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_594(), func_717());
	return iVar0;
}

struct<4> func_1111(var uParam0)
{
	struct<4> Var0;
	
	Var0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam0, "uiGuidData1");
	Var0.f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam0, "uiGuidData2");
	Var0.f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam0, "uiGuidData3");
	Var0.f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam0, "uiGuidData4");
	return Var0;
}

int func_1112(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_31[iVar0] != 0)
		{
			if (func_895(*uParam0, &(uParam0->f_31[iVar0]), iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1113(int iParam0)
{
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	PED::_0xA274F51EF7E34B95(iParam0, "HORSE_PREVIEW_OUTFIT");
	return 1;
}

bool func_1114(int iParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_587(iParam0));
}

char* func_1115()
{
	return "uiItemNew";
}

int func_1116(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1666(uParam0);
	}
	func_1096(uParam0, 0);
	return 1;
}

int func_1117(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1667(uParam0);
	}
	return 1;
}

int func_1118(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1668(uParam0);
	}
	return 1;
}

int func_1119(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	struct<23> Var11;
	
	iVar7 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
	iVar8 = 0;
	uVar10 = func_919(uParam0);
	Var11.f_14 = -1;
	Var11.f_15 = -1;
	Var11.f_7 = 0;
	iVar8 = 0;
	while (iVar8 < iVar7)
	{
		iVar6 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar8);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar6))
		{
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar6, func_684());
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar6, func_685());
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar6, func_1669());
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar6, func_686());
			iVar0 = iVar1;
			iVar2 = iVar3;
			if (!func_278(iVar0, 0))
			{
			}
			else
			{
				Var11 = { *uParam1 };
				Var11.f_7 = iVar0;
				Var11 = iVar2;
				Var11.f_1 = iVar4;
				Var11.f_14 = iVar5;
				Var11.f_15 = uParam1->f_15;
				if (func_921(&(uParam0->f_2031), iVar0, &uVar9))
				{
					uParam0->f_2031.f_73 = uVar9;
				}
				if (func_612(Var11.f_7, -495963434))
				{
				}
				else if (!func_255(uParam0, &Var11))
				{
				}
			}
		}
		iVar8++;
	}
	uParam0->f_2031.f_73 = uVar10;
	return 1;
}

int func_1120(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1666(uParam0);
	}
	return 1;
}

int func_1121(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1666(uParam0);
	}
	return 1;
}

int func_1122(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1666(uParam0);
	}
	return 1;
}

int func_1123(var uParam0, var uParam1)
{
	if (uParam1->f_10 == 4)
	{
		func_1666(uParam0);
	}
	return 1;
}

int func_1124(var uParam0, var uParam1)
{
	int iVar0;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar4 = 0;
	iVar4 = func_1091(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!func_589(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!func_1244(uParam0, func_299(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!func_278(iVar5, 0))
	{
		return 0;
	}
	*uParam1 = func_897(uParam0, iVar5);
	uParam1->f_7 = iVar5;
	return 1;
}

bool func_1125(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319->f_16855.f_3.f_16, func_1670());
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1914319->f_16855.f_3.f_10, func_1670());
}

int func_1126(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319->f_16855.f_3.f_16, func_1053());
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319->f_16855.f_3.f_10, func_1053());
}

int func_1127(bool bParam0)
{
	if (bParam0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319->f_16855.f_3.f_16, func_1054());
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1914319->f_16855.f_3.f_10, func_1054());
}

int func_1128(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_466(0);
	iVar1 = func_892(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1665(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	return 1;
}

int func_1129(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_466(0);
	iVar1 = func_892(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1665(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	func_667(uParam0, func_961(uParam0), 0);
	return 1;
}

int func_1130(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	iVar2 = 0;
	switch (iVar1)
	{
		case -348190488:
			iVar5 = func_607(0);
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar5, func_1053());
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar5, func_1054());
			func_1671(iVar3, iVar4, &iVar6);
			iVar2 = func_903(iVar6, 0);
			break;
		
		default:
			iVar2 = func_903(iVar0, 0);
			break;
	}
	func_1149(uParam0, -2064706500, 0, iVar2, 0);
	return 1;
}

int func_1131(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_466(0);
	iVar1 = func_892(&(uParam0->f_2031));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return 0;
	}
	if (func_1665(iVar0, &(uParam0->f_2031), &vVar2))
	{
		func_640(uParam0, vVar2.z);
	}
	func_1672(uParam0, func_1037(uParam0));
	func_636(uParam0, 4, -1741293470, 1, 1, 0);
	func_1096(uParam0, 0);
	return 1;
}

int func_1132(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = func_277(0);
	Var1 = { func_1007() };
	if (func_1039(iVar0))
	{
		func_1673(uParam0, iVar0, Var1.f_1);
		func_1093(uParam0, 1);
		func_550(uParam0, 1);
		func_551(uParam0, 0);
	}
	else if (func_1674(iVar0))
	{
		func_1675(uParam0, iVar0, Var1.f_3);
		func_1093(uParam0, 1);
		func_551(uParam0, 1);
		func_550(uParam0, 0);
	}
	else
	{
		func_1093(uParam0, 0);
		func_550(uParam0, 0);
		func_551(uParam0, 0);
	}
	return 1;
}

int func_1133(var uParam0)
{
	int iVar0;
	
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1676(uParam0, func_1154(iVar0));
		func_832(uParam0, func_1256(iVar0));
		if (uParam0->f_3 != 152)
		{
			func_1149(uParam0, -2089226131, iVar0, -1, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		if (!func_612(iVar0, 265372629))
		{
			func_543(uParam0, 1);
			func_832(uParam0, func_1256(iVar0));
			iVar1 = func_622(0);
			if (func_616(0) == -2056428614)
			{
				iVar1 = 1;
			}
			func_833(uParam0, iVar1);
		}
		else
		{
			func_543(uParam0, 0);
		}
		iVar2 = func_616(0);
		switch (iVar2)
		{
			case -348190488:
				func_1089(uParam0, iVar0, 1);
				break;
			
			case -853534656:
			case 761079318:
			case 1942587409:
			case 2077448405:
				func_1089(uParam0, iVar0, 0);
				break;
			
			default:
				func_549(uParam0);
				break;
		}
		if (iVar2 == 1942587409 && func_387())
		{
			func_831(uParam0, -476745902);
		}
		else
		{
			func_547(uParam0, 0);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1135(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	if (iVar1 == -760956867 || iVar1 == 38807286)
	{
		func_945(uParam0, iVar0);
	}
	if (uParam0->f_2 == 25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, "ShavingSplitterVisible", 0);
	}
	else
	{
		func_1149(uParam0, 1182109459, iVar0, -1, 0);
	}
	func_636(uParam0, 5, 1067499419, 1, 1, 0);
	return 1;
}

int func_1136(var uParam0)
{
	int iVar0;
	
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, iVar0, 0);
		func_832(uParam0, func_1256(iVar0));
		func_833(uParam0, func_622(0));
		func_640(uParam0, func_1154(iVar0));
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1137(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_277(0);
	if (!func_1677(uParam0, iVar0))
	{
	}
	bVar1 = true;
	if (func_266(2))
	{
		iVar2 = func_1163(0);
		func_933(uParam0->f_2, &iVar3);
		if (!func_1678(iVar0, iVar3))
		{
			func_1092(uParam0, 0);
			bVar1 = false;
		}
		else if (func_1152(uParam0, iVar0) || func_616(0) != -349391286)
		{
			func_1092(uParam0, 1);
			if (((!func_278(iVar2, 0) || iVar2 == iVar0) || !func_1152(uParam0, iVar2)) || func_615(0) == -349391286)
			{
				func_1093(uParam0, 1);
				func_1094(uParam0, 0);
			}
		}
		else
		{
			func_1092(uParam0, 1);
			if (((!func_278(iVar2, 0) || iVar2 == iVar0) || func_1152(uParam0, iVar2)) || func_615(0) != -349391286)
			{
				func_1093(uParam0, 0);
				func_1094(uParam0, 1);
			}
		}
	}
	if (func_1256(iVar0) == 0)
	{
		if (func_827(iVar0) == -1037537535)
		{
			if (func_339(iVar0) == -999503751 && func_340(iVar0) == -1)
			{
				bVar1 = false;
			}
			else if (func_1291(iVar0) == -1)
			{
				bVar1 = false;
			}
		}
		else
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (func_1679(uParam0))
		{
			func_636(uParam0, 4, -1741293470, 1, 1, 0);
		}
		else
		{
			func_636(uParam0, 4, -1977485644, 1, 1, 0);
		}
	}
	else
	{
		func_1093(uParam0, 0);
		func_1094(uParam0, 1);
	}
	return 1;
}

int func_1138(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<6> Var28;
	bool bVar34;
	
	iVar0 = uParam1->f_9;
	iVar1 = *uParam1;
	if (*uParam1 == -1968468235)
	{
		iVar2 = func_466(0);
		iVar3 = func_1091(&(uParam0->f_2031));
		if (iVar2 >= iVar3 || iVar2 < 0)
		{
			return 0;
		}
		uParam0->f_2031.f_73 = iVar2;
		if (!func_589(iVar2, &(uParam0->f_2031), &uVar4))
		{
			return 0;
		}
		else
		{
			iVar8 = func_607(0);
			iVar9 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar8, func_684());
			iVar10 = iVar9;
			iVar11 = func_642(uParam0);
			func_581(uParam0);
			vVar12.f_1 = -1;
			vVar12.f_2 = -1;
			iVar16 = func_1223(iVar2, &(uParam0->f_2031));
			iVar17 = 0;
			iVar18 = 0;
			bVar19 = false;
			iVar17 = 0;
			while (iVar17 < iVar16)
			{
				vVar12 = { func_1224(iVar2, iVar17, &(uParam0->f_2031)) };
				if (func_278(vVar12.x, 0))
				{
					if (!func_1075(uParam0, vVar12))
					{
					}
					else
					{
						iVar15 = func_897(uParam0, vVar12.x);
						if (func_1680(uParam0, vVar12.x, vVar12.y, iVar15))
						{
							if (iVar10 == 0)
							{
								iVar10 = vVar12.x;
							}
							if (vVar12.x == iVar10)
							{
								func_643(uParam0, iVar18);
								iVar0 = vVar12.x;
								iVar1 = iVar15;
								bVar19 = true;
							}
							iVar18++;
						}
					}
				}
				iVar17++;
			}
			if (!bVar19)
			{
				func_643(uParam0, iVar11);
				iVar20 = func_642(uParam0);
				vVar12 = { func_1224(iVar2, iVar20, &(uParam0->f_2031)) };
				iVar0 = vVar12.x;
				iVar1 = iVar15;
			}
		}
		iVar21 = func_622(0);
		if (func_1039(iVar0))
		{
			if (func_1681(uParam0))
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, func_552(), 0);
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, func_552(), 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, func_552(), iVar21);
		}
		func_645(uParam0, func_642(uParam0));
		func_610(uParam1, uParam0, 0);
	}
	else
	{
		iVar23 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
		if (uParam0->f_2031.f_73 >= iVar23)
		{
		}
		else
		{
			iVar22 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, uParam0->f_2031.f_73);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar22))
			{
				if (uParam1->f_11 == 310306577)
				{
					DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar22, func_684(), uParam1->f_9);
					DATABINDING::_DATABINDING_ADD_DATA_INT(iVar22, func_685(), *uParam1);
					DATABINDING::_DATABINDING_ADD_DATA_INT(iVar22, func_686(), uParam1->f_13);
					func_296(uParam0);
				}
				func_617(uParam0, 0);
				bVar24 = func_535(uParam0, func_299(uParam0), DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar22, func_717()));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar22, func_1115(), bVar24);
			}
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "ItemPaletteItemName", func_1154(iVar0));
	iVar25 = func_1682(uParam0, iVar0, iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "ItemPalettePrice", iVar25);
	iVar26 = 1067499419;
	if (uParam1->f_11 == 310306577)
	{
		iVar27 = func_1148(uParam0);
		func_1149(uParam0, -2089226131, 0, iVar27, 0);
		func_637(uParam0, func_1153(iVar27));
		func_636(uParam0, 1, -2494464, func_1153(iVar27), 1, 0);
	}
	else
	{
		if (func_1039(uParam1->f_9))
		{
			Var28 = { func_1007() };
			func_1673(uParam0, uParam1->f_9, Var28.f_1);
			if (func_1681(uParam0))
			{
				func_636(uParam0, 4, -1186444257, 1, 1, 0);
			}
			else
			{
				func_636(uParam0, 4, -1741293470, 1, 1, 0);
			}
		}
		else
		{
			func_550(uParam0, 0);
		}
		iVar26 = 1337808636;
		func_1149(uParam0, 1182109459, uParam1->f_9, -1, 0);
		func_636(uParam0, 1, -2494464, func_1153(iVar25), 1, 0);
	}
	bVar34 = (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_50, func_552()) || func_1681(uParam0));
	bVar34 = (bVar34 && uParam0->f_2031.f_72 > 1);
	func_636(uParam0, 5, iVar26, bVar34, bVar34, 0);
	return 1;
}

int func_1139(var uParam0)
{
	int iVar0;
	
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1093(uParam0, 1);
		func_1683(uParam0, iVar0);
		func_636(uParam0, 4, -1741293470, 1, 1, 0);
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, iVar0, 0);
		func_1149(uParam0, 1694435542, iVar0, -1, 0);
	}
	return 1;
}

int func_1140(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_277(0);
	if (func_278(iVar0, 0))
	{
		func_1093(uParam0, 1);
		iVar1 = func_961(uParam0);
		if (func_278(iVar1, 0))
		{
			func_667(uParam0, iVar1, iVar0);
		}
		else
		{
			func_667(uParam0, iVar0, 0);
		}
		iVar2 = func_622(0);
		func_251(uParam0, 1, iVar2);
	}
	return 1;
}

int func_1141(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = uParam1->f_9;
	if (func_278(iVar0, 0))
	{
		func_1672(uParam0, func_1037(uParam0));
		func_636(uParam0, 4, -1741293470, 1, 1, 0);
		func_1096(uParam0, 0);
		INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, iVar0, 0);
	}
	return 1;
}

int func_1142(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	iVar0 = func_277(0);
	iVar1 = func_616(0);
	if (iVar1 == 193788635)
	{
		iVar2 = func_652(0);
		if (iVar2 == -1 || iVar2 >= 5)
		{
			return 0;
		}
		if (func_911(iVar2))
		{
			func_1672(uParam0, func_1037(uParam0));
			func_636(uParam0, 4, -1741293470, 1, 1, 0);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_67))
			{
				INVENTORY::_0x75CFAC49301E134F(uParam0->f_2031.f_67, iVar0, 0);
			}
			func_1093(uParam0, 1);
			bVar3 = func_622(0);
			if (func_1602(iVar0))
			{
				bVar3 = false;
			}
			func_1149(uParam0, -1780721243, 0, BUILTIN::ROUND(func_1016(iVar0, func_226(iVar2))), 1);
			func_637(uParam0, bVar3);
		}
		else
		{
			func_1093(uParam0, 0);
			if (iVar2 == 4 && func_1249())
			{
				func_640(uParam0, 956657125);
			}
			else if (func_256(uParam0, func_299(uParam0), 623595106))
			{
				func_640(uParam0, -183198311);
			}
			else
			{
				func_640(uParam0, -882461021);
			}
		}
	}
	else if (iVar1 == 1837492866)
	{
		func_1093(uParam0, 0);
		if (func_721() == 3)
		{
			iVar4 = 282600537;
		}
		else if (func_721() == 1)
		{
			iVar4 = -1729705519;
		}
		func_832(uParam0, iVar4);
	}
	return 1;
}

int func_1143(var uParam0)
{
	int iVar0;
	
	iVar0 = func_277(0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	if (func_1203(iVar0))
	{
		func_667(uParam0, iVar0, 0);
	}
	return 1;
}

int func_1144(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_1473(uParam0);
	if (!func_278(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_1001(iVar0);
	iVar2 = func_1002(iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "InfoBoxName", MISC::GET_HASH_KEY(func_1255(iVar2)));
	func_1672(uParam0, func_1037(uParam0));
	iVar3 = BUILTIN::ROUND(func_1016(iVar0, func_298(uParam0)));
	if ((iVar0 == -935042458 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("hunting1")) > 0) || func_1684(15))
	{
		iVar3 = 6500;
	}
	func_1149(uParam0, -861791432, iVar0, iVar3, 1);
	func_636(uParam0, 4, -1741293470, 1, 1, 0);
	return 1;
}

int func_1145(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = 0;
	iVar3 = 0;
	while (iVar3 < 130)
	{
		iVar1 = -1;
		if (!func_111(iVar3))
		{
		}
		else if (!func_804(iVar3))
		{
		}
		else
		{
			iVar1 = func_1064(func_1063(iVar3, 1, 1));
			if (!func_718(iVar1))
			{
			}
			else if (iVar1 == 5)
			{
			}
			else if (func_1065(iVar2, iVar1))
			{
			}
			else
			{
				func_1066(&iVar2, iVar1);
				iVar0 = (iVar0 + func_925(iVar1));
			}
		}
		iVar3++;
	}
	bVar4 = (func_360(1) >= iVar0 && iVar0 > 0);
	func_1149(uParam0, -1789759600, 0, iVar0, 0);
	func_636(uParam0, 2, -1789759600, bVar4, 1, 1);
	if (func_1685() && func_1065(iVar2, 3))
	{
		func_832(uParam0, MISC::GET_HASH_KEY("SHOP_H_WEST_ELIZABETH_BOUNTY"));
		func_833(uParam0, 1);
	}
	else
	{
		func_833(uParam0, 0);
	}
	return 1;
}

int func_1146(var uParam0, var uParam1)
{
	int iVar0;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar4 = 0;
	iVar4 = func_1091(&(uParam0->f_2031));
	if (iVar4 < 0)
	{
		return 0;
	}
	else if (!func_589(0, &(uParam0->f_2031), &iVar0))
	{
		return 0;
	}
	if (!func_1244(uParam0, func_299(uParam0), iVar0, &iVar5, &uVar6))
	{
		return 0;
	}
	if (!func_278(iVar5, 0))
	{
		return 0;
	}
	func_1089(uParam0, iVar5, 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_50, "InfoBoxName", func_1154(iVar5));
	func_1089(uParam0, iVar5, 0);
	func_1149(uParam0, -2089226131, iVar5, -1, 0);
	if (func_1114(iVar5))
	{
		func_279(iVar5);
	}
	*uParam1 = func_897(uParam0, iVar5);
	uParam1->f_9 = iVar5;
	return 1;
}

int func_1147(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	struct<2> Var10;
	
	iVar0 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
	iVar1 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	vVar7.f_1 = -1;
	vVar7.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar2, func_649());
			iVar3 = iVar4;
			if (iVar3 == -1968468235)
			{
				iVar5 = func_1223(iVar1, &(uParam0->f_2031));
				iVar6 = 0;
				iVar6 = 0;
				while (iVar6 < iVar5)
				{
					vVar7 = { func_1224(iVar1, iVar6, &(uParam0->f_2031)) };
					if (func_278(vVar7.x, 0))
					{
						if (vVar7.x == iParam1)
						{
							DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar2, func_684(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, func_1669(), vVar7.x);
							DATABINDING::_DATABINDING_ADD_DATA_INT(iVar2, func_685(), func_897(uParam0, vVar7.x));
							if (!func_1246(uParam0, iParam1, &Var10, 164843734))
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", 1);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", "generic_textures");
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "texture", "SWATCH_BG_1A");
							}
							else
							{
								DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar2, "iconVisible", 1);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTextureDict", Var10.f_1);
								DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar2, "iconTexture", Var10);
							}
						}
						else
						{
							iVar6++;
						}
						iVar1++;
						return 0;
					}
				}
			}
		}
	}

int func_1148(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<9> Var14;
	int iVar24[10];
	int iVar35;
	int iVar36[10];
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	
	iVar0 = 0;
	uVar8 = func_919(uParam0);
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_2 = -1;
	Var14.f_3 = -1;
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_7 = -1;
	Var14.f_8 = -1;
	iVar49 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(uParam0->f_2031.f_57);
	iVar1 = 0;
	while (iVar1 < iVar49)
	{
		iVar48 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2031.f_57, iVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar48))
		{
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar48, func_684());
			iVar6 = iVar2;
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar48, func_685());
			iVar5 = iVar4;
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar48, func_686());
			if (func_278(iVar6, 0))
			{
				if (iVar5 == 1702073444)
				{
					if (func_1184(iVar6))
					{
						Var14.f_8 = iVar3;
						uVar8 = func_919(uParam0);
						iVar10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var14, &iVar9, 1);
						iVar11 = 0;
						while (iVar11 < iVar9)
						{
							iVar12 = func_920(iVar11, iVar10);
							if ((((func_278(iVar12, 0) && iVar12 != iVar6) && !func_1686(iVar12, &iVar24, iVar35)) && func_921(&(uParam0->f_2031), iVar12, &uVar7)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar12, Var14.f_8) == -2089472884)
							{
								uParam0->f_2031.f_73 = uVar7;
								iVar13 = func_897(uParam0, iVar12);
								if (!func_835(uParam0, iVar12, iVar13))
								{
									if (iVar47 < (iVar36 - 1))
									{
										iVar36[iVar47] = iVar12;
										iVar47++;
									}
								}
							}
							iVar11++;
						}
						uParam0->f_2031.f_73 = uVar8;
						ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar10);
					}
				}
				else if (!func_1686(iVar6, &iVar24, iVar35))
				{
					if (!func_835(uParam0, iVar6, iVar5))
					{
						iVar0 = (iVar0 + func_903(iVar6, 0));
					}
					if (func_612(iVar6, 1954943838))
					{
						if (iVar47 < (iVar36 - 1))
						{
							iVar36[iVar47] = iVar6;
							iVar47++;
						}
					}
				}
				if (iVar35 < (iVar24 - 1))
				{
					iVar24[iVar35] = iVar12;
					iVar35++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iVar47)
	{
		if (&iVar36[iVar1] != 0 && !func_612(&(iVar36[iVar1]), 1954943838))
		{
			iVar50 = 0;
			while (iVar50 < iVar47)
			{
				if ((&iVar36[iVar50] != 0 && func_612(&(iVar36[iVar50]), 1954943838)) && func_1058(&(iVar36[iVar1]), &(iVar36[iVar50])))
				{
					iVar0 = (iVar0 + func_903(&(iVar36[iVar1]), 0));
					iVar36[iVar1] = 0;
				}
				else
				{
					iVar50++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_1149(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_897(uParam0, iParam2);
	iVar1 = 0;
	iVar2 = 0;
	if (func_278(iParam2, 0))
	{
		iVar1 = func_1186(iParam2, -915411861, 0, 0, 1);
		iVar2 = func_903(iParam2, 0);
		if (bParam4)
		{
			iVar1 = func_1687(iParam2, 816454899, 0);
			iVar2 = func_1600(iParam2, 0);
		}
	}
	if (iParam3 != -1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceVisible", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceGold", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPrice", iParam3);
	}
	else if (!func_1015(iParam2) && func_835(uParam0, iParam2, iVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "ItemPriceRightText", -298752054);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceVisible", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceGold", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceVisible", 0);
	}
	else
	{
		if (iVar1 != iVar2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceVisible", 1);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceGold", 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPrice", iVar2);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemModifiedPrice", iVar1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceVisible", 0);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceGold", 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPrice", iVar2);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemModifiedPrice", iVar1);
		}
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceVisible", 1);
	}
	iVar3 = 1;
	if (!bParam4)
	{
		iVar3 = func_910(uParam0, iParam2, iVar0);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceEnabled", iVar3);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemModifiedPriceEnabled", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "ItemPriceText", iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "ItemPriceFooterVisible", 1);
}

int func_1150(int iParam0)
{
	if (!func_278(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1151(int iParam0, bool bParam1)
{
	struct<5> Var0;
	
	Var0 = { func_1185(iParam0, 0, 0) };
	return func_1265(iParam0, &Var0, 0, bParam1);
}

bool func_1152(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	bVar0 = false;
	if (func_612(iParam1, 930141731))
	{
		bVar0 = !UNLOCK::_UNLOCK_IS_UNLOCKED(iParam1);
	}
	bVar1 = !func_1688(iParam1);
	uVar2 = func_1689(iParam1, uParam0->f_3);
	bVar3 = ((bVar1 || uVar2) || bVar0);
	return bVar3;
}

bool func_1153(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_360(1);
}

int func_1154(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_1155(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<4> Var10;
	int iVar14;
	
	iVar0 = func_1474(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_KEY_VALID(func_82(iVar0)))
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(func_82(iVar0), iParam0, &vVar1))
		{
			return 0;
		}
	}
	if (vVar1.x == 0)
	{
		return 0;
	}
	if (vVar1.z <= 0)
	{
		return 0;
	}
	uVar4 = func_82(iVar0);
	iVar14 = 0;
	iVar6 = 0;
	while (iVar6 < vVar1.z)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(uVar4, vVar1.x, iVar6, &Var8))
		{
			return 0;
		}
		if (Var8.f_1 <= 0)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < Var8.f_1)
			{
				Var10 = 0;
				if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar4, vVar1.x, iVar6, iVar7, &Var10))
				{
				}
				else
				{
					if (!func_1690(iParam1, vVar1.x, &Var10, &uVar5))
					{
						if (uParam2->f_10 >= 3)
						{
							return 1;
						}
						(*uParam2)[uParam2->f_10 /*3*/] = Var10;
						((*uParam2)[uParam2->f_10 /*3*/])->f_1 = Var10.f_1;
						((*uParam2)[uParam2->f_10 /*3*/])->f_2 = Var10.f_3;
						uParam2->f_10++;
						iVar14 = 1;
					}
					iVar7++;
				}
			}
		}
		iVar6++;
	}
	return iVar14;
}

int func_1156(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		
		case 81053684:
			return Global_1946804->f_2657.f_23;
		
		case -525676072:
			return Global_1946804->f_2657.f_22;
		
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		
		case -413129408:
			return Global_1946804->f_2657.f_25;
		
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1691();
			}
			break;
	}
	return 0;
}

int func_1157(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		
		case 81053684:
			iVar0 = 1;
			break;
		
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		
		case -1719060085:
			iVar0 = 1;
			break;
		
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		
		case -413129408:
			iVar0 = 1;
			break;
		
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 1508306587:
			return 956753366;
		
		case 2029752284:
			return 229848043;
		
		case -413129408:
			return 588559743;
		
		case 1132079111:
			return -1165477807;
		
		case 478744432:
			return 542482997;
		
		case -68128151:
			return -1598999798;
		
		case -686686829:
			return -1964604515;
		
		case 1201276490:
			return -950324859;
		
		case -839140560:
			return -1768217088;
		
		case -298391753:
			return -647442474;
		
		case 1589583617:
			return -1669395156;
		
		case 1769055947:
			return 2099263972;
		
		case 1545016984:
			return 2099263972;
		
		case 1868067663:
			return 1177470655;
		
		case -1080198344:
			return 1177470655;
		
		case -1440373417:
			return -145955678;
		
		case 562107429:
			return 1758406353;
		
		case -163032984:
			return 332275111;
		
		case -1719060085:
			return 1533215112;
		
		case 1033860813:
			return 1990307743;
		
		case -2061583405:
			return 1314684259;
		
		case 58819564:
			return -1942508740;
		
		case -646147237:
			return 2145255488;
		
		case 1096747416:
			return 1735590610;
		
		case -852381396:
			return -1804458598;
		
		case 153430294:
			return -1804458598;
		
		case 81053684:
			return -2096103467;
		
		case -525676072:
			return -2096103467;
		
		case -497931013:
			return -572044425;
		
		case 172394747:
			return -1893707445;
		
		case 461122406:
			return -572044425;
		
		case -999503751:
			return 1704476318;
		
		case 502936876:
			return 1135086855;
		
		case 2047428024:
			return -1118685671;
		
		case -1358040092:
			return 1373811563;
		
		case -590250209:
			return -551303313;
		
		case 1477698721:
			return -1962451182;
		
		case 688587926:
			return -999848467;
		
		case 684307653:
			return 2123406071;
		
		case -923693316:
			return 2099263972;
		
		case 2016058810:
			return 406014096;
		
		case 1282123855:
			return -350927420;
		
		case -795466267:
			return -494519208;
		
		case 2112290568:
			return 834235656;
		
		case 698653232:
			return 1488981351;
		
		case -1423861687:
			return -1622329839;
		
		case -1126146024:
			return 1995280482;
		
		case 684852611:
			return -1596855333;
		
		case -1934420714:
			return -1596855333;
		
		case -1972808239:
			return -1596855333;
		
		case -2085606460:
			return -1596855333;
		
		case 1772421657:
			return -1596855333;
		
		case -1407809882:
			return -721165241;
		
		case 1061770183:
			return -1134874053;
		
		default:
			break;
	}
	return 0;
}

char* func_1159(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_1154(iParam0));
}

int func_1160(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_612(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

var func_1161(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_20;
	}
	return Global_1914319->f_16855.f_3.f_13;
}

var func_1162(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_18;
	}
	return Global_1914319->f_16855.f_3.f_11;
}

var func_1163(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_16855.f_3.f_19;
	}
	return Global_1914319->f_16855.f_3.f_12;
}

char* func_1164()
{
	return "itemEnabled";
}

void func_1165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar3 = 0;
	bVar2 = func_125() != -1;
	if (func_1171() == 24043185)
	{
		iVar3 = 1;
	}
	iVar0 = func_1692(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = 5;
		if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, iVar0, bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
			Global_1946804->f_2653 = iParam0;
		}
		else if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, func_1692(iParam0 + 1), bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 1155669136;
			Global_1946804->f_2653 = iParam0;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1 /*3*/] = func_1694(0);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 289238755;
				Global_1946804->f_2653 = iParam0;
			}
			else
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
				Global_1946804->f_2653 = iParam0;
			}
		}
	}
	iVar0 = func_1692(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 6;
		if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, iVar0, bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
			Global_1946804->f_2654 = iParam1;
		}
		else if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, func_1692(iParam1 + 1), bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 1155669136;
			Global_1946804->f_2654 = iParam1;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1 /*3*/] = func_1694(1);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 289238755;
				Global_1946804->f_2654 = iParam1;
			}
			else
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
				Global_1946804->f_2654 = iParam1;
			}
		}
	}
	iVar0 = func_1692(iParam2);
	if (iVar0 != 0)
	{
		iVar1 = 7;
		if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, iVar0, bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
			Global_1946804->f_2655 = iParam2;
		}
		else if (func_1693(&(Global_1946804->f_1378.f_1[iVar1 /*3*/]), iVar3, func_1692(iParam2 + 1), bVar2) != -1)
		{
			(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 1155669136;
			Global_1946804->f_2655 = iParam2;
		}
		else
		{
			Global_1946804->f_1378.f_1[iVar1 /*3*/] = func_1694(2);
			if (iVar0 == -888790689 || iVar0 == -2126063412)
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = 289238755;
				Global_1946804->f_2655 = iParam2;
			}
			else
			{
				(Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_1 = iVar0;
				Global_1946804->f_2655 = iParam2;
			}
		}
	}
}

int func_1166(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_656(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_1171() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_658();
	}
	if (iParam1 != 1155669136 && func_1693(&(Global_1946804->f_1378.f_1[iVar0 /*3*/]), iVar1, iParam1, func_125() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804->f_2456[iVar0 /*2*/] = 0;
		(Global_1946804->f_2456[iVar0 /*2*/])->f_1 = 0;
	}
	(Global_1946804->f_1378.f_1[iVar0 /*3*/])->f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(16, iParam2, 0, 0, 0);
		}
		else
		{
			func_94(16, iParam2, 1, iParam0, 0);
		}
	}
	func_336(1);
	return 1;
}

int func_1167(int iParam0)
{
	return &(Global_40.f_7731[iParam0 /*5*/]);
}

void func_1168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam1 == -1)
	{
		iParam1 = &Global_40.f_7731[0 /*5*/];
	}
	if (iParam2 == -1)
	{
		iParam2 = &Global_40.f_7731[1 /*5*/];
	}
	if (iParam3 == -1)
	{
		iParam3 = &Global_40.f_7731[2 /*5*/];
	}
	func_658();
	func_1165(iParam1, iParam2, iParam3);
	if ((iParam1 == 0 && iParam2 == 0) && iParam3 == 0)
	{
		func_1695(iParam0, -7657935, -1889597427, 1, 1, 0);
	}
	else
	{
		func_1695(iParam0, 1155669136, -1889597427, 1, 1, 0);
	}
	if (bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(1, 64, 0, 0, 0);
		}
		else
		{
			func_94(1, 64, 1, iParam0, 0);
		}
	}
	func_336(1);
}

int func_1169(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	
	Var1 = -2109211296;
	if (func_125() == -1)
	{
		if (func_1171() == 1160113249)
		{
			Var1 = 1583685020;
		}
		else
		{
			Var1 = -572793833;
		}
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, 199808792))
	{
		(*uParam1)[0] = func_1696(iVar0);
	}
	else
	{
		(*uParam1)[0] = -1;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -468412711))
	{
		(*uParam1)[1] = func_1696(iVar0);
	}
	else
	{
		(*uParam1)[1] = -1;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -1592946273))
	{
		(*uParam1)[2] = func_1696(iVar0);
	}
	else
	{
		(*uParam1)[2] = -1;
	}
	return 1;
}

int func_1170(int iParam0)
{
	if (!func_1697(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_7731[iParam0 /*5*/]);
}

int func_1171()
{
	return Global_1946804->f_1;
}

int func_1172(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_658();
	if (iParam2 == 39)
	{
		Var0 = { func_1185(iParam0, 1, 0) };
		iParam2 = func_656(func_1312(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_612(iParam0, 866047851) && func_1160(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_538(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1296(func_1080(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_657(iParam2);
	func_661(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1698(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1698(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_659(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1699(iParam0, iParam2, iParam1, func_125() != -1);
	if (bParam4)
	{
		func_1297(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1297(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1083(func_1080(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1173(int iParam0)
{
	func_1700(&(Global_1946804->f_1378), iParam0);
}

int func_1174(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -1506259487;
			break;
		
		case 1:
			*uParam1 = -676503695;
			break;
		
		case 2:
			*uParam1 = 383349088;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_1175(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10[3];
	
	switch (iParam0)
	{
		case -1881423545:
		case 1024854903:
		case 1107981273:
		case 1224358974:
		case 1792152856:
			return 0;
		
		case 1574030042:
			return func_1701(0);
		
		case 1420417918:
			return func_1701(1);
		
		default:
			break;
	}
	func_1702(iParam0, &uVar1);
	func_1169(iParam0, &uVar10);
	iVar6 = func_1703(iParam0);
	iVar8 = (&uVar10[iVar6] - func_1167(iVar6));
	iVar5 = 0;
	while (iVar5 < 3)
	{
		func_633(iVar5, &iVar0);
		iVar7 = func_1167(iVar5);
		if (&uVar10[iVar5] != -1 && iVar0 != &uVar1[iVar5])
		{
			return 0;
		}
		if (&uVar10[iVar5] == -1)
		{
			if (iVar7 > 1)
			{
				return 0;
			}
		else
		{
			}
			else
			{
				if (iVar7 < &uVar10[iVar5])
				{
					return 0;
				}
				if (iVar7 > (&uVar10[iVar5] + iVar8))
				{
					return 0;
				}
				iVar9 = (uVar10[iVar5] - uVar10[iVar6]) // PointerArith;
				if (iVar9 != (func_1167(iVar6) - iVar7))
				{
					return 0;
				}
			}
			iVar5++;
			return 1;
		}
	}

int func_1176(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1704(0);
	iVar1 = 0;
	func_1195(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

int func_1177(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar123;
	
	iVar1 = iParam0;
	if (Global_1946804->f_1497 == iVar1)
	{
		return 1;
	}
	Var4.f_1 = 39;
	func_754(&Var4, 0, 1);
	if (!func_1295(&Var4, iVar1, &uVar0, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar123 = 0;
	while (iVar123 < 39)
	{
		iVar3 = func_1080(iVar123, 1);
		if (&(Global_1946804->f_57[iVar123 /*11*/])->f_2[0] == -1802376732)
		{
		}
		else if (uVar0 && &Var4.f_1[iVar123 /*3*/] == &Global_1946804->f_57[iVar123 /*11*/])
		{
		}
		else if (&Var4.f_1[iVar123 /*3*/] == &uParam1->f_1[iVar123 /*3*/])
		{
		}
		else if (func_1081(iVar3, 14))
		{
		}
		else if (func_1292(uParam1->f_1[iVar123 /*3*/], 2) && &Var4.f_1[iVar123 /*3*/] == &Global_1946804->f_57[iVar123 /*11*/])
		{
		}
		else
		{
			switch (iVar3)
			{
				case 1600962399:
				case 1742327865:
					Jump @273; //curOff = 241
					iVar2 = &Var4.f_1[iVar123 /*3*/];
					if (func_1426(iVar2))
					{
					}
					else
					{
						return 0;
					}
				}
				iVar123++;
			}
			return 1;
		}

int func_1178(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_656(iParam0, 1) /*3*/]);
}

bool func_1179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_1588(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

bool func_1180(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_1589(iParam0, &iVar0))
	{
		return false;
	}
	return iVar0 == iParam1;
}

int func_1181(int iParam0)
{
	var uVar0;
	var uVar5;
	int iVar9;
	int iVar10;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_966(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	if (func_1590(iVar9, &iVar10))
	{
		return iVar10 == iParam0;
	}
	return 0;
}

struct<4> func_1182(bool bParam0)
{
	return func_669(1328661203, func_1642(), -1591664384, bParam0);
}

int func_1183(int iParam0)
{
	switch (iParam0)
	{
		case 1795979421:
			return -1774867076;
		
		case 1193257440:
			return -421952220;
		
		case 1415299667:
			return 1231618917;
		
		case -1015460895:
			return 1043717005;
		
		case -768291983:
			return 142663787;
		
		default:
			break;
	}
	return 0;
}

int func_1184(int iParam0)
{
	if (func_612(iParam0, -313258003))
	{
		return 1;
	}
	return 0;
}

struct<5> func_1185(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_1182(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_827(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_669(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_668(bParam1) };
			if (iParam2 && func_1705(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_968(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_968(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1470(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1706(bParam1) };
			switch (func_339(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_1707(iParam0, -1823706425))
			{
				Var0 = { func_669(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1707(iParam0, -1483207246))
			{
				Var0 = { func_669(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1468(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	
	if (func_612(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_1505(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_1708(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_920(iVar62, iVar61);
					if (func_278(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1186(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1186(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1505(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1187()
{
	if (func_632() == -814448122 || (func_632() == -986108061 && !func_952(2)))
	{
		return Global_40.f_7748.f_1 > 1;
	}
	return Global_40.f_7748.f_1 > 2;
}

bool func_1188(int iParam0)
{
	return iParam0 != 0;
}

bool func_1189(int iParam0)
{
	return ((&Global_40.f_7731[0 /*5*/] >= iParam0 || &Global_40.f_7731[1 /*5*/] >= iParam0) || &Global_40.f_7731[2 /*5*/] >= iParam0);
}

bool func_1190(int iParam0)
{
	return ((&Global_40.f_7731[0 /*5*/] >= iParam0 && &Global_40.f_7731[1 /*5*/] >= iParam0) && &Global_40.f_7731[2 /*5*/] >= iParam0);
}

bool func_1191(int iParam0)
{
	if (!func_1697(iParam0))
	{
		return false;
	}
	return &Global_40.f_7731[iParam0 /*5*/] > 1;
}

void func_1192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1914319->f_16855.f_3.f_18 = Global_1914319->f_16855.f_3.f_14;
		Global_1914319->f_16855.f_3.f_14 = uParam0;
	}
	else
	{
		Global_1914319->f_16855.f_3.f_11 = Global_1914319->f_16855.f_3.f_8;
		Global_1914319->f_16855.f_3.f_8 = uParam0;
	}
}

int func_1193(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_1329.f_48)
	{
		iVar1 = 0;
		while (iVar1 < (Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_5)
		{
			if (iParam0 == &(Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_1[iVar1])
			{
				*uParam1 = &Global_1946804->f_1329.f_29[iVar0 /*6*/];
				*uParam2 = iVar0;
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 358835375:
			return 0;
		
		case -1127546830:
			return 1;
		
		case 1116743896:
			return 2;
		
		default:
			break;
	}
	return 3;
}

void func_1195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1196(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1709(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1709(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1082(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

bool func_1197(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

bool func_1198(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_656(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_656(iParam0, 1) /*11*/];
}

void func_1199(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_661(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_661(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_661(iVar2, iVar0);
		}
	}
}

void func_1200(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1710(uParam0, 1))
	{
		func_1711(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

void func_1201(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1712(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_125() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1323(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1354(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1354(Global_40.f_7729);
				Global_1946804->f_1378 = func_1354(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1526(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_129(0, 1);
	}
}

int func_1202(int iParam0, var uParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;
	
	if (!func_1203(iParam0))
	{
		return -1;
	}
	Var0 = { func_1185(iParam0, 0, 0) };
	Var0.f_4 = uParam1;
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	uVar9 = INVENTORY::_0xAB5F12746A099A0E(func_1208(0), &Var5);
	return uVar9;
}

bool func_1203(int iParam0)
{
	return func_827(iParam0) == -427144552;
}

struct<2> func_1204(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_1205(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0)
	{
		iVar0 = func_339(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_975(iParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_1206(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 != 0)
	{
		iVar3 = func_339(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1331(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &uVar1))
				{
					iVar2 = uVar1;
					if (iVar2 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_1207(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var5))
	{
		iVar1 = 0;
		while (iVar1 < Var5.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var5, iVar1, &iVar4, &uVar2, &iVar3))
			{
				if (func_278(iVar4, 0))
				{
					iVar0 = func_897(uParam0, iVar4);
					if (func_634(uParam0, iVar4, iVar0, iVar3))
					{
						*iParam3 = iVar4;
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_1208(bool bParam0)
{
	if (func_125() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_1209(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1210(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_1208(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1211(int iParam0, int iParam1)
{
	struct<7> Var0;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, uParam1, &Var0))
	{
		return Var0.f_6;
	}
	return -1;
}

int func_1212(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar7;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, uParam1, &uVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam0, uVar0, iParam2, &uVar7))
		{
			return uVar7;
		}
	}
	return -1;
}

bool func_1213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if ((iParam1 + iParam2) >= iParam3 && iParam0 < iParam1)
	{
		iParam0 = (iParam0 + iParam3);
	}
	return (iParam0 >= iParam1 && iParam0 <= (iParam1 + iParam2));
}

int func_1214(int iParam0)
{
	if ((((iParam0 == -1873242174 || iParam0 == -1095179319) || iParam0 == 1406783678) || iParam0 == 2119176479) || iParam0 == 1649093494)
	{
		return 1;
	}
	return 0;
}

int func_1215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_713(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-1352600334);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	return 1;
}

int func_1216(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_715(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-2092532275);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	return 1;
}

int func_1217(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_714(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-772187037);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	return 1;
}

int func_1218(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_716(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(317179309);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	return 1;
}

int func_1219(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1714(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(2073652352);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam1, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	return 1;
}

int func_1220(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_688(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(336033112);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam2, iVar1, iVar0);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	return 1;
}

int func_1221(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_289(uParam0);
	iVar1 = func_1091(&(uParam0->f_2031));
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar5 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < iVar1)
	{
		iVar6 = func_1223(iVar8, &(uParam0->f_2031));
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			vVar2 = { func_1224(iVar8, iVar5, &(uParam0->f_2031)) };
			if (func_278(vVar2.x, 0))
			{
				if (func_1075(uParam0, vVar2))
				{
					if (func_1213(iVar7, iParam1, iParam2, iVar0))
					{
						if (!func_1225(uParam0, vVar2.x, iVar7, vVar2.y, vVar2.z, bParam3))
						{
						}
					}
					iVar7++;
				}
			}
			iVar5++;
		}
		iVar8++;
	}
	return 1;
}

int func_1222(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_289(uParam0);
	if (iParam1 == 207706105)
	{
		iVar1 = -999503751;
	}
	else if (iParam1 == -1998614617)
	{
		iVar1 = -525676072;
	}
	else if (iParam1 == -357182937)
	{
		iVar1 = -2061583405;
	}
	iVar2 = 0;
	iVar3 = func_1156(iVar1, 1);
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = func_852(iVar1, iVar4, 1);
		if (func_278(iVar5, 0))
		{
			if (func_1213(iVar2, iParam2, iParam3, iVar0))
			{
				if (!func_1225(uParam0, iVar5, iVar2, -1, -1, bParam4))
				{
				}
				iVar2++;
			}
		}
		iVar4++;
	}
	return 1;
}

int func_1223(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_SHOP_LAYOUT_KEY_VALID(*uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(*uParam1, iVar0, &Var1))
		{
			return Var1.f_3;
		}
	}
	return -1;
}

Vector3 func_1224(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = func_586(iParam0, uParam2);
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(*uParam2, uVar0, iParam1, &iVar4, &iVar5, &iVar6))
	{
		vVar1.x = iVar4;
		vVar1.f_1 = iVar6;
		vVar1.f_2 = iVar5;
	}
	return vVar1;
}

int func_1225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	iVar0 = func_897(uParam0, iParam1);
	iVar1 = iVar0;
	switch (iVar0)
	{
		case -384358143:
			bVar2 = func_698(uParam0, iParam1, &iVar3);
			break;
		
		case -1395073769:
			bVar2 = func_699(uParam0, iParam1, &iVar3);
			break;
		
		case -853534656:
			bVar2 = func_700(uParam0, iParam1, &iVar3, 1);
			break;
		
		case -349391286:
			bVar2 = func_701(uParam0, iParam1, &iVar3, 1);
			break;
		
		case 2036169888:
			bVar2 = func_702(uParam0, iParam1, &iVar3);
			break;
		
		case -239176093:
			bVar2 = func_703(uParam0, iParam1, &iVar3);
			break;
		
		case 1394581936:
			bVar2 = func_704(uParam0, iParam1, &iVar3);
			break;
		
		case 777890122:
			bVar2 = func_705(uParam0, iParam1, &iVar3);
			break;
		
		case -1502467280:
			bVar2 = func_706(uParam0, iParam1, &iVar3);
			break;
		
		case -584027224:
			bVar2 = func_707(uParam0, iParam1, &iVar3);
			break;
		
		case 38807286:
			bVar2 = func_694(uParam0, iParam1, &iVar3);
			break;
		
		case -760956867:
			bVar2 = func_693(uParam0, iParam1, &iVar3);
			break;
		
		case -339889117:
			bVar2 = func_695(uParam0, iParam1, iParam3, iParam4, &iVar3, 1);
			break;
		
		case -348190488:
			bVar2 = func_697(uParam0, iParam1, iParam3, iParam4, &iVar3, 1);
			break;
		
		case 761079318:
			bVar2 = func_708(uParam0, iParam1, &iVar3, 1);
			break;
		
		case -2056428614:
			bVar2 = func_709(uParam0, iParam1, &iVar3, 1);
			break;
		
		case 1942587409:
			bVar2 = func_710(uParam0, iParam1, &iVar3, 1);
			break;
		
		case 2077448405:
			bVar2 = func_711(uParam0, iParam1, &iVar3, 1);
			break;
		
		case -1048755899:
			bVar2 = func_712(uParam0, iParam1, &iVar3);
			break;
	}
	if (bParam5)
	{
		bVar2 = func_720(uParam0, iParam1, iVar0, &iVar3, 1);
	}
	if (bVar2)
	{
		if (!bParam5)
		{
			iVar4 = func_1713(iVar0);
		}
		else
		{
			iVar4 = -2084053133;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, iParam2, iVar1, iVar3);
		DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar4, iVar3);
		return 1;
	}
	return 0;
}

int func_1226(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_687(uParam0, iParam1, &iVar0, 1, 0, 0, 0))
	{
		return 0;
	}
	iVar1 = func_1713(-1968468235);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1227(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case -450053710:
			return 1538827865;
		
		case -1679658797:
			return -1792561227;
		
		case 1792770814:
			return 1033678910;
		
		case -1963397600:
			return -1942141178;
		
		case -1250098797:
			return 671599957;
		
		case -318278790:
			return -1554935503;
		
		case 55096099:
			return 694610769;
		
		case -458397856:
			return 1941463607;
		
		case -444610976:
			return -887316537;
		
		case 746627200:
			return 1762474047;
		
		case 705691988:
			return -828859553;
		
		case 2130094044:
			return 1410237043;
		
		case -1554827654:
			return -2026073756;
		
		case 604357666:
			return 729407854;
		
		case -1029277326:
			return 2002245664;
		
		case -1140650619:
			return -1120227140;
		
		case -1999198818:
			return 1142681594;
		
		case 1496579364:
			return 1214981718;
		
		case -1523757120:
			return -845373950;
		
		case -403470324:
			return -864588185;
		
		case 1576849913:
			return 1482814085;
		
		case -925223936:
			return -1040918754;
		
		case -1547438906:
			return 535545841;
		
		case -635239558:
			return 1686036388;
		
		case -2026265047:
			return -621245377;
		
		case -586898625:
			return 2125477381;
		
		case 937246805:
			return 1808724704;
		
		case 1593035738:
			return -1745871311;
		
		case 861505058:
			return -1366099125;
		
		case 687445866:
			return -1900776854;
		
		case 1705182311:
			return 1381855825;
		
		case -78273782:
			return -470894301;
		
		case -819697512:
			return -58297715;
		
		case -247265944:
			return 919533729;
		
		case -1516219602:
			return -1158763155;
		
		case -1265030920:
			return 1112812928;
		
		case 2024948086:
			return 753764318;
		
		case 1696286663:
			return 2100045093;
		
		case -1342159303:
			return 1097965086;
		
		case -1154406788:
			return -2136667309;
		
		case 2030804811:
			return -376463594;
		
		case 1230359523:
			return -1917318030;
		
		case -1038436471:
			return 1631640006;
		
		case -1063137731:
			return -1565311117;
		
		case 96930969:
			return 1714576673;
		
		case -1180427609:
			return 210760725;
		
		case 2119038574:
			return 2051021144;
		
		case 43825738:
			return 1924406350;
		
		case 2145697477:
			return -1990143531;
		
		case -1261814606:
			return 1741899492;
		
		case 107013696:
			return -1629575335;
		
		case 1066034872:
			return 1096294193;
		
		case 36009259:
			return -1162498792;
		
		case -1599683008:
			return -212500005;
		
		case -1693870200:
			return -538557079;
		
		case 1072019803:
			return 171150858;
		
		case 1074477367:
			return 67538819;
		
		case -85890205:
			return -126472599;
		
		case 1048964673:
			return -1219957736;
		
		case -727455979:
			return -332060056;
		
		case -1667789645:
			return 1917500091;
		
		case -1924405794:
			return -1043453945;
		
		case 1861665605:
			return 1723487083;
		
		case -526169133:
			return 2044230644;
		
		case 900144280:
			return 1680713143;
		
		case 1133837220:
			return 344528703;
		
		case 1702024301:
			return -1674873797;
		
		case -1604180548:
			return 281852151;
		
		case 1772321403:
			return -285185056;
		
		case -1028075925:
			return -1692268955;
		
		case 84224102:
			return 2130706226;
		
		case -1896838685:
			return -1754375530;
		
		case -420599285:
			return -71211764;
		
		case 478986344:
			return -1390353518;
		
		case 446670976:
			return 330935532;
		
		case 802784330:
			return -935042458;
		
		case 549900435:
			return -41062704;
		
		case -2063289686:
			return 887669186;
		
		case 917402668:
			return 2102774612;
		
		case -914712122:
			return -2011111190;
		
		case -598917269:
			return -535752499;
		
		default:
			break;
	}
	return 0;
}

int func_1228(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (!func_1015(iParam1))
	{
		return 0;
	}
	if (!func_692(uParam0, iParam1, iParam2, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-1080155519);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam3, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1229(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_689(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(193788635);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1230(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_691(uParam0, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(1837492866);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam1, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1231(bool bParam0)
{
	return (func_1715(bParam0) - 1);
}

int func_1232(var uParam0, bool bParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1716(&Var0))
	{
		return 0;
	}
	if (!func_1528(Var0, -415648720, uParam0, bParam1))
	{
		return 0;
	}
	return 1;
}

int func_1233(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	if (!func_690(uParam0, Param1.f_4, iParam15, Param1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(1119253406);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam15, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1234(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	struct<14> Var16;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	Var2.f_9 = -1591664384;
	Var16 = { func_979(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	if (!func_980(&Var16, &iVar0, &iVar1, 1))
	{
		return 0;
	}
	if (iParam0 < iVar1)
	{
		if (func_981(&Var2, iParam0, iVar0, iVar1))
		{
			if (func_278(Var2.f_4, 0))
			{
				*uParam1 = Var2.f_4;
				func_982(iVar0);
				return 1;
			}
		}
	}
	func_982(iVar0);
	return 0;
}

int func_1235(int iParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1717(iParam0, &Var0))
	{
		return 0;
	}
	if (!func_1528(Var0, -415648720, uParam1, bParam2))
	{
		return 0;
	}
	return 1;
}

int func_1236(bool bParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	
	Var0 = { func_1718(0) };
	Var4.f_9 = -1591664384;
	func_1468(Var0, &Var4, bParam0, 0);
	return func_975(Var4.f_4);
}

int func_1237(int iParam0, var uParam1, bool bParam2)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar18;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	Var0 = { func_1718(0) };
	Var4.f_9 = -1591664384;
	func_1468(Var0, &Var4, bParam2, 0);
	if (iParam0 >= func_975(Var4.f_4))
	{
		return 0;
	}
	iVar18 = func_1205(Var4.f_4, iParam0);
	if (iVar18 == 0)
	{
		return 0;
	}
	if (!func_1719(Var0, iVar18, uParam1, 0, bParam2))
	{
		return 0;
	}
	return 1;
}

int func_1238(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = 1226838104;
	if (func_125() == -1)
	{
		Var4 = -380731322;
	}
	Var4.f_1 = -367421157;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	func_1720();
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar1 = func_656(iVar0, 1);
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar3 = func_1721(iVar0, Var4);
				if (iVar3 == -1)
				{
				}
				else
				{
					func_1722(&(uParam0->f_1[iVar1 /*3*/]), (uParam0->f_1[iVar1 /*3*/])->f_1, iVar3, Var4);
				}
			}
		}
	}
	Global_1946804->f_1329 = 1;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if ((Global_1946804->f_1329.f_1[iVar2 /*9*/])->f_7 >= 2)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_1239(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_696(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-395279071);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1240(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_1723(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(420195545);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1241(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_719(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(420195545);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam2, iVar1, iVar0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
	return 1;
}

int func_1242(var uParam0, struct<6> Param1, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (!func_1724(uParam0, Param1, iParam7, &iVar0))
	{
		return 0;
	}
	iVar1 = func_1713(-627085098);
	if (iVar1 != 0)
	{
		DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_288(), iParam7, iVar1, iVar0);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_57, -1, iVar1, iVar0);
		return 1;
	}
	return 0;
}

char* func_1243()
{
	return "uiItemLabel";
}

int func_1244(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	vector3 vVar8;
	
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	vVar8.f_1 = -1;
	vVar8.f_2 = -1;
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (func_278(iVar3, 0))
				{
					vVar8.x = iVar3;
					vVar8.f_1 = uVar2;
					vVar8.f_2 = uVar1;
					if (func_1075(uParam0, vVar8))
					{
						*iParam3 = iVar3;
						*uParam4 = uVar2;
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1245(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	char cVar7[32];
	
	if (func_827(iParam1) != -1977020088 && func_827(iParam1) != -1037537535)
	{
		return 0;
	}
	if (iParam1 == 357708345 || iParam1 == -377364164)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = PED::_GET_METAPED_TYPE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (func_827(iParam1) == -1977020088)
	{
		iVar1 = PED::_GET_METAPED_TYPE(func_1037(uParam0));
	}
	else
	{
		iVar1 = PED::_GET_METAPED_TYPE(func_263(uParam0));
	}
	if (iVar1 == 4)
	{
		return 0;
	}
	StringCopy(sParam2, "SwatchTxd", 32);
	StringCopy(sParam3, "slot", 32);
	iVar2 = uParam0->f_2031.f_49;
	if (!bParam4)
	{
		if (iVar2 >= 29)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = 29;
		}
	}
	else
	{
		iVar2 = 29;
	}
	MISC::_INT_TO_STRING(iVar2, "%i", &cVar3);
	if (iVar2 <= 9)
	{
		StringCopy(&cVar7, "0", 32);
		StringConCat(sParam3, &cVar7, 32);
	}
	StringConCat(sParam3, &cVar3, 32);
	GRAPHICS::_0x160921255327C591(iVar2, iVar0, iVar1, func_125() == 0);
	if (!bParam4)
	{
		iVar2++;
		uParam0->f_2031.f_49 = iVar2;
	}
	return 1;
}

int func_1246(var uParam0, int iParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	
	if (func_1339(iParam1, &vVar0, iParam3, 0, 0, 0))
	{
		*uParam2 = { vVar0 };
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1247(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1469(iParam0, &uVar0, uParam1, iParam2))
	{
		if (uParam1->f_16 <= 0.1f && uParam1->f_20 <= 0.1f)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

struct<8> func_1248(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "", 64);
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_40.f_1095.f_1[iParam0 /*436*/]);
}

int func_1249()
{
	if (!func_120(((*Global_1835011)[15 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_1250(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

char* func_1251(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -540812301:
		case -179102320:
			return "BREED_APPALOOSA";
		
		case -2105447887:
		case -2078767648:
		case -2055655009:
		case -1506685618:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1427053849:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		
		case 648301150:
		case 892601357:
		case 955937750:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
		case 2059232991:
			return "BREED_TENNESSEEWALKER";
		
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		
		case -1331210307:
			return "BREED_DONKEY";
		
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		
		case -997197050:
			return "BREED_THOROUGHBRED";
		
		case -235714362:
			return "BREED_APPALOOSA";
		
		case -1678164:
			return "BREED_NOKOTA";
		
		case -977833913:
			return "BREED_TENNESSEEWALKER";
		
		case 1589164943:
			return "BREED_THOROUGHBRED";
		
		case -1087523615:
			return "BREED_AMERICANPAINT";
		
		case -496814209:
			return "BREED_ARDENNES";
		
		case 2109055751:
			return "BREED_APPALOOSA";
		
		case -776673611:
			return "BREED_NOKOTA";
		
		case 1764402253:
			return "BREED_ARABIAN";
		
		case -1417310078:
			return "BREED_TURKOMAN";
		
		case 1096273915:
			return "BREED_AMERICANPAINT";
		
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		
		case -1140435723:
			return "BREED_NOKOTA";
		
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		
		case 1151530184:
			return "BREED_MUSTANG";
		
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		
		case -2018137175:
			return "BREED_TURKOMAN";
		
		case -574151692:
			return "BREED_MUSTANG";
		
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		
		case -1921328920:
			return "BREED_APPALOOSA";
		
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		
		case 370424594:
			return "BREED_APPALOOSA";
		
		case -364764277:
			return "BREED_MANGY_BACKUP";
		
		default:
			break;
	}
	return "BREED_INVALID";
}

char* func_1252()
{
	return "uiItemRawText";
}

void func_1253(var uParam0, struct<4> Param1)
{
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "uiGuidData1", Param1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "uiGuidData2", Param1.f_1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "uiGuidData3", Param1.f_2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "uiGuidData4", Param1.f_3);
}

int func_1254(int iParam0)
{
	struct<5> Var0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

var func_1255(int iParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, func_1725(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_1726(&cVar0);
}

int func_1256(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

int func_1257()
{
	return 811708401;
}

int func_1258(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	
	*iParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1207(uParam0, iParam1, iVar7, iParam3))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

int func_1259(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	int iVar6;
	
	if (func_339(iParam2) == -999503751)
	{
		return 0;
	}
	if (func_612(iParam2, 265372629))
	{
		return 0;
	}
	iVar0 = iParam2;
	Var1.f_1 = -1;
	func_1727(&Var1, iVar0, -1, 1, 1);
	if (PED::_0x93FFD92F05EC32FD(Var1.f_3.f_1))
	{
	}
	else
	{
		return 0;
	}
	iVar6 = Var1.f_3.f_1;
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, func_726(), iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, func_725(), 1);
	uParam0->f_2031.f_78 = 1;
	return 1;
}

int func_1260(var uParam0, int iParam1, int iParam2, var uParam3)
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	
	*uParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			iVar7 = -1;
			iVar8 = 0;
			while (iVar8 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam1, iParam2, iVar8, &iVar7))
				{
					if (func_1728(uParam0, iParam1, iVar7, uParam3))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
	}
	return 0;
}

int func_1261(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (bParam1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "locked", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "forSale", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "owned", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "soldOut", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "equipped", 0);
	}
	else if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "owned", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "forSale", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "locked", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "soldOut", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "equipped", 1);
	}
	else if (bParam3)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "owned", bParam6);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "forSale", !bParam6);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "locked", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "soldOut", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "equipped", 0);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "forSale", bParam4);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "owned", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "locked", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "soldOut", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "equipped", 0);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "useGoldPrice", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "price", iParam5);
	return 1;
}

int func_1262(int iParam0, int iParam1, int iParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((iParam2 && func_125() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1729(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_1263(int iParam0)
{
	if (!func_1730(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1264(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1265(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_927(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_1208(bParam3), iParam0);
}

int func_1266()
{
	if (!func_911(0))
	{
		return 0;
	}
	if (func_1731(func_226(0), 0) && func_1731(func_226(0), 1))
	{
		return 0;
	}
	return 1;
}

char* func_1267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ambarino";
		
		case 1:
			return "New Hanover";
		
		case 2:
			return "Lemoyne";
		
		case 3:
			return "West Elizabeth";
		
		case 5:
			return "Guarma";
		
		case 4:
			return "New Austin";
		
		default:
			break;
	}
	return "Invalid Law Bounty State";
}

char* func_1268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO";
		
		case 1:
			return "LBS_NEW_HANOVER";
		
		case 2:
			return "LBS_LEMOYNE";
		
		case 3:
			return "LBS_W_ELIZABETH";
		
		case 4:
			return "LBS_NEW_AUSTIN";
		
		case 5:
			return "LBS_GUARMA";
		
		default:
			break;
	}
	return "LBS_INVALID";
}

int func_1269(int iParam0)
{
	int iVar0;
	
	if (!func_718(iParam0))
	{
		return 0;
	}
	iVar0 = func_925(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_360(1) < iVar0)
	{
		return 0;
	}
	return 1;
}

char* func_1270()
{
	int iVar0;
	
	iVar0 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	switch (iVar0)
	{
		case 0:
			return "elements_stamps_text_en";
		
		case 1:
			return "elements_stamps_text_fr";
		
		case 2:
			return "elements_stamps_text_de";
		
		case 3:
			return "elements_stamps_text_it";
		
		case 4:
			return "elements_stamps_text_es";
		
		case 5:
			return "elements_stamps_text_pt";
		
		case 6:
			return "elements_stamps_text_pl";
		
		case 7:
			return "elements_stamps_text_ru";
		
		case 8:
			return "elements_stamps_text_ko";
		
		case 9:
			return "elements_stamps_text_zh-Hant";
		
		case 12:
			return "elements_stamps_text_zh-Hans";
		
		case 10:
			return "elements_stamps_text_ja";
		
		case 11:
			return "elements_stamps_text_mx";
		
		default:
			break;
	}
	return "elements_stamps_text_en";
}

int func_1271(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	Var3 = -961687407;
	if (func_125() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = iParam0;
	Var3.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var3);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
	{
		return 0;
	}
	uVar2 = func_1732(iParam0);
	if (func_1733(iVar0, &iVar1))
	{
		func_1734(iVar1, uVar2);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_1733(iVar0, &iVar1))
		{
		}
		else
		{
			func_1734(iVar1, uVar2);
		}
	}
	return 1;
}

int func_1272(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_94(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_1735(0))
	{
	}
	func_1274(&(Global_1946804->f_1497), iParam0, 1, iParam1, 1, iParam3, 1);
	return 1;
}

int func_1273(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		
		case -1815871154:
			return 2;
		
		case 1053922635:
			return 4;
		
		case -1248203249:
			return 8;
		
		case -1275860049:
			return 16;
		
		case -473313046:
			return 32;
		
		case 1009605579:
			return 64;
		
		case -92538845:
			return 128;
		
		case 350097565:
			return 256;
		
		case 346761890:
			return 512;
		
		case -915377750:
			return 1024;
		
		case -1283403230:
			return 2048;
		
		case 1024778115:
			return 4096;
		
		case 75507907:
			return 8192;
		
		case -1678578495:
			return 16384;
		
		case -1925540957:
			return 32768;
		
		case -2125161702:
			return 131072;
		
		case 1929486675:
			return 262144;
		
		case -1932005642:
			return 65536;
		
		case 315750675:
			return 524288;
		
		case -376594188:
			return -1;
		
		case -663436545:
			return 112;
		
		case 1042019528:
			return 1136;
		
		case -141044514:
			return 4208;
		
		case 884232794:
			return 8304;
		
		case 836721350:
			return 20480;
		
		case -1062102573:
			return 32833;
		
		case -884591393:
			return 96;
		
		case -1886898087:
			return 16496;
		
		case -1674046782:
			return 139376;
		
		case 1481630954:
			return 262256;
		
		case -366477279:
			return 0;
		
		default:
			break;
	}
	return 0;
}

void func_1274(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	bVar4 = func_125() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_305(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1736(iParam1, 29, bVar4, 1, 0);
			func_1736(iParam1, 31, bVar4, 1, 0);
			func_1736(iParam1, 30, bVar4, 1, 0);
			func_1736(iParam1, 22, bVar4, 1, 0);
			func_1736(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_538(32768) && func_1081(1108822547, 8)) && func_1197(10, iParam3))
	{
		func_1737(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1080(iVar1, 1);
			if (func_1081(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1197(iVar1, iParam3))
				{
				}
				else if ((func_1081(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1081(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1736(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1084(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1736(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1081(iVar3, 1))
							{
								func_1083(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_1275(int iParam0)
{
	int iVar0;
	
	iVar0 = func_332(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1276(int iParam0)
{
	if (func_233(iParam0) == 8)
	{
		return func_234(iParam0);
	}
	return -1;
}

int func_1277(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_1278()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_1279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

float func_1280()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1738())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_748(2);
	}
	if (Global_1347477->f_119)
	{
		return func_748(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1739();
	fVar2 = func_1740();
	fVar3 = func_1741();
	fVar4 = func_1742();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1743()));
	fVar7 = (func_748(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1744(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1745(3, fVar9, fVar9 > 100f);
	return func_1746(fVar7, -100f, 100f);
}

float func_1281()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1738())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_748(1);
	}
	if (Global_1347477->f_119)
	{
		return func_748(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1739();
	fVar2 = func_1740();
	fVar3 = func_1741();
	fVar4 = func_1742();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1743()));
	fVar7 = (func_748(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1744(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1745(2, fVar9, fVar9 > 100f);
	return func_1746(fVar7, -100f, 100f);
}

float func_1282()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_1738())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_748(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1747())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1748())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_748(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1739();
	fVar2 = func_1740();
	fVar3 = func_1741();
	fVar4 = func_1742();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1743()));
	fVar7 = (func_748(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1744(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1745(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_748(0);
	}
	return func_1746(fVar7, -100f, 100f);
}

int func_1283(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_1284(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 0;
		
		case 2:
			return 2;
		
		default:
			break;
	}
	return 0;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
			break;
	}
	return 0;
}

void func_1286(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_1749(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_1287(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 85;
		
		case 2:
			return 86;
		
		default:
			break;
	}
	return -1;
}

char* func_1289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		
		case 1:
			return "StaminaCoreValue";
		
		case 2:
			return "DeadEyeCoreValue";
		
		default:
			break;
	}
	return "";
}

int func_1290(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
		case -1719060085:
		case -1632561800:
		case -1440373417:
		case -1423861687:
		case -839140560:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 502936876:
		case 562107429:
		case 684307653:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1477698721:
		case 1769055947:
		case 1868067663:
		case 2016058810:
		case 2047428024:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1291(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (func_821(iParam0))
	{
		return -1;
	}
	if (func_612(iParam0, -1529356747))
	{
		return 0;
	}
	if (func_612(iParam0, -1938332139))
	{
		return 1;
	}
	if (func_612(iParam0, -821065926))
	{
		return 2;
	}
	if (func_612(iParam0, -923980501))
	{
		return 3;
	}
	if (func_612(iParam0, -1679966367))
	{
		return 4;
	}
	return -1;
}

bool func_1292(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_1293(int iParam0, int iParam1)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_1294(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_1750(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_1323(2, iParam1))
	{
		func_1751(uParam0, iParam1);
		return 1;
	}
	return 0;
}

int func_1295(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	
	Var4 = func_1704(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_754(uParam0, func_1273(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_656(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1752(iVar3) && func_1753(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_659(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_1296(int iParam0)
{
	func_1083(iParam0, 8, 6);
}

void func_1297(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	bVar6 = func_125() != -1;
	iVar7 = func_1754(0);
	if (func_538(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1080(iVar0, 1);
			if (func_1081(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1081(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1464(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1755(uParam0);
				if (iVar3 > 0)
				{
					if (!func_538(524288))
					{
						func_305(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1080(iVar0, 1);
							if (func_1081(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1081(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1464(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_661(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1644(524288);
				}
			}
		}
	}

bool func_1298(int iParam0, int iParam1)
{
	if (func_125() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1299(int iParam0)
{
	if (func_125() != -1)
	{
		if (func_1301(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1301(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1301(iParam0, 65536) && !func_1301(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1301(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1301(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1301(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1302(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_1303(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1304(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

char* func_1305(int iParam0)
{
	if (!func_111(iParam0))
	{
		if (MISC::_0xACB7E1418A8B6E32(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_1756(((*Global_1888801)[iParam0 /*35*/])->f_22);
}

void func_1306(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

int func_1307(var uParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (iParam1 >= uParam0->f_2)
	{
		return 0;
	}
	STREAMING::_0xD840C130D7AACFA5(uParam0->f_1, iParam1, &Var0);
	*uParam2 = { Var0 };
	uParam2->f_3 = Var0.f_3;
	uParam2->f_4 = Var0.f_4;
	return 1;
}

bool func_1308(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_1309(int iParam0)
{
	return func_774(iParam0, Global_1310750->f_16072 | 64);
}

void func_1310(int iParam0)
{
	int iVar0;
	
	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_1311(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		
		case 0:
			return -1758735922;
		
		case 6:
			return -680519380;
		
		case 3:
			return 263744889;
		
		case 7:
			return 351057032;
		
		case 4:
			return 1172283326;
		
		case 2:
			return -1046310682;
		
		case 5:
			return 652984488;
		
		case 8:
			return 1389665576;
		
		case 9:
			return -1066280913;
		
		case 13:
			return 1975793632;
		
		case 14:
			return -1887627202;
		
		case 15:
			return 1851096281;
		
		case 16:
			return 47402526;
		
		case 17:
			return 1762683397;
		
		case 18:
			return -1154551809;
		
		case 19:
			return -333682158;
		
		case 20:
			return 1465089966;
		
		case 21:
			return 511213393;
		
		case 22:
			return -1214580355;
		
		case 23:
			return -1397900723;
		
		case 10:
			return 541398842;
		
		case 24:
			return -1960060437;
		
		case 25:
			return 1634371177;
		
		case 26:
			return -1308114737;
		
		case 11:
			return 683250525;
		
		case 12:
			return -814958461;
	}
	return 0;
}

int func_1312(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1080(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1313()
{
	int iVar0;
	
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1314(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1349(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1210("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_981(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1757(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_982(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_982(iVar1);
	}
	return 0;
}

int func_1315(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_827(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1349(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1758(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_1208(bParam2), iParam0, 0);
	return iVar2;
}

int func_1316(int iParam0)
{
	int iVar0;
	
	iVar0 = func_656(func_792(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1317()
{
	int iVar0;
	int iVar1;
	
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_315(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_315(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

Vector3 func_1318(int iParam0)
{
	return VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3);
}

int func_1319(vector3 vParam0)
{
	return BUILTIN::ROUND(BUILTIN::VDIST(Global_36, vParam0));
}

bool func_1320(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_1321(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_1322(int iParam0, int iParam1)
{
	if (!func_1321(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

int func_1323(int iParam0, int iParam1)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_1324(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_1325(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 688587926 || iParam0 == 2047428024) || iParam0 == 698653232) || iParam0 == 81053684) || iParam0 == -2061583405) || iParam0 == -1719060085) || iParam0 == -163032984) || iParam0 == 1868067663) || iParam0 == -839140560) || iParam0 == -686686829) || iParam0 == -795466267) || iParam0 == 2029752284) || iParam0 == 1201276490) || iParam0 == -1440373417) || iParam0 == 562107429) || iParam0 == 1477698721) || iParam0 == -1632561800) || iParam0 == 684307653) || iParam0 == 1282123855) || iParam0 == -68128151) || iParam0 == -497931013) || iParam0 == -413129408) || iParam0 == 2112290568) || iParam0 == 502936876) || iParam0 == 1132079111) || iParam0 == 478744432) || iParam0 == 1096747416) || iParam0 == 1033860813) || iParam0 == 2016058810) || iParam0 == 1769055947) || iParam0 == -999503751) || iParam0 == 1508306587) || iParam0 == -525676072) || iParam0 == -298391753) || iParam0 == -590250209) || iParam0 == -923693316) || iParam0 == -709696437) || iParam0 == 1223979091) || iParam0 == 1545016984) || iParam0 == 629735563) || iParam0 == -698079035) || iParam0 == -1000405829) || iParam0 == -1387964792) || iParam0 == 1526346227) || iParam0 == -1847550017) || iParam0 == -1080198344) || iParam0 == -852381396) || iParam0 == 153430294) || iParam0 == 684852611) || iParam0 == -1972808239) || iParam0 == -2085606460) || iParam0 == 1772421657) || iParam0 == -1423861687)
	{
		return 1;
	}
	return 0;
}

int func_1326(int iParam0)
{
	switch (iParam0)
	{
		case -1847550017:
		case -1387964792:
		case -1080198344:
		case -1000405829:
		case -698079035:
		case 629735563:
		case 688587926:
		case 698653232:
		case 1282123855:
		case 1526346227:
		case 2112290568:
			return 1;
		
		case -2061583405:
		case -525676072:
			return 2;
		
		case -709696437:
		case 1223979091:
		case 1545016984:
		case 2047428024:
			return 3;
		
		case -923693316:
		case -839140560:
		case -298391753:
			return 4;
		
		case -1719060085:
			return 5;
		
		case -2085606460:
		case -795466267:
		case -497931013:
		case 81053684:
		case 172394747:
		case 461122406:
		case 1508306587:
			return 6;
		
		case 1868067663:
			return 7;
		
		case 1769055947:
			return 8;
		
		case 1096747416:
			return 9;
		
		case -852381396:
		case 153430294:
		case 684852611:
		case 1033860813:
			return 10;
		
		case -590250209:
		case 1772421657:
			return 11;
		
		case -1972808239:
		case -1423861687:
			return 12;
		
		case -999503751:
		default:
			break;
	}
	return 0;
}

void func_1327(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_1326(Global_1914319->f_19461.f_1);
	*uParam0 = { *(Global_1914319->f_19461.f_22[iVar0 /*12*/]) };
	*uParam1 = { (Global_1914319->f_19461.f_22[iVar0 /*12*/])->f_3 };
	*uParam2 = (Global_1914319->f_19461.f_22[iVar0 /*12*/])->f_9;
	*uParam3 = { (Global_1914319->f_19461.f_22[iVar0 /*12*/])->f_6 };
	*uParam4 = (Global_1914319->f_19461.f_22[iVar0 /*12*/])->f_10;
	*uParam5 = (Global_1914319->f_19461.f_22[iVar0 /*12*/])->f_11;
}

void func_1328(int iParam0)
{
	if (!HUD::_UIPROMPT_IS_VALID(Global_1914319->f_19461.f_180) && iParam0)
	{
		Global_1914319->f_19461.f_180 = HUD::_UIPROMPT_REGISTER_BEGIN();
		HUD::_0xF4A5C4509BF923B1(Global_1914319->f_19461.f_180, 0);
		HUD::_UIPROMPT_SET_TEXT(Global_1914319->f_19461.f_180, "WARDROBE_INSPECT_PROMPT");
		HUD::_UIPROMPT_SET_CONTROL_ACTION(Global_1914319->f_19461.f_180, 1395223413);
		HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(Global_1914319->f_19461.f_180);
		HUD::_UIPROMPT_REGISTER_END(Global_1914319->f_19461.f_180);
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1914319->f_19461.f_180))
	{
		if (!func_828(Global_1914319->f_19461.f_1))
		{
			HUD::_UIPROMPT_SET_ENABLED(Global_1914319->f_19461.f_180, 0);
			HUD::_UIPROMPT_SET_VISIBLE(Global_1914319->f_19461.f_180, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_ENABLED(Global_1914319->f_19461.f_180, iParam0);
			HUD::_UIPROMPT_SET_VISIBLE(Global_1914319->f_19461.f_180, iParam0);
		}
	}
}

void func_1329(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_52, "ItemInfo2");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Text", iParam1);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", -548373963);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Style", 432931142);
	}
}

int func_1330(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1759(iParam0);
		
		case 1:
			return func_1760(iParam0);
		
		case 2:
			return func_1761(iParam0);
		
		case 3:
			return func_1762(iParam0);
	}
	return 0;
}

int func_1331(int iParam0)
{
	int iVar0;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

void func_1332(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1333(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (!func_1203(iParam0))
	{
		return 0;
	}
	if (!func_966(iParam1, iParam0, &iVar0, &uVar1, &uVar5, 1, iParam2))
	{
		return 0;
	}
	return func_968(iParam1, &uVar1, iVar0, 0);
}

bool func_1334(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return false;
	}
	return func_1530(iParam1, Var0, 1415981582, 0) > 0;
}

bool func_1335(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return false;
	}
	return func_1530(iParam1, Var0, -2119169513, 0) > 0;
}

int func_1336(int iParam0)
{
	struct<4> Var0;
	var uVar4;
	var uVar9;
	int iVar13;
	struct<14> Var14;
	int iVar28;
	int iVar29;
	int iVar30;
	struct<10> Var31;
	int iVar45;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1618() };
	if (!func_966(iParam0, 856287005, &iVar13, &uVar9, &uVar4, 1, 0))
	{
		return 0;
	}
	Var14 = { func_979(0, iVar13, -1591664384, -1591664384, 0, 0) };
	iVar28 = 0;
	if (func_980(&Var14, &iVar29, &iVar30, 0))
	{
		Var31.f_9 = -1591664384;
		iVar45 = 0;
		while (iVar45 < iVar30)
		{
			if (func_981(&Var31, iVar45, iVar29, iVar30))
			{
				if (func_670(&(Var31.f_5), &Var0))
				{
					if (Var31.f_4 == iParam0)
					{
						iVar28 = 1;
					}
					else
					{
						iVar45++;
					}
					func_982(iVar29);
					return iVar28;
				}
			}
		}
	}

int func_1337(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (!func_1324(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_339(iParam0) != -999503751)
		{
			func_1763(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_339(iParam0) != -999503751)
	{
		func_1763(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1764(iParam0, 1);
	return 1;
}

void func_1338()
{
	int iVar0;
	
	if (func_125() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

int func_1339(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1340(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_1341(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1765(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1342(int iParam0)
{
	if (func_125() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1343(int iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1324(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_1764(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_339(iParam0) != -999503751)
	{
		func_1766(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1344(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_1185(iParam0, 0, 0) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	if (func_1530(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_1208(0), &Var5);
	return 1;
}

bool func_1345(int iParam0)
{
	return func_1768(func_1767(iParam0));
}

void func_1346(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_1185(iParam0, 0, 0) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	if (func_1530(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_1208(0), &Var5, bParam1);
}

void func_1347(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1348(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_1349(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_827(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_612(iParam0, 1399091007))
	{
		func_1769(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

struct<2> func_1350(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_278(iParam0, 0))
	{
		return Var0;
	}
	if (func_612(iParam0, -305066475))
	{
		if (func_125() == -1)
		{
			if (func_612(iParam0, -537818634))
			{
				return func_873(189951448);
			}
			else
			{
				return func_873(1176172851);
			}
		}
	}
	else if (func_612(iParam0, -537818634))
	{
		return func_873(-963660207);
	}
	if (func_612(iParam0, 2084895747))
	{
		return func_873(1694039471);
	}
	return Var2;
}

int func_1351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_979(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1332(&Var0, func_668(0));
	}
	if (!func_980(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_981(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_978(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_982(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_1352(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1185(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1770(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_669(iParam0, Var0, Var0.f_4, bParam4) };
	return func_978(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1353(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_612(iParam0, 606799272))
		{
			func_1771(iParam0, iParam1);
		}
		if (func_612(iParam0, -1112814642) && func_612(iParam0, -1697809989))
		{
			func_1396(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1354(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		
		case 6:
			return 1661121390;
		
		case 7:
			return 1164374808;
		
		case 8:
			return 1160643979;
		
		case 9:
			return 624063935;
		
		case 10:
			return -1476781101;
		
		case 11:
			return 294553332;
		
		case 12:
			return 1788874135;
		
		case 15:
			return 1560492757;
		
		case 16:
			return -769081407;
		
		case 17:
			return 1902428294;
		
		case 18:
			return -2114499732;
		
		case 19:
			return 800827126;
		
		case 20:
			return 688004210;
		
		case 0:
			return 166243423;
		
		case 1:
			return 1383300684;
		
		case 2:
			return 2051441678;
		
		case 3:
			return 162509669;
		
		case 4:
			return 635948769;
		
		case 5:
			return 274995506;
		
		case 24:
			return -1826731591;
		
		case 25:
			return 2119049229;
		
		case 26:
			return 1352942778;
		
		case 27:
			return 1964379549;
		
		case 28:
			return 1201189539;
		
		case 21:
			return 1351927599;
		
		case 22:
			return 2032023096;
		
		case 23:
			return -291256376;
		
		case 66:
			return -1243402388;
		
		case 67:
			return 65931886;
		
		case 68:
			return 1371678229;
		
		case 69:
			return 2102263084;
		
		case 61:
			return -272211555;
		
		case 64:
			return -55563408;
		
		case 71:
			return -1914506115;
		
		case 75:
			return 802495462;
		
		case 77:
			return 842905332;
		
		case 78:
			return -1951220140;
		
		case 79:
			return 1511551084;
		
		case 81:
			return -1725704631;
		
		case 83:
			return 1257427489;
		
		case 85:
			return -659341240;
		
		case 87:
			return 2038771525;
		
		case 89:
			return -535599244;
		
		case 73:
			return -389591806;
		
		case 70:
			return -1205612021;
		
		case 93:
			return 890706995;
		
		case 90:
			return 1156438275;
		
		case 91:
			return -1611873049;
		
		case 92:
			return 594312243;
		
		case 94:
			return -978578725;
		
		case 13:
			return 1784889667;
		
		case 62:
			return -361635024;
		
		case 76:
			return 1460520700;
		
		case 80:
			return 523337834;
		
		case 82:
			return -19271249;
		
		case 84:
			return 214175524;
		
		case 86:
			return -1303643297;
		
		case 88:
			return 411856831;
		
		case 72:
			return -926815459;
		
		case 74:
			return -1300731953;
		
		case 65:
			return -409616653;
		
		case 29:
			return 509954990;
		
		case 30:
			return -445916744;
		
		case 31:
			return -866249154;
		
		case 32:
			return -2077063704;
		
		case 33:
			return 205207539;
		
		case 34:
			return -1033657275;
		
		case 35:
			return 1806002837;
		
		case 36:
			return 705324896;
		
		case 37:
			return -1541763703;
		
		case 38:
			return 387052410;
		
		case 39:
			return -361288914;
		
		case 40:
			return -911054515;
		
		case 41:
			return 1084200963;
		
		case 42:
			return 1847948074;
		
		case 43:
			return -1212526764;
		
		case 44:
			return 1851440270;
		
		case 45:
			return -2028985700;
		
		case 46:
			return 1074435214;
		
		case 47:
			return -883015675;
		
		case 48:
			return -1047155604;
		
		case 49:
			return 1123231221;
		
		case 50:
			return 1866989210;
		
		case 51:
			return 478183719;
		
		case 52:
			return -1698955868;
		
		case 53:
			return -2029378634;
		
		case 54:
			return 1339864416;
		
		case 55:
			return 890998115;
		
		case 56:
			return -1376288999;
		
		case 57:
			return -1041123771;
		
		case 58:
			return 1389254668;
		
		case 59:
			return -346112633;
		
		case 60:
			return 773309172;
		
		default:
			break;
	}
	return 0;
}

int func_1355(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) != iParam0)
		{
		}
		else
		{
			if (iParam0 == -999503751)
			{
				if (func_820() != iVar1)
				{
				}
				else
				{
					Jump @87; //curOff = 71
					if (!func_824(iVar1))
					{
					}
					else
					{
						return iVar1;
					}
				}
				iVar0++;
				return 0;
			}
		}
	}

int func_1356(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_125() == -1)
	{
		if (func_1203(iParam0) && func_1772(iParam0))
		{
			func_1773(iParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_1357(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_1774(iParam0, uParam1);
	Var0 = { func_1185(iParam0, 0, 1) };
	iVar5 = func_1265(iParam0, &Var0, 0, 0);
	iVar6 = func_671(iParam0, 0);
	if ((iVar5 > 1 && !func_742()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_612(iParam0, -2051813666))
		{
			func_341(583, 1);
		}
		else
		{
			func_341(582, 0);
		}
	}
	if (func_1493(iParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1358(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1708(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_1359(int iParam0)
{
	if (func_125() != -1)
	{
		return false;
	}
	return func_1360(iParam0) != 0;
}

int func_1360(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_1775())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1776(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1361(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_1362(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_1775())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_1361(iVar0))
		{
			if (func_794(func_1776(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1363(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1777(48);
	func_222(0, -1);
}

int func_1364(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_1365(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_1366(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_1367(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_1368(int iParam0)
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	return func_1275(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1369()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_794(func_1778(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1370(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_158() && (func_1368(38) || func_1364(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_158() && (func_1368(39) || func_1364(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1779(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_158() && (func_1368(41) || func_1364(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_158() && (func_1368(49) || func_1364(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1779(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1780(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1781(iParam0, iVar13, iVar14))
	{
	}
	if (func_1782(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1783(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1784(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1785(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1786(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1371(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_158() && (func_1368(38) || func_1364(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_158() && (func_1368(39) || func_1364(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_158() && (func_1368(49) || func_1364(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_158() && (func_1368(38) || func_1364(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1540(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1788(func_1366(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_158() && (func_1368(39) || func_1364(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_158() && (func_1368(49) || func_1364(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1787(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_1373(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_1374(int iParam0)
{
	if (!func_169(iParam0))
	{
		return;
	}
	func_1789(iParam0);
	func_1790(iParam0);
}

int func_1375(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_278(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1791(iVar0) || func_1483(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1376(int iParam0, bool bParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1377(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1757(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_1378(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_1185(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1792((375 + iVar28), 1);
			if (func_968(iParam0, &Var0, iVar5, 0))
			{
				if (func_1470(iParam0, &Var6, iVar5))
				{
					Var29 = { func_669(iParam0, Var0, iVar5, 0) };
					func_978(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_927(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_1379(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_1793(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_1379(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1209(iParam0))
	{
		return 0;
	}
	if (!func_927(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_1380(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	iVar0 = func_1376(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_125() == -1)
		{
			func_1377(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1794(iVar0);
			}
		}
		if (!func_1493(iParam0, &uVar1, 1, 0, 0))
		{
			func_1773(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1795(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_1378(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == 494733111 && !func_202())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1796(iVar0))
				{
					func_1378(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1378(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_314(Global_35, 2, 0, 1);
				if ((((func_1757(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_794(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_1757(iVar7) && func_794(-1185145312, 1, 0))
				{
					if (!func_1378(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_1378(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_341(480, 1);
	}
	return 1;
}

int func_1381(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_1209(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_1757(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_794(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1413(func_1797(iParam0), func_1154(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_125() == -1)
		{
			if (func_120(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_341(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_927(0))
	{
		if (func_1379(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_1418(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_1382(int iParam0)
{
	var uVar0;
	
	if ((iParam0 == -615217896 && !func_1798()) || iParam0 != -615217896)
	{
		if (func_909(Global_35, iParam0, &uVar0))
		{
			func_958(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_747();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_747();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_747();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1403();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1401();
			break;
	}
}

void func_1383(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1401();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1402();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1403();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1404();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_747();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1799();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1800();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_1384(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_1385(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_1386(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_612(iParam0, -2017733358);
	if (func_1801() < 3)
	{
		if (bVar0)
		{
			if (func_1803(func_1802(iParam0), iParam0))
			{
				func_1413(79, func_1154(func_1802(iParam0)), 1);
			}
			else
			{
				func_1413(78, func_1154(func_1802(iParam0)), 1);
			}
		}
		else
		{
			func_1413(80, func_1154(func_1804(iParam0)), 1);
		}
	}
}

int func_1387()
{
	if (((((func_1805(839908568, 400) || func_1805(-1134030454, 400)) || func_1805(623353496, 400)) || func_1805(-344413337, 400)) || func_1805(-1664948962, 400)) || func_1805(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_1388(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1806(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1807(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1808(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1389(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1370(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1372(51, 0, 0, 0, 0, -1, 0);
			func_1809(8192);
			break;
		
		case 581047644:
			func_1370(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1372(51, 0, 0, 0, 0, -1, 0);
			func_1809(524288);
			break;
		
		case -644199619:
			func_1370(39, 0, 0, 0, 0, 0, 1, 0);
			func_1372(39, 0, 0, 0, 0, -1, 0);
			func_1810(16);
			break;
		
		case 684296857:
			func_1370(41, 0, 0, 0, 0, 0, 1, 0);
			func_1372(41, 0, 0, 0, 0, -1, 0);
			func_1811(8);
			break;
		
		case 466137807:
			func_1370(49, 0, 0, 0, 0, 0, 1, 0);
			func_1372(49, 0, 0, 0, 0, -1, 0);
			func_1812(16);
			break;
		
		case -1087522507:
			func_1370(43, 0, 0, -1791518714, func_1813(1), 0, -1, 0);
			func_1814(1);
			break;
		
		case -405829000:
			func_1370(43, 0, 0, -2087881550, func_1813(2), 0, -1, 0);
			func_1814(2);
			break;
		
		case 378660860:
			func_1370(43, 0, 0, 1908068621, func_1813(4), 0, -1, 0);
			func_1814(4);
			break;
		
		case 1566111097:
			func_1370(43, 0, 0, 1611247019, func_1813(8), 0, -1, 0);
			func_1814(8);
			break;
		
		case 1276007140:
			func_1370(43, 0, 0, 1319635688, func_1813(16), 0, -1, 0);
			func_1814(16);
			break;
	}
}

void func_1390(int iParam0)
{
	if (func_1815() == 1)
	{
		if (func_1364(39))
		{
			func_341(342, 0);
		}
		else
		{
			func_341(343, 0);
			func_1810(1);
		}
	}
	if (func_1815() >= 30)
	{
		func_341(344, 0);
	}
	func_1370(39, 0, 0, 0, 0, 0, -1, 0);
	func_1372(39, 0, 0, func_1815(), 30, 1, 0);
}

void func_1391(int iParam0)
{
	if (func_1816() == 1)
	{
		if (func_1364(49))
		{
			func_341(409, 0);
		}
		else
		{
			func_341(410, 0);
			func_1812(1);
		}
	}
	if (func_1816() >= 10)
	{
		func_341(411, 0);
	}
	func_1370(49, 0, 0, 0, 0, 0, -1, 0);
	func_1372(49, 0, 0, func_1816(), 10, 1, 0);
}

void func_1392(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_341(437, 0);
			func_341(440, 0);
			func_1817(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_1370(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_1372(51, 0, 0, iVar0, func_1779(-949689219, 20), 1, 0);
			func_1809(1);
			func_1818(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1817(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_1370(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_1372(51, 0, 0, iVar0, func_1779(-1248968496, 20), 1, 0);
			func_1809(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1817(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_1370(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_1372(51, 0, 0, iVar0, func_1779(1706369307, 20), 1, 0);
			func_1809(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1817(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_1370(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_1372(51, 0, 0, iVar0, func_1779(1520110311, 20), 1, 0);
			func_1809(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_341(438, 0);
			func_1817(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_1370(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_1372(51, 0, 0, iVar0, func_1779(-1992824800, 20), 1, 0);
			func_1809(32768);
			break;
		
		default:
			func_341(439, 0);
			break;
	}
}

void func_1393()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_1394(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_125() == -1)
	{
		if (!func_1364(43))
		{
			if (iParam0 == 281887510)
			{
				func_341(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_341(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_341(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_341(400, 0);
			}
		}
		else if (func_612(iParam0, 412399755))
		{
			func_1819(-1791518714);
			if (func_1820() == 0)
			{
				func_222(0, 10);
				iVar1 = func_1821(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1364(44))
		{
			if (iParam0 == -222563712)
			{
				func_341(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_341(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_341(401, 0);
			}
		}
		else if (func_612(iParam0, 709057512))
		{
			func_1819(-2087881550);
			if (func_1820() == 1)
			{
				func_222(0, 10);
				iVar1 = func_1821(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1364(45))
		{
			if (iParam0 == 2116770557)
			{
				func_341(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_341(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_341(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_341(398, 0);
			}
		}
		else if (func_612(iParam0, -1478961327))
		{
			func_1819(1908068621);
			if (func_1820() == 2)
			{
				func_222(0, 10);
				iVar1 = func_1821(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1824(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1825(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1777(48);
					}
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1364(46))
		{
			if (iParam0 == 2085530337)
			{
				func_341(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_341(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_341(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_341(406, 0);
			}
		}
		else if (func_612(iParam0, -1238404098))
		{
			func_1819(1611247019);
			if (func_1820() == 3)
			{
				func_222(0, 10);
				iVar1 = func_1821(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1364(47))
		{
			if (iParam0 == -1521783510)
			{
				func_341(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_341(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_341(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_341(403, 0);
			}
		}
		else if (func_612(iParam0, 1160548794))
		{
			func_1819(1319635688);
			if (func_1820() == 4)
			{
				func_222(0, 10);
				iVar1 = func_1821(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1822(iParam0) < func_1823(iParam0))
					{
						func_1370(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1372(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1395(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 2116770557)
	{
		if (!func_1824(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1825(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1777(48);
		}
	}
}

void func_1396(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_794(func_1826(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1827(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1828(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_1397(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_125() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1388(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1388(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_1388(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_1388(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_1388(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_1388(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_1388(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_1388(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_1388(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_1388(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_1388(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_1388(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_1388(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_1829())
			{
				func_1388(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_1388(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_1388(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_1388(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_1388(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_1388(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_1388(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_1388(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_1388(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_1388(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_1388(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_1388(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_1388(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1398(int iParam0)
{
	if (func_1364(41))
	{
		func_341(363, 0);
	}
	else
	{
		func_341(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1830(-1865241121);
			func_1831(-642026005);
			func_1832(-642026005);
			func_222(0, 10);
			break;
		
		case -2108314374:
			func_1830(2117142684);
			func_1831(-940584364);
			func_1832(-940584364);
			func_222(0, 10);
			break;
		
		case -1193798153:
			func_1830(-1409326024);
			func_1831(1972645282);
			func_1832(1972645282);
			func_222(0, 10);
			break;
		
		case -787702678:
			func_1830(-641744968);
			func_1831(1667205433);
			func_1832(1667205433);
			func_222(0, 10);
			break;
		
		case -804542901:
			func_1830(-946988203);
			func_1831(1362715885);
			func_1832(1362715885);
			func_222(0, 10);
			break;
		
		case -1696275132:
			func_1830(-646136018);
			func_1831(1053540370);
			func_1832(1053540370);
			func_222(0, 10);
			break;
		
		case -161595323:
			func_1830(-955835837);
			func_1831(-1100103852);
			func_1832(-1100103852);
			func_222(0, 10);
			break;
		
		case -1114363619:
			func_1830(-179276075);
			func_1831(-1409869209);
			func_1832(-1409869209);
			func_222(0, 10);
			break;
		
		case -368407134:
			func_1830(-492711560);
			func_1831(-1760235357);
			func_1832(-1760235357);
			func_222(0, 10);
			break;
		
		case 1997759228:
			func_1830(1764383959);
			func_1831(-138366827);
			func_1832(-138366827);
			func_222(0, 10);
			break;
		
		case 1265573293:
			func_1830(317501533);
			func_1831(-1261163843);
			func_1832(-1261163843);
			func_222(0, 10);
			break;
		
		case -1030441283:
			func_1830(817753087);
			func_1831(-963523016);
			func_1832(-963523016);
			func_222(0, 10);
			break;
		
		case -1490884871:
			func_1830(576606016);
			func_1831(560825326);
			func_1832(560825326);
			func_222(0, 10);
			break;
		
		case -395458616:
			func_1830(814934957);
			func_1831(858269539);
			func_1832(858269539);
			break;
	}
}

void func_1399(int iParam0, int iParam1)
{
	var uVar0;
	
	func_1769(iParam0, iParam1, &uVar0);
}

int func_1400(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_314(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_314(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1210("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_981(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_982(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_1401()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_1402()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_1403()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1404()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_1405(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_1406(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_1787(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1407(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1408(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1409(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1410(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1411(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1412(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_1413(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_757(iParam0, &iVar0, &iVar1);
	if (!func_758(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1301(iParam0, 1024))
	{
		return;
	}
	func_759(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1414(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_757(iParam0, &iVar0, &iVar1);
	if (!func_758(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1301(iParam0, 1024))
	{
		return;
	}
	func_759(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_1415()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1775())
	{
		return func_1416();
	}
	iVar4 = (func_1775() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1775())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1833(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1776(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1416()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1775());
	return func_1776(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_1417(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		
		case 998010398:
			*iParam0 = -324053813;
			break;
		
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_1418(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_1185(iParam0, 0, 1) };
	Var5 = { func_669(iParam0, Var0, Var0.f_4, 0) };
	return func_969(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1419(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_125() != -1)
	{
		return;
	}
	switch (func_339(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1156(81053684, 0) <= 0)
			{
				func_94(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_94(32, iParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_755(iParam0);
			if (func_117(iVar0))
			{
				func_1834(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_94(30, iParam0, 0, 0, 0);
			}
			if (func_1171() == -2125499975 || func_1171() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_94(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1171() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_94(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_825(-525676072, 0))
			{
				if (func_1835(-525676072, &iVar1))
				{
					func_94(33, iVar1, 0, 0, 0);
				}
			}
			func_94(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1198(99217379))
		{
			func_958(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1374(24);
		if (func_1400(&iVar2, 0))
		{
			func_1378(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1420(int iParam0)
{
	if (func_612(iParam0, 943695443))
	{
		func_1836(0, iParam0);
	}
	else if (func_612(iParam0, -2096528786))
	{
		func_1836(1, iParam0);
	}
	else if (func_612(iParam0, -1094167013))
	{
		func_1836(2, iParam0);
	}
	else if (func_612(iParam0, 1936654645))
	{
		func_1836(3, iParam0);
	}
	else if (func_612(iParam0, 1306489306))
	{
		func_1836(4, iParam0);
	}
	else if (func_612(iParam0, 435762317))
	{
		func_1836(5, iParam0);
	}
	else if (func_612(iParam0, 1259363210))
	{
		func_1836(6, iParam0);
	}
	else if (func_612(iParam0, 881398259))
	{
		func_1836(7, iParam0);
	}
	else if (func_612(iParam0, -541549214))
	{
		func_1836(8, iParam0);
	}
	else if (func_612(iParam0, 130796156))
	{
		func_1836(-1, iParam0);
	}
}

int func_1421(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_1837(&Var4, 1356624740);
	return func_1838(iParam0, &Var4, &uVar0, iParam1);
}

void func_1422(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_125() == -1)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_341(109, 1);
				}
			}
			break;
	}
}

void func_1423(int iParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_1840(func_1839(0));
	func_1341(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1841(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1424(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1347(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1348(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1425(int iParam0, int iParam1, int iParam2)
{
	if (func_125() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

int func_1426(int iParam0)
{
	switch (func_339(iParam0))
	{
		case -2061583405:
			return 1;
		
		case -1719060085:
			return 1;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 1;
		
		case 81053684:
			return 1;
		
		case -413129408:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1427(var uParam0)
{
	if (Global_1914319->f_19461.f_1 != 0)
	{
		if (Global_1914319->f_19461.f_179)
		{
			func_858(*uParam0, 0);
		}
		else
		{
			func_858(*uParam0, func_1326(Global_1914319->f_19461.f_1));
		}
	}
	if (!func_1842(uParam0))
	{
		return;
	}
	func_1843((PAD::GET_CONTROL_NORMAL(2, -771458680) * -1f), PAD::GET_CONTROL_NORMAL(2, -1450761377));
	func_1844(&(Global_1914319->f_19461.f_184), &(Global_1914319->f_19461.f_2.f_6), &(Global_1914319->f_19461.f_187), &(Global_1914319->f_19461.f_190), &(Global_1914319->f_19461.f_191), &(Global_1914319->f_19461.f_192), &(Global_1914319->f_19461.f_193), Global_1914319->f_19461.f_182, Global_1914319->f_19461.f_183, -10f, 10f, -10f, 10f);
	CAM::SET_CAM_PARAMS(*uParam0, Global_1914319->f_19461.f_184, Global_1914319->f_19461.f_187, Global_1914319->f_19461.f_2.f_9, 0, 1, 1, 2, 0, 0);
}

void func_1428(var uParam0)
{
	if (Global_1914319->f_19461.f_179)
	{
		CAM::SET_CAM_PARAMS(*uParam0, Global_1914319->f_19461.f_2, Global_1914319->f_19461.f_2.f_3, Global_1914319->f_19461.f_2.f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319->f_19461.f_179 = 0;
		func_857(0);
		func_858(*uParam0, func_1326(Global_1914319->f_19461.f_1));
	}
	else
	{
		CAM::SET_CAM_PARAMS(*uParam0, *(Global_1914319->f_19461.f_22[0 /*12*/]), (Global_1914319->f_19461.f_22[0 /*12*/])->f_3, (Global_1914319->f_19461.f_22[0 /*12*/])->f_9, 300, 28, 28, 2, 1, 0);
		Global_1914319->f_19461.f_179 = 1;
		func_858(*uParam0, 0);
	}
}

int func_1429(var uParam0, int iParam1)
{
	if (DATAFILE::_0x603AC35FD4602C76(*uParam0))
	{
		uParam0->f_2 = 297708565;
		uParam0->f_3 = func_370(iParam1);
		if (uParam0->f_3 == 0)
		{
			return 0;
		}
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1430(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2417f, 1.0822f, 0.4057f };
			break;
		
		case 2:
			vVar0 = { 0.0295f, 0.905f, 0.6256f };
			break;
		
		case 3:
			vVar0 = { -0.0468f, 1.5582f, -0.1943f };
			break;
		
		case 4:
			vVar0 = { 0.784f, 0.8018f, -0.5943f };
			break;
		
		case 5:
			vVar0 = { -0.6714f, 1.0141f, 0.0256f };
			break;
		
		case 6:
			vVar0 = { 0.0969f, 1.2198f, 0.4057f };
			break;
		
		case 7:
			vVar0 = { 0.3044f, 1.3972f, 0.4333f };
			break;
		
		case 8:
			vVar0 = { -0.6609f, 1.3675f, -0.3927f };
			break;
		
		case 9:
			vVar0 = { -0.1092f, 0.9631f, 0.3073f };
			break;
		
		case 10:
			vVar0 = { -0.1825f, 1.0714f, 0.0057f };
			break;
		
		case 11:
			vVar0 = { -0.7371f, 0.6329f, 0.2057f };
			break;
		
		case 12:
			vVar0 = { 0.6714f, 1.0141f, 0.0256f };
			break;
		
		case 0:
		default:
			vVar0 = { 0f, 0f, 0f };
			break;
	}
	return vVar0;
}

Vector3 func_1431(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2888f, 0.0967f, 0.395f };
			break;
		
		case 2:
			vVar0 = { 0.2724f, -0.3441f, 0.63f };
			break;
		
		case 3:
			vVar0 = { 0.21f, 0.19f, -0.4f };
			break;
		
		case 4:
			vVar0 = { 0.23f, 0.18f, -0.69f };
			break;
		
		case 5:
			vVar0 = { 0.2853f, -0.0589f, 0.01f };
			break;
		
		case 6:
			vVar0 = { 0.2371f, -0.1028f, 0.48f };
			break;
		
		case 7:
			vVar0 = { 0.4475f, 0.0964f, 0.275f };
			break;
		
		case 8:
			vVar0 = { 0.1719f, 0.2036f, -0.45f };
			break;
		
		case 9:
			vVar0 = { 0.3872f, -0.6841f, 0.425f };
			break;
		
		case 10:
			vVar0 = { 0.296f, -0.186f, -0.105f };
			break;
		
		case 11:
			vVar0 = { 0.2198f, 0.0241f, -0.105f };
			break;
		
		case 12:
			vVar0 = { 0.2853f, 0.0589f, 0.01f };
			break;
		
		case 0:
		default:
			vVar0 = { 0.4866f, -0.6752f, -0.1223f };
			break;
	}
	return vVar0;
}

Vector3 func_1432(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { func_1845(vParam0, vParam3, 1065353216) };
	vVar3 = { MISC::ASIN(vVar0.z), 0f, MISC::ATAN2(-vVar0.x, vVar0.y) };
	return vVar3;
}

int func_1433(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	
	Var0 = &Global_1914319->f_16934[iParam1];
	if (!func_1429(&Var0, iParam2))
	{
		return 0;
	}
	Var0.f_2 = 1059891245;
	Var0.f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(uParam0, &Var0))
	{
		return 0;
	}
	return 1;
}

float func_1434(int iParam0)
{
	float fVar0;
	
	switch (iParam0)
	{
		case 1:
			fVar0 = 43.9f;
			break;
		
		case 2:
			fVar0 = 38.1f;
			break;
		
		case 3:
			fVar0 = 51.2f;
			break;
		
		case 4:
			fVar0 = 40f;
			break;
		
		case 5:
			fVar0 = 36.6f;
			break;
		
		case 6:
			fVar0 = 37.8f;
			break;
		
		case 7:
			fVar0 = 51.3f;
			break;
		
		case 8:
			fVar0 = 51.3f;
			break;
		
		case 9:
			fVar0 = 51.3f;
			break;
		
		case 10:
			fVar0 = 43.9f;
			break;
		
		case 11:
			fVar0 = 44.5f;
			break;
		
		case 12:
			fVar0 = 44.9f;
			break;
		
		case 0:
		default:
			fVar0 = 51.3f;
			break;
	}
	return fVar0;
}

float func_1435(int iParam0)
{
	float fVar0;
	
	switch (iParam0)
	{
		case 1:
			fVar0 = 4f;
			break;
		
		case 2:
			fVar0 = 3.2f;
			break;
		
		case 3:
			fVar0 = 1f;
			break;
		
		case 4:
			fVar0 = 4f;
			break;
		
		case 5:
			fVar0 = 2f;
			break;
		
		case 6:
			fVar0 = 2f;
			break;
		
		case 7:
			fVar0 = 2f;
			break;
		
		case 8:
			fVar0 = 2f;
			break;
		
		case 9:
			fVar0 = 2f;
			break;
		
		case 10:
			fVar0 = 1.8f;
			break;
		
		case 11:
			fVar0 = 3f;
			break;
		
		case 12:
			fVar0 = 4f;
			break;
		
		case 0:
		default:
			fVar0 = 1.5f;
			break;
	}
	return fVar0;
}

float func_1436(int iParam0)
{
	float fVar0;
	
	switch (iParam0)
	{
		case 1:
			fVar0 = 1f;
			break;
		
		case 2:
			fVar0 = 0.79f;
			break;
		
		case 3:
			fVar0 = 1.4f;
			break;
		
		case 4:
			fVar0 = 1.2f;
			break;
		
		case 5:
			fVar0 = 0.95f;
			break;
		
		case 6:
			fVar0 = 1.1f;
			break;
		
		case 7:
			fVar0 = 1.3f;
			break;
		
		case 8:
			fVar0 = 1.4f;
			break;
		
		case 9:
			fVar0 = 0.85f;
			break;
		
		case 10:
			fVar0 = 0.95f;
			break;
		
		case 11:
			fVar0 = 0.8f;
			break;
		
		case 12:
			fVar0 = 0.95f;
			break;
		
		case 0:
		default:
			fVar0 = 2f;
			break;
	}
	return fVar0;
}

struct<10> func_1437(int iParam0)
{
	struct<10> Var0;
	
	Var0 = 1065353216;
	Var0.f_1 = 1056964608;
	Var0.f_2 = 1132462080;
	Var0.f_3 = 1108082688;
	Var0.f_4 = 1084227584;
	Var0.f_5 = 1152319488;
	Var0.f_6 = 1;
	Var0.f_8 = 1;
	Var0 = (Global_1914319->f_19461.f_22[iParam0 /*12*/])->f_10;
	Var0.f_1 = 1f;
	Var0.f_2 = 64f;
	Var0.f_3 = 35f;
	Var0.f_4 = 6f;
	Var0.f_5 = 120f;
	Var0.f_6 = 1;
	Var0.f_7 = 0;
	Var0.f_8 = 0;
	Var0.f_9 = 0;
	return Var0;
}

int func_1438(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_1846(vParam0, 0f, 0f, 0, 2);
	return func_1846(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_1439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 1:
			return 4;
		
		case 2:
			return 8;
		
		case 3:
			return 16;
		
		case 4:
			return 32;
		
		case 5:
			return 64;
		
		case 6:
			return 128;
		
		case 7:
			return 256;
		
		case 8:
			return 512;
		
		case 9:
			return 1024;
		
		case 10:
			return 2048;
		
		case 11:
			return 4096;
		
		case 12:
			return 8192;
		
		case 13:
			return 16384;
		
		case 14:
			return 32768;
		
		case 15:
			return 65536;
		
		case 16:
			return 131072;
		
		case 17:
			return 262144;
		
		case 18:
			return 524288;
		
		case 19:
			return 1048576;
		
		default:
			break;
	}
	return 1;
}

int func_1440()
{
	return Global_40.f_8863.f_148;
}

int func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		
		case 1:
			return -1278339625;
		
		case 2:
			return 1880205078;
		
		case 3:
			return -1201174711;
		
		case 4:
			return 151582343;
		
		case 5:
			return 1231074654;
		
		case 6:
			return -642492359;
		
		case 7:
			return 1673898385;
		
		case 8:
			return 5171247;
		
		default:
			break;
	}
	return 0;
}

void func_1442(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_232(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_1275(iParam0) && !func_310(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_877(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_1275(iParam0))
	{
		iParam2 = -1;
	}
	if (func_738(iParam0) == 3 || (func_738(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_877(iParam0))))
	{
		func_1847(func_233(iParam0), func_877(iParam0), iParam2);
		if ((!func_232(Global_1572864->f_8) && !func_743(0, 1, 0)) && !func_10(&Global_1935630, 32768))
		{
			iVar0 = func_1848(iParam0);
			if (iVar0 != -1)
			{
				func_1849(0);
			}
			else if (func_233(iParam0) == 8)
			{
				iVar0 = func_1850();
				if (iVar0 != -1)
				{
					func_1849(0);
				}
			}
		}
	}
	func_1851(iParam0, 0);
	if (func_1852(0) == iParam0)
	{
		func_322(1);
		func_1853(0);
		func_1854(1);
	}
	func_1855(iParam0, 1);
	func_1856(iParam0);
}

int func_1443(int iParam0)
{
	int iVar0;
	
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1444(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_450(iParam0);
	*uParam1 = func_451(iParam0);
	*uParam2 = func_1857(iParam0);
}

int func_1445(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_1446(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_1447(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_1448()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_1449()
{
	return Global_1894899 & 2 != 0;
}

int func_1450(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (!bParam1 && func_1858(iParam0, uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1451(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1859(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_1452(int iParam0)
{
	return func_1860(iParam0);
}

int func_1453(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!bParam1 && func_885(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1454(int iParam0)
{
	if (!func_232(iParam0))
	{
		return -1;
	}
	return func_1861(iParam0);
}

int func_1455(int iParam0, int iParam1)
{
	var uVar0;
	var uVar31;
	
	uVar0 = 15;
	if (!func_1505(iParam0, iParam1, &uVar0, &uVar31, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1456(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	return func_339(iParam0) == -999503751;
}

int func_1457(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_612(iParam0, 866047851))
	{
		return 1;
	}
	return 0;
}

bool func_1458(int iParam0)
{
	return func_827(iParam0) == -1977020088;
}

int func_1459(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	func_658();
	iVar1 = 0;
	if (!func_756(&(Global_1946804->f_1378), &bVar0, 0, iParam1, 1, 1))
	{
		return 0;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	func_94(1, iVar1, iVar2, iParam0, 0);
	if (func_125() != -1 && !bVar0)
	{
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	return 1;
}

int func_1460(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	func_658();
	iVar1 = 0;
	if (!func_756(&(Global_1946804->f_1378), &bVar0, iParam1, -1, 1, 1))
	{
		return 0;
	}
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar2 |= 1;
	}
	func_94(1, iVar1, iVar2, iParam0, 0);
	if (func_125() != -1 && !bVar0)
	{
		func_94(4, 0, 0, iParam0, 0);
		func_94(5, 0, 0, iParam0, 0);
		func_94(6, 0, 0, iParam0, 0);
	}
	return 1;
}

int func_1461(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_1185(iParam1, 1, 0) };
		iParam3 = func_1312(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1172(iParam1, iParam2, func_656(iParam3, 1), 1, 1))
	{
		return 0;
	}
	iVar5 = func_1862(iParam3);
	if (Global_1946804->f_2535 != iVar5)
	{
		if (Global_1946804->f_2535 != 0)
		{
			func_536(Global_1946804->f_2535);
			func_537(0);
			Global_1946804->f_2535 = 0;
		}
		if (iVar5 != 0 && func_1271(iVar5))
		{
			func_1735(0);
			Global_1946804->f_2535 = iVar5;
		}
	}
	iVar6 = 1026;
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_94(1, 0, iVar6, 0, 0);
	}
	else
	{
		iVar6 |= 1;
		func_94(1, 0, iVar6, iParam0, 0);
	}
	func_336(1);
	return 1;
}

void func_1462(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (func_1022(iParam1))
	{
		if (iParam1 == -377364164)
		{
			func_1591(iParam2);
			PED::_0xA5BAE410B03E7371(iParam2, 0, 0, 1);
			func_1863(uParam3, -377364164);
			func_994(iParam2);
			func_1593(iParam2, uParam4);
			PED::_0xCC8CA3E88256E58F(iParam2, 0, 1, 1, 1, 1);
		}
		else if (iParam1 == 357708345)
		{
			func_1591(iParam2);
			PED::_0xA5BAE410B03E7371(iParam2, 0, 0, 1);
			func_1864(uParam3, 357708345);
			func_994(iParam2);
			func_1593(iParam2, uParam4);
			PED::_0xCC8CA3E88256E58F(iParam2, 0, 1, 1, 1, 1);
		}
		else
		{
			bVar0 = true;
			func_1865(uParam3, iParam1);
		}
		func_1867(func_1037(uParam0), func_1866(0));
	}
	else
	{
		bVar0 = true;
		func_1868(uParam4, iParam1);
	}
	if (bVar0)
	{
		func_1008(iParam2, uParam3, uParam4, 0);
	}
}

float func_1463(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch ((uParam0->f_141[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (iParam1 == (uParam0->f_141[iVar0 /*7*/])->f_2)
				{
					return (uParam0->f_141[iVar0 /*7*/])->f_6;
				}
				break;
			
			case 2:
				if (func_827(iParam1) == (uParam0->f_141[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_1186(iParam1, -915411861, 1, 0, 0));
				if ((uParam0->f_141[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = (uParam0->f_141[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (uParam0->f_141[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			
			case 4:
				bVar2 = true;
				break;
			
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * (uParam0->f_141[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

int func_1464(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == &Global_1946804->f_57[func_656(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_538(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_1465(int iParam0)
{
	var uVar0;
	
	return func_639(iParam0, &uVar0);
}

int func_1466(int iParam0)
{
	if (!func_1188(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1533835920:
		case 1024854903:
		case 1077891407:
		case 1107981273:
		case 1224358974:
		case 1420417918:
		case 1426628352:
		case 1574030042:
		case 1792152856:
			return 0;
	}
	return 1;
}

int func_1467(int iParam0)
{
	var uVar0;
	
	return func_638(iParam0, &uVar0);
}

int func_1468(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_1208(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1469(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_1208(0);
	*uParam1 = { func_669(iParam0, func_668(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1470(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_1469(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

bool func_1471(int iParam0, int iParam1)
{
	if (!func_1869(iParam0))
	{
		return false;
	}
	return (Global_40.f_11029[iParam0 /*5*/] && iParam1) != 0;
}

int func_1472(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				
				case 5:
					return 750;
				
				case 78:
					return 1050;
				
				case 28:
					return 420;
				
				case 76:
					return 460;
				
				case 69:
					return 630;
				
				default:
					break;
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				
				case 5:
					return 480;
				
				case 78:
					return 840;
				
				case 28:
					return 750;
				
				case 76:
					return 790;
				
				case 69:
					return 590;
				
				default:
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				
				case 105:
					return 480;
				
				case 78:
					return 510;
				
				case 28:
					return 1250;
				
				case 76:
					return 1000;
				
				case 69:
					return 320;
				
				default:
					break;
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				
				case 105:
					return 840;
				
				case 5:
					return 510;
				
				case 28:
					return 880;
				
				case 76:
					return 670;
				
				case 69:
					return 440;
				
				default:
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				
				case 105:
					return 750;
				
				case 5:
					return 1250;
				
				case 78:
					return 880;
				
				case 76:
					return 360;
				
				case 69:
					return 920;
				
				default:
					break;
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				
				case 105:
					return 790;
				
				case 5:
					return 1000;
				
				case 78:
					return 670;
				
				case 28:
					return 360;
				
				case 69:
					return 220;
				
				default:
					break;
			}
			break;
		
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				
				case 105:
					return 590;
				
				case 5:
					return 320;
				
				case 78:
					return 440;
				
				case 28:
					return 920;
				
				case 76:
					return 220;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

var func_1473(var uParam0)
{
	return uParam0->f_2031.f_93;
}

int func_1474(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		
		case 22:
			return 17;
		
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		
		case 17:
		case 47:
			return 7;
		
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		
		case 9:
		case 37:
		case 69:
			return 8;
		
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		
		case 136:
			return 5;
		
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		
		case 48:
			return 12;
		
		case 49:
			return 13;
		
		case 50:
			return 14;
		
		case 62:
		case 79:
			return 20;
		
		case 101:
			return 11;
		
		case 149:
			return 23;
		
		case 150:
			return 24;
		
		case 151:
			return 25;
		
		case 12:
		case 54:
			return 21;
		
		case 127:
			return 34;
		
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		
		case 152:
			return 24;
		
		default:
			break;
	}
	return -1;
}

int func_1475(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0 /*5*/] == iParam1)
		{
			*uParam2 = { *(uParam0->f_1[iVar0 /*5*/]) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1476(int iParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<4> Var10;
	
	if (*iParam1 == 0)
	{
		*iParam3 = 1;
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam1->f_2 > 0)
	{
		iVar3 = func_1474(iParam0);
		if (iVar3 == -1)
		{
			*iParam3 = 2;
			return 0;
		}
		uVar4 = func_82(iVar3);
		iVar6 = 0;
		while (iVar6 < iParam1->f_2)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(uVar4, *iParam1, iVar6, &Var8))
			{
				*iParam3 = 4;
				return 0;
			}
			if (Var8.f_1 > 0)
			{
				iVar7 = 0;
				while (iVar7 < Var8.f_1)
				{
					Var10 = 0;
					if (!ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(iVar4, *iParam1, iVar6, iVar7, &Var10))
					{
						*iParam3 = 3;
						return 0;
					}
					if (!func_1690(iParam0, *iParam1, &Var10, &uVar5))
					{
						if (Var10.f_3)
						{
							iVar1 = Var8;
							iVar2 = 1;
							bVar0 = true;
						}
						else
						{
							iVar2 = 0;
							bVar0 = false;
						}
						else
						{
							Jump @210; //curOff = 200
							iVar1 = Var8;
							bVar0 = true;
							iVar7++;
						}
						Jump @232; //curOff = 219
						iVar1 = Var8;
						iVar2 = 0;
						bVar0 = true;
						if (bVar0)
						{
						}
						else
						{
							iVar6++;
						}
						Jump @255; //curOff = 249
						bVar0 = true;
						if (bVar0)
						{
							*uParam2 = *iParam1;
							uParam2->f_2 = iVar1;
							uParam2->f_1 = iVar1;
							if (func_125() == -1)
							{
								if (func_1203(*uParam2))
								{
									uParam2->f_4 = !func_1791(*uParam2);
								}
								else
								{
									uParam2->f_4 = iVar2;
								}
							}
							else if (func_1870(*uParam2))
							{
								uParam2->f_4 = 0;
							}
							else
							{
								uParam2->f_4 = !func_1688(*uParam2);
							}
							if (func_125() == -1)
							{
								if (!uParam2->f_4)
								{
									if (!func_1871(*iParam1) && !func_1872(*iParam1))
									{
										if (func_990(*iParam1, 1, 0))
										{
											uParam2->f_5 = 1;
										}
									}
								}
							}
							return 1;
						}
						else
						{
							return 0;
						}
						*iParam3 = 6;
						return 0;
					}
				}
			}
		}
	}

int func_1477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = iParam2;
	iVar1 = func_1474(iParam1);
	if (iVar1 != -1 && iVar1 < 25)
	{
		iVar2 = func_1873(&((Global_20709[iVar1 /*45*/])->f_2), iParam0, iParam1);
		if (iVar2 >= 0)
		{
			iVar0 = (iVar0 + ((Global_20709[iVar1 /*45*/])->f_2[iVar2 /*4*/])->f_2);
		}
	}
	iVar3 = func_1873(&(Global_20709.f_1126), iParam0, iParam1);
	if (iVar3 >= 0)
	{
		iVar0 = (iVar0 - (Global_20709.f_1126[iVar3 /*4*/])->f_2);
	}
	return iVar0;
}

int func_1478(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Global_1914319->f_17042.f_70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1914319->f_17042.f_70[iVar0])))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(&(Global_1914319->f_17042.f_70[iVar0]));
			iVar1 = func_1002(iVar2);
			if (iVar1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1479(int iParam0)
{
	int iVar0;
	
	if (!func_929(iParam0))
	{
		return 0;
	}
	iVar0 = func_1474(iParam0);
	if (!func_1730(iVar0))
	{
		return 0;
	}
	return (Global_1914319->f_3[iVar0 /*446*/])->f_413;
}

int func_1480(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 0;
		
		case -769081407:
			return 0;
		
		case 1902428294:
			return 0;
		
		case -1243402388:
			return 0;
		
		case 65931886:
			return 0;
		
		case 1371678229:
			return 0;
		
		case 2102263084:
			return 0;
		
		case -272211555:
			return 0;
		
		case -55563408:
			return 0;
		
		case -1914506115:
			return 0;
		
		case 802495462:
			return 0;
		
		case 842905332:
			return 0;
		
		case 1511551084:
			return 0;
		
		case -1725704631:
			return 0;
		
		case 1257427489:
			return 0;
		
		case -659341240:
			return 0;
		
		case 2038771525:
			return 0;
		
		case -535599244:
			return 0;
		
		case -389591806:
			return 0;
		
		case 1156438275:
			return 0;
		
		case 594312243:
			return 0;
		
		case -978578725:
			return 0;
		
		case -1951220140:
			return 0;
		
		case 1460520700:
			return 0;
		
		case 523337834:
			return 0;
		
		case -19271249:
			return 0;
		
		case 214175524:
			return 0;
		
		case -1303643297:
			return 0;
		
		case 411856831:
			return 0;
		
		case -926815459:
			return 0;
		
		case -1300731953:
			return 0;
		
		case -291256376:
			return 0;
		
		default:
			break;
	}
	return 1;
}

int func_1481(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;
	
	iVar8 = 0;
	if (!func_1874(iParam0, func_1171()))
	{
		return 0;
	}
	Var1 = func_1704(func_1171());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, 1373051002))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

bool func_1482(int iParam0)
{
	int iVar0;
	
	iVar0 = func_827(iParam0);
	return (iVar0 == -427144552 || iVar0 == 307971639);
}

int func_1483(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_1484(int iParam0)
{
	return func_827(iParam0) == 2085633299;
}

bool func_1485(int iParam0)
{
	return func_612(iParam0, -651046900);
}

int func_1486(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_612(iParam0, -1227898937))
	{
		return 1;
	}
	return 0;
}

int func_1487(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (!func_612(iParam0, -1227898937))
	{
		return -1;
	}
	if (func_612(iParam0, -958604072))
	{
		return 0;
	}
	else if (func_612(iParam0, -726894473))
	{
		return 1;
	}
	else if (func_612(iParam0, -1705966655))
	{
		return 2;
	}
	else if (func_612(iParam0, -1205780639))
	{
		return 3;
	}
	else if (func_612(iParam0, -825365342))
	{
		return 4;
	}
	else if (func_612(iParam0, -580548123))
	{
		return 5;
	}
	else if (func_612(iParam0, -1536419873))
	{
		return 6;
	}
	else if (func_612(iParam0, -1306610876))
	{
		return 7;
	}
	else if (func_612(iParam0, 149872887))
	{
		return 8;
	}
	else if (func_612(iParam0, 1252156801))
	{
		return 9;
	}
	else if (func_612(iParam0, -217500080))
	{
		return 10;
	}
	else if (func_612(iParam0, -515403059))
	{
		return 11;
	}
	else if (func_612(iParam0, 387251815))
	{
		return 12;
	}
	else if (func_612(iParam0, 90594058))
	{
		return 13;
	}
	return -1;
}

void func_1488(int iParam0, int iParam1)
{
	if (!func_1875(iParam0))
	{
		return;
	}
	Global_40.f_9479[iParam0 /*4*/] = iParam1;
}

int func_1489(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1490(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_1730(iParam0))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (!func_1876(iParam0, &iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_125() == -1)
	{
		iVar1 = (Global_1914319->f_3[iParam0 /*446*/])->f_10;
	}
	else
	{
		iVar1 = (Global_1051260->f_48[iParam0 /*78*/])->f_16;
	}
	func_1878(iVar0, uParam1, iVar0, iParam2, func_1877(iVar1), 0, 10);
	return 1;
}

void func_1491(int iParam0)
{
	int iVar0;
	
	if (!func_929(iParam0))
	{
		return;
	}
	iVar0 = func_1474(iParam0);
	if (!func_1730(iVar0))
	{
		return;
	}
	(Global_1914319->f_3[iVar0 /*446*/])->f_413 = 0;
}

int func_1492(int iParam0, int iParam1)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

int func_1493(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_1150(&iParam0);
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (!func_927(0))
	{
		bParam3 = true;
	}
	if (func_1203(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_668(0) };
			Var4.f_9 = -1591664384;
			if (!func_968(iParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_1470(iParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_1705(iParam0, 1))
			{
				if (!func_968(iParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_1470(iParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_1879(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1265(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1530(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_1208(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1494(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> Var0;
	
	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1911914->f_1579 && func_1262(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_1880(iParam0, 1, iParam1, &Var0, uParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

int func_1495(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<16> Var5;
	int iVar21;
	struct<7> Var22;
	struct<2> Var29;
	
	if (!func_278(iParam0, 0))
	{
		return -1;
	}
	if (!func_936(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_1185(iParam0, 1, 0) };
	if (func_1493(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_1881(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = func_1882(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	func_1883(iVar21, Var22);
	Var29 = { func_1884(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var29, 1);
	return iVar21;
}

bool func_1496(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return func_1885(iParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_1497(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	int iVar10;
	
	if (!func_278(iParam0, 0))
	{
		return;
	}
	func_1385(func_1384(-413660030), iParam1);
	if (iParam3 && iParam0 != -1199896558)
	{
		if (func_125() == -1)
		{
			if (func_612(iParam0, -1588156645))
			{
				iVar0 = func_1376(func_1375(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_1377(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_827(iParam0) == -1977020088)
			{
				if (func_1034(iParam0, 0))
				{
					func_970(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_847(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_1886(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_1884(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var1, iParam1);
	if (func_1887(iParam0, 0))
	{
		Var1 = { func_1204(-1276738576, -1555359431) };
	}
	else if (func_1887(iParam0, 2))
	{
		Var1 = { func_1204(-1276738576, 307971639) };
	}
	else if (func_1887(iParam0, 5))
	{
		Var1 = { func_1204(-1276738576, 644069854) };
	}
	else if (func_1887(iParam0, 1))
	{
		Var1 = { func_1204(-1276738576, -97115714) };
	}
	else if (func_1887(iParam0, 3))
	{
		Var1 = { func_1204(-1276738576, -2143405780) };
	}
	else if (func_1887(iParam0, 4))
	{
		Var1 = { func_1204(-1276738576, 1455184052) };
	}
	STATS::_0x6A0184E904CDF25E(&Var1, 1);
	if (func_125() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_1887(iParam0, 0))
		{
			func_1777(40);
		}
		else
		{
			func_1777(39);
		}
	}
	iVar10 = 0;
	if ((ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar3) && vVar3.z == -1037537535) && func_909(Global_35, iParam0, &iVar10))
	{
		func_958(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

struct<10> func_1498(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_1499(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1500(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_1501(int iParam0)
{
	if (!func_1888(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1889(iParam0, 1));
}

int func_1502(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		
		case 1:
			return Global_40.f_4283.f_316;
		
		case 2:
			return Global_40.f_4283.f_317;
		
		case 12:
			return Global_40.f_4283.f_315;
		
		case 13:
			return Global_40.f_4283.f_314;
		
		case 14:
			return Global_40.f_4283.f_322;
		
		case 3:
			return Global_40.f_4283.f_318;
		
		case 4:
			return Global_40.f_4283.f_319;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		
		default:
			break;
	}
	return 1;
}

void func_1503(int iParam0)
{
	if (!func_1888(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1889(iParam0, 1));
}

int func_1504()
{
	if (func_1315(-1421669656, 0, 0) == 0)
	{
		return 0;
	}
	if (func_1315(-830181022, 0, 0) == 0)
	{
		return 0;
	}
	if (func_1315(917695895, 0, 0) == 0)
	{
		return 0;
	}
	if (func_1315(-1580595448, 0, 0) == 0)
	{
		return 0;
	}
	if (func_1315(1309992709, 0, 0) == 0)
	{
		return 0;
	}
	if (func_1315(1541618973, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_1505(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;
	
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1890(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_1506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_125() == 0)
	{
		return 1;
	}
	func_1891(&(Global_20709.f_1126), iParam1, iParam0, iParam2);
	iVar0 = func_1474(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_1892(&((Global_20709[iVar0 /*45*/])->f_2), iParam1, iParam0, iParam2);
	return 1;
}

void func_1507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_1893(iParam1, iParam2);
	func_1894(iParam1, iParam4);
	func_1895(iParam1, iParam4);
	TELEMETRY::_0x2A374E6F0075EE81(func_82(iParam0), func_459(iParam1), iParam2, iParam3, iParam4);
}

void func_1508()
{
	int iVar0;
	
	if (Global_40.f_7748.f_1 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_7748.f_1 - 1);
	func_947(iVar0, 0);
}

int func_1509(int iParam0)
{
	switch (iParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_1510(int iParam0)
{
	switch (iParam0)
	{
		case -986108061:
			return 1156231582;
		
		case -1051664629:
			return -1472456118;
		
		case 1471627791:
			return -2120294484;
		
		case 1012091683:
			return -814448122;
		
		case 282876023:
			return 1279519416;
		
		case 1334801974:
			return 933586678;
		
		case -736147717:
			return 1612093252;
		
		case -245303732:
			return 530132198;
		
		case -1900633994:
			return -499492817;
		
		case -1511041621:
			return -1392593303;
		
		case -193909113:
			return -2091943191;
		
		case -929316746:
			return 1165676701;
		
		case -1147723761:
			return 1380556716;
		
		case 963009459:
			return -1140711191;
		
		case 602337354:
			return -1189021969;
		
		case -1471756535:
			return 862555979;
		
		case -2017785881:
			return -674783297;
		
		case -827216318:
			return 279124309;
		
		default:
			break;
	}
	return 0;
}

void func_1511()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (func_125() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1347(Global_1946804->f_1497.f_1[iVar0 /*3*/], iVar0, iVar1);
			iVar1++;
		}
		return;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		func_1348(Global_1946804->f_1497.f_1[iVar0 /*3*/], iVar0, iVar1);
		iVar1++;
	}
}

void func_1512()
{
	int iVar0;
	
	if (func_905() <= 3)
	{
		iVar0 = func_435();
		func_1513(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
}

void func_1513(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_1896(*iParam0);
	iVar1 = func_1897(*iParam0);
	iVar2 = func_1898(*iParam0);
	iVar3 = func_1899(*iParam0);
	iVar4 = func_1900(*iParam0);
	iVar5 = func_1901(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1902(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1902(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1903(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1514(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1904(iParam1) || !func_1904(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_1515(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return 0;
	}
	return 1;
}

bool func_1516()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_1517(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1906(uParam1, uParam2, &uVar0, &uVar1, 0, func_1905());
	}
}

bool func_1518(int iParam0, bool bParam1)
{
	return func_1514(func_435(), iParam0, bParam1);
}

void func_1519(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_1697(iParam0))
	{
		return;
	}
	if (!func_1907(iParam1))
	{
		return;
	}
	if (&Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (&Global_40.f_7731[iParam0 /*5*/] < 7 && func_1908(iParam0));
		(Global_40.f_7731[iParam0 /*5*/])->f_3 = func_435();
		func_1909(iParam0, &iVar0, &iVar1, bVar2);
		func_1513(&((Global_40.f_7731[iParam0 /*5*/])->f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1520()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 5;
	iVar1 = 6;
	iVar2 = 7;
	iVar3 = 0;
	if (func_125() == -1)
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			func_1347(Global_1946804->f_1497.f_1[iVar0 /*3*/], iVar0, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar1 /*3*/], iVar1, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar2 /*3*/], iVar2, iVar4);
			func_1347(Global_1946804->f_1497.f_1[iVar3 /*3*/], iVar3, iVar4);
			iVar4++;
		}
		return;
	}
	iVar4 = 0;
	while (iVar4 < 5)
	{
		func_1348(Global_1946804->f_1497.f_1[iVar0 /*3*/], iVar0, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar1 /*3*/], iVar1, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar2 /*3*/], iVar2, iVar4);
		func_1348(Global_1946804->f_1497.f_1[iVar3 /*3*/], iVar3, iVar4);
		iVar4++;
	}
}

void func_1521()
{
	int iVar0;
	
	iVar0 = func_435();
	func_1513(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1167(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	if (func_1167(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	if (func_1167(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
}

void func_1522(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_1191(iParam0))
		{
			func_1910(iParam0);
		}
		iVar0++;
	}
	if (!bParam1)
	{
		return;
	}
	func_1168(Global_35, -1, -1, -1, 1);
}

int func_1523()
{
	if (func_125() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_1524()
{
	int iVar0;
	
	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		default:
			break;
	}
	return 0;
}

void func_1526(int iParam0, bool bParam1, int iParam2)
{
	func_1424(&(Global_1946804->f_1378), iParam0);
	func_1425(2, iParam0, 6);
	if (bParam1)
	{
		func_129(0, 1);
	}
}

int func_1527(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_656(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

int func_1528(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_1208(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_1468(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1529(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;
	
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1468(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_827(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1911(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1912(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1913(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1914(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1915(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1882(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1530(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_669(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_1208(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1531()
{
	return !&Global_1911774;
}

void func_1532(int iParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1533(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_1534(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_360(1) < iParam0)
	{
		iParam0 = func_360(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_873(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1535(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1341(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1536(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1468(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_670(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1530(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1915(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1882(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1537(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1538(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1539(int iParam0, var uParam1, var uParam2)
{
	if (!func_1538(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		
		default:
			return 0;
	}
	return 1;
}

var func_1540(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

struct<8> func_1541()
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;
	int iVar24[10];
	int iVar35;
	int iVar36;
	
	StringCopy(&cVar0, "PLAYER_HORSE_NAME_DEFAULT", 64);
	iVar35 = 0;
	while (iVar35 < 10)
	{
		StringCopy(&cVar8, HUD::_GET_LABEL_TEXT_2(&cVar0), 64);
		if (iVar35 > 0)
		{
			StringConCat(&cVar8, " ", 64);
			StringIntConCat(&cVar8, iVar35 + 1, 64);
		}
		iVar36 = 0;
		while (iVar36 < 7)
		{
			Var16 = { *(Global_40.f_1095.f_1[iVar36 /*436*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&Var16, &cVar8))
			{
				iVar24[iVar35] = 1;
			}
			iVar36++;
		}
		iVar35++;
	}
	iVar35 = 0;
	while (iVar35 < 10)
	{
		if (!&iVar24[iVar35])
		{
			StringCopy(&cVar8, HUD::_GET_LABEL_TEXT_2(&cVar0), 64);
			if (iVar35 > 0)
			{
				StringConCat(&cVar8, " ", 64);
				StringIntConCat(&cVar8, iVar35 + 1, 64);
			}
			return cVar8;
		}
		iVar35++;
	}
	return cVar0;
}

int func_1542(char* sParam0, struct<8> Param1)
{
	if (!func_1918(func_1595(Param1), func_1916(), func_1917(), 16, sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) >= 10 && MISC::ARE_STRINGS_EQUAL(HUD::_0xD8402B858F4DDD88(sParam0, 10), "Dummy Text"))
	{
		*sParam0 = { Param1 };
		return 1;
	}
	return 1;
}

void func_1543(int iParam0, var uParam1)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0], (Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar0], 1);
		iVar0++;
	}
}

void func_1544(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_3[iVar0], 1);
		iVar0++;
	}
}

void func_1545(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		uVar2 = func_1919(iVar1, 1);
		iVar3 = uVar2;
		if (!func_278(iVar3, 0))
		{
		}
		else
		{
			iVar4 = uParam1[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				bVar5 = func_1920(iVar0, iVar3, iVar4, bParam2, -142743235);
			}
		}
		iVar1++;
	}
}

void func_1546(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	func_1563(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 = (iVar1 + uParam0[iVar0]);
		iVar1 = (iVar1 + uParam1[iVar0]);
		iVar1 = func_1489(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_1547(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(Global_40.f_1095.f_3054.f_3[iVar0], (*uParam0)[iVar0], 1);
		iVar0++;
	}
}

void func_1548(int iParam0, var uParam1)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar0], (*uParam1)[iVar0], 1);
		iVar0++;
	}
}

void func_1549(int iParam0, var uParam1)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*5*/], (Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_1550(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar0 /*5*/], Global_40.f_1095.f_3054.f_61[iVar0 /*5*/], 5);
		iVar0++;
	}
}

int func_1551(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (uParam0[iVar1 /*5*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1552(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/], (*uParam0)[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_1553(int iParam0)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	func_1921(iVar0);
}

void func_1554(int iParam0, var uParam1)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar0 /*5*/], (*uParam1)[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_1555(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1556(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1557(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;
	
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1617(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1922(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_977(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1634(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1558(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1578(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_1923(iParam0))
	{
		uVar3 = func_1924(iParam0);
		if (func_1925(uVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_1559()
{
	if (func_225(0))
	{
		func_1926(0);
	}
	if (func_225(1))
	{
		func_1926(1);
	}
	if (func_225(5))
	{
		func_1926(5);
	}
	if (func_225(6))
	{
		func_995(6);
	}
}

void func_1560(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1561(int iParam0, struct<2> Param1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1024(iParam0, Param1))
	{
	}
	if (!func_1026(iParam0, Param1.f_1))
	{
	}
}

void func_1562(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1927((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1563(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1564(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1565(var uParam0)
{
	int iVar0;
	
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1566(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1567(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1568(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1569(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1570(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1571(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = ((*uParam0)[iVar1 /*4*/])->f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_1572(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_137(iParam1, 0))
	{
		return;
	}
	iVar3 = INVENTORY::_0x13D234A2A3F66E63(iParam1);
	iVar1 = 4;
	while (iVar1 <= 6)
	{
		if (PED::_0x608BC6A6AACD5036((*uParam2)[iVar2 /*4*/], iParam1, iVar1, 0))
		{
			iVar0 = ((*uParam2)[iVar2 /*4*/])->f_3;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if ((ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
					ENTITY::DELETE_ENTITY(&iVar0);
				}
				else
				{
					ENTITY::DETACH_ENTITY(iVar0, false, true);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 223, true);
					if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
					{
						iVar4 = func_1928(iVar0);
						if (!func_278(iVar4, 0))
						{
							iVar4 = func_1929(iVar0);
						}
					}
					else
					{
						iVar4 = func_1929(iVar0);
					}
					func_1930(iVar3, iVar4, 1, 1, -142743235);
					if (bParam3)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, uParam0->f_155, false, true, true, true);
						ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
						ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
					}
					if (ENTITY::IS_ENTITY_A_PED(iVar0))
					{
						TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 0);
						PED::_0x2208438012482A1A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), false, false);
					}
					else
					{
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar0, 1);
					}
				}
			}
		}
		iVar2++;
		iVar1++;
	}
}

void func_1573(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = ((*uParam1)[iVar1 /*4*/])->f_3;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
			else
			{
				ENTITY::_0x203BEFFDBE12E96A(iVar0, func_1931(uParam0->f_154, 0), MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f), 0, true, 1);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 223, false);
			}
		}
		iVar1++;
	}
}

void func_1574(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar1, 5f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!ENTITY::IS_AN_ENTITY(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar7, iParam0))
			{
			}
			else if (TASK::_0x0CCFE72B43C9CF96(iVar7))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				iVar8 = MISC::_0x18013392501CE5DC(iVar6);
				OBJECT::DELETE_OBJECT(&iVar8);
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_1575(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = iParam1;
}

Vector3 func_1576(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { *(uParam0->f_2[iParam1 /*3*/]) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0))
	{
		return vVar0;
	}
	return *(uParam0->f_2[iParam1 /*3*/]);
}

void func_1577(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 72, true);
	ENTITY::_0x18FF3110CF47115D(iParam0, 9, 1);
	PED::_0xAE6004120C18DF97(iParam0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
	if (PED::_0x33FA048675821DA7(iParam0, 0))
	{
		PED::_0x2EB75FB86C41F026(iParam0, 0, 0);
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1538724068);
}

int func_1578(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1932(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1579(int iParam0)
{
	char* sVar0;
	
	sVar0 = "HorseMission";
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return 1;
	}
	return 0;
}

void func_1580(int iParam0, int iParam1)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_1581(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = func_1002(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_1933(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	func_1934(iParam0, iVar1);
	func_1935(iParam0, iVar2);
	func_1936(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = func_435();
	}
	func_1937(iParam0, iParam1);
	func_1938(iParam0, iVar4);
	func_1939(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	func_1011(iParam0, iVar6);
	func_1599(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_1940(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			func_1941(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_1582(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(1268180497, iVar0))
	{
		return 0;
	}
	iVar1 = 1268180497;
	if (PED::_0x98082246107A6ACF(iParam0, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_1583(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = func_1922(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1182(0) };
	if (func_1942(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1584(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_978(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1585(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	if (!func_1015(iParam1))
	{
		return 0;
	}
	if (func_1583(iParam0))
	{
		return 0;
	}
	iVar0 = func_1922(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1182(0) };
	Var1.f_4 = iVar0;
	if (!func_969(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

void func_1586(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = INVENTORY::_0x13D234A2A3F66E63(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		uVar3 = func_1919(iVar2, 1);
		iVar4 = uVar3;
		if (!func_278(iVar4, 0))
		{
		}
		else
		{
			iVar5 = uParam1[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				uVar6 = func_1943(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_1587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_225(iParam0))
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/];
		if (func_278(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_1;
			uVar5 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

int func_1588(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_974(Var0, 1415981582, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1589(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	Var0.f_9 = -1591664384;
	if (!func_1617(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_974(Var0, -2119169513, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1590(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	if (!func_1944(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1618() };
	*uParam1 = func_974(Var0, iParam0, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1591(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_1592(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1945(iParam0, *uParam1);
	func_1945(iParam0, uParam1->f_1);
}

void func_1593(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1945(iParam0, *uParam1);
	func_1945(iParam0, uParam1->f_1);
	func_1945(iParam0, uParam1->f_2);
	func_1945(iParam0, uParam1->f_3);
	func_1945(iParam0, uParam1->f_4);
	func_1945(iParam0, uParam1->f_5);
}

int func_1594(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

char* func_1595(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1596(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_158())
	{
		if (func_1685())
		{
			bVar0 = false;
			if (!func_120(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_40(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1946();
				*iParam1 = func_1947();
				*uParam2 = func_1948();
				return 1;
			}
			else
			{
				*uParam0 = func_1949();
				*iParam1 = func_1950();
				*uParam2 = func_1951();
				return 1;
			}
		}
		else if (func_202())
		{
			if (!func_120(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1952();
				*iParam1 = func_1953();
				*uParam2 = func_1954();
				return 1;
			}
			else
			{
				*uParam0 = func_1955();
				*iParam1 = func_1956();
				*uParam2 = func_1957();
				return 1;
			}
		}
	}
	else if (func_1685())
	{
		*uParam0 = func_1958();
		*iParam1 = func_1959();
		*uParam2 = func_1960();
		return 1;
	}
	else if (func_202())
	{
		*uParam0 = func_1961();
		*iParam1 = func_1962();
		*uParam2 = func_1963();
		return 1;
	}
	return 0;
}

void func_1597(int iParam0)
{
	if (func_1964() < iParam0)
	{
		func_1965(iParam0);
	}
}

void func_1598(int iParam0)
{
	int iVar0;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1599(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fParam1;
	iVar0 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	func_1597(iVar2);
}

int func_1600(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	fVar1 = 1f;
	iVar2 = Global_1914319->f_16855.f_1;
	iVar3 = Global_1914319->f_16855;
	if (func_929(iVar2) && func_1730(iVar3))
	{
		if (iVar3 == 10 || iVar3 == 18)
		{
			fVar1 = func_1966(iVar2, iParam0);
		}
		fVar0 = func_1967(&((Global_1914319->f_3[iVar3 /*446*/])->f_35), iParam0);
	}
	fVar4 = (fVar0 + fVar1);
	if (fVar0 <= 0f)
	{
		return 0;
	}
	fVar4 = (fVar4 - IntToFloat(BUILTIN::FLOOR(fVar4)));
	iVar5 = func_1687(iParam0, 816454899, 0);
	iVar6 = BUILTIN::ROUND((IntToFloat(iVar5) + (IntToFloat(iVar5) * fVar4)));
	if (bParam1)
	{
		iVar6 = BUILTIN::ROUND((IntToFloat(iVar6) * 0.5f));
	}
	if (iVar6 <= 0)
	{
		return 0;
	}
	return iVar6;
}

float func_1601(int iParam0)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	fVar0 = 0f;
	iVar3 = func_1924(iParam0);
	if (iVar3 != -1)
	{
		iVar1 = func_446(iVar3);
		bVar2 = func_1018(iVar3);
	}
	else
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, 7);
		bVar2 = false;
	}
	if (bVar2)
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.5f;
				break;
			
			case 1:
				fVar0 = 0.5f;
				break;
			
			case 2:
				fVar0 = 0.65f;
				break;
			
			case 3:
				fVar0 = 0.8f;
				break;
			
			case 4:
				fVar0 = 0.95f;
				break;
			
			default:
				fVar0 = 0.5f;
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				fVar0 = 0.02f;
				break;
			
			case 1:
				fVar0 = 0.04f;
				break;
			
			case 2:
				fVar0 = 0.1f;
				break;
			
			case 3:
				fVar0 = 0.15f;
				break;
			
			case 4:
				fVar0 = 0.2f;
				break;
			
			default:
				fVar0 = 0.02f;
				break;
		}
	}
	return fVar0;
}

int func_1602(int iParam0)
{
	switch (iParam0)
	{
		case -621245377:
		case 1680713143:
			return 1;
	}
	return 0;
}

int func_1603(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_1968(iParam0))
	{
		if (iParam1 > 1)
		{
			iVar1 = func_1969(iParam0);
			iVar2 = (iParam1 - iVar1);
			iVar3 = func_1600(iParam0, 0);
			iVar4 = func_1600(iParam0, 1);
			iVar0 = ((iVar4 * iVar1) + (iVar3 * iVar2));
		}
		else
		{
			iVar0 = func_1600(iParam0, func_1970(iParam0));
		}
	}
	else
	{
		iVar0 = (func_1600(iParam0, 0) * iParam1);
	}
	return iVar0;
}

void func_1604(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1807(iParam0, sParam4, iParam5);
	}
	func_1808(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1605(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_1606(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1607(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1608(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1609(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1610(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1611(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_1612()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
	{
		func_1971();
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::_0xD2CB0FB0FDCB473D(iVar0, 0);
	func_1631(-1);
	func_1632(3);
	return 1;
}

void func_1613(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_226(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1972(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_1614(int iParam0)
{
	if (!func_1973(iParam0))
	{
		return 0;
	}
	if (!func_1661())
	{
		return 1;
	}
	return 0;
}

void func_1615(int iParam0)
{
	iParam0 = func_444(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

bool func_1616(int iParam0)
{
	return func_339(iParam0) == 28496495;
}

int func_1617(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;
	
	if (!func_1583(iParam0))
	{
		return 0;
	}
	iVar0 = func_1922(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1182(0) };
	if (!func_1719(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1974(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

struct<4> func_1618()
{
	struct<4> Var0;
	
	Var0 = { func_1182(0) };
	return func_669(856287005, Var0, -218846335, 0);
}

int func_1619(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
	}
	if (func_612(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_1620(int iParam0)
{
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	if (func_612(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_1621(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745:
			return 263080063;
		
		case -769274720:
			return -34331381;
		
		case 893370428:
			return -993578318;
		
		case 736792276:
			return 579268144;
		
		case -949205287:
			return 1104489688;
	}
	return 0;
}

int func_1622()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	
	Var0 = { func_1185(856287005, 0, 0) };
	Var5 = { func_669(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_339(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_974(Var5, -415648720, 0);
	}
	if (!func_278(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_975(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_974(Var5, iVar11, 0);
			if (!func_278(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1620(iVar14) || func_1619(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1620(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1620(iVar14) && func_1975(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1976(iVar11, &Var16, 1))
									{
										if (!func_967(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

var func_1623(var uParam0)
{
	return *uParam0;
}

var func_1624(var uParam0)
{
	return uParam0->f_1;
}

var func_1625(var uParam0)
{
	return *uParam0;
}

var func_1626(var uParam0)
{
	return uParam0->f_1;
}

var func_1627(var uParam0)
{
	return uParam0->f_2;
}

var func_1628(var uParam0)
{
	return uParam0->f_3;
}

var func_1629(var uParam0)
{
	return uParam0->f_4;
}

var func_1630(var uParam0)
{
	return uParam0->f_5;
}

void func_1631(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1632(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1633(var uParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	
	Var0 = { func_1718(0) };
	iVar5 = func_1236(bParam1);
	Var6.f_9 = -1591664384;
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (func_1237(iVar4, &Var6, bParam1))
		{
			if (INVENTORY::_0x4C543D5DFCD2DAFD(&Var0, uParam0))
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

int func_1634(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;
	
	if (!func_927(bParam9))
	{
		return func_1977(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_670(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1468(Param0, &Var0, bParam9, 1) || !func_1468(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_670(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_1208(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_1635(var uParam0)
{
	return -1;
}

int func_1636(var uParam0)
{
	return 0;
}

int func_1637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 399422490;
		
		case 1:
			return -385635273;
		
		case 2:
			return -1163401704;
		
		case 3:
			return 561239516;
		
		case 7:
			return 168005805;
		
		case 9:
			return -273475295;
		
		case 10:
			return -2142954459;
		
		case 11:
			return -1442703445;
		
		case 12:
			return -1505972720;
		
		case 13:
			return -508773182;
		
		default:
			break;
	}
	return -1;
}

void func_1638(int iParam0, int iParam1)
{
	func_1978(iParam0, iParam1, 0);
}

int func_1639(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	vector3 vVar1;
	
	vVar1.f_2 = 10;
	vVar1.f_2.f_1.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	vVar1.f_2.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = 4;
	if (!func_1979(&vVar1, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < vVar1.y)
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, (vVar1.f_2[iVar0 /*12*/])->f_1, &((vVar1.f_2[iVar0 /*12*/])->f_3[0]), &((vVar1.f_2[iVar0 /*12*/])->f_3[1]), &((vVar1.f_2[iVar0 /*12*/])->f_3[2]), iParam3, iParam4, iParam5, iParam6);
		iVar0++;
	}
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 0, 1, 0);
	}
	return 1;
}

int func_1640(int* iParam0, struct<4> Param1, var uParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var14;
	
	if (func_1980(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1468(Param1, &Var0, 1, 0))
	{
		return 0;
	}
	if (!func_1981(Param1, 816454899, 1))
	{
		return 0;
	}
	Var14 = { func_1915(&Var0) };
	Var14.f_13 = 816454899;
	Var14.f_12 = 1992602754;
	*uParam5 = { Var14 };
	if (!func_1982(iParam0, Var14, -1318406457, bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1641(var uParam0, int iParam1, var uParam2)
{
	struct<32> Var0;
	int iVar44;
	int iVar45;
	
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	if (func_243(uParam0, &Var0))
	{
		iVar44 = func_460(&Var0);
		iVar45 = 0;
		while (iVar45 < iVar44)
		{
			if (func_462(iVar45, &Var0))
			{
				if (func_1983(&Var0, iParam1, uParam2))
				{
					return 1;
				}
			}
			iVar45++;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<4> func_1642()
{
	struct<4> Var0;
	
	return Var0;
}

void func_1643(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1644(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_1645(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_718(iParam0))
	{
		return;
	}
	if (func_1984(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1985(iParam0, 1);
	}
	else
	{
		func_1986(iParam0, 1);
	}
	func_1987(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1648(iVar0) == iParam0)
		{
			func_1649(iVar0, 0);
		}
		iVar0++;
	}
}

void func_1646(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!func_111(iParam0))
	{
		return;
	}
	bVar0 = func_1320(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_26(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_1988(iParam0, func_435());
			func_1989(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1990(iParam0, 67108864);
		func_1988(iParam0, -15);
	}
	func_1991(iParam0);
}

void func_1647(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!func_111(iParam0))
	{
		return;
	}
	if (func_1992(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1888801)[iParam0 /*35*/])->f_5))
	{
		iVar0 = ((*Global_1888801)[iParam0 /*35*/])->f_5;
	}
	else
	{
		iVar0 = func_1993(iParam0);
	}
	bVar1 = func_1320(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1994(iParam0);
		if (iParam2 > iVar2 || !func_1904(func_1995(iParam0)))
		{
			func_1996(iParam0, func_435());
			func_1997(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1989(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1990(iParam0, 33554432);
		func_1996(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1998(iParam0);
}

int func_1648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 2:
			return 2;
		
		case 11:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 3;
		
		case 12:
			return 3;
		
		case 1:
			return 3;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 13:
			return 4;
		
		case 14:
			return 4;
		
		case 15:
			return 4;
		
		case 16:
			return 4;
		
		default:
			break;
	}
	return -1;
}

void func_1649(int iParam0, bool bParam1)
{
	if (!func_1321(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1999(iParam0, 1);
	}
	else
	{
		if (func_2000(iParam0))
		{
			return;
		}
		func_2001(iParam0, 1);
	}
	func_2002(iParam0, bParam1);
}

void func_1650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_718(iParam0))
	{
		return;
	}
	iVar0 = func_2003();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_0xEA6DE0CD15AECBE2(iVar0);
	if (iParam0 == func_2004())
	{
		LAW::_0x093A9D1F72DF0D19(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_2005(iParam0, iParam1);
			func_2006(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_1984(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_2007(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_2007(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0 /*12*/] = iParam1;
}

int func_1651(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		
		case 1:
			return 1039226266;
		
		case 2:
			return 493546894;
		
		case 3:
			return -2119728378;
		
		case 4:
			if (!bParam1 || func_125() != -1)
			{
				return -1308265478;
			}
			if (func_40(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		
		case 5:
			return -1147969487;
		
		case 6:
			return -1147969487;
		
		case 7:
			return -1147969487;
		
		case 8:
			return 537788226;
		
		case 9:
			return -1391142299;
		
		case 10:
			return 1178102426;
		
		case 11:
			return 1608357655;
		
		case 12:
			if (!bParam1 || func_125() != -1)
			{
				return -650528936;
			}
			if (func_40(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_125() != -1)
			{
				return -877373104;
			}
			if (func_40(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

int func_1652(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (!func_1069(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1653(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1654(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_1655(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1656(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1657(int iParam0, var uParam1)
{
	struct<4> Var0;
	
	if (!func_1069(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 192444604;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_1658(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	
	if (!func_1069(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = 833374898;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		DATAFILE::_DATAFILE_GET_HASH(uParam3, &Var0);
		Var0.f_2 = 1214284824;
		DATAFILE::_DATAFILE_GET_INT(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1659(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_2008(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (func_2009(iParam1))
	{
		func_2010(iParam0, iParam1);
		return;
	}
	if (func_2011(iParam1))
	{
		func_2012(iParam0, iParam1);
		return;
	}
	if (func_2013(iParam1))
	{
		func_2014(iParam0, iParam1);
		return;
	}
	if (func_2015(iParam1))
	{
		func_2016(iParam0, iParam1);
		return;
	}
	if (func_2017(iParam1))
	{
		func_2018(iParam0, iParam1);
		return;
	}
	if (func_2019(iParam1))
	{
		func_2020(iParam0, iParam1);
		return;
	}
	if (func_2021(iParam1))
	{
		iVar0 = func_2022();
		func_2023(iParam0, iParam1, iVar0);
		return;
	}
}

int func_1660(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, bool bParam8, int iParam9)
{
	struct<16> Var0;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!func_2024(iParam0, iParam1, Param2, iParam6, iParam7, &Var0, bParam8, iParam9, 0))
	{
		return 0;
	}
	func_2025(Var0);
	return 1;
}

bool func_1661()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1662(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_1091(&(uParam0->f_2031));
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	iVar4 = 0;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		iVar5 = func_1223(iVar6, &(uParam0->f_2031));
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			vVar1 = { func_1224(iVar6, iVar4, &(uParam0->f_2031)) };
			if (func_278(vVar1.x, 0))
			{
				if (func_1075(uParam0, vVar1))
				{
					*uParam1++;
				}
			}
			iVar4++;
		}
		iVar6++;
	}
	return 1;
}

int func_1663(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	*iParam2 = 0;
	if (iParam1 == 207706105)
	{
		iVar0 = -999503751;
	}
	else if (iParam1 == -1998614617)
	{
		iVar0 = -525676072;
	}
	else if (iParam1 == -357182937)
	{
		iVar0 = -2061583405;
	}
	*iParam2 = func_1156(iVar0, 1);
	return 1;
}

void func_1664(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, -1171257547, bParam1);
	if (!bParam1)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 988907979, 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_2031.f_52, 1417549877, 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1184271882, 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, 1453173492, 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(uParam0->f_2031.f_52, -804795275, 0);
	}
}

int func_1665(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_892(uParam1);
	if (iParam0 < 0 || iParam0 > iVar0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(*uParam1, func_245(uParam1), iParam0, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_1666(var uParam0)
{
	bool bVar0;
	
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "AltHorseStats");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "AltHorseStats", !bVar0);
}

void func_1667(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_1679(uParam0);
	func_1093(uParam0, bVar0);
	func_1094(uParam0, !bVar0);
}

void func_1668(var uParam0)
{
	bool bVar0;
	
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "SaddleStatsVisible");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_52, "SaddleStatsVisible", !bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2031.f_50, func_552(), bVar0);
}

char* func_1669()
{
	return "uiPaletteOptionItemID";
}

char* func_1670()
{
	return "locked";
}

int func_1671(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar23;
	
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_INFO(iParam0, &uVar0))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(iParam0, iParam1, &Var7))
		{
			if (Var7.f_5 > 0)
			{
				iVar14 = -1;
				iVar15 = 0;
				while (iVar15 < Var7.f_5)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(iParam0, Var7, iVar15, &iVar14))
					{
						if (func_2026(iParam0, iVar14, &iVar5))
						{
							if (!func_278(iVar4, 0))
							{
								iVar4 = iVar5;
							}
							else if (func_1186(iVar5, -915411861, 1, 0, 0) < func_1186(iVar4, -915411861, 1, 0, 0))
							{
								iVar4 = iVar5;
							}
						}
					}
					iVar15++;
				}
			}
			if (Var7.f_6 > 0)
			{
				iVar23 = 0;
				while (iVar23 < Var7.f_6)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(iParam0, iParam1, iVar23, &uVar16))
					{
						if (func_1671(iParam0, uVar16, &iVar6))
						{
							if (!func_278(iVar4, 0))
							{
								iVar4 = iVar6;
							}
							else if (func_1186(iVar6, -915411861, 1, 0, 0) < func_1186(iVar4, -915411861, 1, 0, 0))
							{
								iVar4 = iVar6;
							}
						}
					}
					iVar23++;
				}
			}
			*uParam2 = iVar4;
			return 1;
		}
	}
	return 0;
}

int func_1672(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = func_1002(iVar0);
	iVar2 = func_2027(iParam1);
	iVar3 = func_2028(iVar0);
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = func_2029(iParam1);
	iVar5 = func_2030(iParam1);
	iVar4++;
	iVar5++;
	iVar4 = func_1489(iVar4, 0, 10);
	iVar5 = func_1489(iVar5, 0, 10);
	if (func_148(iParam1))
	{
		func_2031(&iVar6, &iVar7);
		iVar6 = (iVar6 + iVar4 * 100);
		iVar7 = (iVar7 + iVar5 * 100);
	}
	iVar8 = iVar4 + 3;
	iVar9 = iVar5 + 2;
	iVar8 = func_1489(iVar8, 0, 10);
	iVar9 = func_1489(iVar9, 0, 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentValue", iVar7);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedValue", iVar4);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccValue", iVar5);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar9);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseHandling", MISC::GET_HASH_KEY(func_2032(iVar2)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseType", MISC::GET_HASH_KEY(func_2033(iVar3, iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseBreed", MISC::GET_HASH_KEY(func_1255(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseCoat", MISC::GET_HASH_KEY(func_2034(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "HorseGender", MISC::GET_HASH_KEY(func_2035(iParam1)));
	return 1;
}

void func_1673(var uParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	struct<6> Var22;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	int iVar33;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_65))
	{
		uParam0->f_2031.f_65 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_52, "SaddleStats");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_65);
	}
	if (!func_1039(iParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var0))
	{
		return;
	}
	if (Var0 <= 0)
	{
		return;
	}
	iVar33 = 0;
	while (iVar33 < Var0)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar33]), &Var22))
		{
		}
		else
		{
			switch (Var22.f_1)
			{
				case -225223329:
					fVar29 = Var22.f_5;
					break;
				
				case 1167068375:
					fVar30 = Var22.f_5;
					break;
				
				case -845587290:
					fVar31 = Var22.f_5;
					break;
				
				case 1605773431:
					fVar32 = Var22.f_5;
					break;
			}
		}
		iVar33++;
	}
	if (fVar29 != 0f)
	{
		func_2036(uParam0, iParam1, iParam2, -225223329, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar29, 1, "RPG_Horse_Health");
	}
	if (fVar30 != 0f)
	{
		func_2036(uParam0, iParam1, iParam2, 1167068375, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), fVar30, 1, "RPG_Horse_Stamina");
	}
	if (fVar31 != 0f)
	{
		func_2036(uParam0, iParam1, iParam2, -845587290, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), fVar31, 1, "RPG_Horse_Stamina");
	}
	if (fVar32 != 0f)
	{
		func_2036(uParam0, iParam1, iParam2, 1605773431, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), fVar32, 0, "RPG_Horse_Stamina");
	}
}

bool func_1674(int iParam0)
{
	return func_339(iParam0) == 1302066700;
}

int func_1675(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var23;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	char* sVar34;
	char* sVar35;
	char* sVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	
	iVar0 = uParam0->f_2031.f_94;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1674(iParam1))
	{
		return 0;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_66))
	{
		uParam0->f_2031.f_66 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2031.f_52, "StirrupStats");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_66);
	}
	Var1.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var1))
	{
	}
	else if (Var1 <= 0)
	{
		func_551(uParam0, 0);
	}
	else
	{
		iVar31 = 0;
		iVar32 = 0;
		bVar33 = true;
		iVar37 = 0;
		while (iVar37 < Var1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var1.f_1[iVar37]), &Var23))
			{
				bVar33 = false;
				if (Var23.f_1 == -1620444701)
				{
					iVar31 = (iVar31 + Var23.f_2);
				}
				else if (Var23.f_1 == 2086291460)
				{
					iVar32 = (iVar32 + Var23.f_2);
				}
				else if (Var23.f_1 == -845587290)
				{
					sVar34 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				else if (Var23.f_1 == 1167068375)
				{
					sVar34 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE");
					sVar36 = "RPG_Horse_Stamina";
					bVar33 = true;
				}
				if (bVar33)
				{
					if (Var23.f_5 <= 0f)
					{
						sVar35 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(Var23.f_5));
					}
					else
					{
						sVar35 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(Var23.f_5));
					}
					iVar30 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_66, Var23.f_1);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "iconTXD", "pausemenu_player");
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "iconTexture", sVar36);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isIconVisible", 1);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "label", sVar34);
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "value", sVar35);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", 0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", 0);
					if (func_278(iParam2, 0))
					{
						iVar38 = func_2037(iParam1, iParam2, Var23.f_1);
						if (iVar38 == 2)
						{
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", 1);
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTexture", "rpg_arrow_down");
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTXD", "menu_textures");
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", 1);
						}
						else if (iVar38 == 1)
						{
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isEndIconVisible", 1);
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTexture", "rpg_arrow_up");
							DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar30, "endIconTXD", "menu_textures");
							DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar30, "isRowActive", 0);
						}
					}
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_66, -1, -519723266, iVar30);
				}
			}
			iVar37++;
		}
		iVar39 = 0;
		iVar40 = 0;
		iVar39 = func_2029(iVar0);
		iVar40 = func_2030(iVar0);
		iVar41 = 0;
		iVar42 = 0;
		iVar41 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ENTITY::GET_ENTITY_MODEL(iVar0), 5);
		iVar42 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(ENTITY::GET_ENTITY_MODEL(iVar0), 6);
		iVar39++;
		iVar40++;
		iVar39 = func_1489(iVar39, 0, iVar41);
		iVar40 = func_1489(iVar40, 0, iVar42);
		iVar43 = iVar39 + 3;
		iVar44 = iVar40 + 2;
		iVar43 = func_1489(iVar43, 0, iVar41);
		iVar44 = func_1489(iVar44, 0, iVar42);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedValue", iVar39);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentValue", (iVar31 + iVar39 * 100));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedEquipmentMaxValue", 1000);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccValue", iVar40);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentValue", (iVar32 + iVar40 * 100));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccEquipmentMaxValue", 1000);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityValue", iVar43);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseSpeedCapacityMaxValue", 10);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityValue", iVar44);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMinValue", 0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_52, "HorseAccCapacityMaxValue", 10);
		func_551(uParam0, 1);
	}
	return 1;
}

void func_1676(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_1088(uParam0))
	{
		iVar0 = func_959(uParam0);
		iParam1 = func_1154(iVar0);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2031.f_52, "ItemTitleInfo", iParam1);
}

int func_1677(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	struct<2> Var4[15];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	
	if (!func_278(iParam1, 0))
	{
		return 0;
	}
	func_933(uParam0->f_2, &iVar0);
	if (!func_1455(iParam1, iVar0))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_63))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_63);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2031.f_64))
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_2031.f_64);
	}
	if (func_1505(iParam1, iVar0, &Var4, &iVar35, 1, 0))
	{
		iVar39 = 0;
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar40 = &Var4[iVar38 /*2*/];
			if ((func_278(iVar40, 0) && iVar40 != 2084597891) && iVar40 != 773203532)
			{
				if (uParam0->f_2 == 18 || uParam0->f_2 == 19)
				{
					iVar41 = func_934(uParam0->f_2);
					iVar42 = func_2038(iVar41);
					iVar39 = func_1530(iVar40, func_1182(1), iVar42, 0);
				}
				else
				{
					iVar39 = ((func_2039(iVar40) + func_2040(7, iVar40)) + func_1530(iVar40, func_1182(1), 1084182731, 0));
				}
				iVar36 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_63, func_1159(iVar40));
				DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar36, "itemName", MISC::_CREATE_VAR_STRING(32, 1097941440, (Var4[iVar38 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, func_1154(iVar40))));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar36, "enabled", iVar39 >= (Var4[iVar38 /*2*/])->f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_63, -1, "recipeListItem", iVar36);
				iVar37 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_64, func_1159(iVar40));
				vVar1 = { func_2041(iVar40) };
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "textureDictionary", vVar1.y);
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar37, "texture", vVar1.x);
				DATABINDING::_DATABINDING_ADD_DATA_INT(iVar37, "count", iVar39);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "visible", 1);
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar37, "enabled", iVar39 >= (Var4[iVar38 /*2*/])->f_1);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_2031.f_64, -1, "recipeImageItem", iVar37);
			}
			iVar38++;
		}
	}
	func_832(uParam0, func_1256(iParam1));
	func_543(uParam0, 1);
	func_1089(uParam0, iParam1, 0);
	return 1;
}

bool func_1678(int iParam0, int iParam1)
{
	struct<37> Var0;
	
	if (!func_278(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	return ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0);
}

bool func_1679(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "RecipeInfoVisible");
}

int func_1680(var uParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	
	if (iParam3 == 0)
	{
		return 0;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar0.x = iParam1;
	if (!func_1075(uParam0, vVar0))
	{
		return 0;
	}
	if (!func_723(uParam0, iParam1, iParam2, iParam3, &iVar3, 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_2031.f_59, -1, -858000260, iVar3);
	uParam0->f_2031.f_72++;
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2031.f_50, "paletteItemCount", uParam0->f_2031.f_72);
	return 1;
}

bool func_1681(var uParam0)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_2031.f_52, "SaddleStatsVisible");
}

int func_1682(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	vector3 vVar4;
	struct<4> Var7;
	struct<9> Var11;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	iVar0 = 0;
	if (iParam2 == 1702073444)
	{
		iVar3 = func_276(uParam0);
		vVar4.f_1 = -1;
		vVar4.f_2 = -1;
		Var11 = -1;
		Var11.f_1 = -1;
		Var11.f_2 = -1;
		Var11.f_3 = -1;
		Var11.f_4 = -1;
		Var11.f_5 = -1;
		Var11.f_6 = -1;
		Var11.f_7 = -1;
		Var11.f_8 = -1;
		if (func_963(func_724(&(uParam0->f_2031)), iVar3, &Var7))
		{
			iVar1 = 0;
			while (iVar1 < Var7.f_3)
			{
				vVar4 = { func_964(iVar1, Var7, &(uParam0->f_2031)) };
				if (vVar4.x == iParam1 && func_278(vVar4.x, 0))
				{
					Var11.f_8 = vVar4.y;
					iVar22 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var11, &iVar21, 1);
					if (iVar22 == -1)
					{
					}
					else
					{
						iVar23 = 0;
						while (iVar23 < iVar21)
						{
							iVar24 = func_920(iVar23, iVar22);
							if (((func_278(iVar24, 0) && iVar24 != iParam1) && func_921(&(uParam0->f_2031), iVar24, &uVar2)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(iVar24, Var11.f_8) == -2089472884)
							{
								iVar25 = func_897(uParam0, iVar24);
								if (!func_835(uParam0, iVar24, iVar25))
								{
									iVar0 = (iVar0 + func_903(iVar24, 0));
								}
							}
							iVar23++;
						}
						ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar22);
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar0 = func_903(iParam1, 0);
	}
	return iVar0;
}

int func_1683(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_1015(iParam1))
	{
		return 0;
	}
	iVar0 = func_1254(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	iVar1 = PED::_0xE76687023D8C8505(iVar0, 0);
	return func_1672(uParam0, iVar1);
}

int func_1684(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1275(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_1685()
{
	if (func_125() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_1686(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (uParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1687(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;
	
	if (!func_2042(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22 /*2*/] == 2084597891)
		{
			return (Var0[iVar22 /*2*/])->f_1;
		}
		else if (&Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_1688(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_125() == -1)
	{
		if (func_1203(iParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_1689(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	if (func_930(iParam0, iParam1, &Var0))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1690(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	
	iVar10 = *iParam2;
	if (iParam2->f_2 > 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = false;
	}
	*uParam3 = 0;
	switch (iVar10)
	{
		case 927095371:
			return func_2043(iParam0) == bVar4;
		
		case 1884968092:
			iVar0 = func_2044(iParam2->f_1);
			if (iVar0 == -1)
			{
				return 0;
			}
			return func_1684(iVar0) == bVar4;
		
		case -1943220497:
			iVar0 = func_2044(iParam2->f_1);
			if (iVar0 == -1)
			{
				return 0;
			}
			return func_155(iVar0) == bVar4;
		
		case 1412799554:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return 0;
			}
			if (func_827(iVar1) == -1977020088)
			{
				return func_1336(iVar1) == bVar4;
			}
			else
			{
				return func_671(iVar1, 0) > 0 == bVar4;
			}
			break;
		
		case -1665564967:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return 0;
			}
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (((func_915(iVar1, 1728382685, 0) || func_915(iVar1, -649335959, 0)) || func_915(iVar1, -1876502240, 0)) || func_915(iVar1, -2107032155, 0))
				{
					return 1;
				}
			}
			return 0;
		
		case -1100867449:
			iVar9 = func_2045(iParam2->f_1);
			if (iVar9 == -1)
			{
				return 0;
			}
			return func_2046(iVar9) >= iParam2->f_2;
		
		case -761364604:
			iVar2 = func_2047(iParam2->f_1);
			if (iVar2 == -1)
			{
				return 0;
			}
			return func_805(iVar2) == bVar4;
		
		case -343773245:
			iVar2 = func_2047(iParam2->f_1);
			if (iVar2 == -1)
			{
				return 0;
			}
			return func_2048(iVar2) == bVar4;
		
		case 318533979:
			return func_2049() == bVar4;
		
		case 1458081975:
			if (func_2050(func_1474(iParam0), iParam0))
			{
				return 1;
			}
			iVar3 = func_2051(iParam2->f_1);
			if (iVar3 == -1)
			{
				return 0;
			}
			if (bVar4)
			{
				return func_1098(iParam0) == iVar3;
			}
			else
			{
				return func_1098(iParam0) != iVar3;
			}
			break;
		
		case 716744052:
			iVar11 = func_2052(iParam2->f_1);
			if (!func_929(iVar11))
			{
				return 0;
			}
			if (bVar4)
			{
				return Global_1914319->f_16855.f_1 == iVar11;
			}
			else
			{
				return Global_1914319->f_16855.f_1 != iVar11;
			}
			break;
		
		case -1316856660:
			return func_1483(iParam2->f_1) == bVar4;
		
		case -192905099:
			return func_1791(iParam2->f_1) == bVar4;
		
		case -811319973:
			return func_125() == -1 == bVar4;
		
		case -185626331:
			return func_125() != -1 == bVar4;
		
		case -1279067322:
			iVar5 = func_2053(iParam2->f_1);
			if (iVar5 == -1)
			{
				return 0;
			}
			return func_2054(iVar5) == bVar4;
		
		case -1013499808:
			iVar6 = iParam2->f_1;
			if (iVar6 == 0)
			{
				return 0;
			}
			return iVar6 == Global_1946804->f_1 == bVar4;
		
		case 1407970834:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return 0;
			}
			return func_1314(iVar1, 1) == bVar4;
		
		case 1437906597:
			iVar12 = func_2055(iParam2->f_1);
			if (!func_169(iVar12))
			{
				return 0;
			}
			return func_40(iVar12) == bVar4;
		
		case -280118519:
			return ((func_2056() || func_2057()) && bVar4);
		
		case -1869915166:
			return (func_1798() && bVar4);
		
		case -1160790731:
			return (0 && bVar4);
		
		case 16476779:
			iVar1 = iParam2->f_1;
			if (iVar1 == 0)
			{
				return 0;
			}
			Var13.f_9 = -1591664384;
			iVar42 = 0;
			while (iVar42 < 5)
			{
				if (func_1617(iVar42, &Var13))
				{
					if (Var13.f_4 == iVar1)
					{
						return bVar4;
					}
				}
				iVar42++;
			}
			if (!bVar4)
			{
				return 1;
			}
			return 0;
		
		case 1561382091:
			iVar7 = func_2058(iParam2->f_1);
			if (iVar7 == -1)
			{
				return 0;
			}
			if (!bVar4)
			{
				return 0;
			}
			return (func_2059(iVar7, 0) || func_2059(iVar7, 1));
		
		case 1305693938:
			iVar1 = iParam2->f_1;
			if (!func_278(iVar1, 0))
			{
				return 0;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1914319->f_16855.f_31))
			{
				iVar43 = DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1914319->f_16855.f_31);
			}
			else
			{
				return 0;
			}
			if (iVar43 <= 0)
			{
				return 0;
			}
			iVar46 = 0;
			while (iVar46 < iVar43)
			{
				iVar44 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1914319->f_16855.f_31, iVar46);
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar44))
				{
					iVar47 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar44, func_684());
					iVar45 = iVar47;
					if (func_278(iVar45, 0))
					{
						if (iVar45 == iVar1)
						{
							if (bVar4)
							{
								return 1;
							}
						}
					}
				}
				iVar46++;
			}
			if (!bVar4)
			{
				return 1;
			}
			return 0;
		
		case 1105714339:
			iVar8 = iParam2->f_1;
			if (iVar8 == 0)
			{
				return 0;
			}
			return func_2060(Global_1914319->f_16855.f_36, iVar8, Global_1914319->f_16855.f_37) == bVar4;
		
		case -253134813:
			if (!bVar4)
			{
				return 0;
			}
			return func_2061(iParam1, iParam2->f_1);
		
		case -501545386:
			iVar48 = iParam2->f_1;
			switch (iVar48)
			{
				case -2132502231:
					return (func_2062() && bVar4);
				
				case -608161198:
					return (func_2063() && bVar4);
				
				case 1014511709:
					return (func_2064() && bVar4);
				
				case -1712679084:
					return (func_2065() && bVar4);
			}
			return 0;
		
		case -1541662797:
			iVar49 = -589165916;
			if (iParam2->f_1 == 581819093)
			{
				iVar49 = 581819093;
			}
			if (iVar49 == -589165916)
			{
				return 0;
			}
			else
			{
				iVar50 = func_2067(0, func_2066(iVar49, 1), 11, iVar49);
				return func_2068(iVar50) > 0;
			}
			break;
		
		case -1480714855:
			return func_1501(iParam2->f_1);
		
		case 348599371:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(iParam2->f_1) == bVar4;
		
		case -1318118431:
			return Global_1914319->f_16855.f_36 == iParam2->f_1 == bVar4;
	}
	return 0;
}

int func_1691()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_339(iVar1) == -999503751)
		{
			if (func_820() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
		
		case 1:
			return -2126063412;
		
		case 2:
			return -368305354;
		
		case 3:
			return -1500843424;
		
		case 4:
			return 2034750397;
		
		case 5:
			return -1689805015;
		
		case 6:
			return 1855421528;
		
		case 7:
			return -1844483462;
		
		case 8:
			return -618101597;
		
		case 9:
			return -516195177;
		
		case 10:
			return 1193363351;
		
		default:
			break;
	}
	return 0;
}

int func_1693(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1694(int iParam0)
{
	if (func_1171() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
			
			case 1:
				return 1336948195;
			
			case 2:
				return 216184750;
			
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 2026761603;
		
		case 1:
			return -170715015;
		
		case 2:
			return -2022941088;
		
		default:
			break;
	}
	return 0;
}

int func_1695(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_656(iParam2, 1);
	iVar1 = 0;
	if (iVar0 < 0 || iVar0 >= 39)
	{
		return 0;
	}
	if (func_1171() == 24043185)
	{
		iVar1 = 1;
	}
	if (!bParam4)
	{
		func_658();
	}
	if (iParam1 != 1155669136 && func_1693(&(Global_1946804->f_1378.f_1[iVar0 /*3*/]), iVar1, iParam1, func_125() != -1) == -1)
	{
		return 0;
	}
	if (bParam3)
	{
		Global_1946804->f_2456[iVar0 /*2*/] = 0;
		(Global_1946804->f_2456[iVar0 /*2*/])->f_1 = 0;
	}
	(Global_1946804->f_1378.f_1[iVar0 /*3*/])->f_1 = iParam1;
	(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = iParam1;
	if (bParam5)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_94(17, iParam2, 0, 0, 0);
		}
		else
		{
			func_94(17, iParam2, 1, iParam0, 0);
		}
	}
	func_336(0);
	return 1;
}

int func_1696(int iParam0)
{
	switch (iParam0)
	{
		case -888790689:
			return 0;
		
		case -2126063412:
			return 1;
		
		case -368305354:
			return 2;
		
		case -1500843424:
			return 3;
		
		case 2034750397:
			return 4;
		
		case -1689805015:
			return 5;
		
		case 1855421528:
			return 6;
		
		case -1844483462:
			return 7;
		
		case -618101597:
			return 8;
		
		case -516195177:
			return 9;
		
		case 1193363351:
			return 10;
		
		default:
			break;
	}
	return -1;
}

int func_1697(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_1698(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1699(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_1754(0);
	if (iParam2 != 0 && func_1693(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1753(iParam0, func_1080(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1700(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_1171() == 24043185)
	{
		iVar2 = 1;
	}
	iVar0 = func_2069(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = 1;
		if (((iVar0 == -1906834168 && &uParam0->f_1[iVar1 /*3*/] != func_629()) || iVar0 == -452152720) || iVar0 == -70852636)
		{
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
			Global_1946804->f_2656 = iParam1;
		}
		else if (func_1693(&(uParam0->f_1[iVar1 /*3*/]), iVar2, iVar0, func_125() != -1) != -1)
		{
			(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
			Global_1946804->f_2656 = iParam1;
		}
	}
}

bool func_1701(int iParam0)
{
	return ((&Global_40.f_7731[0 /*5*/] == iParam0 && &Global_40.f_7731[1 /*5*/] == iParam0) && &Global_40.f_7731[2 /*5*/] == iParam0);
}

int func_1702(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		(*uParam1)[iVar3] = 0;
		iVar3++;
	}
	iVar4 = iParam0;
	Var5 = -2109211296;
	if (func_125() == -1)
	{
		if (func_1171() == 1160113249)
		{
			Var5 = 1583685020;
		}
		else
		{
			Var5 = -572793833;
		}
	}
	Var5.f_1 = iVar4;
	Var5.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var5);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var5))
	{
		if (iVar0 >= *uParam1)
		{
			return 0;
		}
		DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var5, 1373051002);
		uVar2 = iVar1;
		DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var5, 1409451727);
		if (!func_2070(iVar1, &iVar3))
		{
		}
		else
		{
			(*uParam1)[iVar3] = uVar2;
			iVar0++;
		}
	}
	return 1;
}

int func_1703(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	
	func_1169(iParam0, &uVar0);
	iVar5 = 0;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (&uVar0[iVar4] > &uVar0[iVar5])
		{
			iVar5 = iVar4;
		}
		iVar4++;
	}
	return iVar5;
}

int func_1704(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iParam0 = func_1171();
	}
	if (func_125() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1705(int iParam0, bool bParam1)
{
	if (func_339(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_671(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1706(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_1208(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_669(271701509, func_1182(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_669(271701509, func_1182(bParam0), 12999093, 0);
}

int func_1707(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_339(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1708(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_1709(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_1710(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1711(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1712(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_125() == -1)
	{
		func_1347(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1348(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1713(int iParam0)
{
	switch (iParam0)
	{
		case -1968468235:
			return 1013009475;
		
		case -2092532275:
		case -2056428614:
		case -348190488:
		case 317179309:
		case 336033112:
		case 761079318:
		case 1942587409:
		case 2073652352:
		case 2077448405:
			return 1721919938;
		
		case -1502467280:
		case -1395073769:
		case -1352600334:
		case -1080155519:
		case -1048755899:
		case -853534656:
		case -772187037:
		case -584027224:
		case -384358143:
		case -349391286:
		case -239176093:
		case 420195545:
		case 777890122:
		case 1394581936:
		case 1702073444:
		case 2036169888:
			return 849534145;
		
		case 193788635:
			return 1027416037;
		
		case 1119253406:
		case 1837492866:
			return -314648538;
		
		case -395279071:
		case -339889117:
			return 1915518289;
		
		case -760956867:
		case -627085098:
		case 38807286:
			return 1755925661;
	}
	return 0;
}

int func_1714(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(uParam0->f_2031.f_58, 2073652352);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, func_649(), 2073652352);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam1, func_1243(), -1095179319);
	iVar0 = 1;
	if (uParam0->f_2031.f_118)
	{
		Stack.Push(uParam0);
		Stack.Push(func_261(uParam0));
		Stack.Push(-1);
		Stack.Push(2073652352);
		Call_Loc(uParam0->f_2031.f_119);
		if (!StackVal)
		{
			iVar0 = 0;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, func_1164(), iVar0);
	return 1;
}

int func_1715(bool bParam0)
{
	struct<14> Var0;
	var uVar14;
	
	Var0 = { func_979(0, 2123222014, -1591664384, -1591664384, 0, 0) };
	uVar14 = func_2071(&Var0, bParam0) + 1;
	return uVar14;
}

int func_1716(var uParam0)
{
	struct<10> Var0;
	int iVar14;
	struct<4> Var15;
	
	Var0.f_9 = -1591664384;
	iVar14 = func_1208(1);
	Var15 = { func_1182(1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var15))
	{
		if (INVENTORY::_0x033EE4B89F3AC545(iVar14, &Var15, 1782082944) > 0)
		{
			if (INVENTORY::_0xBE012571B25F5ACA(iVar14, &Var15, 1782082944, 0, &Var0))
			{
				return func_2072(&Var0, uParam0, 0);
			}
		}
	}
	return 0;
}

int func_1717(int iParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	struct<4> Var15;
	struct<4> Var19;
	
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	iVar14 = func_1208(1);
	Var15 = { func_669(389943619, func_1182(1), 1591329969, 1) };
	Var19 = { func_669(iParam0, Var15, 2123222014, 1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		if (INVENTORY::_0x033EE4B89F3AC545(iVar14, &Var19, -1824203570) > 0)
		{
			if (INVENTORY::_0xBE012571B25F5ACA(iVar14, &Var19, -1824203570, 0, &Var0))
			{
				if (func_2072(&Var0, uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

struct<4> func_1718(bool bParam0)
{
	return func_669(318222581, func_1182(bParam0), 1591329969, bParam0);
}

int func_1719(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	iVar0 = func_1208(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

void func_1720()
{
	int iVar0;
	int iVar1;
	
	Global_1946804->f_1329 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(Global_1946804->f_1329.f_1[iVar0 /*9*/])->f_8 = -1;
		iVar1 = 0;
		while (iVar1 < (Global_1946804->f_1329.f_1[iVar0 /*9*/])->f_7)
		{
			(*Global_1946804->f_1329.f_1[iVar0 /*9*/])[iVar1] = 0;
			iVar1++;
		}
		(Global_1946804->f_1329.f_1[iVar0 /*9*/])->f_7 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_1329.f_48)
	{
		Global_1946804->f_1329.f_29[iVar0 /*6*/] = -358215195;
		iVar1 = 0;
		while (iVar1 < (Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_5)
		{
			(Global_1946804->f_1329.f_29[iVar0 /*6*/])->f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1946804->f_1329.f_48 = 0;
}

int func_1721(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	struct<5> Var4;
	
	uVar3 = iParam0;
	Var4 = uParam1;
	Var4.f_1 = -367421157;
	Var4.f_2 = 1409451727;
	Var4.f_4 = iParam0;
	Var4.f_3 = 1;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var4, -1093723189))
	{
		return -1;
	}
	Var4.f_1 = uVar0;
	Var4.f_2 = 0;
	Var4.f_4 = 0;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var4, -1863756360))
		{
		}
		else
		{
			bVar2 = true;
			(Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48 /*6*/])->f_1[iVar1] = uVar0;
			iVar1++;
		}
	}
	if (!bVar2)
	{
		return -1;
	}
	Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48 /*6*/] = uVar3;
	(Global_1946804->f_1329.f_29[Global_1946804->f_1329.f_48 /*6*/])->f_5 = iVar1;
	Global_1946804->f_1329.f_48++;
	return (Global_1946804->f_1329.f_48 - 1);
}

void func_1722(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<5> Var8;
	bool bVar15;
	int iVar16;
	
	bVar15 = func_125() != -1;
	iVar16 = func_1754(0);
	Var8 = uParam3;
	Var8.f_1 = &Global_1946804->f_1329.f_29[iParam2 /*6*/];
	Var8.f_2 = -763890493;
	Var8.f_3 = 1;
	iVar6 = PED::_0xFFCC2DB2D9953401(uParam0, iVar16, bVar15);
	iVar2 = iVar6 + 1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar0 != iVar6)
		{
			iVar1 = PED::_0x6243635AF2F1B826(uParam0, iVar0, iVar16, bVar15);
			Var8.f_4 = iVar1;
		}
		else
		{
			Var8.f_4 = 1155669136;
			iVar1 = 1155669136;
		}
		DATAFILE::_0x91DED5DD64BB2691(&Var8);
		iVar4 = 0;
		while (iVar4 < (Global_1946804->f_1329.f_29[iParam2 /*6*/])->f_5)
		{
			if (!DATAFILE::_0x44B3A36933AC009C(&iVar3, &Var8, &((Global_1946804->f_1329.f_29[iParam2 /*6*/])->f_1[iVar4])))
			{
			}
			else
			{
				iVar7 = func_1194(&((Global_1946804->f_1329.f_29[iParam2 /*6*/])->f_1[iVar4]));
				if (func_2073(iVar7, iVar3, &uVar5))
				{
					if (iParam1 == iVar1)
					{
						(Global_1946804->f_1329.f_1[iVar7 /*9*/])->f_8 = uVar5;
					}
				}
				else
				{
					(*Global_1946804->f_1329.f_1[iVar7 /*9*/])[(Global_1946804->f_1329.f_1[iVar7 /*9*/])->f_7] = iVar3;
					if (iParam1 == iVar1)
					{
						(Global_1946804->f_1329.f_1[iVar7 /*9*/])->f_8 = (Global_1946804->f_1329.f_1[iVar7 /*9*/])->f_7;
					}
					(Global_1946804->f_1329.f_1[iVar7 /*9*/])->f_7++;
				}
			}
			iVar4++;
		}
		iVar0++;
	}
}

int func_1723(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	*uParam2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, func_2074(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, func_649(), 420195545);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, func_717(), iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam2, func_1243(), func_809(iParam1));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "showQuantity", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "forSale", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "owned", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "locked", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "soldOut", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, "useGoldPrice", 0);
	iVar1 = func_924(uParam0->f_18, iParam1, &uVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam2, func_1164(), iVar1);
	iVar2 = func_1472(uParam0->f_18, iParam1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam2, "price", iVar2);
	return 1;
}

int func_1724(var uParam0, struct<5> Param1, var uParam6, int iParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<26> Var4;
	vector3 vVar48;
	var uVar51;
	var uVar55;
	var uVar56;
	var uVar57;
	int iVar58;
	var uVar59;
	var uVar60;
	
	if (!func_1069(Param1))
	{
		return 0;
	}
	iVar0 = func_1657(Param1, Global_1901433->f_4504);
	Var4 = 1;
	Var4.f_1 = 1;
	Var4.f_2 = 1105014447;
	Var4.f_4 = -1;
	Var4.f_5 = -1134602452;
	Var4.f_6 = 1276832712;
	Var4.f_12 = 1105014447;
	Var4.f_13 = 1105014447;
	Var4.f_16 = 300;
	Var4.f_21 = 1;
	Var4.f_25.f_1 = 1;
	Var4.f_25.f_9 = 1105014447;
	Var4.f_25.f_10 = 8000;
	Var4.f_25.f_11 = 1511356879;
	Var4.f_25.f_18 = 1;
	if (iVar0 > 0)
	{
		func_1658(Param1, 0, Global_1901433->f_4504, &iVar1, &iVar2);
		iVar3 = iVar1;
		vVar48 = { func_2075(Param1) };
		Var4.f_10 = func_1159(iVar3);
		Var4.f_15 = vVar48.x;
		Var4.f_14 = vVar48.y;
	}
	MISC::_INT_TO_STRING(iParam7, "%i", &uVar51);
	*uParam8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2031.f_58, &uVar51);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, func_597(), iVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, func_649(), -627085098);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, func_717(), Param1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, func_1164(), 1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam8, func_1252(), Var4.f_10);
	func_2076(Param1.f_4, &uVar55, &uVar56, &uVar57, &iVar58, &uVar59, &uVar60);
	if (iVar58 <= 1)
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_TODAY");
	}
	else if (iVar58 <= 2)
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_MAIL_YESTERDAY");
	}
	else
	{
		Var4.f_11 = MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_DELIVERY_MAIL_DAY", iVar58);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam8, "itemDescriptionRaw", Var4.f_11);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "textureDictionary", Var4.f_14);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "texture", Var4.f_15);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, func_1115(), 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam8, "tickVisible", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam8, "not_script_data_int_3", 1);
	return 1;
}

char* func_1725(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		
		case -540812301:
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		
		case -1506685618:
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		
		case -2105447887:
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
		
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		
		case 1427053849:
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
		
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		
		case 1235275977:
			return "BREED_MORGAN_BAY";
		
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		
		case 955937750:
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
		
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		
		case 2059232991:
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
		
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		
		case -1331210307:
			return "BREED_DONKEY";
		
		case 122449722:
			return "BREED_MULE";
		
		case -1784502482:
			return "BREED_MULE_PAINTED";
		
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		
		case 294243421:
			return "BREED_BUELL_WARVETS";
		
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		
		case 1589164943:
			return "BREED_WINTER02_01";
		
		case -1087523615:
			return "BREED_EAGLEFLIES";
		
		case -496814209:
			return "BREED_GANG_BILL";
		
		case 2109055751:
			return "BREED_GANG_CHARLES";
		
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		
		case 1764402253:
			return "BREED_GANG_DUTCH";
		
		case -1417310078:
			return "BREED_GANG_HOSEA";
		
		case 1096273915:
			return "BREED_GANG_JAVIER";
		
		case 772751081:
			return "BREED_GANG_JOHN";
		
		case -1140435723:
			return "BREED_GANG_KAREN";
		
		case 2002524329:
			return "BREED_GANG_KIERAN";
		
		case 1151530184:
			return "BREED_GANG_LENNY";
		
		case -1266525037:
			return "BREED_GANG_MICAH";
		
		case -2018137175:
			return "BREED_GANG_SADIE";
		
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		
		case 649786380:
			return "BREED_GANG_SEAN";
		
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		
		case -837607790:
			return "BREED_GANG_UNCLE";
		
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		
		case -364764277:
			return "BREED_MANGY_BACKUP";
		
		default:
			break;
	}
	return "";
}

var func_1726(char[4] cParam0)
{
	return cParam0;
}

void func_1727(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_2077(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_656(func_957(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_2078(uParam0);
	}
}

int func_1728(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<4> Var4;
	
	*uParam3 = 0;
	if (!func_533(iParam1))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(iParam1, iParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(iParam1, Var4, iVar0, &iVar3, &uVar1, &uVar2))
			{
				if (func_278(iVar3, 0))
				{
					if (func_1426(iVar3) && func_822(iVar3))
					{
						*uParam3 = iVar3;
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1729(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;
	
	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_278(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

bool func_1730(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_1731(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_2079(iParam1, &iVar0))
	{
		if (ATTRIBUTE::_0x200373A8DF081F22(iParam0, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1732(var uParam0)
{
	int iVar0;
	
	Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/] = uParam0;
	iVar0 = Global_1946804->f_2535.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1946804->f_2535.f_2 = (Global_1946804->f_2535.f_2 || iVar0);
	(Global_1946804->f_2535.f_43[Global_1946804->f_2535.f_1 /*2*/])->f_1 = iVar0;
	Global_1946804->f_2535.f_1++;
	return iVar0;
}

int func_1733(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_339(func_1178(iVar0)) != 81053684)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_656(iVar0, 1);
	return 1;
}

void func_1734(int iParam0, var uParam1)
{
	Global_1946804->f_2535.f_3[iParam0] = (Global_1946804->f_2535.f_3[iParam0] || uParam1);
}

int func_1735(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1946804->f_2535.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1080(iVar0, 1);
		if (func_1081(iVar2, 2))
		{
		}
		else if (&Global_1946804->f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (iParam0 && func_660(iVar0) == -1)
			{
				func_661(iVar0, 0);
				func_1082(Global_1946804->f_2589.f_2[(Global_1946804->f_2589 - 1) /*2*/], 2, 6);
			}
			func_1084(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_1736(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_1080(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_2080(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

void func_1737(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 10;
	if (func_1081(1108822547, 6))
	{
		if (bParam2)
		{
			func_1736(iParam0, iVar0, func_125() != -1, 0, 0);
			func_1084(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1083(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_1738()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1739()
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_2081(13);
	iVar1 = func_2082(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1740()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1741()
{
	if (func_1798())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1742()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1743()
{
	return Global_1955565->f_3;
}

void func_1744(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_1749(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1745(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_1749(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_1746(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1747()
{
	return func_2081(12) <= -99f;
}

bool func_1748()
{
	return func_2081(12) >= 99f;
}

char* func_1749(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}