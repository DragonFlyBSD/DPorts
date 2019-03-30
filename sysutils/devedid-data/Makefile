
PORTNAME=	devedid-data
PORTVERSION=	3
#PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://www.kernel.org/doc/Documentation/
DISTFILES=	EDID/1024x768.S EDID/1280x1024.S EDID/1600x1200.S	\
		EDID/1680x1050.S EDID/1920x1080.S EDID/800x600.S 	\
		EDID/HOWTO.txt EDID/edid.S

MAINTAINER=	zrj@ef.irc
COMMENT=	Simple generic monitor EDID firmwares

LICENSE=	GPLv2

NO_WRKSUBDIR=	yes
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/edid

FIRMWARES_EDID=	1024x768 1280x1024 1600x1200 1680x1050 1920x1080 800x600
FWNAME=		edidfw

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

post-extract:
	${CP} -p ${FILESDIR}/Makefile ${WRKSRC}
	${CP} ${FILESDIR}/regen-firmware.sh ${WRKSRC}/
	${CP} ${FILESDIR}/remove-firmware.sh ${WRKSRC}/
	${REINPLACE_CMD} -e "s@FIRMDIR@${DATADIR}@g"			\
			 -e "s@FIRMS_EDID@${FWNAME}_@g"			\
			 -e "s@ #FIRMW_EDID@\"${FIRMWARES_EDID}\"@g"	\
		${WRKSRC}/regen-firmware.sh				\
		${WRKSRC}/remove-firmware.sh

do-extract:
	@${RM} -rf ${WRKSRC}
	@${MKDIR} ${WRKSRC}
	@for _file in ${DISTFILES}; do \
		${CP} ${DISTDIR}/$${_file} ${WRKSRC}; \
	done

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_SCRIPT} ${FILESDIR}/gen-fw_module.sh ${STAGEDIR}${LOCALBASE}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/regen-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/remove-firmware.sh ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.S ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/*.bin ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/Makefile ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/HOWTO.txt ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
