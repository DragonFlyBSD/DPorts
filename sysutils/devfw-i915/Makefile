
PORTNAME=	devfw-i915
PORTVERSION=	${FWVERSION}
CATEGORIES=	sysutils graphics
MASTER_SITES=	https://leaf.dragonflybsd.org/~zrj/dports/fw/

DISTFILES=	${FWFILE}
EXTRACT_ONLY=

MAINTAINER=	zrj@ef.irc
COMMENT=	Intel i915 GPU firmware

FIRMWARES_i915= \
	bxt_dmc_ver1 \
	kbl_dmc_ver1 \
	skl_dmc_ver1 skl_guc_ver1 skl_guc_ver4 skl_guc_ver6

WRKSRC=		${WRKDIR}
FWNAME=		i915fw
FWFILE=		i915-firmware-${FWVERSION}.tar.gz
FWVERSION=	20180102

NO_ARCH=	yes
DATADIR=	${PREFIX}/share/fw-i915

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
			 -e "s@FIRMS@${FWNAME}_@g"			\
			 -e "s@ #FIRMW@\"${FIRMWARES_i915}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh
	cd ${WRKSRC} && \
	tar xf ${DISTDIR}/${FWFILE}

# update kbl-dmc firmware to 04
pre-install:
	cd ${WRKSRC}/i915 && ${RM} kbl_dmc_ver1.bin && \
	${LN} -sv kbl_dmc_ver1_04.bin kbl_dmc_ver1.bin

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/LICENSE.i915 ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}
	${CP} -r ${WRKSRC}/i915 ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
