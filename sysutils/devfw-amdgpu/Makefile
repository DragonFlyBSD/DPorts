
PORTNAME=	devfw-amdgpu
PORTVERSION=	${FWVERSION}
CATEGORIES=	sysutils graphics
MASTER_SITES=	https://leaf.dragonflybsd.org/~zrj/dports/fw/

DISTFILES=	${FWFILE}
EXTRACT_ONLY=

MAINTAINER=	zrj@ef.irc
COMMENT=	AMD Radeon Volcanic Islands GPU firmware

FIRMWARES_RAMD=									\
	carrizo_ce carrizo_pfp carrizo_me carrizo_mec carrizo_mec2		\
	carrizo_rlc carrizo_sdma carrizo_sdma1					\
	fiji_ce fiji_pfp fiji_me fiji_mec fiji_mec2				\
	fiji_rlc fiji_smc fiji_sdma fiji_sdma1					\
	polaris10_ce polaris10_mc polaris10_me polaris10_mec polaris10_mec2	\
	polaris10_pfp polaris10_rlc  polaris10_sdma polaris10_sdma1		\
	polaris10_smc polaris10_smc_sk						\
	polaris11_ce polaris11_mc polaris11_me polaris11_mec polaris11_mec2	\
	polaris11_pfp polaris11_rlc polaris11_sdma polaris11_sdma1		\
	polaris11_smc polaris11_smc_sk						\
	stoney_ce stoney_pfp stoney_me stoney_mec stoney_rlc stoney_sdma	\
	tonga_ce tonga_pfp tonga_me tonga_mec tonga_mec2 tonga_mc		\
	tonga_rlc tonga_sdma tonga_sdma1 tonga_smc				\
	topaz_ce topaz_pfp topaz_me topaz_mec topaz_mc				\
	topaz_rlc topaz_sdma topaz_sdma1 topaz_smc				\
	carrizo_uvd fiji_uvd stoney_uvd tonga_uvd polaris10_uvd polaris11_uvd	\
	carrizo_vce fiji_vce stoney_vce tonga_vce polaris10_vce polaris11_vce

FIRMWARES_RCIK=									\
	bonaire_uvd hawaii_uvd kabini_uvd kaveri_uvd mullins_uvd		\
	bonaire_vce hawaii_vce kabini_vce kaveri_vce mullins_vce		\
	bonaire_sdma1 hawaii_sdma1 kaveri_sdma1 kabini_sdma1 mullins_sdma1

WRKSRC=		${WRKDIR}
FWNAME=		amdgpufw
FWFILE=		amdgpu-firmware-${FWVERSION}.tar.gz
FWVERSION=	20160413

NO_ARCH=
DATADIR=	${PREFIX}/share/fw-amdgpu

USES=		uidfix

OPTIONS_DEFINE=	RCIK
OPTIONS_DEFAULT=	RCIK
OPTIONS_SUB=	yes

RCIK_DESC=	Sea Islands [AMDGPU] experimental support

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
			 -e "s@FIRMS_RAMD@${FWNAME}_@g"			\
			 -e "s@FIRMS_RCIK@${FWNAME}_@g"			\
			 -e "s@ #FIRMW_RAMD@\"${FIRMWARES_RAMD}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh
	cd ${WRKSRC} && \
	tar xf ${DISTDIR}/${FWFILE}
	${MKDIR} ${WRKSRC}/rcik
. for fwo in ${FIRMWARES_RCIK}
	${MV} ${WRKSRC}/radeon/${fwo}.bin ${WRKSRC}/rcik
. endfor
	${LS} -l ${WRKSRC}/radeon	#to check what amdgpu ones are left

post-build-RCIK-on:
	${REINPLACE_CMD} -e "s@ #FIRMW_RCIK@\"${FIRMWARES_RCIK}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/LICENSE.amdgpu ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}
	${CP} -r ${WRKSRC}/amdgpu ${STAGEDIR}${DATADIR}

do-install-RCIK-on:
	${CP} -r ${WRKSRC}/rcik ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
