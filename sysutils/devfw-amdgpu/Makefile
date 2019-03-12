
PORTNAME=	devfw-amdgpu
PORTVERSION=	${FWVERSION}
CATEGORIES=	sysutils graphics
MASTER_SITES=	https://leaf.dragonflybsd.org/~zrj/dports/fw/

DISTFILES=	${FWFILE}
EXTRACT_ONLY=

MAINTAINER=	zrj@ef.irc
COMMENT=	AMD Radeon Volcanic Islands GPU firmware

FIRMWARES_RAMD=									\
	banks_k_2_smc								\
	bonaire_ce bonaire_k_smc bonaire_mc bonaire_me bonaire_mec bonaire_pfp	\
	bonaire_rlc bonaire_sdma bonaire_sdma1 bonaire_smc bonaire_uvd		\
	bonaire_vce								\
	carrizo_ce carrizo_me carrizo_mec carrizo_mec2 carrizo_pfp		\
	carrizo_rlc carrizo_sdma carrizo_sdma1 carrizo_uvd carrizo_vce		\
	fiji_ce fiji_mc fiji_me fiji_mec fiji_mec2 fiji_pfp fiji_rlc		\
	fiji_sdma fiji_sdma1 fiji_smc fiji_uvd fiji_vce				\
	hainan_ce hainan_k_smc hainan_mc hainan_me hainan_pfp hainan_rlc	\
	hainan_smc								\
	hawaii_ce hawaii_k_smc hawaii_mc hawaii_me hawaii_mec hawaii_pfp	\
	hawaii_rlc hawaii_sdma hawaii_sdma1 hawaii_smc hawaii_uvd hawaii_vce	\
	kabini_ce kabini_me kabini_mec kabini_pfp kabini_rlc kabini_sdma	\
	kabini_sdma1 kabini_uvd kabini_vce					\
	kaveri_ce kaveri_me kaveri_mec kaveri_mec2 kaveri_pfp kaveri_rlc	\
	kaveri_sdma kaveri_sdma1 kaveri_uvd kaveri_vce				\
	mullins_ce mullins_me mullins_mec mullins_pfp mullins_rlc mullins_sdma	\
	mullins_sdma1 mullins_uvd mullins_vce					\
	oland_ce oland_k_smc oland_mc oland_me oland_pfp oland_rlc oland_smc	\
	picasso_asd picasso_ce picasso_gpu_info picasso_me picasso_mec		\
	picasso_mec2 picasso_pfp picasso_rlc picasso_rlc_am4 picasso_sdma	\
	picasso_vcn								\
	pitcairn_ce pitcairn_k_smc pitcairn_mc pitcairn_me pitcairn_pfp		\
	pitcairn_rlc pitcairn_smc						\
	polaris10_ce polaris10_ce_2 polaris10_k2_smc polaris10_k_mc		\
	polaris10_k_smc polaris10_mc polaris10_me polaris10_me_2 polaris10_mec	\
	polaris10_mec2 polaris10_mec2_2 polaris10_mec_2 polaris10_pfp		\
	polaris10_pfp_2 polaris10_rlc polaris10_sdma polaris10_sdma1		\
	polaris10_smc polaris10_smc_sk polaris10_uvd polaris10_vce		\
	polaris11_ce polaris11_ce_2 polaris11_k2_smc polaris11_k_mc		\
	polaris11_k_smc polaris11_mc polaris11_me polaris11_me_2 polaris11_mec	\
	polaris11_mec2 polaris11_mec2_2 polaris11_mec_2 polaris11_pfp		\
	polaris11_pfp_2 polaris11_rlc						\
	polaris11_sdma polaris11_sdma1 polaris11_smc polaris11_smc_sk		\
	polaris11_uvd polaris11_vce						\
	polaris12_ce polaris12_ce_2 polaris12_k_mc polaris12_k_smc polaris12_mc	\
	polaris12_me polaris12_me_2 polaris12_mec polaris12_mec2		\
	polaris12_mec2_2 polaris12_mec_2 polaris12_pfp polaris12_pfp_2		\
	polaris12_rlc polaris12_sdma polaris12_sdma1 polaris12_smc		\
	polaris12_uvd polaris12_vce						\
	raven2_asd raven2_ce raven2_gpu_info raven2_me raven2_mec raven2_mec2	\
	raven2_pfp raven2_rlc raven2_sdma raven2_vcn				\
	raven_asd raven_ce raven_dmcu raven_gpu_info raven_me raven_mec		\
	raven_mec2 raven_pfp raven_rlc raven_sdma raven_vcn			\
	si58_mc									\
	stoney_ce stoney_me stoney_mec stoney_pfp stoney_rlc stoney_sdma	\
	stoney_uvd stoney_vce							\
	tahiti_ce tahiti_k_smc tahiti_mc tahiti_me tahiti_pfp tahiti_rlc	\
	tahiti_smc								\
	tonga_ce tonga_k_smc tonga_mc tonga_me tonga_mec tonga_mec2 tonga_pfp	\
	tonga_rlc tonga_sdma tonga_sdma1 tonga_smc tonga_uvd tonga_vce		\
	topaz_ce topaz_k_smc topaz_mc topaz_me topaz_mec topaz_mec2 topaz_pfp	\
	topaz_rlc topaz_sdma topaz_sdma1 topaz_smc				\
	vega10_acg_smc vega10_asd vega10_ce vega10_gpu_info vega10_me		\
	vega10_mec vega10_mec2 vega10_pfp vega10_rlc vega10_sdma vega10_sdma1	\
	vega10_smc vega10_sos vega10_uvd vega10_vce vega12_asd vega12_ce	\
	vega12_gpu_info vega12_me vega12_mec vega12_mec2 vega12_pfp vega12_rlc	\
	vega12_sdma vega12_sdma1 vega12_smc vega12_sos vega12_uvd vega12_vce	\
	vega20_asd vega20_ce vega20_me vega20_mec vega20_mec2 vega20_pfp	\
	vega20_rlc vega20_sdma vega20_sdma1 vega20_smc vega20_sos vega20_uvd	\
	vega20_vce								\
	vegam_ce vegam_me vegam_mec vegam_mec2 vegam_pfp vegam_rlc vegam_sdma	\
	vegam_sdma1 vegam_smc vegam_uvd vegam_vce				\
	verde_ce verde_k_smc verde_mc verde_me verde_pfp verde_rlc verde_smc

WRKSRC=		${WRKDIR}
FWNAME=		amdgpufw
FWFILE=		amdgpu-firmware-${FWVERSION}.tar.gz
FWVERSION=	20190220

NO_ARCH=	yes
DATADIR=	${PREFIX}/share/fw-amdgpu

USES=		uidfix

OPTIONS_SUB=	yes

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
			 -e "s@ #FIRMW_RAMD@\"${FIRMWARES_RAMD}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh
	cd ${WRKSRC} && \
	tar xf ${DISTDIR}/${FWFILE}

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/LICENSE.amdgpu ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}
	${CP} -r ${WRKSRC}/amdgpu ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
