
PORTNAME=	devfw-radeon
PORTVERSION=	${FWVERSION}
PORTREVISION=	1
CATEGORIES=	sysutils graphics
MASTER_SITES=	https://leaf.dragonflybsd.org/~zrj/dports/fw/

DISTFILES=	${FWFILE}
EXTRACT_ONLY=

MAINTAINER=	zrj@ef.irc
COMMENT=	ATI/AMD Radeon GPU firmware

FIRMWARES_OLD=									\
	HAINAN_pfp HAINAN_me HAINAN_ce HAINAN_mc				\
	HAINAN_mc2 HAINAN_rlc HAINAN_smc					\
	OLAND_pfp OLAND_me OLAND_ce OLAND_mc					\
	OLAND_mc2 OLAND_rlc OLAND_smc						\
	PITCAIRN_pfp PITCAIRN_me PITCAIRN_ce PITCAIRN_mc			\
	PITCAIRN_mc2 PITCAIRN_rlc PITCAIRN_smc					\
	TAHITI_pfp TAHITI_me TAHITI_ce TAHITI_mc				\
	TAHITI_mc2 TAHITI_rlc TAHITI_smc					\
	VERDE_pfp VERDE_me VERDE_ce VERDE_mc VERDE_mc2 VERDE_rlc VERDE_smc	\
	BONAIRE_pfp BONAIRE_me BONAIRE_ce BONAIRE_mec BONAIRE_mc		\
	BONAIRE_mc2 BONAIRE_rlc BONAIRE_sdma BONAIRE_smc			\
	HAWAII_pfp HAWAII_me HAWAII_ce HAWAII_mec HAWAII_mc			\
	HAWAII_mc2 HAWAII_rlc HAWAII_sdma HAWAII_smc				\
	KAVERI_pfp KAVERI_me KAVERI_ce KAVERI_mec KAVERI_rlc KAVERI_sdma	\
	KABINI_pfp KABINI_me KABINI_ce KABINI_mec KABINI_rlc KABINI_sdma	\
	MULLINS_pfp MULLINS_me MULLINS_ce MULLINS_mec MULLINS_rlc MULLINS_sdma

FIRMWARES_R100=									\
	R100_cp R200_cp R300_cp R420_cp RS690_cp RS600_cp R520_cp

FIRMWARES_R600=									\
	R600_pfp R600_me R600_rlc R700_rlc RS780_pfp RS780_me			\
	RV610_pfp RV610_me RV620_pfp RV620_me RV630_pfp RV630_me		\
	RV635_pfp RV635_me RV670_pfp RV670_me					\
	RV710_pfp RV710_me RV710_smc						\
	RV730_pfp RV730_me RV730_smc RV740_smc					\
	RV770_pfp RV770_me RV770_smc						\
	SUMO_pfp SUMO_me SUMO_rlc SUMO2_pfp SUMO2_me PALM_pfp PALM_me		\
	CEDAR_pfp CEDAR_me CEDAR_rlc CEDAR_smc					\
	CYPRESS_pfp CYPRESS_me CYPRESS_rlc CYPRESS_smc				\
	JUNIPER_pfp JUNIPER_me JUNIPER_rlc JUNIPER_smc				\
	REDWOOD_pfp REDWOOD_me REDWOOD_rlc REDWOOD_smc

FIRMWARES_RNI=									\
	ARUBA_pfp ARUBA_me ARUBA_rlc						\
	BARTS_pfp BARTS_me BARTS_mc BARTS_smc BTC_rlc				\
	CAICOS_pfp CAICOS_me CAICOS_mc CAICOS_smc				\
	CAYMAN_pfp CAYMAN_me CAYMAN_mc CAYMAN_rlc CAYMAN_smc			\
	TURKS_pfp TURKS_me TURKS_mc TURKS_smc

FIRMWARES_RSI=									\
	hainan_pfp hainan_me hainan_ce hainan_mc hainan_rlc hainan_smc		\
	oland_pfp oland_me oland_ce oland_mc oland_rlc oland_smc		\
	pitcairn_pfp pitcairn_me pitcairn_ce pitcairn_mc			\
	pitcairn_rlc pitcairn_smc						\
	tahiti_pfp tahiti_me tahiti_ce tahiti_mc tahiti_rlc tahiti_smc		\
	verde_pfp verde_me verde_ce verde_mc verde_rlc verde_smc

FIRMWARES_RCIK=									\
	bonaire_pfp bonaire_me bonaire_ce bonaire_mec bonaire_mc		\
	bonaire_rlc bonaire_sdma bonaire_smc					\
	hawaii_pfp hawaii_me hawaii_ce hawaii_mec hawaii_mc			\
	hawaii_rlc hawaii_sdma hawaii_smc					\
	kaveri_pfp kaveri_me kaveri_ce kaveri_mec kaveri_mec2 			\
	kaveri_rlc kaveri_sdma							\
	kabini_pfp kabini_me kabini_ce kabini_mec kabini_rlc kabini_sdma	\
	mullins_pfp mullins_me mullins_ce mullins_mec mullins_rlc mullins_sdma

FIRMWARES_UV=								\
	R600_uvd RS780_uvd RV770_uvd RV710_uvd CYPRESS_uvd SUMO_uvd		\
	TAHITI_uvd BONAIRE_uvd TAHITI_vce BONAIRE_vce

WRKSRC=		${WRKDIR}

# afterthought: to preserve compatibility, case-insensitivity FS(like fat)
# use "kmsfw" for all uppercase firmware like TAHITI
# and "fw" for all lowercase firmware like hawaii
FWNAME_OLD=		radeonkmsfw	# deprecated old format firmware(si,cik)
FWNAME_KMS=		radeonkmsfw	# pre radeonsi asic firmware
FWNAME_NEW=		radeonfw	# new format firmware (si,cik)
FWFILE=		radeon-firmware-${FWVERSION}.tar.gz
FWVERSION=	20160328

NO_ARCH=	yes
DATADIR=	${PREFIX}/share/fw-radeon

USES=		uidfix

OPTIONS_DEFINE=	OLD R100 R600 RCIK RNI RSI UVDVCE
OPTIONS_DEFAULT=	R100 R600 RCIK RNI RSI UVDVCE
OPTIONS_SUB=	yes

OLD_DESC=	Old format firmware (deprecated, for testing only)
R100_DESC=	R100 family (R100-R520, pre HD-series)
R600_DESC=	R600 Evergreen (R600-R770 CEDAR JUNIPER CYPRESS PALM SUMO)
RCIK_DESC=	Sea Islands (BONAIRE KABINI MULLINS KAVERI HAWAII) [AMDGPU]
RNI_DESC=	Northen Islands (ARUBA BARTS CAICOS CAYMAN TURKS)
RSI_DESC=	Southern Islands (HAINAN OLAND PITCAIRN TAHITI VERDE)
UVDVCE_DESC=	Include UVD/VCE firmware (video decode/encode)

.if exists(/usr/share/examples/kld/firmware/wrap-fw_module.sh)
PKGINSTALL=	pkg-install.fw
PKGDEINSTALL=	pkg-deinstall.fw
.else
DPMSG=		${WRKDIR}/dports-message
PKGMESSAGE=	${DPMSG}
pre-patch:
	@${ECHO} "#########################################################" >> ${DPMSG}
	@${ECHO} "# Run ${DATADIR}/regen-firmware.sh to create modules #" >> ${DPMSG}
	@${ECHO} "#########################################################" >> ${DPMSG}
.endif

do-build:
	${CP} ${FILESDIR}/regen-firmware.sh ${WRKSRC}/
	${CP} ${FILESDIR}/remove-firmware.sh ${WRKSRC}/
	${REINPLACE_CMD} -e "s@FIRMDIR@${DATADIR}@g"			\
			 -e "s@FIRMS_OLD@${FWNAME_OLD}_@g"		\
			 -e "s@FIRMS_R100@${FWNAME_KMS}_@g"		\
			 -e "s@FIRMS_R600@${FWNAME_KMS}_@g"		\
			 -e "s@FIRMS_RCIK@${FWNAME_NEW}_@g"		\
			 -e "s@FIRMS_RNI@${FWNAME_KMS}_@g"		\
			 -e "s@FIRMS_RSI@${FWNAME_NEW}_@g"		\
			 -e "s@FIRMS_UV@${FWNAME_KMS}_@g"		\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh
	cd ${WRKSRC} && \
	tar xf ${DISTDIR}/${FWFILE}
	${MKDIR} ${WRKSRC}/old
. for fwo in ${FIRMWARES_OLD}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/old
. endfor
	${MKDIR} ${WRKSRC}/r100
. for fwo in ${FIRMWARES_R100}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/r100
. endfor
	${MKDIR} ${WRKSRC}/r600
. for fwo in ${FIRMWARES_R600}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/r600
. endfor
	${MKDIR} ${WRKSRC}/rcik
. for fwo in ${FIRMWARES_RCIK}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/rcik
. endfor
	${MKDIR} ${WRKSRC}/rni
. for fwo in ${FIRMWARES_RNI}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/rni
. endfor
	${MKDIR} ${WRKSRC}/rsi
. for fwo in ${FIRMWARES_RSI}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/rsi
. endfor
	${MKDIR} ${WRKSRC}/uvdvce
. for fwo in ${FIRMWARES_UV}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/uvdvce
. endfor
	${LS} -l ${WRKSRC}/radeon	#to check what amdgpu ones are left

post-build-OLD-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_OLD@\"${FIRMWARES_OLD}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-R100-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_R100@\"${FIRMWARES_R100}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-R600-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_R600@\"${FIRMWARES_R600}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-RCIK-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_RCIK@\"${FIRMWARES_RCIK}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-RNI-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_RNI@\"${FIRMWARES_RNI}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-RSI-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_RSI@\"${FIRMWARES_RSI}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

post-build-UVDVCE-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_UV@\"${FIRMWARES_UV}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/LICENSE.radeon ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}

do-install-OLD-on:
	${CP} -r ${WRKSRC}/old ${STAGEDIR}${DATADIR}

do-install-R100-on:
	${CP} -r ${WRKSRC}/r100 ${STAGEDIR}${DATADIR}

do-install-R600-on:
	${CP} -r ${WRKSRC}/r600 ${STAGEDIR}${DATADIR}

do-install-RCIK-on:
	${CP} -r ${WRKSRC}/rcik ${STAGEDIR}${DATADIR}

do-install-RNI-on:
	${CP} -r ${WRKSRC}/rni ${STAGEDIR}${DATADIR}

do-install-RSI-on:
	${CP} -r ${WRKSRC}/rsi ${STAGEDIR}${DATADIR}

do-install-UVDVCE-on:
	${CP} -r ${WRKSRC}/uvdvce ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
