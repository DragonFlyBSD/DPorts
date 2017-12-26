This allows to have dmidecode -t 17 working on non-uefi boots to fetch info
about RAM modules and other bits.
For it to work on uefi boots, something like this FreeBSD r307326 or
86804dadc870572c2149fec3ca1d6561a762ffc5 would be needed in loader.efi

--- dmidecode.c.intermediate	2017-12-05 11:44:42.000000000 +0200
+++ dmidecode.c
@@ -4982,6 +4982,8 @@ static int address_from_efi(off_t *addre
 	if (ret == EFI_NO_SMBIOS)
 		fprintf(stderr, "%s: SMBIOS entry point missing\n", filename);
 	return ret;
+#elif defined(__DragonFly__)
+	return EFI_NOT_FOUND; /* XXX */
 #elif defined(__FreeBSD__)
 	/*
 	 * On FreeBSD, SMBIOS anchor base address in UEFI mode is exposed
